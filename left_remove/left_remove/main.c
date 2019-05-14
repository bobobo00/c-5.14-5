#define _CRT_SECURE_NO_WARNINGS 1
#include "left_remove.h"
int main(){
	char string1[20] = "ABCDE";
	char string2[] = "BCDEE";
	unsigned int num = 0;
	scanf("%d", &num);
	/*int num1 = 0;
	int num2 = 0;
	scanf("%d %d", &num1,&num2);
	Left_Remove(string1, num1);
	printf("%s", string1);
	printf("\n");
	Right_Rmove(string1, num2);
	printf("%s", string1);
	printf("\n");
	if (judge(string1, string2)){
		printf("Yes");
	}
	else{
		printf("No");
	}*/
	if (judge1(string1, string2)){
		printf("Find\n");
	}
	else{
		printf("NOT\n");
	}
	left_remove(string1, num);
	right_remove(string1, num);
	printf("%s",string1);
	system("pause");
	return 0;
}