#include<iostream>
using namespace std;
int main(){

    // WITH EXTRA ARRAY
     //  m1 n1
    int a[2][3] = {1,2,3,4,5,6};
    //   m2 n2
    int b[2][3] = {{7,8,9},{10,11,12}};
    int res[2][3];
    for(int i = 0;i<2;i++){
        for(int j = 0;j<3;j++){
            res[i][j] = a[i][j] + b[i][j];
        }
    }

    for(int i = 0;i<2;i++){
        for(int j = 0;j<3;j++){
            cout<<res[i][j]<<" ";
        }
        cout<<endl;
    }

    cout<<endl;

    // WITHOUT EXTRA ARRAY
    int a1[2][3] = {1,2,3,4,5,6};
    int b1[2][3] = {{7,8,9},{10,11,12}};
    for(int i = 0;i<2;i++){
        for(int j = 0;j<3;j++){
            cout<<a1[i][j] + b1[i][j]<<" ";
        }
        cout<<endl;
    }

    cout<<endl;

    // WITHOUT EXTRA ARRAY --> but I want resultant array --> dono matrix me se kisi ek me store kara lo
    int a2[2][3] = {1,2,3,4,5,6};
    int b2[2][3] = {{7,8,9},{10,11,12}};
     for(int i = 0;i<2;i++){
        for(int j = 0;j<3;j++){
            b2[i][j] += a2[i][j]; // b ke andar a add karna hai
        }
    }
    for(int i = 0;i<2;i++){
        for(int j = 0;j<3;j++){
            cout<<b2[i][j]<<" ";
        }
        cout<<endl;
    }
}