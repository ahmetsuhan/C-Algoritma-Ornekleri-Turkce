// Ornekler3.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <stdio.h>
#include <locale.h>
#include <string.h>
#include <ctype.h>

#pragma region Ornek97
	/* TAMSAYIYI YAZIYA DÖNÜÞTÜRMEK */
	/* Verilen int türden bir sayýnýn Türkçe metin karþýlýðýný bir adresten baþlayarak yerleþtiren
		numtotext isimli iþlevi tanýmlayýn. Ýþlevin bildirimi aþaðýdaki gibidir:
		char *numtotext(long number, char *str);
		Birinci parametresi yazýya çevrilecek olan sayýyý, ikinci parametresi ise yazýnýn
		yerleþtirileceði dizinin baþlangýç adresini göstermektedir. Ýþlev str adresine geri dönmeli.
		Metin küçük harflerden oluþmalý.*/
char* numtotext(long number, char* str);
#pragma endregion

#pragma region Ornek98
/* YAZIDAKÝ KARAKTERÝ BASKA BÝR KARAKTERLE DEÐÝÞTÝRMEK */
/* Bir yazý içindeki istenen bir karakteri bir baþka karakterle deðiþtiren aþaðýdaki iþlevi
	yazýn:
	char *replace_chars(char *str, char x, char y);
	Ýþlevin birinci parametresi karakter dizisinin baþlangýç adresi, ikinci parametresi
	deðiþtirilecek olan karakter, üçüncü parametresi de hangi karakterle deðiþtirileceðidir.
	Geri dönüþ deðeri birinci parametresiyle belirtilen adresin kendisidir.*/
char* replace_chars(char* str, char x, char y);
#pragma endregion

#pragma region Ornek99
/* YAZIDAKÝ KÜÇÜK HARFLERÝ BÜYÜK HARFE BÜYÜK HARFLERÝ KÜÇÜK HARFE DÖNÜÞTÜRMEK */
/* Bir yazýnýn içindeki küçük harfleri büyük harfe, büyük harfleri ise küçük harfe çeviren
	char *change_case(char *str);
	iþlevini tanýmlayýn. Ýþlev str adresindeki yazýdaki küçük harfleri büyük harfe, büyük
	harfleri küçük harfe çevirmeli. Ýngilizce harf karakterleri dýþýndaki harflerde bir deðiþiklik
	yapýlmamalý.*/
char* change_case(char* str);
#pragma endregion

#pragma region Ornek100
/* YAZIDAN BAÞKA BÝR YAZIYI SÝLMEK */
/* Bir yazýnýn içinden baþka bir yazýyý (her yinelenmesinde) silen, remove_str isimli iþlevi
	tanýmlayýn:
	char *remove_str(char *p1, const char *p2);
	Ýþlev p1 adresindeki yazýnýn içinde p2 adresindeki yazýyý siler. Eðer p1 adresindeki yazýnýn
	içinde p2 adresindeki yazý birden fazla kez yineleniyorsa, yinelenen tüm yazýlar silinmeli.
	Ýþlev, içinde silme iþlemi yapýlan yazýnýn adresine geri dönmeli.*/
char* remove_str(char* p1, const char* p2);
#pragma endregion

#pragma region Ornek101
/* YAZIDAN BOÞLUK KARAKTERLERÝNÝ SÝLEN ÝÞLEV */
/* Bir yazýnýn içindeki boþluk karakterlerini silecek rem_space isimli iþlevi tanýmlayýn:
	char *rem_space(char *str);
	Ýþlev, kendisine gönderilen adresteki yazýdaki tüm boþluklarý (white space karakterleri)
	silerek yazýyý ayný adrese boþluksuz olarak yerleþtirmeli. Yazýnýn sonunda yine sonlandýrýcý
	karakter bulunmalý.
	Ýþlevin geri dönüþ deðeri iþleve gönderilen adres olmalý.*/
char* rem_space(char* str);
#pragma endregion

#pragma region Ornek102
/* YAZIDAN YÝNELENEN KARAKTERLERÝN SÝLÝNMESÝ */
/* Bir yazýnýn içinden yinelenen karakterleri silen remove_duplicate isimli iþlevi tanýmlayýn:
	char *remove_duplicate(char *);
	Ýþlev bir yazýnýn baþlangýç adresini alarak, yazýdan yinelenen karakterleri silmeli. Yani
	iþlev çaðrýldýktan sonra yazýda ayný karakterden birden fazla olmamalý.
	Ýþlevin yazýnýn içinden silme iþlemi yaptýðý yazýnýn baþlangýç adresine dönmeli.*/
char* remove_duplicate(char* str );
#pragma endregion

#pragma region Ornek103
/* YAZI BAÞINDAKÝ VE SONUNDAKÝ BOÞLUKLARI SÝLEN ÝÞLEV */
/* Bir yazýnýn baþýndaki ve sonundaki boþluk karakterlerini atarak baþka bir diziye
	yerleþtiren trim isimli iþlevi yazýn. Ýþlevin bildirimi aþaðýdaki gibidir:
	char *trim(char *dest, const char *source);
	Ýþlevin ilk parametresi yerleþtirilecek yazýnýn adresi, ikinci parametresi ise boþluklu
	yazýnýn adresidir. Ýþlevin geri dönüþ deðeri yerleþtirme iþleminin yapýldýðý adrestir.*/
char* trim(char* dest, const char* source);
#pragma endregion

#pragma region Ornek104
/* YAZININ SONUNDA DÝÐER YAZI VAR MI? */
/* Bir yazýnýn sonunda baþka bir yazýnýn olup olmadýðýný sýnayan strend isimli iþlevi
	tanýmlayýn:
	int strend(const char *s1, const char *s2);
	Ýþlev s1 yazýsýnýn sonunda s2 yazýsý varsa sýfýr dýþý bir deðere, aksi halde 0 deðerine geri
	dönmeli.*/
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

char* remove_str(char* p1, const char* p2)//p1 den p2 yi çýkar
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

