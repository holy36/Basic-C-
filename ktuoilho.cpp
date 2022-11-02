#include <stdio.h>
#include <string.h>
// Ham kiem tra ki tu c co xuat hien trong xau s khong. Neu co tra ve 1, neu khong tra ve 0.
int IsContain(char s[], char c) {
	int i, size = strlen(s);
	for(i = 0; i < size; i++) {
		if(s[i] == c) return 1;
	}
	return 0;
}
// Ham dem so lan xuat hien cua ki tu c trong ca 2 xau s1 va s2.
int CountNumber(char s1[], char s2[], char c) {
	int i, size1 = strlen(s1), size2 = strlen(s2), count = 0;
	for(i = 0; i < size1; i++) {
		if(s1[i] == c) count++;
	}
	for(i = 0; i < size2; i++) {
		if(s2[i] == c) count++;
	}
	return count;
}
int main() {
	char s1[100], s2[100], s3[200], c;
	int i, j, size1, size2, size3 = 0;
	// Input
	fflush(stdin);
	fgets(s1, sizeof(s1), stdin);
	fgets(s2, sizeof(s2), stdin);
	// Tach cac ki tu rieng biet cua xau s1 va s2 de luu vao xau s3
	size1 = strlen(s1);
	size2 = strlen(s2);
	for(i = 0; i < size1; i++) {
		if(IsContain(s3, s1[i]) == 0 && s1[i] != '\n') s3[size3++] = s1[i];
	}
	for(i = 0; i < size2; i++) {
		if(IsContain(s3, s2[i]) == 0 && s2[i] != '\n') s3[size3++] = s2[i];
	}
	// Sap xep lai xau s3
	for(i = 0; i < size3 - 1; i++) {
		for(j = i+1; j < size3; j++) {
			if(s3[i] > s3[j]) {
				c = s3[i];
				s3[i] = s3[j];
				s3[j] = c;
			}
		}
	}
	// Output
	printf("%s\n", s3);
	for(i = 0; i < size3; i++) {
		printf("%d\n", CountNumber(s1, s2, s3[i]));
	}
	return 0;
}
