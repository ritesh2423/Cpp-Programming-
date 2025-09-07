#include<bits/stdc++.h>
using namespace std;
int main(){
    string input;
    getline(cin,input);
    stringstream kinput(input);
    string wordofinput;
    while(kinput >> wordofinput){
        cout<<wordofinput<<endl;
    }
    return 0;
}