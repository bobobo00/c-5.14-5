#define _CRT_SECURE_NO_WARNINGS 1
#include "left_remove.h"
//char *Left_Remove(char *string1, int num){
//	int i = 0;
//	int count = Len(string1);
//	if (num > count){
//		return;
//	}
//	while (num){
//		char tmp = *(string1);
//		for (i = 0; i < count-1; i++){
//			*(string1 + i) = *(string1 + i + 1);
//		}
//		*(string1 + count - 1) = tmp;
//		num--;
//	}
//	return string1;
//}
//char *Right_Rmove(char *string1, int num){
//	int i = 0;
//	int count=Len(string1);
//	if (num > count){
//		return;
//	}
//	while (num){
//		char tmp = *(string1+count-1);
//		for (i = count-1; i > 0; i--){
//			*(string1 + i) = *(string1 + i - 1);
//		}
//		*(string1) = tmp;
//		num--;
//	}
//	return string1;
//}
//int Len(char *string){
//	int i = 0;
//	int count = 0;
//	while (*(string + i) != '\0'){
//		count++;
//		i++;
//	}
//	return count;
//}
//
//int judge1(char *string1, char *string2){
//	int x = 0;
//	if (Len(string1) != Len(string2)){
//		return 0;
//	}
//	int count = Len(string1);
//	for (x = 0; x < count; x++){
//		left_remove(string1, 1);
//		if (strcmp(string2,string1) == 0){
//			return 1;
//		}
//		else  if (strcmp(string2, right_rmove(string1, 1)) == 0){
//			return 1;
//		}
//	}
//	return 0;
//}


void Reverse(char *left, char *right){
	assert(left != NULL&&right != NULL);
	while (left < right){
		char tmp = *left;
		*left = *right;
		*right = tmp;
		left++;
		right--;
	}
}
void  left_remove(char *string,unsigned int num){
	while (num>strlen(string)){
		return;
	}
	Reverse(string, string + (num - 1));
	Reverse(string + num, string + (strlen(string) - 1));
	Reverse(string, string + (strlen(string) - 1));
}
void right_remove(char *string, unsigned int num){
	while (num>strlen(string)){
		return;
	}
	Reverse(string + (strlen(string) -num), string + (strlen(string) - 1));
	Reverse(string, string + (strlen(string) - num-1));
	Reverse(string, string + (strlen(string) - 1));

}
int  judge1(char *string1, char *string2){
	if (strlen(string1) != strlen(string2)){
		return 0;
	}
	strncat(string1, string1, strlen(string1));
	if (strstr(string1, string2)!=NULL){
		return 1;
	}
	return 0;
}