#include<iostream>
using namespace std;
int main(){
    int n; 
    cin>>n;
    int l=0,h=n,mid,posm,left,a;
    while(l<=h){
        mid=(l+h)/2;
        a=mid*(mid+1)/2;
        if(a<=n){
            posm=mid;
            left=n-a;
            l=mid+1;
        }
        else{
            h=mid-1;
        }

    }
    cout<<"Height of balls is: "<<posm<<endl;
    cout<<"Left balls is: "<<left<<endl;
    return 0;   
}