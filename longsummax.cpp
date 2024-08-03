#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    vector<int> arr;
    for(int i=0;i<n;i++)
    {
        int temp;
        cin>>temp;
        arr.push_back(temp);
    }
    int co=0,max=0;
    for(int i=0;i<arr.size();i++)
    {
        if(arr[i]>0)
        {
            co++;
            max+=arr[i];
        }
        else
        {
            if(arr[i]>max || max==0)
            {
                max+=0;
                co++;
            }
        }
    }
    cout<<max;
    cout<<co;
    return 0;
}