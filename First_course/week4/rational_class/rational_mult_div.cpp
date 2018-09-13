//#include <iostream>
//using namespace std;
//
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
//
//    int Numerator() const {
//    	return current_numerator;
//    }
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
//bool operator==(const Rational& lhs, const Rational& rhs) {
//    	bool are_equal_enum=lhs.Numerator()==rhs.Numerator();
//    	bool are_equal_denom=lhs.Denominator()==rhs.Denominator();
//    	if((are_equal_denom==false) or (are_equal_enum=false )){
//    		return false;
//    	}else{return true;}
//    }
//
//
//int main() {
//    {
//        Rational a(2, 3);
//        Rational b(4, 3);
//        Rational c = a * b;
//        bool equal = c == Rational(8, 9);
//        if (!equal) {
//            cout << "2/3 * 4/3 != 8/9" << endl;
//            return 1;
//        }
//    }
//
//    {
//        Rational a(5, 4);
//        Rational b(15, 8);
//        Rational c = a / b;
//        bool equal = c == Rational(2, 3);
//        if (!equal) {
//            cout << "5/4 / 15/8 != 2/3" << endl;
//            return 2;
//        }
//    }
//
//    cout << "OK" << endl;
//    return 0;
//}
