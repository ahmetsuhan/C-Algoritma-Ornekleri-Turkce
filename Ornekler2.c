// Ornekler2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

#pragma region Ornek75
	/* ANAHTAR S�ZC�K M�?
	Ba�lang�� adresini ald��� yaz�n�n standart ANSI C dilinin 32 anahtar s�zc���nden biri olup
	olmad���n� s�nayan
	int is_keyword(const char *str);
	i�levini tan�mlay�n. str adresindeki yaz� ge�erli bir anahtar s�zc�k ise i�lev s�f�r d��� bir
	de�ere, aksi halde 0 de�erine geri d�nmeli. */
int is_keyword(const char* str);
#pragma endregion

#pragma region Ornek76
/* D�Z�Y� TERS �EV�REN ��LEV */
/* Adresini ve boyutunu ald��� int t�rden bir diziyi ters �eviren, reverse_array isimli i�levi yaz�n:
	int *reverse_array(int *ptr, int size);
	��levin geri d�n�� de�eri ters �evrilen dizinin ba�lang�� adresi olmal�.*/
int* reverse_array(int* ptr, int size);
#pragma endregion

#pragma region Ornek77
/* B�Y�K TAMSAYILARLA ��LEMLER */
/* void addlong(const char *num1, const char *num2, char *num3); */
void addlong(const char* num1, const char* num2, char* num3);
#pragma endregion

#pragma region Ornek78
/* B�Y�K TAMSAYILARLA ��LEMLER */
/* void sublong(const char *num1, const char *num2, char *num3); */
void sublong(const char* num1, const char* num2, char* num3);
#pragma endregion

#pragma region Ornek79
/* D�Z� SIRALI MI? */
/* int t�rden bir dizinin k���kten b�y��e g�re s�ral� olup olmad���n� s�nayan is_sorted isimli
	i�levi yaz�n: 
	int is_sorted(const int *ptr, int size);
	is_sorted i�levi kendisine ba�lang�� adresi ile boyutu ge�ilen dizinin k���kten b�y��e
	do�ru s�ralanm�� olup olmad���n� s�namal�. E�er dizi s�ral� ise i�lev s�f�r d��� bir de�ere geri
	d�ner. E�er dizi s�ral� de�il ise i�levin geri d�n�� de�eri 0 de�eridir.*/
int is_sorted(const int* ptr, int size);
#pragma endregion


int main()
{





}

