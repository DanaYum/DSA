#include<iostream>
#include<bitset>
using namespace std;

int main(){
    int n;
    cout<<"Enter a number: ";
    cin>>n;
    int ans=n & (n-1);
    cout<<"After removing the rightmost set bit:";
    cout<<ans;
}