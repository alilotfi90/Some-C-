#include <vector>
#include <string>
#include <iostream>
#include <stdio.h>
#include <array>
#include <math.h>
#include<bits/stdc++.h>
#include <algorithm> // copy
#include <cmath> // pow, sqrt
#include <iterator> // back_inserter, istream_iterator, ostream_iterator, prev
#include <limits> // numeric_limits
#include <queue> // priority_queue
#include <sstream> // istringstream
#include <string> // getline, string
#include <vector> // vector
using namespace std;
template <typename S>
ostream& operator<<(ostream& os,
                    const vector<S>& vector)
{   
    // Printing all the elements
    // using <<
    for (auto element : vector) {
        os << element << " ";
    }
    return os;
}
vector<int> subarray_sum(vector<int> arr, int target){
    unordered_map<int, int> prefix_sums;
    prefix_sums[0]=0;
    int cur_sum=0;
    for(int i=0;i<arr.size();i++){
        cur_sum+=arr[i];
        int complement=cur_sum - target;
        if(prefix_sums.count(complement)){
            return {prefix_sums[complement],i+1};
        }
        prefix_sums[complement]=i+1;
    }
    return {};
}
int main(){
    cout<<""<<endl;
    vector <int> arr = {1,2,3};
    int target=6;
    cout<<subarray_sum(arr,target)<<endl;
}