#include <string>
#include <iostream>
#include <stdio.h>
#include <array>
#include <math.h>
#include<bits/stdc++.h>
using namespace std;

int binary_first(int arr[],int low, int high, int x){
	if (low<=high){
		int mid=low+(high-low)/2;
		if((mid==0 || arr[mid-1]!=x) && arr[mid]==x){
			return mid;
		}
		else if(arr[mid]>x){
			return binary_first(arr,low,mid-1,x);
		}
		else{
			return binary_first(arr,mid+1,high,x);
		}
	}
	return -1;
}
int binary_last(int arr[],int low, int high, int x){
	if (low<=high){
		int mid=low+(high-low)/2;
		if((mid==high-1 || arr[mid+1]!=x) && arr[mid]==x){
			return mid;
		}
		else if(arr[mid]>x){
			return binary_last(arr,low,mid-1,x);
		}
		else{
			return binary_last(arr,mid+1,high,x);
		}
	}
	return -1;
}
int main(){
int arr[]={1,1,1,2,2,3,5,8,9};
int x=2;
cout<<binary_first(arr,0,7,x)<<endl;
cout<<binary_last(arr,0,7,x)<<endl;
return 0;

}