void Ornek() {

#pragma region Ornek66
	/* �ND�S SIRALAMASI ALGOR�TMASINI KODLAMAK */
	/* SIZE elemanl� bir int t�rden diziyi ilkde�er vererek tan�mlay�n. Bu dizinin elemanlar�n�
		de�il de elemanlar�n�n indislerini s�raya dizerek ba�ka bir dizi i�erisine yerle�tirin. Bu
		algoritmaya �indis s�ralamas�� denir. SIZE simgesel de�i�mezine istedi�iniz de�eri
		verebilirsiniz.*/

#pragma endregion

	//hatal�
#pragma region Ornek67
		/* D�Z�DE EN �OK Y�NELENEN DE�ER� BULMAK */
		/* 100 elemanl� int t�rden bir dizi i�indeki en �ok yinelenen de�eri bulun. En �ok yinelenen
			say� birden fazla ise, bunlardan dizi i�inde ilk g�r�len bulunmal�. Denemeyi diziye ilkde�er
			vererek yap�n:*/
	int random67[100], counter67 = 0;
	int temp67 = 0, enCokTekrarlanan67 = 0;
	srand(time(0));
	for (int i = 0; i < 100; ++i)
		random67[i] = rand() % 50;
	for (int i = 1; i <= 50; i++) {
		for (int j = 0; j < 100; j++) {
			if (i % random67[j] == 0) {
				counter67++;
			}
		}
		if (temp67 > counter67) {
			enCokTekrarlanan67 = i;
		}
		temp67 = counter67;
		counter67 = 0;
	}
	printf("%d", enCokTekrarlanan67);
#pragma endregion

#pragma region Ornek68
	/* HER SATIRA B�R KARAKTER FAZLA */
	/* char t�rden bir dizi i�inde bir yaz� tutuluyor. Yaz�n�n ilk karakterini birinci sat�ra, ilk iki
		karakterini ikinci sat�ra, ilk �� karakterini ���c�.sat�ra... yazd�ran bir C program� yaz�n.
		Diziye girilen yaz�n�n "necati" oldu�unu d���n�rsek a�a��daki gibi olmal�:
		n
		ne
		nec
		neca
		necat
		necati*/

	char name68[] = "Ahmet Suhan";
	for (int i = 0; i < 12; i++) {
		for (int j = 0; j < i; j++) {
			printf("%c", name68[j]);
		}
		printf("\n");
	}
#pragma endregion

#pragma region Ornek69
	/* YAZIDA HANG� HARFTEN KAC TANE VAR? */
	/* Bir yaz�n�n i�inde bulunan ingilizce harf karakterlerinden her birinin adedini ekrana
		listeleyin. K���k b�y�k harf ayr�m� yap�lmamal�. */
	char str69[100];
	int counter69 = 0, temp69 = 0;
	printf("bir yazi giriniz : ");
	gets(str69);
	for (int i = 97; i < 123; i++) {
		for (int j = 0; str69[j] != '\0'; j++) {
			if (str69[j] == i) {
				counter69++;
			}
		}
		printf("%c : %d\n", i, counter69);
		counter69 = 0;
	}

#pragma endregion

#pragma region Ornek70
	/* YAZIDA KA� S�ZC�K VAR? */
	/* char t�rden bir dizi i�inde tutulan bir yaz�daki s�zc�k say�s�n� hesaplay�n. Yaz�n�n ba��nda,
		i�inde ya da sonunda bo�luk karakterleri olabilir. */
	char buffer70[100];
	int counter70 = 1;
	printf("Enter any sentences:");
	gets_s(buffer70, 100);
	printf("Your sentences:");
	puts(buffer70);
	printf("\n");
	for (int i = 0; buffer70[i] != '\0'; i++)
	{
		if (buffer70[i] == ' ')
		{
			counter70++;
		}
	}
	printf("There are %d words in your sentences.\n", counter70);
#pragma endregion

#pragma region Ornek71
	/* YAZIDAN TAMSAYI DE�ER� ELDE ETMEK */
	/* char t�rden bir dizi i�inde yaz� olarak tutulan bir tamsay� de�eri o dizinin i�inden alarak
		bir de�i�kene atamaya �al���n: */
	char buffer71[100];
	printf("Enter any number:");
	int number71 = 0;
	gets_s(buffer71, 100);
	number71 = atoi(buffer71);
	printf("your number as integer: %d\n", number71);

#pragma endregion

#pragma region Ornek72
	/* YAZIDAN BA�KA B�R YAZIDA OLAN KARAKTERLER� S�LMEK */
	/* char t�rden bir dizi i�inde tutulan bir yaz�n�n i�inden, char t�rden ba�ka bir dizi i�inde
		tutulan yaz�da bulunan t�m karakterleri silmeye �al���n:*/
	char bufferResult72[100];
	int counter72 = 0;
	int isContain72 = 0;
	char buffer72[100];
	char buffer72_2[100];
	printf("Enter first sentence:");
	gets_s(buffer72, 100);
	printf("Enter second sence:");
	gets_s(buffer72_2, 100);
	for (int i = 0; buffer72[i] != '\0'; i++)
	{
		isContain72 = 0;
		for (int j = 0; buffer72_2[j] != '\0'; j++)
		{
			if (buffer72[i] == buffer72_2[j])
			{
				isContain72 = 1;
				break;
			}
			isContain72 = 0;
		}
		if (isContain72 == 0)
		{
			bufferResult72[counter72] = buffer72[i];
			counter72++;
		}
	}
	for (int k = 0; k < counter72; k++)
	{
		printf("%c", bufferResult72[k]);
	}
#pragma endregion

	//tekrar bak
#pragma region Ornek73
	/* YAZININ S�ZC�KLER�N� TERSTEN YAZDIRMAK */
	/* char t�rden bir dizinin i�indeki yaz�n�n s�zc�klerini sondan ba�a do�ru yazd�rmaya �al���n */


#pragma endregion

#pragma region Ornek74
/* YAZIYI AYRA� ���NE ALMAK */
/* char t�rden bir dizi i�inde tutulan yaz�y� ayra� i�ine alan bir kod par�as� yaz�n: */
	char str74[100];
	printf("Enter any sentence:");
	gets_s(str74, 100);
	printf("(%s)", str74);
#pragma endregion
}

