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
bool can_part(vector<int> nums){
    return true;
}
int number_of_ways(int sum, int amount, int start, vector<int> &coins,vector<vector <int>> &dp){
    if (sum==amount)
        return 1;
    if (sum>amount)
        return 0;
    if (dp[start][sum] != -1)
        return dp[start][sum];
    int res=0;
    for(int i=start;i<coins.size();i++){
        res+=number_of_ways(sum+coins[i],amount,i,coins,dp);
    }
    dp[start][sum] = res;
    return dp[start][sum];
}
int coin_change(int amount,vector<int> &coins){
    int n = coins.size();
    vector<vector<int>> dp(n+1,vector<int>(amount+1,-1));
    return number_of_ways(0, amount, 0, coins,dp);
}
int main(){
    vector<int> coins = {1,2,3,4};
    int amount=3;
    cout<<coins[coins.size()-1]<<endl;
    cout<<coin_change(amount,coins)<<endl;
    //cout<<number_of_ways(0,1,0,coins)<<endl;

}