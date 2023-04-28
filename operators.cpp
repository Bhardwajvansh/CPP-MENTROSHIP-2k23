#include<bits/stdc++.h>
using namespace std;
 
int main(){
    // arithmetic opts
    int a,b;
    a=10;
    b=3;
    // a=a%b;
    // a%=b;
    // a/=b;
    // a+=b;
    // a-=b;
    // a*=b;
    // cout<<a+b<<endl;
    // cout<<a-b<<endl;
    // cout<<a*b<<endl;
    // cout<<a/b<<endl;
    // cout<<a%b<<endl;

    // cout<< ++a <<endl;
    // cout<< a++ <<endl;
    // cout<< a-- <<endl;
    // cout<< --a <<endl;

    // Relational Operators
    // cout<<(a>b)<<endl;
    // cout<<(a<b)<<endl;
    // cout<<(a==b)<<endl;
    // cout<<(a>=b)<<endl;
    // cout<<(a<=b)<<endl;
    // cout<<(a!=b)<<endl;

    //Logical Operator
    // cout<<(1&&0)<<endl;
    // cout<<(1||0)<<endl;
    // cout<<!0<<endl;

    // bitwise opts
    // cout<<(a&b)<<endl;
    // cout<<(a|b)<<endl;
    // cout<<(a^b)<<endl;
    // cout<<(~a)<<endl;


    a=5;
    cout<< (a--) + (--a) <<endl;
    //       5   +   3  = 8      
    cout<< (--a) + (a--) <<endl;
    //       4   +   3  = 7
    cout<< (a++) + (++a) <<endl;
    //       5   +   7  = 12
    cout<< (++a) + (a++) <<endl;
    //       6   +   7  = 13
    return 0;
    
}