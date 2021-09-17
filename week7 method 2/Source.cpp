#define _CRT_SECURE_NO_WARNINGS 1 
#include<stdio.h>
#include<string.h>
void triangle(int lenght, char str[10000]);
int main() {
	char str[10000];
	printf("Input : ");
	scanf("%s", str);
	char* len;
	len = str;
	int count=0;
	while (*len != '\0') {
		count += 1;
		len++;
	}
	printf("Output : \n");
	triangle(count, str);
	
	return 0;

}
void triangle(int lenght, char str[10000]) {
	for (; lenght >= 0; lenght--) {
		char* len;
			len = str;
		for (int i = 0; i < lenght; i++) {
			printf("%c", *len);
			len++;
		}
		printf("\n");
	}
}