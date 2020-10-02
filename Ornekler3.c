// Ornekler3.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <stdio.h>
#include <locale.h>
#include <string.h>
#include <ctype.h>

#pragma region Ornek97
	/* TAMSAYIYI YAZIYA D�N��T�RMEK */
	/* Verilen int t�rden bir say�n�n T�rk�e metin kar��l���n� bir adresten ba�layarak yerle�tiren
		numtotext isimli i�levi tan�mlay�n. ��levin bildirimi a�a��daki gibidir:
		char *numtotext(long number, char *str);
		Birinci parametresi yaz�ya �evrilecek olan say�y�, ikinci parametresi ise yaz�n�n
		yerle�tirilece�i dizinin ba�lang�� adresini g�stermektedir. ��lev str adresine geri d�nmeli.
		Metin k���k harflerden olu�mal�.*/
char* numtotext(long number, char* str);
#pragma endregion

#pragma region Ornek98
/* YAZIDAK� KARAKTER� BASKA B�R KARAKTERLE DE���T�RMEK */
/* Bir yaz� i�indeki istenen bir karakteri bir ba�ka karakterle de�i�tiren a�a��daki i�levi
	yaz�n:
	char *replace_chars(char *str, char x, char y);
	��levin birinci parametresi karakter dizisinin ba�lang�� adresi, ikinci parametresi
	de�i�tirilecek olan karakter, ���nc� parametresi de hangi karakterle de�i�tirilece�idir.
	Geri d�n�� de�eri birinci parametresiyle belirtilen adresin kendisidir.*/
char* replace_chars(char* str, char x, char y);
#pragma endregion

#pragma region Ornek99
/* YAZIDAK� K���K HARFLER� B�Y�K HARFE B�Y�K HARFLER� K���K HARFE D�N��T�RMEK */
/* Bir yaz�n�n i�indeki k���k harfleri b�y�k harfe, b�y�k harfleri ise k���k harfe �eviren
	char *change_case(char *str);
	i�levini tan�mlay�n. ��lev str adresindeki yaz�daki k���k harfleri b�y�k harfe, b�y�k
	harfleri k���k harfe �evirmeli. �ngilizce harf karakterleri d���ndaki harflerde bir de�i�iklik
	yap�lmamal�.*/
char* change_case(char* str);
#pragma endregion

#pragma region Ornek100
/* YAZIDAN BA�KA B�R YAZIYI S�LMEK */
/* Bir yaz�n�n i�inden ba�ka bir yaz�y� (her yinelenmesinde) silen, remove_str isimli i�levi
	tan�mlay�n:
	char *remove_str(char *p1, const char *p2);
	��lev p1 adresindeki yaz�n�n i�inde p2 adresindeki yaz�y� siler. E�er p1 adresindeki yaz�n�n
	i�inde p2 adresindeki yaz� birden fazla kez yineleniyorsa, yinelenen t�m yaz�lar silinmeli.
	��lev, i�inde silme i�lemi yap�lan yaz�n�n adresine geri d�nmeli.*/
char* remove_str(char* p1, const char* p2);
#pragma endregion

#pragma region Ornek101
/* YAZIDAN BO�LUK KARAKTERLER�N� S�LEN ��LEV */
/* Bir yaz�n�n i�indeki bo�luk karakterlerini silecek rem_space isimli i�levi tan�mlay�n:
	char *rem_space(char *str);
	��lev, kendisine g�nderilen adresteki yaz�daki t�m bo�luklar� (white space karakterleri)
	silerek yaz�y� ayn� adrese bo�luksuz olarak yerle�tirmeli. Yaz�n�n sonunda yine sonland�r�c�
	karakter bulunmal�.
	��levin geri d�n�� de�eri i�leve g�nderilen adres olmal�.*/
char* rem_space(char* str);
#pragma endregion

#pragma region Ornek102
/* YAZIDAN Y�NELENEN KARAKTERLER�N S�L�NMES� */
/* Bir yaz�n�n i�inden yinelenen karakterleri silen remove_duplicate isimli i�levi tan�mlay�n:
	char *remove_duplicate(char *);
	��lev bir yaz�n�n ba�lang�� adresini alarak, yaz�dan yinelenen karakterleri silmeli. Yani
	i�lev �a�r�ld�ktan sonra yaz�da ayn� karakterden birden fazla olmamal�.
	��levin yaz�n�n i�inden silme i�lemi yapt��� yaz�n�n ba�lang�� adresine d�nmeli.*/
char* remove_duplicate(char* str );
#pragma endregion

#pragma region Ornek103
/* YAZI BA�INDAK� VE SONUNDAK� BO�LUKLARI S�LEN ��LEV */
/* Bir yaz�n�n ba��ndaki ve sonundaki bo�luk karakterlerini atarak ba�ka bir diziye
	yerle�tiren trim isimli i�levi yaz�n. ��levin bildirimi a�a��daki gibidir:
	char *trim(char *dest, const char *source);
	��levin ilk parametresi yerle�tirilecek yaz�n�n adresi, ikinci parametresi ise bo�luklu
	yaz�n�n adresidir. ��levin geri d�n�� de�eri yerle�tirme i�leminin yap�ld��� adrestir.*/
char* trim(char* dest, const char* source);
#pragma endregion

#pragma region Ornek104
/* YAZININ SONUNDA D��ER YAZI VAR MI? */
/* Bir yaz�n�n sonunda ba�ka bir yaz�n�n olup olmad���n� s�nayan strend isimli i�levi
	tan�mlay�n:
	int strend(const char *s1, const char *s2);
	��lev s1 yaz�s�n�n sonunda s2 yaz�s� varsa s�f�r d��� bir de�ere, aksi halde 0 de�erine geri
	d�nmeli.*/
