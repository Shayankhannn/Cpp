#include <iostream>
using namespace std;


// function

int addNumber (int firstNumber,int secondNumber){
int result =  firstNumber + secondNumber ;
return result;
};

int main() {

    int firstNumber = {4}; // statement
    int secondNumber = {5}; // statement

    cout << "first Number " << firstNumber  << endl; // statement
    cout << "second Number " << secondNumber  << endl; // statement
    cout << "sum of Number is " << firstNumber + secondNumber  << endl; // statement
   int sum =  addNumber(3,40);
    cout << "sum of func is  " << sum  << endl; // statement

    return 0;

}
