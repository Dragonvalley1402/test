//calculator
#include<stdio.h>
int main()
{
	float a,b,ans;
	int option;
	
	//input a and b
	printf("\n enter two numbers");
	scanf("%f%f",&a,&b);
	
	//display menu
	printf("\n 1.addition\n");
	printf("\n 2.subtraction\n");
	printf("\n 3.multiplication\n");
	printf("\n 4.division\n");
	printf("\n enter your option");
	scanf("%d",&option);
	
	switch(option){
		case 1:ans=a+b;break;
		case 2:ans=a-b;break;
		case 3:ans=a*b;break;
		case 4:ans=a/b;break;
		default: printf("\n invalid option");
		}
		
		printf("\n answer is %f ",ans);
		
		return 0;
		}
