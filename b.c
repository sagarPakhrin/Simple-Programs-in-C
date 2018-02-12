#include<stdio.h>


int main(){
	int year;
	printf("Enter the year: ");
	scanf("%d",&year);
	
	if(year%4==0){
		if(year%100==0){
			if(year%400==0){// if a number is divisible by 100 the it must be divisible by 400 
				printf("Leap Year\n");// prints leap year
			} else {
				printf("Not leap year\n");
			}
		}else {// if the number is divisible by hundred but not divisible by 100 
			printf("Leap Year\n");
		}
	}else{
	printf("Not leap year\n");
	} 
} // end of main 
		
		
