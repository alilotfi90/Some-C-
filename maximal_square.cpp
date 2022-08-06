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
int maximal_square(std::vector<std::vector<int>> matrix) {
    int m = matrix.size();
    int n = matrix[0].size();
    int max_length=0;
    vector <vector <int>> dp(m,vector<int>(n,0));
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            if(i==0 || j==0){
                if(matrix[i][j]==0){
                    dp[i][j]=0;
                    max_length=max(max_length,dp[i][j]);
                    continue;
                }
                else{
                    dp[i][j]=1;
                    max_length=max(max_length,dp[i][j]);
                    continue;
                }

            }
            else{
                dp[i][j]=matrix[i][j]*(1+min({dp[i][j-1],dp[i-1][j],dp[i-1][j-1]}));
                max_length=max(max_length,dp[i][j]);
                continue; 
            }
        }

    }
    return pow(max_length,2);
}
int main(){
    vector<vector <int>> matrix = {{0,0,0},{1,1,1},{1,1,1}};
    cout<<maximal_square(matrix)<<endl;
    

}