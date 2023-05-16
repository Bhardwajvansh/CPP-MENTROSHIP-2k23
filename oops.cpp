// classes and objects

// #include<bits/stdc++.h>
// using namespace std;
 
// class cars{ 
//     private:  // priovate and public ->  Access Specifiers
//     int speed_limit;
//     string name;
//     string model;
//     string company;
//     public:
//     int speed(){
//         cout<<name;
//         cout<<speed_limit<<endl;
//     }
//     int speed(int n){
//         cout<<speed_limit*n<<endl;
//     }  
//     int speed(int n,int m){
//         cout<<speed_limit*n<<endl;
//         cout<<speed_limit*m<<endl;
//     }  
// };

// int main(){
//     cars brezza; // sizeof(cars)
//     cout<<brezza.speed()<<endl;
//     cars x3;
//     return 0;
// }


// Encapsulation -> wrapping up data and information under a single unit.
// Abstraction -> displaying only essential information and hiding the details.
// Polymorphism -> ability of a message to be displayed in more than one form.
// Inheritance -> capability of a class to derive properties and characteristics from another class.


// classes and objects

#include<bits/stdc++.h>
using namespace std;


class cars{
    private:
    string name;
    string model;
    float milage;

    public:
    virtual void name_display(){
        cout<<name<<" is the name of the car\n";
    }
    string show_name(){
        return name;
    }
    void milage_change(int n){
        milage=n;
        cout<<"milage has been upadted to "<<n<<endl;
    }
    cars(string n,string m,int ml){
        name=n;
        model=m;
        milage=ml;
    }
};

class bikes:public cars{
    private:
    int length;

    public:
    bikes(string n,string m,int ml,int l) : cars(n,m,ml){
        length=l;
    }
    void name_display(){
        cout<<show_name()<<" is the name of the bike\n";
    }
};

int main(){
    cars c1=cars("brezza","lxi",15);
    // c1.name_display();

    cars c2=cars("bmw","X3",15);
    // c2.name_display();
    // c2.milage_change(10);

    bikes b1=bikes("ktm","duke",20,2);
    // b1.name_display();    

    cars* car;
    car=&b1;
    car->name_display();
    return 0;
}