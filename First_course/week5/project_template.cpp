#include <iostream>
#include <sstream>
#include <exception>
#include <string>
#include <vector>
#include <map>
#include <iomanip>
#include <set>
using namespace std;

// Реализуйте функции и методы классов и при необходимости добавьте свои

struct Date {
private:
  	int day;
  	int month;
  	int year;
public:
  	Date (const int& new_year, const int& new_month, const int& new_day) {
    year  = new_year;
    if (new_month < 1 or new_month > 12) {
      throw out_of_range("Month value is invalid: " + to_string(new_month));
    }
    month  = new_month;
    if (new_day < 1 or new_day > 31) {
      throw out_of_range("Day value is invalid: " + to_string(new_day));
    }
    day = new_day;
  }
  int GetYear() const{
	  return year;
  }
  int GetMonth() const{
	  return month;
  }
  int GetDay() const{
	  return day;
  }

};

bool operator<(const Date& lhs, const Date& rhs){
	if (lhs.GetYear()==rhs.GetYear()){
		if (lhs.GetMonth()==rhs.GetMonth()){
			return lhs.GetDay()<rhs.GetDay();
		}return  lhs.GetMonth()<rhs.GetMonth();
	}return lhs.GetYear()<rhs.GetYear();
}

ostream& operator<<(ostream& os, const Date& date) {
	return os << setw(4) << setfill('0') << date.GetYear() << '-'
		<< setw(2) << setfill('0') << date.GetMonth() << '-'
		<< setw(2) << setfill('0')<<date.GetDay();
}

class Database {
public:
  void AddEvent(const Date& date, const string& event){
	  database[date].insert(event);
  }

  bool DeleteEvent(const Date& date, const string& event){
	  if (database.count(date) > 0){
		  set<string>& events= database.at(date);
		  if (events.count(event)>0){
			  events.erase(event);
			  return true;
		  }
	  }return false;
	return false;
  }

  int  DeleteDate(const Date& date){
	  int to_del=0;
	  if (database.count(date)>0){
		  to_del=database.at(date).size();
		  database.erase(date);
	  }

	  return to_del;
  }

void Find(const Date& date) const{
	if (database.count(date)>0){
		const set<string>& set_to_out= database.at(date);
//		cout<<set_to_out.size();
		for (auto const& m:set_to_out){
			cout<<m<<endl;
		}
	}
//	else{
//		cout<<"Event not found";
//	}

}

  void Print() const{
	  for(auto const& p : database){
		  for (auto const& t: p.second){
			  cout<<p.first<<" "<< t<<endl;
		  }
	  }
  }
private:
  map<Date,set<string>> database;
};



void EnsureDateIsFull(const string& s){
	int numbs=0;
	string input_string;
	istringstream stream(s);
	while(getline(stream,input_string,'-')){
		numbs+=1;
	}
	if (numbs<3){
		throw runtime_error("Wrong date format: "+ s );
	}

}

void EnsureNextSymbolAndSkip(istream& stream,const string& s) {
	if (stream.peek() != '-') {
	throw runtime_error("Wrong date format: "+ s );
	}
	stream.ignore(1);
}



Date ParseDate(const string& s){
	EnsureDateIsFull(s);
	stringstream stream(s);
	int year;
	stream >> year;
	EnsureNextSymbolAndSkip(stream,s);
	int month;
	stream >> month;
	EnsureNextSymbolAndSkip(stream,s);
	int day;
	stream >>day;

    if (!stream.eof()) {
        throw runtime_error("Wrong date format: "+ s );
    }
	return Date(year, month, day);
}


int main() {
	try{
		Database db;
		string full_input_line;
			while (getline(cin, full_input_line)) {


				if (full_input_line.empty()){
							continue;
						}
				istringstream streamer(full_input_line);
				if (streamer.peek()==32){
					continue;
				}
				string command;
				streamer>>command;
				if (command=="Add" ){
					string input_date;
					string input_event;

					streamer>>input_date;
					streamer>>input_event;

						Date date=ParseDate(input_date);
						if (input_event.empty()){
							string string_error;
							string_error =  "Wrong date format: "+ input_date;
							throw runtime_error(string_error);
						}

					db.AddEvent(date,input_event);


				}else if (command=="Del"){
					string delete_date;
					string delete_event;
					streamer>>delete_date;
					streamer>>delete_event;
					if (!delete_event.empty()){
						bool was_ok=db.DeleteEvent(ParseDate(delete_date),delete_event);
						if (was_ok){
							cout<<"Deleted successfully"<<endl;
						}else{
							cout<<"Event not found"<<endl;
						}
					}else{
						int N=db.DeleteDate(ParseDate(delete_date));
							cout<<"Deleted "<<N<<" events"<<endl;
					}

				}else if (command=="Find"){
					string date_to_find;
					streamer>>date_to_find;
					db.Find(ParseDate(date_to_find));

				}else if (command=="Print"){
					db.Print();
				}else{
		//			  cout<<command<<"<-current command";
					string exception_message="Unknown command: "+command;
					throw runtime_error(exception_message);
				}
			}
  }catch (out_of_range& ex){
	  cout << ex.what();
  }catch(runtime_error& ex){
	  cout<<ex.what();
  }
  return 0;
}
