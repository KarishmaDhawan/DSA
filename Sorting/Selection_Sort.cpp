#include<iostream>
using namespace std;
void selection_sort(int a[],int n){
    int i,j,temp,min;
    for(i=0;i<n-1;i++){
        min=a[i];
        for(j=i+1;j<n;j++){
            if(a[j]<min){
                temp=a[j];
                a[j]=min;
                min=temp;
            }
            a[i]=min;
        }
    }      
}
int main(){
    int n;
    cout<<"Enter the size of array: "<<endl;
    cin>>n;
    int a[n];
    cout<<"Enter elements of an array : ";
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    selection_sort(a,n);
    cout<<"Sorted Array is: ";
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
    return 0;
}