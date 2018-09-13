//#include <iostream>
//#include <vector>
//#include <string>
//#include <map>
//#include <cmath>
//#include <set>
//#include <algorithm>
//using namespace std;
//
//// если имя неизвестно, возвращает пустую строку
//string FindNameByYear(const map<int, string>& names, const int& year) {
//  string name;  // изначально имя неизвестно
//
//  // перебираем всю историю по возрастанию ключа словаря, то есть в хронологическом порядке
//  for (const auto& item : names) {
//    // если очередной год не больше данного, обновляем имя
//    if (item.first <= year) {
//      name = item.second;
//    } else {
//      // иначе пора остановиться, так как эта запись и все последующие относятся к будущему
//      break;
//    }
//  }
//
//  return name;
//}
//
//vector<string> ReturnHistoryNamesUpToYear(const map<int, string>& names, const int& year) {
//	vector<string> history_names;  // изначально имя неизвестно
//  for (const auto& item : names) {
//    if (item.first < year) {
//    	history_names.push_back( item.second);
//    } else {
//      break;
//    }
//  }
//  reverse(begin(history_names),end(history_names));
//  bool name_was_previoused= true;
//  if (history_names.size()!=0){
//	  name_was_previoused=FindNameByYear(names,year)==history_names.at(0);
//	  while (name_was_previoused){
//
//		  history_names.erase(history_names.begin());
//		  		  if (history_names.size()==0){
//		  			  name_was_previoused=false;
//		  			  break;
//		  		  }
//		  name_was_previoused= FindNameByYear(names,year)==history_names.at(0);
//	  }
//  }
//  return history_names;
//}
//
//string FormatHistory(const vector<string>& history_names){
//	if (!history_names.empty()){
//		string history_names_formated = " (";
//		for ( int i=0; i<history_names.size(); i++ ){
//			history_names_formated=history_names_formated+history_names.at(i);
//			if ( i!=history_names.size()-1){
//				history_names_formated=history_names_formated+", ";
//			}
//		}
//		history_names_formated=history_names_formated+")";
//	return history_names_formated;
//	} else{
//		return {}	;
//	}
//}
////vector<string> ProcessHistoryNameUpToYear(vector<string>& history_names, int year){
//
////  return history;
////}
//
//class Person {
//public:
//	Person(const string& bfirst_name,
//			const string& bsecond_name,
//			const int& byear){
//		first_names[byear]=bfirst_name;
//		last_names[byear]=bsecond_name;
//		birth_year=byear;
//		bname=bfirst_name;
//		blname=bsecond_name;
//	};
//  void ChangeFirstName(const int& year, const string& first_name) {
//	  if (!IsLessThanBD(birth_year, year)){
//		    first_names[year] = first_name;
//	  }
//
//  }
//  void ChangeLastName(const int&year, const string& last_name) {
//	  if (!IsLessThanBD(birth_year, year) ){
//		  last_names[year] = last_name;
//	  }
//  }
//  string GetFullName(const int& year) const {
//	  if (IsLessThanBD(birth_year, year) or IsLessThanBD(birth_year, year) ){
//		  return "No person";
//	  }
//    // получаем имя и фамилию по состоянию на год year
//    const string first_name = FindNameByYear(first_names, year);
//    const string last_name = FindNameByYear(last_names, year);
//
//    // если и имя, и фамилия неизвестны
//    if (first_name.empty() && last_name.empty()) {
//      return "Incognito";
//
//    // если неизвестно только имя
//    } else if (first_name.empty()) {
//      return last_name + " with unknown first name";
//
//    // если неизвестна только фамилия
//    } else if (last_name.empty()) {
//      return first_name + " with unknown last name";
//
//    // если известны и имя, и фамилия
//    } else {
//      return first_name + " " + last_name;
//    }
//  }
//
//  string GetFullNameWithHistory(int year) const {
//	  if (IsLessThanBD(birth_year, year) or IsLessThanBD(birth_year, year) ){
//		  return "No person";
//	  }
//      // получаем имя и фамилию по состоянию на год year
////	  cout<<"Here";
//      const string first_name = FindNameByYear(first_names, year);
//      const string last_name = FindNameByYear(last_names, year);
//
//      const vector<string> first_name_history = ReturnHistoryNamesUpToYear(first_names, year);
//      const vector<string> last_name_history = ReturnHistoryNamesUpToYear(last_names, year);
//      string formeted_first_name_history=FormatHistory(first_name_history);
//      string formeted_last_name_history=FormatHistory(last_name_history);
//
//
//
//      // если и имя, и фамилия неизвестны
//      if (first_name.empty() && last_name.empty()) {
//        return "Incognito";
//
//      // если неизвестно только имя
//      } else if (first_name.empty()) {
//        return last_name + formeted_last_name_history+" with unknown first name";
//
//      // если неизвестна только фамилия
//      } else if (last_name.empty()) {
//        return first_name +formeted_first_name_history+ " with unknown last name";
//
//      // если известны и имя, и фамилия
//      } else {
//        return first_name +formeted_first_name_history+ " " + last_name+formeted_last_name_history;
//      }
//    }
//  bool IsLessThanBD  (const int& birth_year,const int& year) const {
////	  if (birth_year > year){
////		  return true
////	  }else{
////		  return false;
////	  }
//	  return birth_year > year ? true: false;
//
//  }
//private:
//  map<int, string> first_names;
//  map<int, string> last_names;
//  int birth_year;
//  string bname;
//  string blname;
//
//};
//
//
//int main() {
//  Person person("Polina", "Sergeeva", 1960);
//  for (int year : {1959, 1960}) {
//    cout << person.GetFullNameWithHistory(year) << endl;
//  }
//
//  person.ChangeFirstName(1965, "Appolinaria");
//  person.ChangeLastName(1967, "Ivanova");
//  for (int year : {1965, 1967}) {
//    cout << person.GetFullNameWithHistory(year) << endl;
//  }
//
//  return 0;
//}
//
//
//
