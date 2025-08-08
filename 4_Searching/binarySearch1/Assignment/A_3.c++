/*  Given a matrix having 0-1 only where each row is sorted in increasing order, find the row with the
maximum number of 1’s.
Input matrix : 0 1 1 1
0 0 1 1
1 1 1 1 // this row has maximum 1s
0 0 0 0
Output: 2   */

#include<iostream>
using namespace std;

int main(){
    int arr[4][4] = {{0,1,1,1},{0,0,1,1},{1,1,1,1},{0,0,0,0}};
    int row = -1;
    int m = 0;

    for(int i = 0;i<4;i++){
        // first occurrence
        int lo = 0;
        int hi = 3;
        int mid;
        while(lo<=hi){
            mid = lo + (hi-lo)/2;
            if(arr[i][mid] < 1) lo = mid+1;
            else if(arr[i][mid] > 1) hi = mid-1;
            else if(arr[i][mid] == 1){
                if(mid == 0 || arr[i][mid-1]!=1){
                    if(4-mid > m){
                        m = 4-mid;
                        row = i;
                    }
                    break;
                }
                else hi = mid-1;
            }
        }
    }
    cout<<row;
}