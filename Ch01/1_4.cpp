//#include <iostream>
//
//using namespace std;
//
//void some_function() // A function that does not return a value.
//{
//	double d = 2.2;	// Initialize Floating point number.
//	int i = 7;		// Initialize integer number.
//	d = d + i;		// Assignment to d by add.
//	i = d * i;		// Assignment to d by multiply. Value truncation occurs during conversion.
//}
//
////*** 1.4.2 Initialization
//
//double d1 = 2.3;	// Initialize d1 as 2.3
//double d2 {2.3};	// Prevent type conversion with risk of missing information
//double d3 = {2.3};	// Initialize d3 as 2.3 ('=' assignment is optional when using {...}
//
//complex<double> z = 1;			// Complex number based on double-precision floating-point scalar value
//complex<double> z2 {d1,d2};
//complex<double> z3 = {d1,d2};	// ('=' assignment is optional when using {...}
//vector<int> v {1,2,3,4,5,6,};	// integer vector
//

//int main()
//{
//	int i1 = 7.8;			// warning : Value truncation may occur.
//	int i2{ 7.8 };			// error : Double to integer conversion need narrowing conversions.
//}

////If compiler can infer the type from the initial value, you do not have to specify the type.
//auto b = true;		// bool
//auto ch = 'x';		// char
//auto i = 123;		//int
//auto d = 1.2;		//double
//auto z = sqrt(i);	// type of z equals return type of sqrt(i)
//auto bb{ true };	// type of bb is bool