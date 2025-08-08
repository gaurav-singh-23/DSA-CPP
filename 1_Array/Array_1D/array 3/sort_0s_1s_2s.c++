#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
 int trap(vector<int>& height) 
    {
        int n = height.size(); // n = 12
               
        int trapped = 0;        

        for(int i=1;i<n-1;i++) // 1,2,3,4,5,6,7,8,9,10
        {
             int leftmax = height[0]; // leftmax = 0
             int rightmax = height[n-1]; // rightmax = 1
             int res = 0; 
             for(int k=1;k<i;k++)
             {
                 if(height[k]>leftmax)
                     leftmax = height[k];
            }
             for(int j=n-2;j>i;j--)
             {
                 if(height[j]>rightmax)
                     rightmax = height[j];
            }

              res = (min(leftmax,rightmax) - height[i]);  

              if (res>=0)
              trapped = trapped + res;    
             
        }

        return trapped;


    }
 int main()
 {
    vector<int> height;
    height.push_back(4);
    height.push_back(2);
    height.push_back(0);
    height.push_back(3);
    height.push_back(2);
    height.push_back(5);
    // height.push_back(0);
    // height.push_back(1);
    // height.push_back(0);
    // height.push_back(2);
    // height.push_back(1);
    // height.push_back(0);
    // height.push_back(1);
    // height.push_back(3);
    // height.push_back(2);
    // height.push_back(1);
    // height.push_back(2);
    // height.push_back(1);

    int res=trap(height);

    cout<<res;



}