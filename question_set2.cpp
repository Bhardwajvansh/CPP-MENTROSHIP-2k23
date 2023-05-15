// 1) Write a c++ program to calculate the power of a number using recursion like power(int number, int power) like power(2, 3) should return 8?

// 2)Write a program to reverse String in c++ using Recursion.

// 3)How to calculate the sum of digits using recursion in c++?

// 4)How to solve the Tower of Hanoi problem using recursion? 
// To know more about the problem: https://www.educative.io/answers/what-is-the-tower-of-hanoi-problem

// 5)Write a program to find all pairs of an integer array whose sum is equal to a given number?

// 6)Given an unsorted array of integers, find the length of the longest consecutive elements sequence?

// 7)How to rotate an array left and right by a given number K?

// soln 7

//{1,2,3,4,5}  k=3  // {4,5,1,2,3}

// #include<bits/stdc++.h>
// using namespace std;
 
// int main(){
//     int n;
//     int k;
//     cin>>n>>k;
//     int arr[n];
//     for(int i=0;i<n;i++){
//         cin>>arr[i];
//     }
//     for(int i=(n-k+1);i<n;i++){
//         cout<<arr[i]<<" ";
//     }
//     for(int i=0;i<k;i++){
//         cout<<arr[i]<<" ";
//     }
//     return 0;
// }


// soln 6

// {1,1,1,1,2,2,2,3,3}

// #include<bits/stdc++.h>
// using namespace std;
 
// int main(){
//     int n;
//     cin>>n;
//     int arr[n];
//     for(int i=0;i<n;i++){
//         cin>>arr[i];
//     }   
//     int ans=1;
//     int mx=-100;
//     for(int i=1;i<n;i++){              // {1,1,1,1,2,1,2,2,3,3}
//         if(arr[i]!=arr[i-1]){          // i->9  ans=2
//             mx=max(ans,mx);            // mx=max(2,4) => mx=4
//             ans=1;
//         }
//         else ans++;
//     }
//     cout<<mx<<endl;
//     return 0;
// }


// soln 5

// {3,4,2,5,3,4} sum=6  (3,3) (2,4) (4,2) (2,4) (4,2)

// #include<bits/stdc++.h>
// using namespace std;
 
// int main(){
//     int n;
//     int sum;
//     cin>>n>>sum;
//     int arr[n];
//     for(int i=0;i<n;i++){
//         cin>>arr[i];
//     }
//     for(int i=0;i<n;i++){
//         for(int j=0;j<n;j++){
//             if(arr[i]+arr[j]==sum && i!=j){
//                 cout<<"("<<arr[i]<<','<<arr[j]<<") ";
//             }
//         }
//     }
//     return 0;
// }


// soln 1

// return (n)*factor(n-1)
// return (n)*power(p-1)
// if(p==0) return 1;

// #include<bits/stdc++.h>
// using namespace std;
 
// int power(int n,int p){
//     if(p==0) return 1;
//     return n*power(n,p-1);
// }

// int main(){
//     int n,p;
//     cin>>n>>p;
//     cout<<power(n,p);   
//     return 0;
// }

// n=2 p=3

// power(2,3) return 2*4=8;
// power(2,2) return 2*2=4;
// power(2,1) return 2*1=2;
// power(2,0) return 1


// soln 2

// s="RCB" ... s=""
// if(len==0) return "";
// return rev(s.substr(1,len-1),len-1)+s[0];

// #include<bits/stdc++.h>
// using namespace std;
 
// string rev(string s,int len){
//     if(len==0) return "";
//     return rev(s.substr(1,len-1),len-1)+s[0];
// }

// int main(){
//     string s;
//     cin>>s;
//     cout<<rev(s,s.length());
//     return 0;
// }

// s="RCB" len=3
// rev("RCB",3) return "BC"+'R'=>"BCR";
// rev("CB",2) return "B"+'C'=>"BC";
// rev("B",1) return ""+'B'=>"B"; 
// rev("",0) return "";


// soln 3

// 123 => 1+2+3=>6                    123%10=> 3  123/10=12
// if(n==0) return 0;
// return n%10+digsum(n/10);

// #include<bits/stdc++.h>
// using namespace std;
 
// int digsum(int n){
//     if(n==0) return 0;
//     return n%10 + digsum(n/10);
// }

// int main(){
//     int n;
//     cin>>n;
//     cout<<digsum(n);
//     return 0;
// }

// n=123
// digsum(123) return 3 + 3 = 6;
// digsum(12) return 2 + 1 = 3;
// digsum(1) return 1 + 0 = 1;
// digsum(0) return 0;



// soln 4

// n=3 3 -> C rod

// the only step to focus here is
// n-1 discs -> A -> B
// nth -> A -> C
// n-1 dics -> B -> C

// #include<bits/stdc++.h>
// using namespace std;
 
// void tower(int n,char frm,char to ,char help){
//     if(n==0) return;
//     tower(n-1,frm,help,to);
//     cout<<"move the disc "<<n<<" from "<<frm<<" to "<<to<<endl;
//     tower(n-1,help,to,frm);
// }

// int main(){
//     int n;
//     cin>>n;
//     tower(n,'A','C','B');
//     return 0;
// }

// n=3

// tower(3,A,C,B) tower(2,A,B,C) => "move the disc 2 from A to B"  => 2nd  
//                tower(1,A,C,B) => "move the disc 1 from A to C"  => 1st   tower(1,C,B,A) => "move the disc 1 from C to B"
//                tower(0,A,B,C) return 