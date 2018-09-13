//////////#include <iostream>
//////////#include <vector>
//////////#include <string>
//////////#include <map>
//////////#include <cmath>
//////////#include <set>
//////////#include <algorithm>
//////////using namespace std;
//////////
//////////struct Specialization {
//////////	string value;
//////////	explicit Specialization(string new_value) {
//////////	value = new_value;
//////////	}
//////////};
//////////
//////////struct Course {
//////////	string value;
//////////	explicit Course(string new_value) {
//////////	value = new_value;
//////////	}
//////////};
//////////struct Week {
//////////	string value;
//////////	explicit Week(string new_value) {
//////////	value = new_value;
//////////	}
//////////};
//////////
//////////struct LectureTitle {
//////////  string specialization;
//////////  string course;
//////////  string week;
//////////  LectureTitle( Specialization new_spec,Course new_course, Week new_week) {
//////////	  specialization = new_spec.value;
//////////	  course = new_course.value;
//////////	  week = new_week.value;
//////////  }
//////////};
//////////
//////////
//////////
////////#include <iostream>
////////#include <vector>
////////#include <string>
////////#include <map>
////////#include <set>
////////#include <algorithm>
////////using namespace std;
////////
//////////struct Image {
//////////  double quality;
//////////  double freshness;
//////////  double rating;
//////////};
//////////
//////////struct Params {
//////////  double a;
//////////  double b;
//////////  double c;
//////////};
////////
////////class FunctionPart {
////////public:
////////	FunctionPart(char new_operation, double new_value) {
////////		operation = new_operation;
////////		value = new_value;
////////	}
////////	double Apply(double source_value) const {
////////		if (operation == '+') {
////////			return source_value + value;
////////		} else if (operation == '-') {
////////			return source_value - value;
////////		}else if (operation == '*') {
////////			return source_value * value;
////////		}else {
////////			return source_value / value;
////////		}
////////	}
////////	void Invert() {
////////		if (operation == '+') {
////////			operation = '-';
////////		} else if (operation=='-') {
////////			operation = '+';
////////		}else if (operation=='*') {
////////			operation = '/';
////////		}else  {
////////			operation = '*';
////////		}
////////	}
////////private:
////////	char operation;
////////	double value;
////////};
////////
////////class Function {
////////public:
////////	void AddPart(char operation, double value){
////////		parts.push_back({operation, value});
////////	}
////////	double Apply(double value) const {
////////		for (const FunctionPart& part : parts) {
////////			value = part.Apply(value);
////////		}
////////		return value;
////////	}
////////	void Invert() {
////////		for (FunctionPart& part : parts) {
////////				part.Invert();
////////		}
////////		reverse(begin(parts), end(parts));
////////	}
////////private:
////////	vector<FunctionPart> parts;
////////};
////////
////////
////////
////////
////////
//////#include <iostream>
//////#include <vector>
//////#include <string>
//////#include <map>
//////#include <cmath>
//////#include <set>
//////#include <algorithm>
//////#include <fstream>
//////using namespace std;
////////int main(){
////////	ifstream input("input.txt");
////////	string line;
////////	if (input){
////////	while (getline(input, line)) {
////////	cout << line << endl;
////////	}
////////	}
////////
////////	return  0;
////////}
//////int main(){
//////	ifstream input("input.txt");
//////	string line;
//////	const string ouput_path = "output.txt";
//////	ofstream output(ouput_path);
//////	if (input){
//////	while (getline(input, line)) {
////////	cout <<
//////	output << line << endl;
//////	}
//////	}
//////
//////	return  0;
//////}
//////
////#include <iostream>
////#include <vector>
////#include <string>
////#include <map>
////#include <cmath>
////#include <set>
////#include <algorithm>
////#include <fstream>
////#include <iomanip>
////using namespace std;
//////int main(){
//////	ifstream input("input.txt");
//////	string line;
//////	if (input){
//////	while (getline(input, line)) {
//////	cout << line << endl;
//////	}
//////	}
//////
//////	return  0;
//////}
//////int main(){
////////	ifstream input("input.txt");
//////	ifstream input("input.txt");
//////	string line;
//////	int m,n;
//////	string current_line;
//////	if (input) {
//////		input >> n;
//////		input.ignore(1);
//////		input >>m;
//////		input.ignore(1);
////////		int cnt_rows=0;
//////		while (getline(input, line,',')){
////////			cout << line << endl;
////////			input >>current_line;
//////			for (const auto&t : line){
////////				if (t!=','){
////////		         1          2          3
////////		         1         2         3
//////				cout<<setw(11);
//////				cout<<t;
////////				}
//////				continue;
//////
//////			}
////////			cnt_rows+=1;
////////			if (cnt_rows!=n){
//////////			cout<<endl;
////////		}
//////		}
//////	}
////////	cout<<m;
////////	cout<<n;
//////	return  0;
//////}
////
////
//////         1          2          3
////
////
////int main()
////{
////	ifstream file("input.txt");
////
////	int n, m;
////	file >> n >> m;
////	file.ignore(1);
////	for (string line; getline(file, line);)
////	{
////		istringstream stream(line);
////		for (int u = 0; u < m; ++u)
////		{
////			string value;
////			getline(stream, value, ',');
////			cout << setw(10) << value;
////			if (u < m - 1)
////				cout << " ";
////		}
////		cout << endl;
////	}
////
////	return 0;
////}
////
////#include <iostream>
////#include <vector>
////#include <string>
////#include <map>
////#include <cmath>
////#include <set>
////#include <algorithm>
////#include <fstream>
////#include <iomanip>
////using namespace std;
//////int main(){
//////	ifstream input("input.txt");
//////	string line;
//////	if (input){
//////	while (getline(input, line)) {
//////	cout << line << endl;
//////	}
//////	}
//////
//////	return  0;
//////}
//////int main(){
////////	ifstream input("input.txt");
//////	ifstream input("input.txt");
//////	string line;
//////	int m,n;
//////	string current_line;
//////	if (input) {
//////		input >> n;
//////		input.ignore(1);
//////		input >>m;
//////		input.ignore(1);
////////		int cnt_rows=0;
//////		while (getline(input, line,',')){
////////			cout << line << endl;
////////			input >>current_line;
//////			for (const auto&t : line){
////////				if (t!=','){
////////		         1          2          3
////////		         1         2         3
//////				cout<<setw(11);
//////				cout<<t;
////////				}
//////				continue;
//////
//////			}
////////			cnt_rows+=1;
////////			if (cnt_rows!=n){
//////////			cout<<endl;
////////		}
//////		}
//////	}
////////	cout<<m;
////////	cout<<n;
//////	return  0;
//////}
////
////
//////         1          2          3
////
////
////int main()
////{
////	ifstream file("input.txt");
////
////	int n, m;
////	file >> n >> m;
////	file.ignore(1);
////	for (string line; getline(file, line);)
////	{
////		istringstream stream(line);
////		for (int u = 0; u < m; ++u)
////		{
////			string value;
////			getline(stream, value, ',');
////			cout << setw(10) << value;
////			if (u < m - 1)
////				cout << " ";
////		}
////		cout << endl;
////	}
////
////	return 0;
////}
////
////#include <iostream>
////
////using namespace std;
////
////int main() {
////  int a, b;
////  cin >> a >> b;
////
////  // пока оба числа положительны, будем их уменьшать, не меняя их НОД
////  while (a > 0 && b > 0) {
////
////    // возьмём большее из чисел и заменим его остатком от деления на второе
////    // действительно, если a и b делятся на x, то a - b и b делятся на x
////    // тогда и a % b и b делятся на x, так что можно a заменить на a % b
////    if (a > b) {
////      a %= b;
////    } else {
////      b %= a;
////    }
////
////  }
////
////  // если одно из чисел оказалось равно нулю, значит, на последней итерации
////  // большее число разделилось на меньшее
////  cout << a + b;
////
////  return 0;
////}
//#include <iostream>
//#include <map>
//#include <set>
//#include <vector>
//#include <string>
//using namespace std;
//
//class Rational {
//public:
//    Rational() {
//    	current_numerator	=0;
//    	current_denominator=1;
//    }
//
//    Rational(int numerator, int denominator) {
//    	current_numerator=numerator;
//    	current_denominator=denominator;
//    	Update_Enum_Denom();
//    }
//
//    void SetNumDenom(int numerator, int denominator) {
//    	current_numerator=numerator;
//    	current_denominator=denominator;
//    	Update_Enum_Denom();
//    }
//
//    int Numerator() const {
//    	return current_numerator;
//    }
//
//
//    int Denominator() const {
//    	return current_denominator;
//    }
//
//private:
//	int current_numerator;
//	int current_denominator;
//
//	void Update_Enum_Denom(){
//		if (current_denominator==0){
//			throw invalid_argument(to_string(current_denominator));
//		}
//		int gcd=GCD(abs(current_numerator),abs(current_denominator));
//
//		current_numerator=current_numerator/gcd;
//		current_denominator=current_denominator/gcd;
//		if ((current_numerator<0 and current_denominator<0) or (current_numerator>0 and current_denominator<0)){
//			current_numerator=-current_numerator;
//			current_denominator=-current_denominator;
//		}else if (current_numerator==0){
//			current_numerator=-current_numerator;
//			current_denominator=1;
//		}
//	}
//
//    int GCD(const int& a_copied,const int& b_copied) const {
//    	int a=a_copied;
//    	int b=b_copied;
//    	int gcd=0;
//    	  while (a > 0 && b > 0) {
//    	    if (a > b) {
//    	      a %= b;
//    	    } else {
//    	      b %= a;
//    	    }
//    	  }
//    	  gcd=a + b;
//    	  return gcd;
//    }
//};
//
//Rational operator+(const Rational& lhs, const Rational& rhs) {
//    	return Rational(lhs.Numerator()*rhs.Denominator()+rhs.Numerator()*lhs.Denominator(),
//    			rhs.Denominator()*lhs.Denominator());
//    }
//
//Rational operator-(const Rational& lhs, const Rational& rhs) {
//    	return Rational(lhs.Numerator()*rhs.Denominator()-rhs.Numerator()*lhs.Denominator(),
//    			rhs.Denominator()*lhs.Denominator());
//    }
//
//Rational operator*(const Rational& lhs, const Rational& rhs) {
//    	return Rational(lhs.Numerator()*rhs.Numerator(),rhs.Denominator()*lhs.Denominator());
//    }
//
//Rational operator/(const Rational& lhs, const Rational& rhs) {
//		int nom =lhs.Numerator()*rhs.Denominator();
//		int denom=lhs.Denominator()*rhs.Numerator();
//		if (denom==0){
//			throw domain_error("domain_error");
//		}
//    	return Rational(nom,denom);
//    }
//
//bool operator<(const Rational& lhs, const Rational& rhs) {
//	return lhs.Numerator()*rhs.Denominator()-rhs.Numerator()*lhs.Denominator()<0;
////    	return Rational(lhs.Numerator()*rhs.Denominator(),lhs.Denominator()*rhs.Numerator());
//    }
//
//bool operator==(const Rational& lhs, const Rational& rhs) {
//    	bool are_equal_enum=lhs.Numerator()==rhs.Numerator();
//    	bool are_equal_denom=lhs.Denominator()==rhs.Denominator();
//    	if((are_equal_denom==false) or (are_equal_enum=false )){
//    		return false;
//    	}else{return true;}
//    }
//
//ostream& operator<<(ostream& stream, const Rational& r) {
//	stream<<r.Numerator()<<"/"<<r.Denominator();
//	return stream;
//}
//
//istream& operator>>(istream& stream,  Rational& r) {
//	int num=0;
//	int denom=0;
//	stream >>num ;	stream.ignore(1);	stream >> denom;
//	if (denom!=0){
//		r.SetNumDenom(num,denom);
//	}
//	return stream;
//}
//
//// Реализуйте для класса Rational оператор(ы), необходимые для использования его
//// в качестве ключа map'а и элемента set'а
//
//int main() {
//    try {
//        Rational r(1, 0);
//        cout << "Doesn't throw in case of zero denominator" << endl;
//        return 1;
//    } catch (invalid_argument&) {
//    }
//
//    try {
//        auto x = Rational(1, 2) / Rational(0, 1);
//        cout << "Doesn't throw in case of division by zero" << endl;
//        return 2;
//    } catch (domain_error&) {
//    }
//
//    cout << "OK" << endl;
//    return 0;
//}
//
//
