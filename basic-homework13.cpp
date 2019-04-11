#include <stdio.h>
#include<stdlib.h>

int main(void) 
{
	int sex,age;

	printf("請輸入性別(男生請輸入1,女生請輸入2):\n");
	scanf("%d",&sex);

	printf("請輸入年齡:");
	scanf("%d",&age);

	if((sex==1)&&(age>=18))
	 printf("在民國100年以前能結婚!\n");
	else if((sex==1)&&(age<18))
	 printf("在民國100年以前不能結婚!\n"); 
	if((sex==2)&&(age>=16))
	 printf("在民國100年以前能結婚!\n");
	else if((sex==2)&&(age<16))
	 printf("在民國100年以前不能結婚!\n");  

system("pause");
return 0;
} 
