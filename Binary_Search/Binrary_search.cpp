#include<iostream>
#include<vector>
using namespace std;
int binary_search(vector<int>& arr,int n,int target){
    int low=0;
    int high=n-1;
    int mid;
    while(low<=high){
        mid=(low+high)/2;
        if(arr[mid]==target){
            return mid;
        }
        if(target<arr[mid]){
            high=mid-1;
        }
        else {
            low=mid+1;
        }
    }
    return -1;
}
int main(){
    int n=8;
    vector<int> arr={1,2,3,4,5,6,7,8};
    cout<<binary_search(arr,n,7);
}