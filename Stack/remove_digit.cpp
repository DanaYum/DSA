#include<iostream>
#include<stack>
using namespace std;
string f(string s){
    stack<char> st;
    string res="";
    for(int i=0;i<s.size();i++){
        if( isdigit(s[i])){
            continue;
        }
        st.push(s[i]);
    }
    while(!st.empty()){
        res=st.top()+res;
        st.pop();
    }
    return res;
}
int main(){
    string s="ab3cd";
    cout<<f(s);
    return 0;
}