#include <stdio.h>
#include<stdlib.h>

int main(void) 
{
	int sex,age;

	printf("�п�J�ʧO(�k�ͽп�J1,�k�ͽп�J2):\n");
	scanf("%d",&sex);

	printf("�п�J�~��:");
	scanf("%d",&age);

	if((sex==1)&&(age>=18))
	 printf("�b����100�~�H�e�൲�B!\n");
	else if((sex==1)&&(age<18))
	 printf("�b����100�~�H�e���൲�B!\n"); 
	if((sex==2)&&(age>=16))
	 printf("�b����100�~�H�e�൲�B!\n");
	else if((sex==2)&&(age<16))
	 printf("�b����100�~�H�e���൲�B!\n");  

system("pause");
return 0;
} 
