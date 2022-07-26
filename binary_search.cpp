#include <string>
#include <iostream>
#include <stdio.h>
#include <array>
#include <math.h>
#include<bits/stdc++.h>
using namespace std;
int binary(int arr[],int low, int high, int x){
	if (low<=high){
		int mid=low+(high-low)/2;
		if(arr[mid]==x){
			return mid;
		}
		else if(arr[mid]>x){
			return binary(arr,low,mid-1,x);
		}
		else{
			return binary(arr,mid+1,high,x);
		}
	}
	return -1;
}
int main(){
int arr[]={1,2,3,5,8,9};
int x=2;
cout<<binary(arr,0,5,x)<<endl;
return 0;

}