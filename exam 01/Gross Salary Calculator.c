# include<stdio.h>

int main(){
	float BaseSalary, HRA , DA , TA , GrossSalary;
	
	printf("ENTER YOUR BASE SALARY :");
	scanf("%f",& BaseSalary);
	
	printf("ENTER YOUR HRA :");
	scanf("%f",& HRA);
	
	printf("ENTER YOUR DA :");
	scanf("%f",& DA);
	
	printf("ENTER YOUR TA :");
	scanf("%f",& TA);
	
	
	GrossSalary=BaseSalary+(BaseSalary*HRA/100)+(BaseSalary*DA/100)+(BaseSalary*TA/100);

	printf("ENTER GROSS SALARY Rs.%.2f",GrossSalary );
	
	return 0;
	
}