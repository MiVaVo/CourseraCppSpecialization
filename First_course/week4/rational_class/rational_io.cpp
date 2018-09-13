//#include <iostream>
//#include <sstream>
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
//bool operator==(const Rational& lhs, const Rational& rhs) {
//    	bool are_equal_enum=lhs.Numerator()==rhs.Numerator();
//    	bool are_equal_denom=lhs.Denominator()==rhs.Denominator();
//    	if((are_equal_denom==false) or (are_equal_enum=false )){
//    		return false;
//    	}else{return true;}
//    }
//ostream& operator<<(ostream& stream, const Rational& r) {
//	stream<<r.Numerator()<<"/"<<r.Denominator();
//	return stream;
//}
//
//istream& operator>>(istream& stream,  Rational& r) {
//	int num=0;	int denom=0;	stream >>num ;	stream.ignore(1);	stream >> denom;
//	if (denom!=0){
//		r.SetNumDenom(num,denom);
//	}
//	return stream;
//}
//
//int main() {
//    {
//        ostringstream output;
//        output << Rational(-6, 8);
//        if (output.str() != "-3/4") {
//            cout << "Rational(-6, 8) should be written as \"-3/4\"" << endl;
//            return 1;
//        }
//    }
//
//    {
//        istringstream input("5/7");
//        Rational r;
//        input >> r;
//        bool equal = r == Rational(5, 7);
//        if (!equal) {
//            cout << "5/7 is incorrectly read as " << r << endl;
//            return 2;
//        }
//    }
//
//    {
//        istringstream input("5/7 10/8");
//        Rational r1, r2;
//        input >> r1 >> r2;
//        bool correct = r1 == Rational(5, 7) && r2 == Rational(5, 4);
//        if (!correct) {
//            cout << "Multiple values are read incorrectly: " << r1 << " " << r2 << endl;
//            return 3;
//        }
//
//        input >> r1;
//        input >> r2;
//        correct = r1 == Rational(5, 7) && r2 == Rational(5, 4);
//        if (!correct) {
//            cout << "Read from empty stream shouldn't change arguments: " << r1 << " " << r2 << endl;
//            return 4;
//        }
//    }
//
//    cout << "OK" << endl;
//    return 0;
//}
