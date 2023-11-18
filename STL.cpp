// // vectors

// #include<bits/stdc++.h>
// using namespace std;
 
// int main(){
//     int arr[10];  // static array
//     vector<int> v;   // dynamic array
//     v.push_back(10);
//     v.emplace_back(13);
//     v.push_back(11);
//     // {10,13,11}

//     sort(v.begin(),v.end());
//     // {10,11,13}

//     // cout<<v.size()<<endl;
//     // cout<<v.max_size()<<endl;
//     // cout<<v.empty()<<endl;

//     // v.assign(5,9);
//     // v.pop_back();
//     // v.insert(v.begin()+1,10);
//     v.erase(v.begin()+1);

//     cout<<v[0]<<endl;
//     cout<<v[1]<<endl;
//     // cout<<v[2]<<endl;
//     // cout<<v[3]<<endl;
//     // cout<<v[4]<<endl;
//     return 0;
// }


// PAIR

// #include<bits/stdc++.h>
// // #include<iostream>
// // #include<string>
// using namespace std;
// int main(){
//     pair<int,string> p1;
//     pair<int,int> p2;
//     pair<int,int> z;
//     pair<string,string> p3;
//     p2.first=10;
//     p2.second=20;
//     z.first=100;
//     z.second=200;
//     p2.swap(z);    
//     cout<<p2.first<<" "<<p2.second<<endl;
//     return 0;
// }


// SETS

// #include<bits/stdc++.h>
// using namespace std;
 
// int main(){
//     set<int> s;
    // s.insert(1);
    // s.insert(2);
    // s.insert(3);
    // s.insert(1);

//     for(auto i:s){
//         // cout<<i<<endl;
//     }

//     s.begin();
//     s.end();

//     if(s.find(5)!=s.end()){
//         cout<<"element exist\n";
//     }
//     else{
//         cout<<"element doesnt exist\n";
//     }

//     if(s.empty()){
//         cout<<"empty set\n";
//     }
//     else{
//         cout<<"not an empty set\n";
//     }

//     // cout<<s.size()<<endl;
//     return 0;
// }


// simple example for the application of sets

// {1,2,3,4,5,5,5,5};
// {1,2,3,4,5};

// #include<bits/stdc++.h>
// using namespace std;
 
// int main(){
//     int arr[]={1,2,3,4,5,5,5,5};
//     set<int> s;
//     set<string> s1;
//     for(int i=0;i<8;i++){
//         s.insert(arr[i]);
//     }
//     cout<<"the number of unique elements in the array are "<<s.size();
//     return 0;
// }


// multiset

// #include<bits/stdc++.h>
// using namespace std;
 
// int main(){
//     multiset<int> m;
//     m.insert(1);
//     m.insert(2);
//     m.insert(3);
//     m.insert(1);

//     for(auto i : m){
//         cout<<i<<" ";
//     }
//     cout<<endl;

//     if(m.find(2)!=m.end()){
//         cout<<"element exists\n";
//     }
//     else{
//         cout<<"element doesnt exists\n";
//     }

//     if(m.empty()){
//         cout<<"multiset is empty\n";
//     }
//     else{
//         cout<<"multiset isnt empty\n";
//     }

//     cout<<m.size()<<endl;
//     return 0;
// }


// map


// #include<bits/stdc++.h>
// using namespace std;
 
// int main(){
//     map<int,int> m1;
//     map<int,string> m2;
//     map<string,int> m3;

//     m1[300]=1000;
//     m1[20]=200;
//     m1[0]=10000;
//     m1[0]=12;

//     if(m1.find(20)!=m1.end()){
//         cout<<"the key value pair exists\n";
//     }
//     else{
//         cout<<"the key value pair doesnt exists\n";
//     }

//     cout<<m1.size()<<endl;

//     if(m1.empty()){
//         cout<<"map is empty\n";
//     }
//     else{
//         cout<<"map isnt empty\n";
//     }

//     // cout<<m1[300]<<endl;

//     // for(auto i=m1.begin();i!=m1.end();i++){
//     //     cout<<i->first<<" "<<i->second<<endl;
//     // }



