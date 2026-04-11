#include <iostream>
using namespace std;


// function

int sum (int firstNumber,int secondNumber){
return firstNumber + secondNumber ;
};

int main() {

    int firstNumber = {4}; // statement
    int secondNumber = {5}; // statement

    cout << "first Number " << firstNumber  << endl; // statement
    cout << "second Number " << secondNumber  << endl; // statement
    cout << "sum of Number is " << firstNumber + secondNumber  << endl; // statement
   int result =  sum(3,40);
    cout << "sum of func is  " << result  << endl; // statement

    return 0;

}
