#include <iostream>
#include <string>
int factorial(int n);
int main(){
	
	return 0;
}
int factorial(int n){
	if(n == 1)
		return 1;
	else 
		return n*factorial(n-1);
}