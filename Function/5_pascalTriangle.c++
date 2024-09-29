// observation ka khel
#include<iostream>
using namespace std;
int factorial(int a)
{
    int fact=1;
    for(int i=2;i<=a;i++)
    {
        fact=fact*i;
    }
    return fact;
}
int combination(int n,int r)
{
    return factorial(n)/(factorial(r)*factorial(n-r));
}
int main()
{
    int num;
    cout<<"Enter no. of rows :";
    cin>>num;
    for(int i=0;i<=num;i++)
    {
       for(int l=1;l<=num-1-i;l++)
            cout<<" ";
        for(int j=0;j<=i;j++)
        {
            int ncr= combination(i,j); // icj
            cout<<ncr<<" ";
        }
        cout<<endl;
    }

}