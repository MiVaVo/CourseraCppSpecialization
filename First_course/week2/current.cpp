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
