/* 
You are given a read-only array of N integers with values also in the range 1to N both inclusive.
Each integer appears exactly once except A which appears twice and B which is missing. 
The task is to find the repeating and missing numbers A and B where A repeats twice and B is missing.
    
    Input : 5
            3 1 2 5 3

    Output : 3 4        
*/


#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int n;
    cin>>n;
    // vector<int> v(n);
    // for (int i = 0; i < n; i++) {
    //     cin >> v[i];
    // }
    vector<int> v;
    for(int i = 0;i<n;i++){
        int x;
        cin>>x;
        v.push_back(x);
    }
    
    sort(v.begin(),v.end());
    
    // repeat element
    int repeat = -1;
    for(int i = 1;i<n;i++){
        if(v[i]==v[i-1]) {
            repeat = v[i];
            break;
        }
    }
    
    // missing
    int actual_sum = 0;
    for(int i = 0;i<n;i++){
        actual_sum+=v[i];
    }
    int expected_sum = n*(n+1)/2;
    // int diff = expected_sum - actual_sum;
    // if(diff>0) cout<<repeat + diff;
    // else if(diff<0) cout<<repeat - abs(diff);
    int missing = expected_sum - (actual_sum - repeat);
    
    cout<<repeat<<" "<<missing;
    
    return 0;
}
