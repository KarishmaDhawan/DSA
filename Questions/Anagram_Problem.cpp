#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
    string s1;
    cin>>s1;
    string s2;
    cin>>s2;
    int i;
    if(s1.length()!=s2.length()){
        cout<<"false";
        return 0;
    }
    sort(s1.begin(),s1.end());
    sort(s2.begin(),s2.end());
    for(i=0;i<s1.length();i++){
        if(s1[i]!=s2[i]){
            cout<<"false";
            return 0;
        }
    }
    cout<<"True";
    return 0;
}