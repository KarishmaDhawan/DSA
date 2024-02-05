#include<iostream>
using namespace std;
void merging_sort(int a[],int b[],int c[],int n,int m){
    int i=0,j=0,k=0,p;
    while(i<n && j<m){
        if(a[i]<b[j]){
            c[k]=a[i];
            i++;
        }
        else{
            c[k]=b[j];
            j++;
        }
        k++;
    }
    if(i==n){
        for(p=j;p<m;p++){
            c[k]=b[p];
            k++;
        }
    }
    else{
        for(p=i;p<n;p++){
            c[k]=a[p];
            k++;
        }    
    }
}
int main(){
    int n,m;
    cout<<"enter the size of 1st array: ";
    cin>>n;
    cout<<"enter the size of 2nd array: ";
    cin>>m;
    int a[n],b[m],c[n+m];
    cout<<"Enter the elements of 1st array :"<<endl;
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    cout<<"Enter the elements of 2nd array :"<<endl;
    for(int j=0;j<m;j++){
        cin>>b[j];
    }
    merging_sort(a,b,c,n,m);
    cout<<"Merged Array is : ";
    for(int i=0;i<n+m;i++){
        cout<<c[i]<<" ";
    }
    return 0;

}
