// 1) Given two sorted arrays, print the final sorted output using elements of both the arrays.
// eg: {1,4,5} {2,3}
// output: 1,2,3,4,5

// 2)Given an array of strings, sort the array in ascending order according to the strings.
// eg: {"abc", "xyz" ,"pqr", "abcd"}
// output:  {"abc","abcd" ,"pqr", "xyz"}

// 3)Given an array, print all possible permutations of that array using recursion.

// 4) Input a sentance as a string using the getline() method and count the number of words present in the string.

// 5) Input a sentance as a string using getline(), and eliminate extra whitespaces from the string. Also print the number of digits present in the string.


// soln 1

// {1,4,5} {2,3}
// i=1       j=2
// op-> 1 2 3 4 5
// #include<bits/stdc++.h>
// using namespace std;
 
// int main(){
//     int ar1[20],ar2[20];
//     int n1,n2;
//     cin>>n1>>n2;
//     for(int i=0;i<n1;i++) cin>>ar1[i];   
//     for(int i=0;i<n2;i++) cin>>ar2[i];  
//     int i=0,j=0;
//     while(i<n1 && j<n2){
//         if(ar1[i]<ar2[j]){
//             cout<<ar1[i]<<" ";
//             i++;
//         }
//         else if(ar1[i]>ar2[j]){
//             cout<<ar2[j]<<" ";
//             j++;
//         }
//     }
//     while(i<n1){
//         cout<<ar1[i]<<" ";
//         i++;
//     }
//     while(j<n2){
//         cout<<ar2[i]<<" ";
//         j++;
//     }
//     return 0;
// }


// soln 2
// {"abc", "xyz" ,"pqr", "abcd"}

// #include<bits/stdc++.h>
// using namespace std;
 
// int main(){
//     int n;
//     // cin>>n;
//     string arr[]={"abc", "xyz" ,"pqr", "abcd"};
//     // for(int i=0;i<n;i++){
//     //     cin>>arr[i];
//     // }
//     // for(int i=0;i<n;i++){
//     //     for(int j=0;j<n;j++){
//     //         if(arr[j].compare(arr[i])<0){
//     //             string temp=arr[j];
//     //             arr[j]=arr[i];
//     //             arr[i]=temp;
//     //         }
//     //     }
//     // }
//     for(int i=0;i<n;i++){
//         cout<<arr[i]<<" ";
//     }
//     return 0;
// }


// soln 5

// #include<bits/stdc++.h>
// using namespace std;
 
// int main(){
//     string s;
//     getline(cin,s);
//     int cnt=0;
//     int n=s.length();
//     for(int i=0;i<n;i++){
//         if(isdigit(s[i])) cnt++;
//     }

//     // rcb is the best
//     for(int i=1;i<n;i++){
//         if(isspace(s[i]) && isspace(s[i-1])){
//             s.erase(i,1);
//             i--;
//         }
//     }
//     cout<<s<<endl;
//     cout<<cnt<<endl;
//     return 0;
// }

// soln 4
// rcb is the best

// #include<bits/stdc++.h>
// using namespace std;
 
// int main(){
//     string s;
//     getline(cin,s);
//     int cnt=0;
//     for(int i=0;i<s.length();i++){
//         if(isspace(s[i])){
//             cnt++;
//         }
//     }   
//     cout<<cnt+1<<endl;
//     return 0;
// }