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