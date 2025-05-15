#include<bits/stdc++.h>
using namespace std;
int varswp(vector<int> arr, int n, int k){
    int winsum=0,end=0,start=0,minlength=INT_MAX;
    for(end;end<n;end++){
        winsum+=arr[end];
    }
    while(winsum>=k){
        minlength=min(minlength,end-start);
        winsum-=arr[start];
        start++;
    }
    return minlength;
}
int main(){
    int n;
    cout<<"Enter the number of elements in the array: ";
    cin >> n;
    vector<int> arr(n);
    cout << "Enter the elements of the array: ";
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }
    int k;
    cout << "Enter the target value in array: ";
    cin >> k;
    int number=varswp(arr, n, k);
    cout<<"The minimum length of the subarray with sum >= " << k << " is: "<< number << endl;
    return 0;
}