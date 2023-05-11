// #include<bits/stdc++.h>
// using namespace std;
 
// int fun(int n){                  
//     if(n==0){                    
//         return 0;                
//     }                            
//     return n+fun(n-1);           
// }

// int main(){
//     cout<<fun(10)<<endl; // 1+2+3+4....+10=55
//     return 0;
// }

// n=10  return 10+45=55
// n=9   return 9+36=45
// n=8   return 8+28=36
// n=7   return 7+21=28
// n=6   return 6+15=21
// n=5   return 5+10=15
// n=4   return 10
// n=3   return 6
// n=2   return 3
// n=1   return 1
// n=0   retrun 0


//  soln 1

// #include<bits/stdc++.h>
// using namespace std;
 
// int fact(int n){              
//     if(n==0){
//         return 1;
//     }
//     return n*fact(n-1);
// }

// int main(){
//     int n;
//     cin>>n;
//     // n*n-1*n-2.....*1
//     // n*fact(n-1)
//     cout<<fact(n);//120
//     return 0;
// }

// n=5  return 5*24=120
// n=4  return 4*6=24
// n=3  return 3*2=6
// n=2  return 2*1=2
// n=1  return 1*1=1
// n=0  return 1


// soln 2

// 0,1,1,2,3,5,8,13.....

// #include<bits/stdc++.h>
// using namespace std;

// //  return fibo(n-1)+fibo(n-2)
// int fibo(int n){
//     if(n==0 || n==1){
//         return n;
//     }
//     return fibo(n-1)+fibo(n-2);
// }


// int main(){
//     int n;
//     cin>>n;                      // 0,1,1,2,3   n=5
//     for(int i=0;i<n;i++){        // i=0->4
//         cout<<fibo(i)<<" ";      // fibo(0) fibo(1) fibo(2) fibo(3) fibo(4)
//     }
//     return 0;
// }


// fibo(0)   op-> 0 
// fibo(1)   op-> 0 1
// fibo(2)   return fibo(1) + fibo(0) => 0+1 => 1    op-> 0 1 1
// fibo(3)   return fibo(2) + fibo(1) => 1+1 => 2    op-> 0 1 1 2
// fibo(4)   return fibo(3) + fibo(2) => 1+2 => 3    op-> 0 1 1 2 3


// soln 3

// return cnt(n-1);

// #include<bits/stdc++.h>
// using namespace std;
 
// int cnt(int n){
//     if(n==0){
//         return 0;
//     }
//     return 1+cnt(n-1);
// }

// int main(){
//     int n;
//     cin>>n;
//     for(int i=n-1;i>=0;i--){   // n=5 i->4,3,2,1,0 
//         cout<<cnt(i)<<" ";
//     }   
//     return 0;
// }
// i=4
// cnt(4) return 1+3=4
// cnt(3) return 1+2=3
// cnt(2) return 1+1=2
// cnt(1) return 1+0=1
// cnt(0) return 0

// op->4 


// i=3
// cnt(3) return 1+2=3
// cnt(2) return 1+1=2
// cnt(1) return 1+0=1
// cnt(0) return 0

// op->4 3

// i=2
// cnt(2) return 1+1=2
// cnt(1) return 1+0=1
// cnt(0) return 0

// op->4 3 2

// i=1
// cnt(1) return 1+0=1
// cnt(0) return 0

// op->4 3 2 1


// i=0
// cnt(0) return 0

// op->4 3 2 1 0


// soln 4

// 4 2  => 4-2 => 2 2 => 2-2=0 => 2,0 
// 5 3  => 5-3 => 3 2 => 3-2=> 2 1 => 2-1 => 1 1 => 1 0

// 5 3 => 5%3=> 2 3 => 3%2=> 2 1 => 2%1 => 1 0
// 4 2 => 4%2=> 0 2

// return gcd(b,a%b);
// if(b==0) return a;

// #include<bits/stdc++.h>
// using namespace std;
 
// int gcd(int a,int b){
//     if(b==0) return a;
//     return gcd(b,a%b);
// }

// int main(){
//     int a,b;
//     cin>>a>>b;
//     cout<<gcd(a,b);   
//     return 0;
// }


// a=5 b=3
// rerturn gcd(3,2)

// a=3 b=2
// return gcd(2,1)

// a=2 b=1
// return gcd(1,0)

// a=1 b=0
// return 1