#include<stdio.h>
int main(){
	int year;
	printf("enter a year:");
	
	scanf("%d",&year);
	while(1){
		if(year%4==0 && year%100!=0||year % 400 ==0){
		printf("%d is aleap year",year);
		
		break;
		
		}else{
			printf("%d is not a leap year.",year);
			break;
		}
		}
	return 0;
}