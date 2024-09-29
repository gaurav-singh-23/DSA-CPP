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

int combination(int r,int n)
{
    return factorial(n)/(factorial(r)*factorial(n-r));
}
int permutation(int r,int n)
{
    return factorial(n)/factorial(n-r);
}

int main()
{
    int r,n;
    cout<<"Enter n:";
    cin>>n;
    cout<<"Enter r:";
    cin>>r;
    int ncr=combination(r,n); // return value ncr me store ho gyi
    int npr=permutation(r,n);
    cout<<ncr<<endl;
    cout<<npr;
}