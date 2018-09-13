//////#include <iostream>
//////#include <vector>
//////#include <string>
//////#include <map>
//////#include <cmath>
//////using namespace std;
//////int main() {
//////	double a,b,c;
//////	double D;
//////	double x_1;
//////	double x_2;
//////	cin>>a>>b>>c;
//////	if (a==0){
//////		if (b==0){
//////			return 0;
//////		}
//////		else{
//////			x_1=c/b*(-1);
//////			cout<<x_1;
//////		}
//////
//////	}
//////	else{
//////		D=b*b-4*a*c;
//////		if (D>0){
//////				x_1=(b*(-1)+sqrt(D))/(a*2);
//////				x_2=(b*(-1)-sqrt(D))/(a*2);
//////				cout<<x_1<<" "<<x_2;
//////		}else if ( D==0){
//////				x_1=(b*(-1)+sqrt(D))/(a*2.);
//////				cout<<x_1;
//////		}else{
//////			cout<<" ";
//////		}
//////	}
//////
//////	return 0;
//////
//////}
////
////#include <iostream>
////#include <vector>
////#include <string>
////#include <map>
////#include <cmath>
////using namespace std;
////int main() {
////	string m;
////	cin>>m;
////	int f_was=0;
////	int ind_f_was=0;
////	for(int i = 0; i < m.size(); ++i){
////		if (m[i]=='f'){
////			f_was=f_was+1;
////			if (f_was==2){
////						ind_f_was=i;
////					}
////		}
////
////	}
//////	cout<<ind_f_was;
////	if (f_was==0){
////		cout<<-2;
////	}else if (f_was==1){
////		cout<<-1;
////	}else{
////		cout<<ind_f_was;
////	}
////	return 0;
////}
//
//
//#include <iostream>
//#include <vector>
//#include <string>
//#include <map>
//#include <cmath>
//using namespace std;
//int main() {
//	int a,b;
//	cin>>a>>b;
//	while(a>0 && b>0){
//		if (a>b){
//			a=a%b;
//		}else{
//			b=b%a;
//		}
//	}
//	int c;
//	c=a+b;
//	cout<<c;
//	return 0;
//}
//
