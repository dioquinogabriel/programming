// Dioquino, Gabriel G.
// 2017-08041-MN-1
// PROG_ASS_4.cpp

#include <iostream>
#include <cmath>

using namespace std;

/*
  If we list all the natural numbers below 10 that are multiples of 3 5, or 7, we get 3, 5, 6, 7 and 9. The sum of these multiples is 30.
  Find the sum of all the multiples of 3 or 5 below 10000.
*/
int main(){
	
	int num1, num2 = 0, sum = 0;
	cout <<"If we list all the natural numbers below 10 that are multiples of 3 or 5, we get 3, 5, 6 and 9.\n";
	cout <<"The sum of these multiples is 23.\n";
	cout <<"Input a natural number below 10000 and the program will output the sum of multiples of 3 and 5 below the number.\n";
	cout <<"Number:";
	cin <<num1;
	cout <<"\n";
	
	while(1){
		num2++;
		if(((num2%3)==0)||((num2%5)==0)){
			sum = sum + num2;
		}
		if(num2==num1){
			break;
		}
	}
	
	cout <<"\n\n" <<"Sum of multiples of 3 of 5 below "  <<num1	<<" is " <<sum.;
	
	return 0;
}