#include<bits/stdc++.h>
using namespace std;
 
int main(){
    // variable names
    // variable name contains chracters from a-z A-Z underscore'_' and 0-9.
    // variable name can only start with an underscore'_' or characters including a-z and A-Z.
    int vansh20;
    int _20vansh;
    // int 20vansh; -> not acceptible


    int number;  
    unsigned int number;  
    signed int number;  
    short int number;  
    long int number;  
    number = -2;
    number =3.14;
    // cout<<number;

    char character;
    character=' ';
    character='a';
    character='%';
    // cout<<character;

    bool vansh;
    vansh=false;  // false -> 0
    vansh=0;
    vansh=true;   // true -> 1
    vansh=1;  
    // cout<<vansh;

    float f1;
    f1=3.14;
    f1=3.141592;
    f1=3;
    // cout<<f1;

    double d1;
    d1=5.34;
    // cout<<d1;

    wchar_t ch;
    ch='o';
    // cout<<ch;

    cout<<sizeof(character)<<endl;
    cout<<sizeof(number)<<endl;
    cout<<sizeof(f1)<<endl;
    cout<<sizeof(d1)<<endl;
    cout<<sizeof(vansh)<<endl;

    return 0;
}