#include<stdio.h>
int main(){
	int number;
	int n;
	number= 1;
	printf("enter the value of n:");
	scanf("%d",&n);
	
	printf("odd number form 1 to %d:\n",n);
	
	while(number <=n){
		if(number % 2!=0)
		printf("%d",number);
		number++;
	}
}