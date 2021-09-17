#define _CRT_SECURE_NO_WARNINGS 1 
#include<stdio.h>
#include<string.h>
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
	for (;count  >= 0; count--) {
		len = str;
		for (int i = 0; i < count; i++) {
			printf("%c", *len);
			len++;
		}
		printf("\n");
	}
	return 0;

}