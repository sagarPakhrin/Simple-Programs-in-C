// program to find pythagorian triplet using random numbers generator
// a^2 + b^2 = c^2; a+b+c = 1000; find a,b,c

#include<stdio.h>
#include<stdlib.h>
#include<math.h>
// main function 

int main(void){
	int a,b,c,sum;
	while(sum !=1000){// runs the loop until a+b+c is not equal to 1000
		a = rand()%1000;// generates random between the range of 0-1000
		b = rand()%1000;// generates random between the range of 0-1000
		c = sqrt(a*a+b*b);// find the value of c 
		sum = a+b+c;
	}
	printf("The pyhagorian tripplets whose sum is 1000 are %d, %d, %d",a,b,c);
	puts("");
}
