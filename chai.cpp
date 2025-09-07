#include<bits/stdc++.h>
using namespace std;
// bool palin(long long mul){
//     string s = to_string(mul);
//     int i=0,j=s.size()-1;
//     cout<<s;
//     while(i<=j){
//         if(s[i]!=s[j]){
//             return false;
//         }
//     }
//     return true;
// }
void des(vector<int>&input,int ini,int end){
    sort(input.begin()+ini,input.end());
    reverse(input.begin()+ini,input.end());
}
void ass(vector<int>&input,int ini,int mid){
    sort(input.begin(),input.begin()+mid);
}
void print(vector<int>& input){
    for(auto it:input){
        cout<<it<<endl;
    }
}
int main(){
    // int num1=999,con=0,num2=999;
    
    // for(int i=999;i>101;--i){
    //     bool found=0;
    //     for(int j=999;j>101;--j){
    //         long long mul=i*j;
    //         if(palin(mul)){
    //             cout<<mul<<endl;
    //             found=1;
    //             break;
    //         }
    //     }
    //     if(found){
    //         break;
    //     }
    // }
    int n;
    cin>>n;
    vector<int> input(n);
    for(int i=0;i<n;++i){
        cin>>input[i];
    }
    int mid=n/2;
    ass(input,0,mid);
    des(input,mid,n-1);
    print(input);
    return 0;
}
