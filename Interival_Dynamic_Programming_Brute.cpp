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
int sum_arr_el( vector <int> arr,int start, int end){
    int sum=0;
    if(start>end || start<0 || end>=arr.size())
        return sum;
    for(int i=start;i<=end;i++){
        sum+=arr[i];
    }
    return sum;
}
int max_score(vector <int> coins,int l,int r){
    if(l==r)
        return coins[l];
    
    // total score is sum_arr_el(), if 1 picks l, then 2 needs to pick among l+1,r, therefore, max score possible is sum_arr_el(coins,l,r)-max_score(coins,l+1,r)
    // total score is sum_arr_el(), if 1 picks r, then 2 needs to pick among l,r-1, therefore, max score possible is sum_arr_el(coins,l,r)-max_score(coins,l,r-1)
    return sum_arr_el(coins,l,r) - min(max_score(coins,l+1,r),max_score(coins,l,r-1));
    //return pick left and pick right
}
int main(){
    vector <int> coins = {4,4,9,4};
    cout<<coins<<endl;
    cout<<sum_arr_el(coins,4,4)<<endl;
    cout<<max_score(coins,0,3)<<endl;
}