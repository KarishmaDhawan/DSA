#include<iostream>
using namespace std;
int linear_search(int a[],int n,int item){
    int i;
    for(i=0;i<n;i++){
        if(a[i]==item){
            return i;
        }
    }
    return -1;
}
int main(){
    int a;
    cout<<"Enter size of array"<<endl;
    cin>>a;
    int arr[a];
    for(int i=0;i<a;i++){
        cin>>arr[i];
    }
    for(int i=0;i<a;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    int item;
    cout<<"Enter the element which you want to find at which index"<<endl;
    cin>>item;
    int index;
    index=linear_search(arr,a,item);
    if(index==-1){
        cout<<"items does not exist"<<endl;
    }
    else{
        cout<<"element exist is at "<<index<<" index"<<endl;
    }
    return 0;
}