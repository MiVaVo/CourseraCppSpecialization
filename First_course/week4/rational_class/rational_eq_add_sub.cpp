//#include <iostream>
//using namespace std;
//
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
//
//    	  }
//    	  gcd=a + b;
//    	  return gcd;
//    }
//
//};
//Rational operator+(const Rational& lhs, const Rational& rhs) {
//    	int new_numerator=lhs.Numerator()*rhs.Denominator()+rhs.Numerator()*lhs.Denominator();
//    	int new_denominator=rhs.Denominator()*lhs.Denominator();
//    	return Rational(new_numerator,new_denominator);
//    }
//
//
//Rational operator-(const Rational& lhs, const Rational& rhs) {
//    	int new_numerator=lhs.Numerator()*rhs.Denominator()-rhs.Numerator()*lhs.Denominator();
//    	int new_denominator=rhs.Denominator()*lhs.Denominator();
//    	return Rational(new_numerator,new_denominator);
//    }
//bool operator==(const Rational& lhs, const Rational& rhs) {
//    	bool are_equal_enum=lhs.Numerator()==rhs.Numerator();
//    	bool are_equal_denom=lhs.Denominator()==rhs.Denominator();
//    	if((are_equal_denom==false) or (are_equal_enum=false )){
//    		return false;
//    	}else{return true;}
//    }
//
//
//
//int main() {
//    {
//        Rational r1(4, 6);
//        Rational r2(2, 3);
//        bool equal = r1 == r2;
//        if (!equal) {
//            cout << "4/6 != 2/3" << endl;
//            return 1;
//        }
//    }
//
//    {
//        Rational a(2, 3);
//        Rational b(4, 3);
//        Rational c = a + b;
//        bool equal = c == Rational(2, 1);
//        if (!equal) {
//            cout << "2/3 + 4/3 != 2" << endl;
//            return 2;
//        }
//    }
//
//    {
//        Rational a(5, 7);
//        Rational b(2, 9);
//        Rational c = a - b;
//        bool equal = c == Rational(31, 63);
//        if (!equal) {
//            cout << "5/7 - 2/9 != 31/63" << endl;
//            return 3;
//        }
//    }
//
//    cout << "OK" << endl;
//    return 0;
//}
