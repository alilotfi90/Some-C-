#include <vector>
#include <string>
#include <iostream>
#include <stdio.h>
#include <array>
#include <math.h>
#include<bits/stdc++.h>
using namespace std;
#include <algorithm> // copy
#include <cmath> // pow, sqrt
#include <iostream> // cin, cout, streamsize
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
bool can_part(vector<int> nums){
    int total_sum = accumulate(nums.begin(), nums.end(), 0);
    if (total_sum % 2!=0)
        return false;
    int target=total_sum/2;
    int n=nums.size();
    vector<vector<bool>> dp(n+1,vector<bool>(target+1,false));
    dp[0][0]=true;

    //dp[i][s] 0<=i<=n, 0<=s<=target
    // dp[i][s] = dp[i-1][s] || dp[i-1][s-nums[i]], but makes sense if s>=nums[i], what if s<nums[i], then dp[i][s]=dp[i-1][s]
    for(int s=0;s<=target;s++){
        for(int i=1;i<=n;i++){
            if(s<nums[i]){
                dp[i][s]=dp[i-1][s];
            }
            else{
                dp[i][s]= dp[i-1][s] || dp[i-1][s-nums[i]]; 
            }

        }

    }
    return dp[n][target];
}
int main(){
    vector<int> arr;
    arr={-1,2,3,4};
    for(int num:arr){
        cout<<num<<endl;
    }
    cout<<arr<<endl;
    vector<vector<int>> dp(4,vector<int>(2,3));
    cout<<dp<<endl;
    cout<<can_part(arr)<<endl;


}