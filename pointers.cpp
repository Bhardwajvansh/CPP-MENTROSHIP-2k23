// #include<bits/stdc++.h>
// using namespace std;
 
// int main(){
//     int num=10;

//     int* ptr;
//     ptr=&num;  

//     *ptr=12;

//     cout<<num<<endl;
//     cout<<&num<<endl; 
//     cout<<ptr<<endl; 
//     cout<<*ptr<<endl;
//     return 0;
// }


// #include<bits/stdc++.h>
// using namespace std;
 
// int main(){
//     int num=20;
//     int * ptr=&num;

//     cout<<num<<endl;
//     cout<<&num<<endl;   
//     return 0;
// }


// #include<bits/stdc++.h>
// using namespace std;
 
// int main(){
//     int arr[5]={1,2,3,4,5};
//     int* ptr;

//     ptr=arr;       // ptr=arr[0]

//     for(int i=0;i<5;i++){ // i=0,1,2,3,4
//         cout<<*(ptr+i)<<endl;
//     }
//     return 0;
// }

// #include<bits/stdc++.h>
// using namespace std;
 
// int main(){
//     int arr[5]={1,2,3,4,5};
//     int* ptr;

//     ptr=arr;       // ptr=arr[0]

//     for(int i=0;i<5;i++){ // i=0,1,2,3,4
//         cout<<*ptr<<endl;
//         ptr++;
//     }
//     return 0;
// }


// #include<bits/stdc++.h>
// using namespace std;
 
// int main(){
//     string s="RCB";
//     string* ptr=&s;
//     cout<<*ptr<<endl;
//     return 0;
// }
// R
// C
// B


// pasing the parametes by refrence in the function -> passing the address on the variable

// #include<bits/stdc++.h>
// using namespace std;

// void sum(int* a,int* b){
//     *a=100;
//     cout<<"inside the function "<<*a<<endl;
// }

// int main(){
//     int a=5;
//     int b=10;
//     sum(&a,&b);
//     cout<<"outside the function "<<a<<endl;
//     return 0;
// }