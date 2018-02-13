// checks if a number is Armstrong number or not 
#include<stdio.h>
#include<math.h>

int main(void){
	int num,digit,sum,i, count=0;
	printf("Enter a number: ");// prompts user input
	scanf("%d",&num);

	for(i=num;i>0;){
		count++;// counts the number of digits 
		i/=10;
	}

	for(i=num;i>0;){
		digit=i%10;// stores the last digit of the number to digit
		sum+=pow(digit,count); // sums the power of digits
		i/=10; 
	}
	if(sum==num){ // checks if th number is equal to the sum of power of its digit 
		printf("%d is an Armstrong number.\n",num);
	} else {
		printf("%d is not an Armstrong number.\n",num);
	}// end of else
}// end of main function

