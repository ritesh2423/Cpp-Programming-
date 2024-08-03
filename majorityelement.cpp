#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    int ele=0,co=0;
    for(int i=0;i<n;i++)
    {
        if(co==0)
        {
            ele=arr[i];
        }
        if(ele==arr[i])
        {
            co++;
        }
        else 
        {
            co--;
        }
    }
    co=0;
    for(int i=0;i<n;i++)
    {
        if(ele==arr[i])
        {
            co++;
        }
    }
    if(co>n/2)
    {
        cout<<ele;
    }
    else
    {
        cout<<"Not found";
    }
    return 0;
}