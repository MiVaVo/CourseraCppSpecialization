//////////////////#include <iostream>
//////////////////#include <vector>
//////////////////#include <string>
//////////////////#include <map>
//////////////////#include <cmath>
//////////////////#include <set>
//////////////////#include <algorithm>
//////////////////
//////////////////using namespace std;
//////////////////
//////////////////void DoSort(vector<int>& seq){
//////////////////	sort(seq.begin(),seq.end(),[](int i, int j){return(abs(i)<abs(j));});
//////////////////	for (const auto& i:seq){
//////////////////		cout<<i<<" ";
//////////////////	}
//////////////////}
//////////////////int main(){
//////////////////	int Q;
//////////////////	cin>>Q;
//////////////////	int i=0;
//////////////////	vector<int> seq;
//////////////////	int current_value;
//////////////////	while ( i<Q){
//////////////////		cin>>current_value;
//////////////////		seq.push_back(current_value);
//////////////////		++i;
//////////////////	}
//////////////////	DoSort( seq);
//////////////////	return 0;
//////////////////}
////////////////
////////////////#include <iostream>
////////////////#include <vector>
////////////////#include <string>
////////////////#include <map>
////////////////#include <cmath>
////////////////#include <set>
////////////////#include <algorithm>
////////////////
////////////////using namespace std;
////////////////
////////////////void DoSort(vector<string>& seq){
////////////////	sort(seq.begin(),seq.end(),[](string i, string j){
////////////////		string i_new=i;
////////////////		string j_new=j;
////////////////		transform(i_new.begin(), i_new.end(), i_new.begin(), ::tolower);
////////////////		transform(j_new.begin(), j_new.end(), j_new.begin(), ::tolower);
////////////////		return(i_new<j_new);});
////////////////	for (const auto& i:seq){
////////////////		cout<<i<<" ";
////////////////	}
////////////////}
////////////////int main(){
////////////////	int Q;
////////////////	cin>>Q;
////////////////	int i=0;
////////////////	vector<string> seq;
////////////////	string current_value;
////////////////	while ( i<Q){
////////////////		cin>>current_value;
////////////////		seq.push_back(current_value);
////////////////		++i;
////////////////	}
////////////////	DoSort(seq);
////////////////	return 0;
////////////////}
////////////////
//////////////#include <iostream>
//////////////#include <vector>
//////////////#include <string>
//////////////#include <map>
//////////////#include <cmath>
//////////////#include <set>
//////////////#include <algorithm>
//////////////
//////////////using namespace std;
//////////////
//////////////string GetPositivity(int x) {
//////////////    return x > 0 ? "positive"
//////////////                 : (x == 0 ? "zero" : "negative");
//////////////}
//////////////int main(){
//////////////	int Q;
//////////////	cin>>Q;
//////////////	cout<<GetPositivity(Q);
//////////////	return 0;
//////////////}
////////////class Route{
////////////public:
////////////	string GetSource(){return source;}
////////////	string GetDestionation(){return destination;}
////////////	void  SetSource(const string& new_source){
////////////		source=new_source;
////////////		UpdateLength();
////////////	}
////////////	void SetDestination(const string& new_destination){
////////////		destination=new_destination;
////////////		UpdateLength();
////////////	}
////////////private:
////////////	void UpdateLength(){
////////////		length=ComputeDistance(source,destination);
////////////	}
////////////	string source;
////////////	string destination;
////////////	int length;
////////////};
//////////class SortedStrings {
//////////public:
//////////  void AddString(const string& s) {
//////////	  just_vector.push_back(s);
//////////  }
//////////  vector<string> GetSortedStrings() {
//////////	  sort(just_vector.begin(),just_vector.end());
//////////	  return just_vector;
//////////  }
//////////private:
//////////  vector<string> just_vector;
//////////};
////////#include <iostream>
////////#include <vector>
////////#include <string>
////////#include <map>
////////#include <cmath>
////////#include <set>
////////#include <algorithm>
////////using namespace std;
////////
////////#include <map>
////////#include <string>
////////
////////// если имя неизвестно, возвращает пустую строку
////////string FindNameByYear(const map<int, string>& names, int year) {
////////  string name;  // изначально имя неизвестно
////////
////////  // перебираем всю историю по возрастанию ключа словаря, то есть в хронологическом порядке
////////  for (const auto& item : names) {
////////    // если очередной год не больше данного, обновляем имя
////////    if (item.first <= year) {
////////      name = item.second;
////////    } else {
////////      // иначе пора остановиться, так как эта запись и все последующие относятся к будущему
////////      break;
////////    }
////////  }
////////
////////  return name;
////////}
////////
////////class Person {
////////public:
////////  void ChangeFirstName(int year, const string& first_name) {
////////    first_names[year] = first_name;
////////  }
////////  void ChangeLastName(int year, const string& last_name) {
////////    last_names[year] = last_name;
////////  }
////////  string GetFullName(int year) {
////////    // получаем имя и фамилию по состоянию на год year
////////    const string first_name = FindNameByYear(first_names, year);
////////    const string last_name = FindNameByYear(last_names, year);
////////
////////    // если и имя, и фамилия неизвестны
////////    if (first_name.empty() && last_name.empty()) {
////////      return "Incognito";
////////
////////    // если неизвестно только имя
////////    } else if (first_name.empty()) {
////////      return last_name + " with unknown first name";
////////
////////    // если неизвестна только фамилия
////////    } else if (last_name.empty()) {
////////      return first_name + " with unknown last name";
////////
////////    // если известны и имя, и фамилия
////////    } else {
////////      return first_name + " " + last_name;
////////    }
////////  }
////////
////////private:
////////  map<int, string> first_names;
////////  map<int, string> last_names;
////////};
////////
//////
//////#include <iostream>
//////#include <vector>
//////#include <string>
//////#include <map>
//////#include <cmath>
//////#include <set>
//////#include <algorithm>
//////using namespace std;
//////
//////#include <map>
//////#include <string>
//////
//////// если имя неизвестно, возвращает пустую строку
//////string FindNameByYear(const map<int, string>& names, int year) {
//////  string name;  // изначально имя неизвестно
//////
//////  // перебираем всю историю по возрастанию ключа словаря, то есть в хронологическом порядке
//////  for (const auto& item : names) {
//////    // если очередной год не больше данного, обновляем имя
//////    if (item.first <= year) {
//////      name = item.second;
//////    } else {
//////      // иначе пора остановиться, так как эта запись и все последующие относятся к будущему
//////      break;
//////    }
//////  }
//////
//////  return name;
//////}
//////
//////class Person {
//////public:
//////  void ChangeFirstName(int year, const string& first_name) {
//////    first_names[year] = first_name;
//////  }
//////  void ChangeLastName(int year, const string& last_name) {
//////    last_names[year] = last_name;
//////  }
//////  string GetFullName(int year) {
//////    // получаем имя и фамилию по состоянию на год year
//////    const string first_name = FindNameByYear(first_names, year);
//////    const string last_name = FindNameByYear(last_names, year);
//////
//////    // если и имя, и фамилия неизвестны
//////    if (first_name.empty() && last_name.empty()) {
//////      return "Incognito";
//////
//////    // если неизвестно только имя
//////    } else if (first_name.empty()) {
//////      return last_name + " with unknown first name";
//////
//////    // если неизвестна только фамилия
//////    } else if (last_name.empty()) {
//////      return first_name + " with unknown last name";
//////
//////    // если известны и имя, и фамилия
//////    } else {
//////      return first_name + " " + last_name;
//////    }
//////  }
//////  string ReturnFormatedHistoricalNames(const map<int,string>& names, const int& year){
//////	  vector<string> historical_names_here;
//////	  set<string> historical_names_here_set;
//////	  string current_name=FindNameByYear(names, year);
//////	  string previous_name;
//////	  for (auto p:names){
//////	  		  if (p.first<year){
//////	  			historical_names_here.push_back(FindNameByYear(names, p.first));
//////	  			historical_names_here_set.insert(FindNameByYear(names, p.first));
//////	  		  }
//////	  		  else{
//////	  			  break;
//////	  		  }
//////	  	  }
//////	  set<string>current_name_set={current_name};
//////	  if (current_name_set==historical_names_here_set){
//////		  historical_names_here.clear();
//////	  }
//////
//////	  reverse(std::begin(historical_names_here), std::end(historical_names_here));
//////	  if (!historical_names_here.empty()){
//////		  string zero_element=historical_names_here[0];
//////		  	  if (zero_element==current_name){
//////		  		  historical_names_here.erase(historical_names_here.begin());
//////		  	  }
//////	  }
//////
//////	  if (!historical_names_here.empty()){
//////		  string historical_names_formated=" (";
//////		  	for (string s:historical_names_here){
//////		  		historical_names_formated+=" "+s+",";
//////		  	  }
//////		  	historical_names_formated.erase(2,1);
//////		  	historical_names_formated.erase(historical_names_formated.size() - 1);
//////		  	historical_names_formated+=")";
//////		  	return historical_names_formated;
//////	  }else{
//////		  return "";
//////	  }
//////
//////  }
//////  string GetFullNameWithHistory(const int& year) {
//////	  string historical_names;
//////	  string historical_surnames;
//////	  const string first_name = FindNameByYear(first_names, year);
//////	  const string last_name = FindNameByYear(last_names, year);
//////
//////	  historical_names=ReturnFormatedHistoricalNames(first_names,year);
//////	  historical_surnames=ReturnFormatedHistoricalNames(last_names,year);
//////
//////      if (first_name.empty() && last_name.empty()) {
//////        return "Incognito";
//////
//////      } else if (first_name.empty()) {
//////        return last_name +historical_surnames+ " with unknown first name";
//////
//////      } else if (last_name.empty()) {
//////        return first_name +historical_names+ " with unknown last name";
//////
//////      } else {
//////        return first_name+historical_names + " " + last_name+historical_surnames;
//////      }
//////    }
//////
//////private:
//////  map<int, string> first_names;
//////  map<int, string> last_names;
//////};
//////
//////
//////int main() {
//////  Person person;
//////
//////  person.ChangeFirstName(1965, "Polina");
//////  person.ChangeLastName(1967, "Sergeeva");
//////  for (int year : {1900, 1965, 1990}) {
//////    cout << person.GetFullNameWithHistory(year) << endl;
//////  }
//////
//////  person.ChangeFirstName(1970, "Appolinaria");
//////  for (int year : {1969, 1970}) {
//////    cout << person.GetFullNameWithHistory(year) << endl;
//////  }
//////
//////  person.ChangeLastName(1968, "Volkova");
//////  for (int year : {1969, 1970}) {
//////    cout << person.GetFullNameWithHistory(year) << endl;
//////  }
//////
//////  person.ChangeFirstName(1990, "Polina");
//////  person.ChangeLastName(1990, "Volkova-Sergeeva");
//////  cout << person.GetFullNameWithHistory(1990) << endl;
//////
//////  person.ChangeFirstName(1966, "Pauline");
//////  cout << person.GetFullNameWithHistory(1966) << endl;
//////
//////  person.ChangeLastName(1960, "Sergeeva");
//////  for (int year : {1960, 1967}) {
//////    cout << person.GetFullNameWithHistory(year) << endl;
//////  }
//////
//////  person.ChangeLastName(1961, "Ivanova");
//////  cout << person.GetFullNameWithHistory(1967) << endl;
//////
//////  return 0;
//////}
//////
//////
//////
////
////#include <iostream>
////#include <vector>
////#include <string>
////#include <map>
////#include <cmath>
////#include <set>
////#include <algorithm>
////using namespace std;
////
////// если имя неизвестно, возвращает пустую строку
////string FindNameByYear(const map<int, string>& names, const int& year) {
////  string name;  // изначально имя неизвестно
////
////  // перебираем всю историю по возрастанию ключа словаря, то есть в хронологическом порядке
////  for (const auto& item : names) {
////    // если очередной год не больше данного, обновляем имя
////    if (item.first <= year) {
////      name = item.second;
////    } else {
////      // иначе пора остановиться, так как эта запись и все последующие относятся к будущему
////      break;
////    }
////  }
////
////  return name;
////}
////
////vector<string> ReturnHistoryNamesUpToYear(const map<int, string>& names, const int& year) {
////	vector<string> history_names;  // изначально имя неизвестно
////  for (const auto& item : names) {
////    if (item.first < year) {
////    	history_names.push_back( item.second);
////    } else {
////      break;
////    }
////  }
////  reverse(begin(history_names),end(history_names));
////  bool name_was_previoused= true;
////  if (history_names.size()!=0){
////	  name_was_previoused=FindNameByYear(names,year)==history_names.at(0);
////	  while (name_was_previoused){
////
////		  history_names.erase(history_names.begin());
////		  		  if (history_names.size()==0){
////		  			  name_was_previoused=false;
////		  			  break;
////		  		  }
////		  name_was_previoused= FindNameByYear(names,year)==history_names.at(0);
////	  }
////  }
////  return history_names;
////}
////
////string FormatHistory(const vector<string>& history_names){
////	if (!history_names.empty()){
////		string history_names_formated = " (";
////		for ( int i=0; i<history_names.size(); i++ ){
////			history_names_formated=history_names_formated+history_names.at(i);
////			if ( i!=history_names.size()-1){
////				history_names_formated=history_names_formated+", ";
////			}
////		}
////		history_names_formated=history_names_formated+")";
////	return history_names_formated;
////	} else{
////		return {}	;
////	}
////}
//////vector<string> ProcessHistoryNameUpToYear(vector<string>& history_names, int year){
////
//////  return history;
//////}
////
////class Person {
////public:
////  void ChangeFirstName(int year, const string& first_name) {
////    first_names[year] = first_name;
////  }
////  void ChangeLastName(int year, const string& last_name) {
////    last_names[year] = last_name;
////  }
////  string GetFullName(int year) {
////    // получаем имя и фамилию по состоянию на год year
////    const string first_name = FindNameByYear(first_names, year);
////    const string last_name = FindNameByYear(last_names, year);
////
////    // если и имя, и фамилия неизвестны
////    if (first_name.empty() && last_name.empty()) {
////      return "Incognito";
////
////    // если неизвестно только имя
////    } else if (first_name.empty()) {
////      return last_name + " with unknown first name";
////
////    // если неизвестна только фамилия
////    } else if (last_name.empty()) {
////      return first_name + " with unknown last name";
////
////    // если известны и имя, и фамилия
////    } else {
////      return first_name + " " + last_name;
////    }
////  }
////
////  string GetFullNameWithHistory(int year) const {
////      // получаем имя и фамилию по состоянию на год year
//////	  cout<<"Here";
////      const string first_name = FindNameByYear(first_names, year);
////      const string last_name = FindNameByYear(last_names, year);
////
////      const vector<string> first_name_history = ReturnHistoryNamesUpToYear(first_names, year);
////      const vector<string> last_name_history = ReturnHistoryNamesUpToYear(last_names, year);
////      string formeted_first_name_history=FormatHistory(first_name_history);
////      string formeted_last_name_history=FormatHistory(last_name_history);
////
////
////
////      // если и имя, и фамилия неизвестны
////      if (first_name.empty() && last_name.empty()) {
////        return "Incognito";
////
////      // если неизвестно только имя
////      } else if (first_name.empty()) {
////        return last_name + formeted_last_name_history+" with unknown first name";
////
////      // если неизвестна только фамилия
////      } else if (last_name.empty()) {
////        return first_name +formeted_first_name_history+ " with unknown last name";
////
////      // если известны и имя, и фамилия
////      } else {
////        return first_name +formeted_first_name_history+ " " + last_name+formeted_last_name_history;
////      }
////    }
////
////private:
////  map<int, string> first_names;
////  map<int, string> last_names;
////};
////
////
////int main() {
////  Person person;
////
////  person.ChangeFirstName(1900, "Eugene");
////  person.ChangeLastName(1900, "Sokolov");
////  person.ChangeLastName(1910, "Sokolov");
////  person.ChangeFirstName(1920, "Evgeny");
////  person.ChangeLastName(1930, "Sokolov");
////  cout << person.GetFullNameWithHistory(1940) << endl;
////
////  return 0;
////}
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
//
