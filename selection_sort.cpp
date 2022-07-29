#include <vector>
#include <string>
#include <iostream>
#include <stdio.h>
#include <array>
#include <math.h>
#include<bits/stdc++.h>
using namespace std;

vector<int> selectionSort(vector<int> &array) {
  for(int i=0;i<array.size();i++){
    int minind=i;
    for(int j=i;j<array.size();j++){
      if(array[j]<=array[minind]){
        minind=j;
      }
    
    }
  swap(array[i],array[minind]);
  }
  return array;
}

int main(){
  int size=5;
  vector<int> arr={5,4,3,1,2,3,4,5};
  selectionSort(arr);
  for (int i=0;i<arr.size();i++){
    cout<<arr[i]<<endl;
  }


}