int strend(const char* s1, const char* s2);
#pragma endregion
int main()
{

	






}



char* numtotext(long number, char* str)
{
	setlocale(LC_ALL, "Turkish");
	int unitDigits = 0, tenthDigits = 0, hundreadDigits = 0, thousansdDigit = 0, tenThousandsDigits = 0, hudreadThousandsDigits = 0, billionsDigits = 0,tenBillionsDigits =0 ;
	int length = 0; //str lenght
	int index = 0;
	long swap = number;
	while (swap > 0)
	{
		tenBillionsDigits = swap / 10000000;
		swap = swap - (tenBillionsDigits * 10000000);
		unitDigits = swap % 10;
		billionsDigits = swap / 1000000;
		swap = swap - (billionsDigits * 1000000) - unitDigits;
		hudreadThousandsDigits = swap / 100000;
		swap = swap - (hudreadThousandsDigits * 100000);
		tenThousandsDigits = swap / 10000;
		swap = swap - (tenThousandsDigits * 10000);
		thousansdDigit = swap / 1000;
		swap = swap - (thousansdDigit * 1000);
		hundreadDigits = swap / 100;
		swap = swap - (hundreadDigits * 100);
		tenthDigits = swap / 10;
		swap = swap - (tenthDigits * 10);
	}
	

	
	return str;
} // tekrar bak .

char* replace_chars(char* str, char x, char y)
{
	int length = 0;
	for (int i = 0; *(str + i) != '\0'; i++)
	{
		length++;
	}
	*(str + length) = '\0';
	for (int i = 0; *(str + i) != '\0'; i++)
	{
		if (*(str + i) == x)
		{
			*(str + i) = (char)y;
		}
	}
	return str;
}

char* change_case(char* str)
{
	int length = 0;
	int indexCounter = 0;
	for (int i = 0; *(str + i) != '\0'; i++)
	{
		length++;
	}
	while (indexCounter < length)
	{
		for (int i = 65; i < 123; i++)
		{
			if (i >= 65 && i <= 90)
			{
				if (*(str+indexCounter) == i)
				{
					*(str + indexCounter) = i + 32;
				}
			}
			else if (i >= 97 && i <= 122)
			{
				if (*(str + indexCounter) == i)
				{
					*(str + indexCounter) = i - 32;
				}
			}
		}
		indexCounter++;
	}
	return str;
}

char* remove_str(char* p1, const char* p2)//p1 den p2 yi ��kar
{
	int length = 0,lenght2 = 0; 
	char* copiedP1 = (char*)p2; 
	char* ret = strstr(p1, p2); 
	int count = 0,count2=0;

	for (int i = 0; *(p1 + i) != '\0'; i++)
	{
		length++;
	}
	for (int i = 0; *(ret + i) != '\0'; i++)
	{
		lenght2++;
	}
	for (int i = 0; i<length-lenght2; i++)
	{
		for (int j = 0; j < lenght2; j++)
		{
			if (*(p1 + i +j ) == *(ret + i + j))
			{
				count++;
			}
		}
		if (count == lenght2)
		{
			i += 3;
			for (int k = 0; k < lenght2; k++)
			{
				*copiedP1 = *(p2+k);
				copiedP1++;
			}
		}
	}
	for (int c = 0; *(copiedP1 + c) != '\0'; c++)
	{
		count2++;
	}
	*(copiedP1 + count2) = '\0';
	return copiedP1;
}//tekrar bak 

char* rem_space(char* str)
{
	int lenght = 0, lenght2 = 0, counter = 0;
	char* copiedStr = str;
	for (int i = 0; *(str + i) != '\0'; i++)
	{
		lenght2++;
	}
	for (int k = 0; k < lenght2; k++)
	{
		if (*(str) != 32)
		{
			*(copiedStr) = *(str);
			copiedStr++;
			counter++;
			str++;
		}
		else if (*(str) == 32)
		{
			str++;
		}
	}
	*(copiedStr + counter) = '\0';
	str = copiedStr;
	return str;
}

char* remove_duplicate(char* str)
{
	int k = 0;
	int lenght = strlen(str);
	if (strlen(str) == 0 || strlen(str) == 1)
		return str;
	for (int i = 0; i < lenght; i++)
	{
		for (int j = i + 1; j < lenght; )
		{
			if (*(str + j) == *(str + i))
			{
				for (k = j; k < lenght; k++)
				{
					*(str + k) = *(str + k + 1);
				}
				lenght--;
			}
			else
			{
				j++;
			}
		}
	}
	return str;
}

char* trim(char* dest, const char* source)
{
	int counter = 0;
	int lenght = 0;
	// to find source array lenght
	for (int i = 0; *(source + i) != '\0'; i++)
	{
		lenght++;
	}

	for (int j = 0; j < lenght; j++)
	{
		if (*(source + j) != 32)
		{
			*(dest + counter) = *(source + j);
			counter++;
		}
	}
	*(dest + counter) = '\0';
	return dest;
}

int strend(const char* s1, const char* s2) {
	int isContain = 0, lenghtS1 = 0, lenghtS2 = 0; // zero is not contain
	int counter = 0;
	for (int i = 0; *(s1 + i) != '\0'; i++)
		lenghtS1++;
	for (int j = 0; *(s2 + j) != '\0'; j++)
		lenghtS2++;
	int c = lenghtS2;
	if (lenghtS1 >= lenghtS2)
	{
		for (int k = lenghtS1 - 1; k >= lenghtS1 - lenghtS2; k--)
		{
			if (s1[k] == s2[c - 1] ) 
			{
				counter++;
				isContain = 1;
			}
			else
			{
				isContain = 0;
				break;
			}
			c--;
		}
	}
	else
	{
		isContain = 0;
	}
	

	return isContain;
}

