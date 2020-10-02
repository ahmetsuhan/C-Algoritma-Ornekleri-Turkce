// Ornek108.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <stdio.h>
#include <stdlib.h>

/* merge ��LEV� */
/* int t�rden s�ras�z iki diziyi, k���kten b�y��e do�ru s�ral� bir bi�imde yerle�tiren merge
	isimli i�levi tan�mlay�n:
	int *merge(const int *p1, int size1, const int *p2, int size2);
	��leve g�nderilecek arg�manlar s�ras�z olan dizilerin ba�lang�� adresleri ve uzunluklar�d�r.
	��lev kendi i�inde iki dizinin toplam uzunlu�u kadar bir bellek blo�unu dinamik olarak elde
	ederek birle�tirme i�lemini dinamik olarak yarat�lan blokta ger�ekle�tirmeli. ��lev,
	dinamik dizinin ba�lang�� adresiyle geri d�nmeli.*/
int* merge(const int* p1, int size1, const int* p2, int size2);
int main()
{
	int a[10] = { 1, 4, 7, 2, 3, 2, 1, 8, 7, 6 };
	int b[8] = { 0, 4, 0, 3, 1, 9, 6, 4 };
	int* ptr, k;
	ptr = merge(a, 10, b, 8);
	printf("birlestirilmis dizi :\n");
	for (k = 0; k < 18; ++k)
		printf("%d ", ptr[k]);
}
int* merge(const int* p1, int size1, const int* p2, int size2)
{
	int* arr ,counter=0,temp=0;
	int lenght = size1 + size2;
	arr = (int*)malloc(lenght*sizeof(int*));
	for ( ; counter < size1; counter++)
		*(arr + counter) = *(p1 + counter);
	
	for (int i = 0; i < size2; i++) {
		*(arr + counter) = *(p2 + i);
		counter++;
	}
		
	*(arr + lenght) = '\0';

	for (int j = 0; j < lenght; j++)
	{
		for (int d = 0; d < lenght - 1 - j; d++)
		{
			if (*(arr + d) > * (arr + d + 1))
			{
				temp = arr[d];
				arr[d] = arr[d + 1];
				arr[d + 1] = temp;
			}
		}
	}
	return arr;
}

