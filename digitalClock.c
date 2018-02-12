//Digital watch in C program
// Programmed by sagar

#include<stdio.h>
#include<unistd.h>
#include<time.h>

int main(){
	int hour=0,min=0,sec=0;
	printf("\n\n\n\n");
	while(1){	// runs an infinite loop
	printf("\r \t\t\t\t %2d : %2d : %2d ",hour,min,sec);// prints time n the format HH:MM:SS \r updates the code in the same line
	sec++;
	fflush(stdout);// flushes buffer in gcc
	if(sec==60){
		min++;
		sec=0;
	} 
	if(min==60){
		hour++;
		min=0;
	}
	if (hour==24){
		hour=0;
		min=0;
		sec=0;
	}
	sleep(1); //halts the system for 1s
	} 
}