int is_keyword(const char* str) 
{
	if (!strcmp(str, "auto"))
		return 1;
	else if (!strcmp(str, "double"))
		return 1; 
	else if (!strcmp(str, "int"))
		return 1;
	else if (!strcmp(str, "struct"))
		return 1;
	else if (!strcmp(str, "break"))
		return 1;
	else if (!strcmp(str, "else"))
		return 1;
	else if (!strcmp(str, "long"))
		return 1;
	else if (!strcmp(str, "switch"))
		return 1;
	else if (!strcmp(str, "case"))
		return 1;
	else if (!strcmp(str, "enum"))
		return 1;
	else if (!strcmp(str, "register"))
		return 1;
	else if (!strcmp(str, "typedef"))
		return 1;
	else if (!strcmp(str, "char"))
		return 1;
	else if (!strcmp(str, "extern"))
		return 1;
	else if (!strcmp(str, "return"))
		return 1;
	else if (!strcmp(str, "union"))
		return 1;
	else if (!strcmp(str, "continue"))
		return 1;
	else if (!strcmp(str, "for"))
		return 1;
	else if (!strcmp(str, "signed"))
		return 1;
	else if (!strcmp(str, "void"))
		return 1;
	else if (!strcmp(str, "do"))
		return 1;
	else if (!strcmp(str, "if"))
		return 1;
	else if (!strcmp(str, "static"))
		return 1;
	else if (!strcmp(str, "while"))
		return 1;
	else if (!strcmp(str, "default"))
		return 1;
	else if (!strcmp(str, "goto"))
		return 1;
	else if (!strcmp(str, "sizeof"))
		return 1;
	else if (!strcmp(str, "volatile"))
		return 1;
	else if (!strcmp(str, "const"))
		return 1;
	else if (!strcmp(str, "float"))
		return 1;
	else if (!strcmp(str, "short"))
		return 1;
	else if (!strcmp(str, "	unsigned"))
		return 1;
	return 0; 
}

int* reverse_array(int* ptr, int size)
{
	int temp2 = 0;
	int counter = 0;
	int* temp = ptr;
	for (int i = size-1; i >= 0; i--)
	{
		temp2 = *(ptr + i);
		*(temp + counter) = temp2;
		counter++;
	}
	return temp;
}

