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
//void Come_update(map<int,int>& queue){
//	int opcount;
//	int size_of_queue=queue.size();
//	cin >> opcount;
//	if (opcount>0){
//		for (int j=size_of_queue;
//				j<opcount+size_of_queue;
//				j++){
//			queue[j]=1;
//		}
//	}else if (opcount <0){
//
//		for (int m=opcount;m<0;m++){
//			queue.erase(prev(queue.end()));
//		}
//	}
//}
//
//void Worry_update(map<int,int>& queue){
//	int opcount;
//	cin >> opcount;
//	queue[opcount]=0;
//}
//void Quiet_update(map<int,int>& queue){
//	int opcount;
//		cin >> opcount;
//		queue[opcount]=1;
//}
//void Worry_count(const map<int,int>& queue,vector<int>& worry_count){
//	int worry_counter=0;
//	for (const auto &p : queue){
//		if (p.second==0){
//			worry_counter+=1;
//		}
//	}worry_count.push_back(worry_counter);
//
//}
//
//int main(){
//	int Q;
//	string optype;
//	cin>>Q;
//	int i=0;
//	vector<int> worry_count;
//	vector<string> optypes;
//	map<int,int> queue;
//	while ( i<Q){
//		cin >> optype;
//		if (optype=="COME"){
//			Come_update(queue);
//		}else if (optype=="WORRY"){
//			Worry_update(queue);
//		}else if (optype=="WORRY_COUNT"){
//			Worry_count(queue,worry_count);
//		}else if (optype=="QUIET"){
//			Quiet_update(queue);
//		}
//		++i;
//	}
//	PrintInts(worry_count);
//
//	return 0;
//}
