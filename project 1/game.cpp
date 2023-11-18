#include<bits/stdc++.h>
#include<fstream>
using namespace std;
int main(){
    string txt;
    // opening the files
    ifstream fil("truth.txt");
    ifstream file("lies.txt");

    // variables to count the number of lines in each file
    int truth_lines=0;
    int lies_lines=0;

    // counting the number or lines in the file
    while(getline(fil,txt)){
        truth_lines++;
    }
    while(getline(file,txt)){
        lies_lines++;
    }

    // generating random numbers within the range of maximum lines
    srand(time(0));
    int t1=0,t2=0,l=0;
    while(t1==t2){
        t1=rand()%truth_lines;   //100 % 11 = 1
        t2=rand()%truth_lines;
        l=rand()%lies_lines;   // 50 % 11 = 6
    }
    
    // opening the files again to use the getline function again
    ifstream t("truth.txt");
    ifstream li("lies.txt");

    // getting the requireed lines from the files
    string truth1;
    string truth2;
    string lie;
    for(int i=0;i<=max(t1,t2);i++){   // t1 = 6 ; t2 = 4
        string txt;
        getline(t,txt);   // i=6
        if(i==t1){
            truth1=txt;
        }
        else if(i==t2){
            truth2=txt;
        }
    }
    // cout<<truth1<<endl;
    // cout<<truth2<<endl;
    for(int i=0;i<=l;i++)  // l=6
        getline(li,lie);  // i=6
    // cout<<lie<<endl;


    // printing the output in random order
    int bullet=1;
    int liechecker;
    for(int i=0;i<=max(t1,max(t2,l));i++){  // i=4      // t1=4 t2=2 l=1                    
        if(i==t1){                                                    //  t2
            cout<<bullet<<". "<<truth1<<endl;  // 3. "truth1 value"   //  l
            bullet++;              // bullet = 4 (of no use)          //  t1  
        } 
        else if(i==t2){
            cout<<bullet<<". "<<truth2<<endl;  // 2. 'tructh2 value'
            bullet++;     // bullet = 3
        } 
        if(i==l){
            cout<<bullet<<". "<<lie<<endl;  // 2. "lie value"
            liechecker=bullet;   // liechecker = 1
            bullet++;     // bullet = 2  
        } 
    }
    cout<<"enter your answer>> ";
    int ans;
    cin>>ans;

    if(ans==liechecker)cout<<"you got the right answer!!!\n";
    else {
        cout<<"better luck next time\nthe correct answer is>> ";
        cout<<lie<<endl;
    }
    return 0;
}
