// classes and objects

#include<bits/stdc++.h>
using namespace std;
 
class cars{ 
    private:  // priovate and public ->  Access Specifiers
    int speed_limit;
    string name;
    string model;
    string company;
    public:
    int speed(){
        cout<<name;
        cout<<speed_limit<<endl;
    }
    int speed(int n){
        cout<<speed_limit*n<<endl;
    }  
    int speed(int n,int m){
        cout<<speed_limit*n<<endl;
        cout<<speed_limit*m<<endl;
    }  
};

int main(){
    cars brezza; // sizeof(cars)
    cout<<brezza.speed()<<endl;
    cars x3;
    return 0;
}


// Encapsulation -> wrapping up data and information under a single unit.
// Abstraction -> displaying only essential information and hiding the details.
// Polymorphism -> ability of a message to be displayed in more than one form.
// Inheritance -> capability of a class to derive properties and characteristics from another class.