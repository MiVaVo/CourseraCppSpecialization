//#include <iostream>
//using namespace std;
//
//class Rational {
//public:
//    Rational() {
//    	current_numerator	=0;
//    	current_denominator=1;
////    	gcd=GCD(numerator,denominator);
////    	numerator=numerator/gcd;
////    	denominator=denominator/gcd;
//        // Реализуйте конструктор по умолчанию
//    }
//
//    Rational(int numerator, int denominator) {
//    	current_numerator=numerator;
//    	current_denominator=denominator;
//    	Update_Enum_Denom();
//        // Реализуйте конструктор
//    }
//
//    int Numerator() const {
////    	cout<<numerator<<endl;
////    	cout<<denominator<<endl;
//
//    	return current_numerator;
//    }
//
//    int Denominator() const {
//    	return current_denominator;
//    }
//
//
//
//private:
//	int current_numerator;
//	int current_denominator;
//	void Update_Enum_Denom(){
////		cout<<current_numerator;
////		cout<<current_denominator;
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
//    int GCD(const int& a_copied,const int& b_copied) const {
//    	int a=a_copied;
//    	int b=b_copied;
//
//    	int gcd=0;
//
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
//
//int main() {
//    {
//        const Rational r(3, 10);
//        if (r.Numerator() != 3 || r.Denominator() != 10) {
//            cout << "Rational(3, 10) != 3/10" << endl;
//            return 1;
//        }
//    }
//
//    {
//        const Rational r(8, 12);
//        if (r.Numerator() != 2 || r.Denominator() != 3) {
//            cout << "Rational(8, 12) != 2/3" << endl;
//            return 2;
//        }
//    }
//
//    {
//        const Rational r(-4, 6);
//        if (r.Numerator() != -2 || r.Denominator() != 3) {
//            cout << "Rational(-4, 6) != -2/3" << endl;
//            return 3;
//        }
//    }
//
//    {
//        const Rational r(4, -6);
//        if (r.Numerator() != -2 || r.Denominator() != 3) {
//            cout << "Rational(4, -6) != -2/3" << endl;
//            return 3;
//        }
//    }
//
//    {
//        const Rational r(0, 15);
//        if (r.Numerator() != 0 || r.Denominator() != 1) {
//            cout << "Rational(0, 15) != 0/1" << endl;
//            return 4;
//        }
//    }
//
//    {
//        const Rational defaultConstructed;
//        if (defaultConstructed.Numerator() != 0 || defaultConstructed.Denominator() != 1) {
//            cout << "Rational() != 0/1" << endl;
//            return 5;
//        }
//    }
//
//    cout << "OK" << endl;
//    return 0;
//}
