#include<bits/stdc++.h>
#include<string>
using namespace std;
int lsswkde(std::string s,int k){
    unordered_map<char,int> mp;
    int mlen=0,start=0,end=0;
    for(int end=0;end<s.size();end++){
        mp[s[end]]++;
        while(mp.size()>k){
            mp[s[start]]--;
            if(mp[s[start]]==0){
                mp.erase(s[start]);
            }
            start++;
        }
        mlen=std::max(mlen,end-start+1);
    }
    return mlen;
}

int main() {
    string s;
    cout << "Enter the string: ";
    cin >> s;
    int k;
    cout << "Enter the value of k i.e longest distint size: ";
    cin >> k;
    int res= lsswkde(s,k);
    cout<<"longest substring size is "<<res<<endl;
    return 0;
}