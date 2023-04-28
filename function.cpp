#include<bits/stdc++.h>
using namespace std;

// function definition
void compare(int a,int  b){
    if(a>b) cout<<"a is greated";
    else cout<<"b is greater";
}

void mtable(){
    for(int i=1;i<=10;i++){
        cout<<"5 * "<<i<<" = "<<5*i<<endl;
    }
}

int main(){
    // compare(12,11);
    mtable();
    return 0;
}