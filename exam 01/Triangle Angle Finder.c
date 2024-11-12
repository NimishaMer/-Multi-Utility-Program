#include<stdio.h>

int main(){
	int Firstangle , Secondangle , Thirdangle ;
	
	printf("ENTER FIRSTANGLE  :");
	scanf("%d",&Firstangle);
	
	printf("ENTER SECONDANGLE  :");
	scanf("%d",&Secondangle );
	
	Thirdangle=200-(Firstangle+Secondangle );
	
	printf("ENTER YOUR THIRDANGLE :%d",Thirdangle);
}