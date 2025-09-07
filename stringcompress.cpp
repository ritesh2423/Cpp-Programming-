#include<bits/stdc++.h>
using namespace std;
void compress(vector<char>&chars){
    int read=0,write=0;
    while(read<chars.size()){
        char current=chars[read];
        int count=1;
        while(read<chars.size() && chars[read++]==current){
            read++;
            count++;
        }
        chars[write++]=current;
        if(count>1){
            string s=to_string(count);
            for(char digit:s){
                chars[write++]=digit;
            }
        }
    }
}
int main(){
    
    int n;
    cin>>n;
    vector<char> chars(n);
    for(int i=0;i<n;i++){
        cin>>chars[i];
    }
    compress(chars);
    for(auto it:chars){
        cout<<it<<endl;
    }
    return 0;
}