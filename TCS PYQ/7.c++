/* Question 7

An automobile company manufactures both a two wheeler (TW) and a four wheeler (FW). A company manager wants to make the production of both types of vehicle according to the given data below:

1st data, Total number of vehicles (two-wheeler + four-wheeler) = V

2nd data, Total number of wheels = W

The task is to find how many two-wheelers as well as four-wheelers need to be manufactured as per the given data.

Example:

Input:
200 -> Value of V
540 -> Value of W

Output:
TW = 130 FW = 70

Explanation:
130 + 70 = 200 vehicles
(70 * 4) + (130 * 2) = 540 wheels

Constraints:

2 ≤ W

W % 2 == 0

V < W

Print "INVALID INPUT" if inputs do not meet the constraints. */

#include<iostream>
using namespace std;

int main(){
    int V;
    cin>>V;
    int W;
    cin>>W;

    if(W>=2 && W%2==0 && V<W){
    int Tw , Fw;
    Tw = (4*V - W)/2;
    Fw = V - Tw;

    cout<<"Tw = "<<Tw<<" ";
    cout<<"Fw = "<<Fw;
    }
    else cout<<"INVALID INPUT";
}