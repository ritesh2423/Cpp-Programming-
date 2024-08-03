#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int fact=1;
    if(n==0)
    cout<<"factorial ="<<1;
    else
    {while(n!=0)
    {
        fact=fact*n;
        n--;
    }}
    cout<<fact;
}