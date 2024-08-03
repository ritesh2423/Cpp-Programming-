#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m;
    cin>>n>>m;
    int arr[n],arr1[m];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    for(int i=0;i<m;i++)
    {
        cin>>arr1[i];
    }
    sort(arr,arr+n);
    sort(arr1,arr1+m);
    int i=0,j=0;
    vector<int> res;
    while(i<n && j<m)
    {
        if(i==j)
        {
            res.push_back(arr[i] | arr1[j]);
            i++;
            j++;
        }
        
    }
}