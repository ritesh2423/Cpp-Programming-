#include<bits/stdc++.h>
int swp(int arr[],int n,int k){
    if(n<k)
    {
        std::cout<<"Invalid array input || array size is less than K"<<std::endl;
    }
    int max_Sum=0;
    for(int i=0;i<k;i++)
    {
        max_Sum+=arr[i];
    }
    int win_sum=max_Sum;
    for(int i=k;i<n;i++)
    {
        win_sum += arr[i]-arr[i-k];
        max_Sum = std::max(win_sum,max_Sum);
    }
    return max_Sum;
}
int main(){
    int n;
    std::cout<<"enter the number of elemnts"<<std::endl;
    std::cin>>n;
    std::cout<<"Enter the elements of array"<<std::endl;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        std::cin>>arr[i];
    }
    int k;
    std::cout<<"Enter the window size"<<std::endl;
    std::cin>>k;
    int result = swp(arr,n,k);
    std::cout<<"Maximum sum in array with window size of "<<k<<" is "<<result<<std::endl;
    return 0;
}
