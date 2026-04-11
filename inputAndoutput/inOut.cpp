#include <iostream>
using namespace std;
#include <string>
int main() {

    // printing data 

    cout << "printing data" << endl;
    
    int num = {5};
    cout << "num" << num << endl;

    // printing error

    cerr << "this is error " <<  endl;
    
    // printing log
    clog << "this is log " <<  endl;

    // getting data 

    int age;
    string name;

    cout << "enter your name " << endl;
    cin>>name;
    
    cout << "enter your age " << endl;
    cin>>age;
    
    cout << "your name is " << name << " and your age is " << age  << endl;
    
    // get line method to solve space issue 
    
    string name2 ;
    
    cout << "enter your full name " << endl;
    cin.ignore(); // so get line doesnt get ignore because of empty space due to hitting enter
    getline(cin,name2);

    cout << "your full name is  " << name2 << endl;



    return 0;
}
