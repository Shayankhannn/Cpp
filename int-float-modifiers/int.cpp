#include <iostream>
using namespace std;
int main() {

  short num1 {2}; // 2 byte
    short int num2 {-3}; // 
   signed short  num2 {-3}; 
   signed short int num2 {-333};
   unsigned short int num2 {300};

// --------------------------

int num1 {23}; // 4 byte
signed num1 {23};
signed int num1 {-23};
unsigned int num1 {23};

// -----------------

long num {43};  // 4 or 8 byte
long int num1 {13141} ; 
signed long   num2{32};
signed long  int num2{32};
unsigned long  int num2{32};

// -----------------

long long num {23}; // 8 byte
long long int num {23}; 
signed long long  num {23}; 
signed long long int  num {23}; 
unsigned long long int  num {23}; 

    return 0;
}