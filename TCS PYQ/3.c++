/* Question 3

Airport security officials have confiscated several items of the passengers at the security check point. All the items have been dumped into a huge box (array). Each item possesses a certain amount of risk [0, 1, 2]. Here, the risk severity of the items represent an array of N number of integer values. The task here is to sort the items based on their levels of risk in the array. The risk values range from 0 to 2.

Example:

Input: 7 -> Value of N
1,0,2,0,1,0,2 -> Element of arr[0] to arr[N-1], while input each element is separated by new line.

Output:
0 0 0 1 1 2 2 -> Element after sorting based on risk severity

Input: 10 -> Value of N
2,1,0,2,1,0,0,1,2,0 -> Element of arr[0] to arr[N-1], while input each element is separated by a new line.

Output:
0 0 0 0 1 1 1 2 2 2 -> Elements after sorting based on risk severity*/

#include<iostream>
#include<vector>
using namespace std;

int main(){
    int n;
    cout<<"Enter the no. of elements : ";
    cin>>n;
    vector<int> v;

    for(int i = 0;i<n;i++){
        int x;
        cin>>x;
        v.push_back(x);
    }

    int countZeros = 0;
    int countOnes = 0;
    int countTwos = 0;

    for(int i = 0;i<n;i++){
        if(v[i]==0) countZeros++;
        else if(v[i]==1) countOnes++;
        else if(v[i]==2) countTwos++;
    }

    int i = 0;
    while(countZeros>0){
        v[i] = 0;
        countZeros--;
        i++;
    }
    while(countOnes>0){
        v[i] = 1;
        countOnes--;
        i++;
    }
    while(countTwos>0){
        v[i] = 2;
        countTwos--;
        i++;
    }

    for(int i=0;i<n;i++){
        cout<<v[i]<<" ";
    }
}