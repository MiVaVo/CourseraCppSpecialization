////////////////////#include <iostream>
////////////////////#include <vector>
////////////////////#include <string>
////////////////////#include <map>
////////////////////#include <cmath>
////////////////////using namespace std;
////////////////////
////////////////////int Factorial(int x){
////////////////////	int fact=1;
////////////////////	if (x>0){
////////////////////		for (int i=1;i<=x;++i){
////////////////////			fact=fact*i;
////////////////////		}
////////////////////		return fact;
////////////////////	}else{
////////////////////		return fact;
////////////////////	}
////////////////////}
////////////////////int main(){
////////////////////	int x,fact;
////////////////////	cin>>x;
////////////////////	fact=Factorial(x);
////////////////////	cout<<fact;
////////////////////	return 0;
////////////////////}
//////////////////
//////////////////#include <iostream>
//////////////////#include <vector>
//////////////////#include <string>
//////////////////#include <map>
//////////////////#include <cmath>
//////////////////using namespace std;
//////////////////
//////////////////vector<string> PalindromFilter(vector<string> words ,int minLength){
//////////////////	vector<string> polindrom;
//////////////////	for (auto word: words){
//////////////////		int word_size=word.size();
//////////////////		if (word_size>=minLength){
//////////////////			bool word_status=true;
//////////////////			for (int i=0;i<word_size;i++){
//////////////////				word_status=word[i]==word[word_size-1-i];
//////////////////				if (word_status==false){
//////////////////					break;
//////////////////				}
//////////////////			}
//////////////////			if (word_status==true){
//////////////////				polindrom.push_back(word);
//////////////////			}
//////////////////		}
//////////////////
//////////////////	}
//////////////////	return polindrom;
//////////////////}
//////////////////
//////////////////void PrintWords(vector<string> words) {
//////////////////	for (auto w : words) {
//////////////////		cout << w << " ";
//////////////////	}
//////////////////}
//////////////////int main(){
//////////////////	vector<string> words={"weew", "bro", "code"};
//////////////////	vector<string> polidroms;
//////////////////	int minLength=4;
//////////////////	string inputs;
//////////////////	polidroms=PalindromFilter(words,minLength);
//////////////////	PrintWords(polidroms);
//////////////////	return 0;
//////////////////}
////////////////#include <iostream>
////////////////#include <vector>
////////////////#include <string>
////////////////#include <map>
////////////////#include <cmath>
////////////////using namespace std;
////////////////
////////////////void PrintWords(vector<string> words) {
////////////////	for (auto w : words) {
////////////////		cout << w << " ";
////////////////	}
////////////////}
////////////////void MoveStrings(vector<string>& source,vector<string>& destination ){
////////////////	for (auto& word : source){
////////////////		destination.push_back(word);
////////////////	}
////////////////	source.clear();
////////////////
////////////////}
////////////////int main(){
////////////////	vector<string> source = {"a", "b", "c"};
////////////////	vector<string> destination = {"z"};
////////////////	PrintWords(destination);
////////////////	MoveStrings(source,destination);
////////////////	PrintWords(destination);
//////////////////	PrintWords(destination);
////////////////	return 0;
////////////////}
////////////////
//////////////
//////////////#include <iostream>
//////////////#include <vector>
//////////////#include <string>
//////////////#include <map>
//////////////#include <cmath>
//////////////using namespace std;
//////////////
//////////////void PrintStrings(vector<string> words) {
//////////////	for (auto w : words) {
//////////////		cout << w << " ";
//////////////	}
//////////////}
//////////////
//////////////void PrintInts(const vector<int>& ints) {
//////////////	for (const auto& w : ints) {
//////////////		cout << w << " ";
//////////////	}
//////////////}
//////////////void Reverse(vector<int>& v){
//////////////	vector<int> new_vector;
//////////////	for (auto& i: v){
//////////////		new_vector.insert(new_vector.begin(),i);
//////////////	}
//////////////	v=new_vector;
//////////////
//////////////}
//////////////int main(){
//////////////	vector<int> v = {0};
////////////////	PrintInts(v);
////////////////	Reverse(v);
//////////////	v.assign(1, 0);
//////////////	PrintInts(v);
//////////////	return 0;
//////////////}
////////////
////////////#include <iostream>
////////////#include <vector>
////////////#include <string>
////////////#include <map>
////////////#include <cmath>
////////////using namespace std;
////////////
////////////void PrintStrings(const vector<string>& words) {
////////////	for (const auto& w : words) {
////////////		cout << w << " ";
////////////	}
////////////}
////////////void PrintMap(const map<int,int>& x) {
////////////	for (const auto &p : x) {
////////////	    std::cout << "m[" << p.first << "] = " << p.second << '\n';
////////////	}
////////////}
////////////
////////////void PrintInts(const vector<int>& ints) {
////////////	for (const auto& w : ints) {
////////////		cout << w << " ";
////////////	}
////////////}
////////////
////////////void Come_update(map<int,int>& queue){
////////////	int opcount;
////////////	int size_of_queue=queue.size();
////////////	cin >> opcount;
////////////	if (opcount>0){
////////////		for (int j=size_of_queue;
////////////				j<opcount+size_of_queue;
////////////				j++){
////////////			queue[j]=1;
////////////		}
////////////	}else if (opcount <0){
////////////
////////////		for (int m=opcount;m<0;m++){
////////////			queue.erase(prev(queue.end()));
////////////		}
////////////	}
////////////}
////////////
////////////void Worry_update(map<int,int>& queue){
////////////	int opcount;
////////////	cin >> opcount;
////////////	queue[opcount]=0;
////////////}
////////////void Quiet_update(map<int,int>& queue){
////////////	int opcount;
////////////		cin >> opcount;
////////////		queue[opcount]=1;
////////////}
////////////void Worry_count(const map<int,int>& queue,vector<int>& worry_count){
////////////	int worry_counter=0;
////////////	for (const auto &p : queue){
////////////		if (p.second==0){
////////////			worry_counter+=1;
////////////		}
////////////	}worry_count.push_back(worry_counter);
////////////
////////////}
////////////
////////////int main(){
////////////	int Q;
////////////	string optype;
////////////	cin>>Q;
////////////	int i=0;
////////////	vector<int> worry_count;
////////////	vector<string> optypes;
////////////	map<int,int> queue;
////////////	while ( i<Q){
////////////		cin >> optype;
////////////		if (optype=="COME"){
////////////			Come_update(queue);
////////////		}else if (optype=="WORRY"){
////////////			Worry_update(queue);
////////////		}else if (optype=="WORRY_COUNT"){
////////////			Worry_count(queue,worry_count);
////////////		}else if (optype=="QUIET"){
////////////			Quiet_update(queue);
////////////		}
////////////		++i;
////////////	}
////////////	PrintInts(worry_count);
////////////
////////////	return 0;
////////////}
////////////
//////////#include <iostream>
//////////#include <vector>
//////////#include <string>
//////////#include <map>
//////////#include <cmath>
//////////using namespace std;
//////////
//////////void PrintStrings(const vector<string>& words) {
//////////	for (const auto& w : words) {
//////////		cout << w << " ";
//////////	}
//////////}
//////////void PrintMap(const map<int,int>& x) {
//////////	for (const auto &p : x) {
//////////	    std::cout << "m[" << p.first << "] = " << p.second << '\n';
//////////	}
//////////}
//////////
//////////void PrintInts(const vector<int>& ints) {
//////////	for (const auto& w : ints) {
//////////		cout << w << " ";
//////////	}
//////////}
//////////
//////////void ADD(map<int,vector<string>>& day_tasks ){
//////////	int day_to_add;
//////////	string task_to_add;
//////////	cin >> day_to_add;
//////////	cin>>task_to_add;
//////////	day_tasks[day_to_add].push_back(task_to_add);
//////////}
//////////void DUMP(const map<int,vector<string>>& day_tasks,
//////////		vector<map<int,vector<string>>>& output_activity){
//////////	int day_to_dump;
//////////	cin >> day_to_dump;
//////////	if (day_tasks.count(day_to_dump)>0){
//////////		output_activity.push_back({{day_to_dump,day_tasks.at(day_to_dump)}});
//////////	}else{
//////////		output_activity.push_back({{day_to_dump,{}}});
//////////	}
//////////
//////////}
//////////
//////////void DUMP_outputter(const vector<map<int,vector<string>>>& output_activity){
//////////	for (const map<int,vector<string>>& activities:  output_activity){
//////////		for ( const auto &p : activities){
//////////			if (p.second.size()!=0){
//////////				cout<<p.second.size()<<" ";
//////////			}else{
//////////				cout<<0<<endl;
//////////				break;
//////////			}
//////////			for (const string& tasks: p.second){
//////////				cout<<tasks<<" ";
//////////			}
//////////			cout<<endl;
//////////		}
//////////	}
//////////}
//////////
//////////void NEXT(map<int,vector<string>>& day_tasks,
//////////		int& current_month,
//////////		const vector<int>& calendar){
//////////	current_month+=1;
//////////	int month_to_work_with=current_month%12;
//////////	int days_in_month=calendar[month_to_work_with];
//////////	vector<int> to_erase;
//////////	for (auto& p:day_tasks ){
//////////		if (p.first>days_in_month){
//////////			day_tasks[days_in_month].insert( day_tasks[days_in_month].end(),
//////////					day_tasks[p.first].begin(), day_tasks[p.first].end() );
//////////			to_erase.push_back(p.first);
//////////
////////////					  .push_back(day_tasks[p.first]);
////////////		cout<<"Adwd";
//////////		}
//////////	}
//////////	for (const int& i: to_erase ){
//////////		day_tasks.erase(i);
////////////		cout<<i<<"DAY WAS ERASED";
//////////	}
//////////
//////////
//////////}
//////////
//////////int main(){
//////////	int Q;
//////////	map<int,vector<string>> day_tasks;
//////////	vector<int> calendar={31,28,31,30,31,30,31,31,30,31,30,31};
//////////	int current_month=0;
//////////	vector<map<int,vector<string>>> output_activity;
//////////	cin>>Q;
//////////	string optype;
//////////	int i=0;
//////////	while ( i<Q){
//////////		cin >> optype;
//////////		if (optype=="ADD"){
//////////			ADD( day_tasks);
//////////		}else if (optype=="DUMP"){
//////////			DUMP(day_tasks,output_activity);
//////////		}else if (optype=="NEXT"){
//////////			NEXT(day_tasks,current_month,calendar);
//////////		}
//////////		++i;
//////////	}
//////////	DUMP_outputter(output_activity);
//////////	return 0;
//////////}
//////////
////////
////////#include <iostream>
////////#include <vector>
////////#include <string>
////////#include <map>
////////#include <cmath>
////////#include <set>
////////#include <algorithm>
////////
////////using namespace std;
////////
////////void PrintStrings(const vector<string>& words) {
////////	for (const auto& w : words) {
////////		cout << w << " ";
////////	}
////////}
////////void PrintMap(const map<int,int>& x) {
////////	for (const auto &p : x) {
////////	    std::cout << "m[" << p.first << "] = " << p.second << '\n';
////////	}
////////}
////////
////////void PrintInts(const vector<int>& ints) {
////////	for (const auto& w : ints) {
////////		cout << w << " ";
////////	}
////////}
////////
////////void NEW_BUS(vector<map<string,vector<string>>>& vector_map_bus_stops){
////////	string bus_name;
////////	int n_of_stops;
////////	string stop_name;
////////	map<string,vector<string>> current_bus_map;
////////	cin>>bus_name;
////////	cin>>n_of_stops;
////////
////////	for (int i=0;i<n_of_stops;i++){
////////		cin>>stop_name;
////////		current_bus_map[bus_name].push_back(stop_name);
////////	}
////////	vector_map_bus_stops.push_back(current_bus_map);
////////}
////////
////////void BUSES_FOR_STOP(const vector<map<string,vector<string>>>& vector_map_bus_stops){
////////	string stop_to_search;
////////	vector<string> buses_that_stop_there;
////////	cin >>stop_to_search;
////////	for (const map<string,vector<string>>& map_bus_stops:vector_map_bus_stops ){
////////		for (auto& p:map_bus_stops ){
////////			if (find(p.second.begin(), p.second.end(), stop_to_search) != p.second.end()){
////////				buses_that_stop_there.push_back(p.first);
////////				break;
////////			}
////////		}
////////	}
////////	if (buses_that_stop_there.empty()){
////////		cout<<"No stop";
////////	}else{
////////		for(const string& good_bus:buses_that_stop_there ){
////////			cout<<good_bus<<" ";
////////		}
////////	}
////////	cout<<endl;
////////}
////////
////////void STOPS_FOR_BUS(const vector<map<string,vector<string>>>& vector_map_bus_stops){
////////	string bus_to_analyze;
////////	cin>>bus_to_analyze;
////////	vector<string> bus_stops;
////////	for (const map<string,vector<string>>& current_map:vector_map_bus_stops ){
////////		if (current_map.count(bus_to_analyze) >0){
////////			bus_stops=current_map.at(bus_to_analyze);
////////		}
////////	}
////////	if (bus_stops.empty()){
////////		cout<<"No bus"<<endl;
////////	}else{
////////		for (const string& stop: bus_stops){
////////			cout <<"Stop"<<" "<<stop<<":";
////////			bool was_interchange=false;
////////			for (const map<string,vector<string>>& current_map:vector_map_bus_stops ){
////////				for (const auto &p : current_map){
////////					if(find(p.second.begin(), p.second.end(), stop) != p.second.end() &&
////////							p.first!=bus_to_analyze){
////////						cout<<" "<<p.first;
////////						was_interchange=true;
////////					}
////////				}
////////
////////			}
//////////
////////			if (!was_interchange){
////////				cout<<" "<<"no interchange";
////////
////////			}
////////			cout<<endl;
////////		}
////////	}
////////
////////}
////////
////////void ALL_BUSES(const vector<map<string,vector<string>>>& vector_map_bus_stops){
////////	bool was_output=false;
////////	map<string,vector<string>> current_vector_map_bus_stops;
////////
////////	for (const map<string,vector<string>>& current_map:vector_map_bus_stops){
////////		for (const auto& p:current_map){
////////			for (const string& stops:p.second){
////////				current_vector_map_bus_stops[p.first].push_back(stops);
////////			}
////////		}
////////	}
////////	for (const auto& p:current_vector_map_bus_stops){
////////		cout<<"Bus"<<" "<<p.first<<": ";
////////		for (const string& t: p.second){
////////			cout<<t<<" ";
////////			was_output=true;
////////		}
////////		cout<<endl;
////////
////////	}
////////	if (!was_output){
////////		cout<<"No buses"<<endl;
////////	}
////////}
////////
//////////8
//////////BUSES_FOR_STOP Marushkino
//////////STOPS_FOR_BUS 32K
//////////NEW_BUS 32 3 Tolstopaltsevo Marushkino Vnukovo
//////////NEW_BUS 32K 6 Tolstopaltsevo Marushkino Vnukovo Peredelkino Solntsevo Skolkovo
//////////BUSES_FOR_STOP Vnukovo
//////////NEW_BUS 950 6 Kokoshkino Marushkino Vnukovo Peredelkino Solntsevo Troparyovo
//////////NEW_BUS 272 4 Vnukovo Moskovsky Rumyantsevo Troparyovo
//////////STOPS_FOR_BUS 272
////////
//////////void ALL_BUSES
////////int main(){
////////	int Q;
////////	vector<map<string,vector<string>>> vector_map_bus_stops;
////////	cin>>Q;
////////	string optype;
////////	int i=0;
////////	while ( i<Q){
////////		cin >> optype;
////////		if (optype=="NEW_BUS"){
////////			NEW_BUS( vector_map_bus_stops);
////////		}
////////		else if (optype=="STOPS_FOR_BUS"){
////////			STOPS_FOR_BUS(vector_map_bus_stops);
////////		}else if (optype=="BUSES_FOR_STOP"){
////////			BUSES_FOR_STOP(vector_map_bus_stops);
////////		}else if (optype=="ALL_BUSES"){
////////			ALL_BUSES(vector_map_bus_stops);
////////		}
////////		++i;
////////	}
////////	return 0;
////////}
////////
//////#include <iostream>
//////#include <vector>
//////#include <string>
//////#include <map>
//////#include <cmath>
//////#include <set>
//////#include <algorithm>
//////
//////using namespace std;
//////
//////void PrintStrings(const vector<string>& words) {
//////	for (const auto& w : words) {
//////		cout << w << " ";
//////	}
//////}
//////void PrintMap(const map<int,int>& x) {
//////	for (const auto &p : x) {
//////	    std::cout << "m[" << p.first << "] = " << p.second << '\n';
//////	}
//////}
//////
//////void PrintInts(const vector<int>& ints) {
//////	for (const auto& w : ints) {
//////		cout << w << " ";
//////	}
//////}
//////
//////void FeedBack(map<vector<string>,int>& route_ind){
//////	int Q_dots;
//////	cin>>Q_dots;
//////	int i=0;
//////	vector<string> route;
//////	string dot;
//////	int size_fo_dict=route_ind.size();
//////	while ( i<Q_dots){
//////		cin>>dot;
//////		route.push_back(dot);
//////		i++;
//////	}
//////	if (route_ind.count(route)>0){
//////		cout<<"Already exists for "<<route_ind.at(route)<<endl;
//////	}else{
//////		route_ind[route]=size_fo_dict+1;
//////		cout<<"New bus "<<route_ind[route]<<endl;
//////	}
//////
//////}
//////
//////int main(){
//////	int Q;
//////	cin>>Q;
//////	map<vector<string>,int> route_ind;
//////	int i=0;
//////	while ( i<Q){
//////		FeedBack( route_ind);
//////		++i;
//////	}
//////	return 0;
//////}
////
////#include <iostream>
////#include <vector>
////#include <string>
////#include <map>
////#include <cmath>
////#include <set>
////#include <iterator>
////#include <algorithm>
////
////using namespace std;
////
////void PrintStrings(const vector<string>& words) {
////	for (const auto& w : words) {
////		cout << w << " ";
////	}
////}
////void CHECK(const map<string,set<string>>&  dictionary) {
////	string fw,sw;
////	cin>>fw;
////	cin>>sw;
////	if (dictionary.count(fw)>0){
////		if (dictionary.at(fw).count(sw)>0){
////			cout<<"YES";
////		}else{
////			cout<<"NO";
////		}
////	}else{
////		cout<<"NO";
////	}
////
////
////	cout<<endl;
////
////}
////
////void COUNT(const map<string,set<string>>&  dictionary) {
////	string in_word;
////	cin>>in_word;
////	if (dictionary.count(in_word)>0){
////		cout<<dictionary.at(in_word).size();
////	}else{
////		cout<<0;
////	}
////	cout<<endl;
////}
////
////void ADD(map<string,set<string>>&  dictionary){
////	string fw,sw;
////	cin>>fw;
////	cin>>sw;
////	dictionary[fw].insert(sw);
////	dictionary[sw].insert(fw);
////
////}
////
////int main(){
////	int Q;
////	cin>>Q;
////	map<string,set<string>> dictionary;
////	int i=0;
////	string optype;
////	while ( i<Q){
////		cin>>optype;
////		if (optype=="CHECK"){
////			CHECK(dictionary);
////		}else if (optype=="ADD"){
////			ADD(dictionary);
////		}else if (optype=="COUNT"){
////			COUNT(dictionary);
////		}
////		++i;
////	}
////	return 0;
////}
//#include <iostream>
//#include <vector>
//#include <string>
//#include <map>
//#include <cmath>
//#include <set>
//#include <algorithm>
//
//using namespace std;
//
//
//void FeedBack(map<set<string>,int>& route_ind){
//	int Q_dots;
//	cin>>Q_dots;
//	int i=0;
//	set<string> route;
//	string dot;
//	int size_fo_dict=route_ind.size();
//	while ( i<Q_dots){
//		cin>>dot;
//		route.insert(dot);
//		i++;
//	}
//	if (route_ind.count(route)>0){
//		cout<<"Already exists for "<<route_ind.at(route)<<endl;
//	}else{
//		route_ind[route]=size_fo_dict+1;
//		cout<<"New bus "<<route_ind[route]<<endl;
//	}
//
//}
//
//int main(){
//	int Q;
//	cin>>Q;
//	map<set<string>,int> route_ind;
//	int i=0;
//	while ( i<Q){
//		FeedBack( route_ind);
//		++i;
//	}
//	return 0;
//}
