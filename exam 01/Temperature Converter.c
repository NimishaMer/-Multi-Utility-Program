#include<stdio.h>

int main(){
	float Celsius , Fahrenheit ;
	
	printf("ENTER YOUR CELSIUS :");
	scanf("%f",&Celsius);
	
	Fahrenheit=(9.0/5.0*Celsius)+32;
	
	printf("ENTER Fahrenheit :%.1f",Fahrenheit);
}