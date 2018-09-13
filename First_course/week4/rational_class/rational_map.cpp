//#include <iostream>
//#include <map>
//#include <set>
//#include <vector>
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
//    	return Rational(lhs.Numerator()*rhs.Denominator(),lhs.Denominator()*rhs.Numerator());
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
//    {
//        const set<Rational> rs = {{1, 2}, {1, 25}, {3, 4}, {3, 4}, {1, 2}};
//        if (rs.size() != 3) {
//            cout << "Wrong amount of items in the set" << endl;
//            return 1;
//        }
//
//        vector<Rational> v;
//        for (auto x : rs) {
//            v.push_back(x);
//        }
//        if (v != vector<Rational>{{1, 25}, {1, 2}, {3, 4}}) {
//            cout << "Rationals comparison works incorrectly" << endl;
//            return 2;
//        }
//    }
//
//    {
//        map<Rational, int> count;
//        ++count[{1, 2}];
//        ++count[{1, 2}];
//
//        ++count[{2, 3}];
//
//        if (count.size() != 2) {
//            cout << "Wrong amount of items in the map" << endl;
//            return 3;
//        }
//    }
//
//    cout << "OK" << endl;
//    return 0;
//}
