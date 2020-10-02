// Ornek107.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <stdio.h>
#include <stdlib.h>
/* �K� YAZIYI B�RLE�T�RMEK */
/* Okuma amac�yla adresini ald��� iki yaz�y� dinamik bir bellek alan�nda birle�tiren strcon
	isimli i�levi tan�mlay�n:
	char *strcon(const char *p1, const char *p2);
	��lev p1 ve p2 adreslerindeki yaz�lar� dinamik bir bellek alan�nda birle�tirerek,
	birle�tirilmi� yaz�n�n ba�lang�� adresine geri d�nmeli. */
char* mystrcon(const char* p1, const char* p2);

int main()
{
	char s1[100];
	char s2[100];
	char* pd;
	printf("birinci yaz�y� girin : ");
	gets_s(s1);
	printf("ikinci yaz�y� girin : ");
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

