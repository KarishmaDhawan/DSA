#include<iostream>
using namespace std;
int binarysearch(int a[],int n,int num){
    int l=0,h=n-1,m;
    while(l<=h){
        m=(l+h)/2;
        if(num==a[m]){
            return m;
        }
        else if(num>a[m]){
            l=m+1;
        }
        else{
            h=m-1;
        }
    }
    return -1;
}
int main(){
    int n,arr[n],num;
    cout<<"Enter size of array"<<endl;
    cin>>n;
    cout<<"Enter elements for sorted array"<<endl;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<"Sorted array is: ";
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    cout<<"Enter num to search at what index"<<endl;
    cin>>num;
    int index=binarysearch(arr,n,num);
    if(index==-1){
        cout<<"num does not exist"<<endl;
    }
    else{
        cout<<"num exist at "<<index<<" index"<<endl;
    }
}