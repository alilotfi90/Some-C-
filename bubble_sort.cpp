#include <string>
#include <iostream>
#include <stdio.h>
#include <array>
#include <math.h>
#include<bits/stdc++.h>
using namespace std;
void sort_elements(int arr[], int size) {
  bool notsorted=true;
  while(notsorted){
    notsorted=false;
    for(int i=0;i<size-1;i++){
      if(arr[i]<arr[i+1]){
        swap(arr[i],arr[i+1]);
        notsorted=true;

      }
    }
  }
}
int main(){
	int arr[5]={1,2,3,-1,0};
	sort_elements(arr,5);
	cout<<arr[1]<<endl;
	return 0;
}