//     for(auto i:m1){
//         cout<<i.first<<" "<<i.second<<endl;
//     }

//     return 0;
// }




// Stacks 


// #include<bits/stdc++.h>
// using namespace std;
 
// int main(){
//     stack<int> s;
//     if(s.empty()){
//         cout<<"empty stackn\n";
//     }
//     else{
//         cout<<"not an empty stack\n";
//     }

//     s.push(10); // enter new elemnts at the top on the stack
//     s.push(20);
//     s.push(30);
//     s.push(40);
//     s.push(50);


//     stack<int> temp;
//     temp.push(1);
//     temp.push(2);
//     temp.push(3);

//     temp.swap(s);

//     while(!s.empty()){
//         cout<<s.top()<<" ";
//         s.pop();
//     }

//     // s.pop(); // is used to delete the topmost element of the stack

//     // cout<<s   <<endl;   // top() returns the current top elemnt of the stack


//     // cout<<s.size()<<endl;

//     return 0;
// }




// Queue

// #include<bits/stdc++.h>
// using namespace std;
 
// int main(){
//     queue<int> q;

//     q.push(10);
//     q.push(20);
//     q.push(30);
//     q.push(40);
//     q.push(50);

//     queue<int> temp;
//     temp.push(1);
//     temp.push(2);
//     temp.push(3);

//     temp.swap(q);


//     while(!temp.empty()){
//         cout<<temp.front()<<" ";
//         temp.pop();
//     }
//     cout<<endl;
//     while(!q.empty()){
//         cout<<q.front()<<" ";
//         q.pop();
//     }


//     // q.pop();

//     // cout<<q.front()<<endl;

//     // cout<<q.back()<<endl;

//     // cout<<q.size()<<endl;

//     // if(q.empty()) cout<<"empty queue\n";
//     // else cout<<"not an empty queue\n";

//     return 0;
// }





// linked list


// #include<bits/stdc++.h>
// using namespace std;
 
// int main(){
//     list<int> l1;  // 0->1->3->2
//     l1.push_back(1);
//     l1.push_back(3);
//     l1.push_back(2);

//     l1.push_front(0);

//     l1.pop_front();
//     l1.pop_back();

//     l1.insert(l1.end(),100);

//     l1.reverse();

//     // for(auto i:l1) cout<<i<<endl;

//     if(l1.empty()){
//         cout<<"empty list\n";
//     }
//     else{
//         cout<<"not an empty list\n";
//     }


//     // cout<<l1.size()<<endl;

//     // sort(l1.begin(),l1.end());

    
//     // cout<<l1.front()<<endl;
//     // cout<<l1.back()<<endl;

//     // cout<<*l1.begin()<<endl;
//     // cout<<*l1.end()<<endl;
//     return 0;
// }



// unordered map

// #include<bits/stdc++.h>
// using namespace std;
 
// int main(){
//     unordered_map<int,int> um1;
//     unordered_map<int,string> um2;
//     unordered_map<string,string> um3;

//     um1[0]=10;
//     um1[1]=11;
//     um1[2]=12;
//     um1[2]=200;

//     cout<<um1[2]<<endl;    

//     // cout<<um1.size()<<endl;

//     // if(um1.find(1)!=um1.end()){
//     //     cout<<"element present\n";
//     // }
//     // else cout<<"element not present\n";

//     // if(um1.empty()) cout<<"empty map\n";
//     // else cout<<"not an empty map\n";

//     // for(auto i:um1){
//     //     cout<<i.first<<" "<<i.second<<endl;
//     // }
//     return 0;
// }



// DSA -> C,C++,JAVA -> LEETCODE/GFG -> REAL LIFE USES
// OOPS -> C++,JAVA -> CONCEPTS
// RDBMS/SQL
// OS
// PROJECTS -> know everything
// ANSWERS MUST CONVINCE THEN/CONVEY THAT HOW YOU ARE USEFUL/PROFITABLE FOR THEM


// 1st round -> Technical Round
// 2nd round -> Professional Fitment
// 3rd round -> HR Round

// intro -> your name, college name, dpt name, place i belong, my intrest (eg: sft dev), College experiences.(3 - 4 min).