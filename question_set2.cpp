//1) Write a c++ program to calculate the power of a number using recursion like power(int number, int power) like power(2, 3) should return 8?

// 2)Write a program to reverse String in Java using Recursion.

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