#include<iostream>
using namespace std;
int main()
{
    int n,i=0,j=0;
    cin>>n;
    while(i>=0 and i<n)
    {
        j=i;
        while(j<n)
        {
            cout<<i;
            j+=1;
        }
        cout<<endl;
        i++;
    }
    // Second pattern

    int n,i=1,j=1;cin>>n;
    while(i<=n)
    {
        while(j<=n)
        {
            cout<<j+1;
            j++;
        }
        j=1;
        cout<<endl;
        i++;
    }
}
