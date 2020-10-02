// Ornek107.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <stdio.h>
#include <stdlib.h>
/* ÝKÝ YAZIYI BÝRLEÞTÝRMEK */
/* Okuma amacýyla adresini aldýðý iki yazýyý dinamik bir bellek alanýnda birleþtiren strcon
	isimli iþlevi tanýmlayýn:
	char *strcon(const char *p1, const char *p2);
	Ýþlev p1 ve p2 adreslerindeki yazýlarý dinamik bir bellek alanýnda birleþtirerek,
	birleþtirilmiþ yazýnýn baþlangýç adresine geri dönmeli. */
char* mystrcon(const char* p1, const char* p2);

int main()
{
	char s1[100];
	char s2[100];
	char* pd;
	printf("birinci yazýyý girin : ");
	gets_s(s1);
	printf("ikinci yazýyý girin : ");
	gets_s(s2);
	pd = mystrcon(s1, s2);
	printf("(%s)\n", s1);
	printf("(%s)\n", s2);
	printf("(%s)\n", pd);
}

char* mystrcon(const char* p1, const char* p2)
{
	int lenght1 = 0, lenght2 = 0,lenght=0;
	char* ptr;
	for (int i = 0; *(p1 + i) != '\0'; i++)
		lenght1++;
	for (int i = 0; *(p2 + i) != '\0'; i++)
		lenght2++;
	lenght = lenght1 + lenght2;
	 ptr = (char*)malloc(lenght);
	 int counter = 0; 
	 for (; counter < lenght1; counter++)
		 *(ptr + counter) = *(p1 + counter);
	 for (int i = 0; i < lenght2; i++)
	 {
		 *(ptr + counter) = (char)*(p2 + i);
		 counter++;
	 }
	 *(ptr + lenght) = '\0';
	 return ptr;
}

