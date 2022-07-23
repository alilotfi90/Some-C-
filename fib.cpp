#include <iostream>
#include <stdio.h>
using namespace std;
int fib(int n){
	if (n<0){
		return false;
	}
	else if (n==0 || n==1){
		return n;
	}
	else{
		return fib(n-1)+fib(n-2);
	}
}
int main(){
	cout<<fib(10)<<endl;
	return 0;
}