void addlong(const char* num1, const char* num2, char* num3)
{
	char* inum1 = (char*)num1;
	char* inum2 = (char*)num2;
	char* sum = (char*)num3;
	int inum_1 = 0, inum_2 = 0;
	int counter1 = 0,counter2=0;
	int sum1 = 0;
	if (!(strcmp((char*)'-', num1)))
	{
		for (int i = 1; *(num1 + i) != '\0'; i++)
		{
			*(inum1 + i - 1) = *(num1 + i);
		}
		inum_1 = atoi(inum1);
		inum_1 = (-1) * inum_1;
	}
	else if (!(strcmp((char*)"+", num1)))
	{
		for (int i = 1; *(num1 + i) != '\0'; i++)
		{
			*(inum1 + i - 1) = *(num1 + i);
		}
		inum_1 = atoi(inum1);
	}
	else if (!(strcmp((char*)"0", num1)))
	{
		for (int i = 0; *(num1 + i) != '0'; i++)
		{
			counter1++;
		}
		for (int j = counter1-1; *(num1 + j) != '\0'; j++)
		{
			*(inum1 + j - counter1 + 1) = *(num1 + j);
		}
		inum_1 = atoi(inum1);
	}
	else
	{
		for (int i = 0; *(num1 + i) != '\0'; i++)
		{
			*(inum1 + i) = *(num1 + i);
		}
		inum_1 = atoi(num1);
	}
	//
	if (!(strcmp((char*)'-', num2)))
	{
		for (int i = 1; *(num2 + i) != '\0'; i++)
		{
			*(inum2 + i - 1) = *(num2 + i);
		}
		inum_2 = atoi(inum2);
		inum_2 = (-1) * inum_2;
	}
	else if (!(strcmp((char*)"+", num2)))
	{
		for (int i = 1; *(num2 + i) != '\0'; i++)
		{
			*(inum2 + i - 1) = *(num2 + i);
		}
		inum_2 = atoi(inum2);
	}
	else if (!(strcmp((char*)"0", num2)))
	{
		for (int i = 0; *(num2 + i) != '0'; i++)
		{
			counter2++;
		}
		for (int j = counter2 - 1; *(num2 + j) != '\0'; j++)
		{
			*(inum2 + j - counter2 + 1) = *(num2 + j);
		}
		inum_2 = atoi(inum2);
	}
	else
	{
		for (int i = 0; *(num1 + i) != '\0'; i++)
		{
			*(inum1 + i) = *(num1 + i);
		}
		inum_1 = atoi(num1);
	}
	sum1 = inum_1 + inum_2;
	_itoa_s(sum1, sum, 200,10);
}

void sublong(const char* num1, const char* num2, char* num3)
{
	char* inum1 = (char*)num1;
	char* inum2 = (char*)num2;
	char* sum = (char*)num3;
	int inum_1 = 0, inum_2 = 0;
	int counter1 = 0, counter2 = 0;
	int sum1 = 0;
	if (!(strcmp((char*)'-', num1)))
	{
		for (int i = 1; *(num1 + i) != '\0'; i++)
		{
			*(inum1 + i - 1) = *(num1 + i);
		}
		inum_1 = atoi(inum1);
		inum_1 = (-1) * inum_1;
	}
	else if (!(strcmp((char*)"+", num1)))
	{
		for (int i = 1; *(num1 + i) != '\0'; i++)
		{
			*(inum1 + i - 1) = *(num1 + i);
		}
		inum_1 = atoi(inum1);
	}
	else if (!(strcmp((char*)"0", num1)))
	{
		for (int i = 0; *(num1 + i) != '0'; i++)
		{
			counter1++;
		}
		for (int j = counter1 - 1; *(num1 + j) != '\0'; j++)
		{
			*(inum1 + j - counter1 + 1) = *(num1 + j);
		}
		inum_1 = atoi(inum1);
	}
	else
	{
		for (int i = 0; *(num1 + i) != '\0'; i++)
		{
			*(inum1 + i) = *(num1 + i);
		}
		inum_1 = atoi(num1);
	}
	//
	if (!(strcmp((char*)'-', num2)))
	{
		for (int i = 1; *(num2 + i) != '\0'; i++)
		{
			*(inum2 + i - 1) = *(num2 + i);
		}
		inum_2 = atoi(inum2);
		inum_2 = (-1) * inum_2;
	}
	else if (!(strcmp((char*)"+", num2)))
	{
		for (int i = 1; *(num2 + i) != '\0'; i++)
		{
			*(inum2 + i - 1) = *(num2 + i);
		}
		inum_2 = atoi(inum2);
	}
	else if (!(strcmp((char*)"0", num2)))
	{
		for (int i = 0; *(num2 + i) != '0'; i++)
		{
			counter2++;
		}
		for (int j = counter2 - 1; *(num2 + j) != '\0'; j++)
		{
			*(inum2 + j - counter2 + 1) = *(num2 + j);
		}
		inum_2 = atoi(inum2);
	}
	else
	{
		for (int i = 0; *(num1 + i) != '\0'; i++)
		{
			*(inum1 + i) = *(num1 + i);
		}
		inum_1 = atoi(num1);
	}
	sum1 = inum_1 - inum_2;
	_itoa_s(sum1, sum, 200, 10);
}

int is_sorted(const int* ptr, int size)
{

}
