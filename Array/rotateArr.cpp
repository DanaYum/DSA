#include<iostream>
#include<vector>
using namespace std;
int main(){
    int arr[6]={1,2,3,4,5,6};
    int n=6,k=3;
    vector<int> rotated(n);
    for(int i=0;i<n;i++){
        if(i<k){
            rotated[i]=arr[n-k+i];
        }
        else{
            rotated[i]=arr[i-k];
        }
    }
    for(int i=0;i<n;i++){
        cout<<rotated[i]<<" ";
    }
}