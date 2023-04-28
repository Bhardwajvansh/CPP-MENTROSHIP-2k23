// #include<bits/stdc++.h>
// using namespace std;
 
// int main(){
//     int arr[5]={2,4,6,8,10};
//     char ar[5]={'v','v','c','z','a'};

//     for(int i=0;i<5;i++){
//         cout<<ar[i]<<endl;
//     }
//     return 0;
// }



// #include<bits/stdc++.h>
// using namespace std;
 
// int main(){
//     // int arr[5]={1,2,3,4,5};

//     // int ar[5][5]={{0,0,0,0,0},{0,0,0,0,0},{0,0,0,0,0},{0,0,0,0,0},{0,0,0,0,0}};
//     // for(int i=0;i<5;i++){
//     //     for(int j=0;j<5;j++){
//     //         cout<<ar[i][j]<<" ";
//     //     }
//     //     cout<<endl;
//     // }

//     // int a[2][2][2];
//     // for(int i=0;i<2;i++){
//     //     for(int j=0;j<2;j++){
//     //         for(int k=0;k<2;k++){
//     //             cin>>a[i][j][k];
//     //         }
//     //     }
//     // }

//     // for(int i=0;i<2;i++){
//     //     for(int j=0;j<2;j++){
//     //         for(int k=0;k<2;k++){
//     //             cout<<a[i][j][k]<<" ";
//     //         }
//     //         cout<<endl;
//     //     }
//     //     cout<<endl;
//     // }
    
//     return 0;
// }




#include<bits/stdc++.h>
using namespace std;
 
int main(){
    int ar[3][3][3];

    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            for(int k=0;k<3;k++){
                cin>>ar[i][j][k];
            }
        }
    }


    for(int i=0;i<3;i++){                 
        for(int j=0;j<3;j++){              
            for(int k=0;k<3;k++){          
                cout<<ar[i][j][k]<<" ";         
            }
            cout<<endl;
        }
        cout<<endl;
    }

    // 1 2 3
    // 1 2 3
    // 1 2 3

    // 1 2 3
    // 1 2 3
    // 1 2 3

    // 1 2 3
    // 1 2 3
    // 1 2 3
    
    //    ar[0][0][0], ar[0][0][1], ar[0][0][2] 
    //    ar[0][1][0], ar[0][1][1], ar[0][1][2]
    //    ar[0][2][0], ar[0][2][1], ar[0][2][2]

    //    ar[1][0][0], ar[1][0][1], ar[1][0][2] 
    //    ar[1][1][0], ar[1][1][1], ar[1][1][2]
    //    ar[1][2][0], ar[1][2][1], ar[1][2][2]

    //    ar[2][0][0], ar[2][0][1], ar[2][0][2] 
    //    ar[2][1][0], ar[2][1][1], ar[2][1][2]
    //    ar[2][2][0], ar[2][2][1], ar[2][2][2]

    return 0;
}