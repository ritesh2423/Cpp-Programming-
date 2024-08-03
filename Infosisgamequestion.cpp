#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,expe;
    cin>>n>>expe;
    map<int,int> mons;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    for(int i=0;i<n;i++)
    {
        int exper;
        cin>>exper;
        mons[arr[i]]=exper;
    }
    int co=0;
    map<int,int> :: iterator it;
    for(it=mons.begin();it!=mons.end();it++)
    {
        int val=(*it).first;
        int bon=(*it).second;
        if(expe>=val)
        {
            expe+=bon;
            co++;
        }
        else
        {
            break;
        }
    }
    cout<<co;
    return 0;
}