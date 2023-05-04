// soln 1

// #include<bits/stdc++.h>
// using namespace std;
 
// int main(){
//     int n;
//     cin>>n;
//     int sum=0;
//     for(int i=1;i<=n;i++){
//         sum=sum+(2*i)-1;
//         cout<<(2*i)-1<<" ";
//     }
//     cout<<endl;
//     cout<<sum;
//     return 0;
// }


// soln 2

// #include<bits/stdc++.h>
// using namespace std;
 
// int main(){
//     int sum=0;
//     for(int i=0;i<10;i++){
//         int num;
//         cin>>num;
//         sum = sum+num;
//     }
//     cout<<"sum :"<<sum<<endl<<"avg :"<<sum/10;
//     return 0;
// }


// soln 3

// #include<bits/stdc++.h>
// using namespace std;
 
// int main(){
//     int n;
//     cin>>n;
//     // n=4
//     for(int i=1;i<=n;i++){            // i=1->4 j=1,2,3,4  
//         for(int j=1;j<=n;j++){        //        * * * *
//             cout<<"* ";               //        * * * * 
//         }                             //        * * * * 
//         cout<<endl;                   //        * * * *
//     }
//     return 0;
// }


// soln 4

// #include<bits/stdc++.h>
// using namespace std;
 
// int main(){
//     int n;
//     cin>>n;
//     // n=4
//     for(int i=1;i<=n;i++){            // i= 1  j=1            *
//         for(int j=1;j<=i;j++){        // i= 2  j=1,2          * *
//             cout<<"* ";               // i= 3  j=1,2,3        * * *
//         }                             // i= 4  j=1,2,3,4      * * * *
//         cout<<endl;
//     }
//     return 0;
// }


// soln 5

// #include<bits/stdc++.h>
// using namespace std;
 
// int main(){
//     int n;
//     cin>>n;
//     for(int i=1;i<=n;i++){
//         for(int j=1;j<=i;j++){
//             cout<<j<<" ";
//         }
//         cout<<endl;
//     }   
//     return 0;
// }


// * * * * r1 -> 4
// * * *   r2 -> 3
// * *     r3 -> 2
// *       r4 -> 1


// #include<bits/stdc++.h>
// using namespace std;
 
// int main(){
//     int n;
//     cin>>n;
//     // n=4
//     for(int i=1;i<=n;i++){                // i= 1 j= 4 - 1 + 1 = 4 -> 1,2,3,4
//         for(int j=1;j<=n-i+1;j++){        // i= 2 j= 4 - 2 + 1 = 3 -> 1,2,3
//             cout<<"* ";                   // i= 3 j= 4 - 3 + 1 = 2 -> 1,2
//         }                                 // i= 4 j= 4 - 4 + 1 = 1 -> 1
//         cout<<endl;
//     }
//     return 0;
// }


// soln 6

// #include<bits/stdc++.h>
// using namespace std;

// void mtable(int n){
//     for(int i=1;i<=10;i++){
//         cout<<n<<" * "<<i<<" = "<<i*n<<endl;
//     }
// }

// int main(){
//     int n;
//     cin>>n;
//     mtable(n);
//     mtable(2*n);
//     mtable(4*n);
//     return 0;
// }

// soln 7

// #include<bits/stdc++.h>
// #include<string>
// using namespace std;
 
// int main(){
//     string s;
//     cin>>s;
//     int len=s.length();
//     int upper=0,lower=0,other=0;
//     // VANSHvansh1234**
//     for(int i=0;i<len;i++){
//         if(s[i]>='A' && s[i]<='Z'){
//             upper = upper + 1;
//         }
//         else if(s[i]>='a' && s[i]<='z'){
//             lower++;
//         }
//         else{
//             other++; 
//         }
//     }
//     cout<<"upper: "<<upper<<endl;
//     cout<<"lower: "<<lower<<endl;
//     cout<<"other: "<<other<<endl;
//     return 0;
// }