#include <iostream>
#include <iomanip>

using namespace std;
int main() {

 // declare and initialize the variable 

 float number1 {1.12345678901234567890f};
 double number2 {1.12345678901234567890};
 long double number3 {1.12345678901234567890L};

// print out the sizes 

cout << "size of float is " << sizeof(float) << endl;
cout << "size of double is " << sizeof(double) << endl;
cout << "size of long double is " <<sizeof(long double) << endl;


// precision 

cout << setprecision(20);

cout << "number 1 is " << number1 << endl; // 7 precision is 7 after that its just grabage number
cout << "number 2 is " << number2 << endl; // 15 precision is 15ish after that its just grabage number
cout << "number 3 is " << number3 << endl; // 15+ preciosion is more than 15

// flaot problem : the presision is too limited 
// for a lot of application 
float number4 {192400023.0f};  // error : narrowing conversion 

cout << number4 << endl;

double number5 {192400023};
double number6 {1.92400023e8};
double number7 {1.924e8};
double number8 {0.00000000003498};
double number9 {3.498e-11}; // multiply with 10 exp(-11)


cout << "number5 is " << number5 << endl;
cout << "number6 is " << number6 << endl;
cout << "number7 is " << number7 << endl;
cout << "number8 is " << number8 << endl;
cout << "number9 is " << number9 << endl;


cout <<  "------------------------------" <<  endl;
// infinity and nan ]

double number10{5.6};
double number11{}; // initialize to 0
double number12{}; // initialize to 0

// infinity 

double result = number10/number11;

cout << number10 << "/" << number11 << "is " << result << endl;
cout << result << "+" << number10 << "is " << result + number10 << endl;

// nan
result = number11/number12;

cout << number11 << "/" << number12 << " = " << result << endl;


return 0;
}
