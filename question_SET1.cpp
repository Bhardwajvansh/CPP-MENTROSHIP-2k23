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


// soln 8

// #include<bits/stdc++.h>
// using namespace std;
 
// void print_array(int n,int arr[]){
//     for(int i=0;i<n;i++){
//         cin>>arr[i];
//     }   
//     for(int i=0;i<n;i++){
//         cout<<arr[i]<<" ";
//     } 
// }

// int main(){
//     int n;
//     cin>>n;
//     int arr[n]; 
//     print_array(n,arr);
//     return 0;
// }


// soln 9

// #include<bits/stdc++.h>
// using namespace std;
 
// int main(){
//     int n;
//     cin>>n;
//     int arr[n];
//     bool check[1000]={false};
//     for(int i=0;i<n;i++){
//         cin>>arr[i];
//     }  
//     for(int i=0;i<n;i++){                // {1,1,1,2,2}
//         int cnt=0;                       // i= 0  j->0-4 
//         for(int j=0;j<n;j++){
//             if(arr[i]==arr[j]) cnt+=1;
//         }        
//         if(check[arr[i]]==false)cout<<"the element "<<arr[i]<<" is present "<<cnt<<" number of times\n";
//         check[arr[i]]=true; 
//     }
//     return 0;
// }

// line 207 check[1]=false check[2]=flase
// line 208 check[1]=true check[2]=true

// soln 10

// #include<bits/stdc++.h>
// using namespace std;

// void min_max(int n,int arr[]){
//     int mn(1000000),mx(0);
//     for(int i=0;i<n;i++){                // {4,3,5,2,1}
//         if(arr[i] > mx){                 // i=0    mn=0  mx=5
//             mx=arr[i];
//         }
//         if(arr[i] < mn){
//             mn=arr[i];
//         }
//     }
//     cout<<"the minimum value is "<<mn<<endl;
//     cout<<"the maximum value is "<<mx;
// }

// int main(){
//     int n;
//     cin>>n;
//     int arr[n];
//     for(int i=0;i<n;i++){
//         cin>>arr[i];
//     }
//     min_max(n,arr);
//     return 0;
// }


// soln 11

// #include<bits/stdc++.h>
// // #include <string>
// using namespace std;
 
// int main(){
//     string s;
//     cin>>s;            //  0 1 2 3 4
//     int n=s.length();   // v a n s h
//     for(int i=n-1 ; i>=0 ; i--){
//         cout<<s[i];
//     }
//     return 0;
// }


// soln 12

// #include<bits/stdc++.h>
// using namespace std;
 
// void rev(){
//     string s;
//     cin>>s;
//     for(int i=s.length()-1 ; i>=0 ; i--){
//         cout<<s[i];
//     }
// }

// int main(){
//     rev();   
//     return 0;
// }


// soln 13

// #include<bits/stdc++.h>
// using namespace std;

// void count_vowels(string str){
//     int cnt=0;
//     for(int i=0;i<str.length();i++){
//         if(str[i]=='a' || str[i]=='A' || str[i]=='e' ||str[i]=='E' ||str[i]=='i' ||str[i]=='I' ||str[i]=='o' ||str[i]=='O' ||str[i]=='u' ||str[i]=='U'){
//             cnt++;
//         }
//     }
//     cout<<"number of vowels "<<cnt<<endl;
//     cout<<"number of consonants "<<str.length()-cnt;
// }

// int main(){
//     string s;
//     cin>>s;
//     count_vowels(s);
//     return 0;
// }

// soln 14

// RCB  vansh
// BCR  ahnsv

#include<bits/stdc++.h>
using namespace std;
 
int main(){
    string s;
    cin>>s;
    int n=s.length();
    for(int i=0;i<n;i++){
        for(int j=1;j<n;j++){
            if(s[j-1]>s[j]){
                char temp=s[j-1];
                s.insert(j,to_string(temp));
                s.insert(j-1,to_string(s[j]));
            }
        }
    }
    cout<<s<<endl;
    return 0;
}

// #include<bits/stdc++.h>
// using namespace std;
 
// int main(){
//     string s;
//     cin>>s;
//     sort(s.begin(),s.end());
//     cout<<s;
//     return 0;
// }