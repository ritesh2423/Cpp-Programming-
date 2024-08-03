#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    vector<int> arr;
    for(int i=0;i<n;i++)
    {
        int emp;
        cin>>emp;
        arr.push_back(emp);
    }
    map<int , int> ar;
    for(auto it:arr)
    {
        ar[it]++;
    }
    for(auto it:ar)
    {
        if(it.second>n/2)
        {
            cout<<it.first;
            break;
        }
    }
    return 0;
}