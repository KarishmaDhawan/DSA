#include<iostream>
using namespace std;
void merge(int[],int,int,int);
void merge_sort(int a[],int l,int h){
    if(l<h){
        int m=(l+h)/2;
        merge_sort(a,l,m);
        merge_sort(a,m+1,h);
        merge(a,l,m,h);
    }
}
void merge(int a[],int l,int m,int h){
    int i=l,j=m+1,k=l;
    int b[l+h];
    while(i<=m && j<=h){
        if(a[i]<a[j]){
            b[k]=a[i];
            i++;
        }
        else{
            b[k]=a[j];
            j++;
        }
        k++;
    }
    if(i>m){
        for(int p=j;p<=h;p++){
            b[k]=a[p];
            k++;
        }
    }
    else{
        for(int p=i;p<=m;p++){
            b[k]=a[p];
            k++;
        }
    }
    for(k=l;k<=h;k++){
        a[k]=b[k];
    }
}
int main(){
    int n;
    cout<<"Enter the size of array : ";
    cin>>n;
    int a[n];
    cout<<"Enter elements of an array : ";
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    merge_sort(a,0,n-1);
    cout<<"Sorted Array is : ";
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
    return 0;
}
