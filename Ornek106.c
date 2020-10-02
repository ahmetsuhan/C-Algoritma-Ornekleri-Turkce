// Ornek106.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <stdio.h>
#include <stdlib.h>

 /* strdup ÝÞLEVÝ */
	/* strdup iþlevi standart olmamasýna karþýn derleyici paketlerinin çoðuyla sunulur:
		char *strdup(const char *ptr);
		Ýþlev ptr adresindeki yazýnýn bir kopyasýný dinamik bir bellek alanýna kopyalar. Ýþlevin geri
		dönüþ deðeri kopya yazýnýn baþlangýç adresidir. Bu iþlevi mstrdup ismiyle tanýmlayýn. */
char* mystrdup(const char* ptr);
int main()
{
	char str[100];
	char* pd;
	printf("bir yazý girin : ");
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

