#include<bits/stdc++.h>
using namespace std;
int main()
{
    int numsize;
    cout<<"enter matrix size";
    cin>>numsize;
    vector<int> ans;
    int nums[numsize][numsize];
    for(int i=0;i<numsize;i++)
    {
        for(int j=0;j<numsize;j++)
        {
            cin>>nums[i][j];
        }
    }
    for(int i=0;i<numsize;i++)
    {
        int co=0;
        for(int j=2;j<nums[i][i];j++)
        {
            if(nums[i][i]%j!=0) co++;
            else break;
        }
        if(co==nums[i][i]-2) ans.push_back(nums[i][i]);
    }
    int max=0;
    for(int i=0;i<ans.size();i++)
    {
        if(ans[i]>max) max=ans[i];
    }
    cout<<max;
    return 0;
}