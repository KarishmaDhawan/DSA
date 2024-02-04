#include<iostream>
using namespace std;
void insertionsort(int a[],int n){
	int k,temp,p;
	for(k=0;k<n;k++){
		temp=a[k];
		p=k-1;
		while(p>=0 && a[p]>temp){
			a[p+1]=a[p];
			p=p-1;
		}
		a[p+1]=temp;
	}
}
int main(){
	int n;
	cout<<"Enter the size of array: ";
	cin>>n;
	int a[n];
	cout<<"Enter the elements of array: "<<endl;
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	insertionsort(a,n);
	cout<<"Sorted array is: ";
	for(int i=0;i<n;i++){
		cout<<a[i]<<" ";
	}
	return 0;
}
