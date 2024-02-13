#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int partition(char a[],int l ,int h){
    int i,j;
    i=l-1;
    for(j=l;j<h;j++){
        if(a[j]<a[h]){
            i++;
            swap(a[i],a[j]);
        }
    }
    swap(a[i+1],a[h]);
    return i+1;
}
void quick_sort(char a[],int l,int h){
    if(l<h){
        int loc=partition(a,l,h);
        quick_sort(a,l,loc-1);
        quick_sort(a,loc+1,h);
    }
}
int main(){
    int n;
    cout<<"Enter the size of string: ";
    cin>>n;
    char a[n];
    cout<<"Enter the string: ";
    cin>>a;
    quick_sort(a,0,strlen(a)-1);
    cout<<"Sorted Array is: ";
    for(int i=0;i<strlen(a);i++){
        cout<<a[i];
    }
    return 0;
}