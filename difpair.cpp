#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,k;
    cout<<"Enter the number of elements in the array: ";
    cin>>n;
    cout<<"Enter the value of array: ";
    vector<int> arr;
    for(int i=0;i<n;i++){
        int data;
        cin>>data;
        arr.push_back(data);
    }
    cout<<"Enter the value of k: ";
    cin>>k;
    map<int,int> m;
    for(int i=0;i<n;i++){
        m[arr[i]]++;
    };
    for(auto it:arr)
    {
        if(m.find(it-k)!=m.end())
        {
            m[it-k]++;
        }
        else if(m.find(it+k)!=m.end())
        {
            m[it+k]++;
        }
    }
    int count=0;
    for(auto it:m)
    {
        if(it.second>1)
        {
            count++;
        }
    }
    cout<<"The number of pairs with difference "<<k<<" is: "<<count<<endl;
    return 0;
}