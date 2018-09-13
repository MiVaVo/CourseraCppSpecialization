//#include <iostream>
//#include <vector>
//#include <string>
//#include <map>
//#include <cmath>
//using namespace std;
//
//void PrintStrings(const vector<string>& words) {
//	for (const auto& w : words) {
//		cout << w << " ";
//	}
//}
//void PrintMap(const map<int,int>& x) {
//	for (const auto &p : x) {
//	    std::cout << "m[" << p.first << "] = " << p.second << '\n';
//	}
//}
//
//void PrintInts(const vector<int>& ints) {
//	for (const auto& w : ints) {
//		cout << w << " ";
//	}
//}
//
//void ADD(map<int,vector<string>>& day_tasks ){
//	int day_to_add;
//	string task_to_add;
//	cin >> day_to_add;
//	cin>>task_to_add;
//	day_tasks[day_to_add].push_back(task_to_add);
//}
//void DUMP(const map<int,vector<string>>& day_tasks,
//		vector<map<int,vector<string>>>& output_activity){
//	int day_to_dump;
//	cin >> day_to_dump;
//	if (day_tasks.count(day_to_dump)>0){
//		output_activity.push_back({{day_to_dump,day_tasks.at(day_to_dump)}});
//	}else{
//		output_activity.push_back({{day_to_dump,{}}});
//	}
//
//}
//
//void DUMP_outputter(const vector<map<int,vector<string>>>& output_activity){
//	for (const map<int,vector<string>>& activities:  output_activity){
//		for ( const auto &p : activities){
//			if (p.second.size()!=0){
//				cout<<p.second.size()<<" ";
//			}else{
//				cout<<0<<endl;
//				break;
//			}
//			for (const string& tasks: p.second){
//				cout<<tasks<<" ";
//			}
//			cout<<endl;
//		}
//	}
//}
//
//void NEXT(map<int,vector<string>>& day_tasks,
//		int& current_month,
//		const vector<int>& calendar){
//	current_month+=1;
//	int month_to_work_with=current_month%12;
//	int days_in_month=calendar[month_to_work_with];
//	vector<int> to_erase;
//	for (auto& p:day_tasks ){
//		if (p.first>days_in_month){
//			day_tasks[days_in_month].insert( day_tasks[days_in_month].end(),
//					day_tasks[p.first].begin(), day_tasks[p.first].end() );
//			to_erase.push_back(p.first);
//
////					  .push_back(day_tasks[p.first]);
////		cout<<"Adwd";
//		}
//	}
//	for (const int& i: to_erase ){
//		day_tasks.erase(i);
////		cout<<i<<"DAY WAS ERASED";
//	}
//
//
//}
//
//int main(){
//	int Q;
//	map<int,vector<string>> day_tasks;
//	vector<int> calendar={31,28,31,30,31,30,31,31,30,31,30,31};
//	int current_month=0;
//	vector<map<int,vector<string>>> output_activity;
//	cin>>Q;
//	string optype;
//	int i=0;
//	while ( i<Q){
//		cin >> optype;
//		if (optype=="ADD"){
//			ADD( day_tasks);
//		}else if (optype=="DUMP"){
//			DUMP(day_tasks,output_activity);
//		}else if (optype=="NEXT"){
//			NEXT(day_tasks,current_month,calendar);
//		}
//		++i;
//	}
//	DUMP_outputter(output_activity);
//	return 0;
//}
