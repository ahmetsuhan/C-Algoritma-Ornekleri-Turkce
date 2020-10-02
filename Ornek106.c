// Ornek106.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <stdio.h>
#include <stdlib.h>

 /* strdup ��LEV� */
	/* strdup i�levi standart olmamas�na kar��n derleyici paketlerinin �o�uyla sunulur:
		char *strdup(const char *ptr);
		��lev ptr adresindeki yaz�n�n bir kopyas�n� dinamik bir bellek alan�na kopyalar. ��levin geri
		d�n�� de�eri kopya yaz�n�n ba�lang�� adresidir. Bu i�levi mstrdup ismiyle tan�mlay�n. */
char* mystrdup(const char* ptr);
int main()
{
	char str[100];
	char* pd;
	printf("bir yaz� girin : ");
	gets_s(str, 100);
	pd = mystrdup(str);
	printf("(%s)\n", str);
	printf("(%s)\n", pd);
	
}
char* mystrdup(const char* ptr)
{
	int lenght = 0;
	char* copy;
	
	for (int i = 0; *(ptr + i) != '\0'; i++)
		lenght++;
	copy = (char*)malloc(lenght);
	for (int i = 0; i < lenght; i++)
	{
		*(copy + i) = *(ptr + i);
	}
	*(copy + lenght) = '\0';
	return copy;
}

