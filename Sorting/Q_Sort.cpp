#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int cmpfn(const void *a, const void *b){
    return *((char*)a)-*((char*)b);
}
int main(){
    char a[]="hello";
    qsort(a,strlen(a),sizeof(char),cmpfn);
    cout<<"Sorted Array is: ";
    cout<<a;
    return 0;
}