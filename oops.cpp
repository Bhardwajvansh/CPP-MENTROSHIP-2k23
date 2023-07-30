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

// #include<bits/stdc++.h>
// using namespace std;


// class cars{
//     private:
//     string name;
//     string model;
//     float milage;

//     public:
//     virtual void name_display(){
//         cout<<name<<" is the name of the car\n";
//     }
//     string show_name(){
//         return name;
//     }
//     void milage_change(int n){
//         milage=n;
//         cout<<"milage has been upadted to "<<n<<endl;
//     }
//     cars(string n,string m,int ml){
//         name=n;
//         model=m;
//         milage=ml;
//     }
// };

// class bikes:public cars{
//     private:
//     int length;

//     public:
//     bikes(string n,string m,int ml,int l) : cars(n,m,ml){
//         length=l;
//     }
//     void name_display(){
//         cout<<show_name()<<" is the name of the bike\n";
//     }
// };

// int main(){
//     cars c1=cars("brezza","lxi",15);
//     // c1.name_display();

//     cars c2=cars("bmw","X3",15);
//     // c2.name_display();
//     // c2.milage_change(10);

//     bikes b1=bikes("ktm","duke",20,2);
//     // b1.name_display();    

//     cars* car;
//     car=&b1;
//     car->name_display();
//     return 0;
// }


// #include<bits/stdc++.h>
// using namespace std;

// class car{
//     private:
//     string name;
//     float milage;
//     string colour;
//     public:
//     void display(){
//         cout<<"name of the car "<<name<<endl;
//         cout<<"milage of the car "<<milage<<endl;
//         cout<<"colour of the car "<<colour<<endl;
//     }
//     void display(string model){
//         cout<<"name of the car "<<name<<endl;
//         cout<<"milage of the car "<<milage<<endl;
//         cout<<"colour of the car "<<colour<<endl;
//         cout<<"model of the car "<<model<<endl;
//     }
//     car(string nam,float milag,string colou){
//         name=nam;
//         milage = milag;
//         colour=colou;
//     }
//     car(string nam,float milag){
//         name=nam;
//         milage = milag;
//     }
//     car(){
//         name = "";
//         milage = NULL;
//     }
// };

// class trucks : public car{
//     private:
//     string length;
// };

// int main(){
//     car obj1=car("bmw",10,"black");
//     obj1.display();
//     return 0;
// }


// operator overloading - giving a special meaning to an existing opeartor 
// we cannot use operator overloading on some operators
// :: , sizeof() , . , ?:


#include<bits/stdc++.h>
using namespace std;

class Complex{
    private:
    int real;
    int imaginary;
    public:
    void display(){
        cout<<real<<"+"<<imaginary<<"i"<<endl;
    }
    Complex(int r,int i){
        real=r;
        imaginary=i;
    }
    // void operator +(Complex o){
    //     real = real + o.real;
    // //  real =    1  +  3  = 4
    //     imaginary = imaginary + o.imaginary;
    // //  imaginary =       2    +     4  =  6
    // }
    // void operator -(Complex o){
    //     real = real - o.real;
    //     // real = 1 - 3 = -2
    //     imaginary = imaginary - o.imaginary;
    //     // imaginary = 2 - 4 = -2
    // }
    Complex operator +(Complex o){
        Complex temp=Complex(0,0);   // 0 + 0i 
        temp.real= real + o.real;
        //       =   1  +  3  =   4
        temp.imaginary = imaginary + o.imaginary;
        //             =    2       +     4    =  6    
        return temp;   // 4 + 6i
    }

};

int main(){
    Complex c1=Complex(1,2);
    c1.display();
    Complex c2 = Complex(3,4);
    // c1+c2;
    // c1.display();
    //c1-c2;
    //c1.display();

    // c1+c2;
    // c2+c1;
    // c2.display();

    Complex c3=c1+c2;
    c3.display();
    return 0;
}


// (1+2i) + (3+4i) = 4 + 6i 
// (1+2i) - (3+4i) = -2 - 2i 