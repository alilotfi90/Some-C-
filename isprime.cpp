#include <iostream>
#include <stdio.h>
#include <array>
using namespace std;
int isprime(int n){
	bool ret=true;
	if (n==1){
		ret=false;
	}
	else if (n==2){
		ret=true;
	}
	else {
		for (int i =2;i*i<=n;i++){
			if (n%i==0){
				ret=false;
				break;
			}
		}
	}
	return ret;
}
int main(){
cout<<isprime(4);
return 0;

}