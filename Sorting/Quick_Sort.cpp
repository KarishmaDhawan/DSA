#include<iostream>
using namespace std;
int partition(int a[],int beg,int end){
    int l=beg,loc=beg,r=end;
    while(l!=r){
        while(1){
            if(a[r]>a[loc]){
                r--;
            }
            else{
                int temp;
                temp=a[loc];
                a[loc]=a[r];
                a[r]=temp;
                loc=r;
                break;
            }
        }
        while(1){
            if(a[l]<a[loc]){
                l++;
            }
            else{
                int temp;
                temp=a[loc];
                a[loc]=a[l];
                a[l]=temp;
                loc=l;
                break;
            }
        }
    }
    return l;
}
void quick_sort(int a[],int l, int h){
    if(l<h){
        int loc=partition(a,l,h);
        quick_sort(a,l,loc-1);
        quick_sort(a,loc+1,h);
    }
}
int main(){
    int n;
    cout<<"Enter the size of array: ";
    cin>>n;
    int a[n];
    cout<<"Enter elements of an array: "<<endl;
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    quick_sort(a,0,n-1);
    cout<<"Sorted Array is : ";
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
    return 0;
}