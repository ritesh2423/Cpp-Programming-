#include<bits/stdc++.h>
using namespace std;
void split(string& s,vector<string>&words){
    string temp="";
    for(int i=0;i<s.size();++i){
        if(s[i]==' '){
            words.push_back(temp);
            temp="";
            continue;
        }else{
            temp+=s[i];
        }
    }
    if(!temp.empty()){
        words.push_back(temp);
    }
}
int main(){
    string input;
    getline(cin,input);
    vector<string>words;
    split(input,words);
    reverse(words.begin(),words.end());
    for(auto& it:words){
        cout<<it<<endl;
    }
    return 0;
}