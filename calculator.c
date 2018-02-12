#include<stdio.h>

int main(){
int x,a,b,result=0;
printf("What operation do you want to perform:\n1.Addition:\n2.Subtraction:\n3.Dividion:\n4.Multiplication:\n5.Exit\n");
scanf("%d",&x);
printf("Enter two numbers:\n");
scanf("%d%d",&a,&b);

switch(x){
case 1:
	result=a+b;
	break;
case 2:
	result=a-b;
	break;
case 3:
	result=a/b;
	break;
case 4:
	result=a*b;
	break;
default:
	printf("thank you for using my calculator!!\n");
	break;
}

printf("Your result is :%d\n",result);

}
