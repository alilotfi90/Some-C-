#include <string>
#include <iostream>
#include <stdio.h>
#include <array>
#include <math.h>
#include<bits/stdc++.h>
using namespace std;
bool isprime(int N){
	int array[N+1];
	for(int i=2;i<=N;i++){
		array[i]=true;
	}
	for(int i=2;i<=N;i++){
		if(array[i]){
			for(int j=2*i;j<=N;j+=i){
				array[j]=false;
			}
		}
	}
	array[0]=false;
	array[1]=false;
	return array[N];
}
int main(){
int n=4;
cout<<"primes"<<endl;
cout<<isprime(17)<<endl;
return 0;

}