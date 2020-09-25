// Ornekler2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

#pragma region Ornek75
	/* ANAHTAR SÖZCÜK MÜ?
	Baþlangýç adresini aldýðý yazýnýn standart ANSI C dilinin 32 anahtar sözcüðünden biri olup
	olmadýðýný sýnayan
	int is_keyword(const char *str);
	iþlevini tanýmlayýn. str adresindeki yazý geçerli bir anahtar sözcük ise iþlev sýfýr dýþý bir
	deðere, aksi halde 0 deðerine geri dönmeli. */
int is_keyword(const char* str);
#pragma endregion

#pragma region Ornek76
/* DÝZÝYÝ TERS ÇEVÝREN ÝÞLEV */
/* Adresini ve boyutunu aldýðý int türden bir diziyi ters çeviren, reverse_array isimli iþlevi yazýn:
	int *reverse_array(int *ptr, int size);
	Ýþlevin geri dönüþ deðeri ters çevrilen dizinin baþlangýç adresi olmalý.*/
int* reverse_array(int* ptr, int size);
#pragma endregion

#pragma region Ornek77
/* BÜYÜK TAMSAYILARLA ÝÞLEMLER */
/* void addlong(const char *num1, const char *num2, char *num3); */
void addlong(const char* num1, const char* num2, char* num3);
#pragma endregion

#pragma region Ornek78
/* BÜYÜK TAMSAYILARLA ÝÞLEMLER */
/* void sublong(const char *num1, const char *num2, char *num3); */
void sublong(const char* num1, const char* num2, char* num3);
#pragma endregion

#pragma region Ornek79
/* DÝZÝ SIRALI MI? */
/* int türden bir dizinin küçükten büyüðe göre sýralý olup olmadýðýný sýnayan is_sorted isimli
	iþlevi yazýn: 
	int is_sorted(const int *ptr, int size);
	is_sorted iþlevi kendisine baþlangýç adresi ile boyutu geçilen dizinin küçükten büyüðe
	doðru sýralanmýþ olup olmadýðýný sýnamalý. Eðer dizi sýralý ise iþlev sýfýr dýþý bir deðere geri
	döner. Eðer dizi sýralý deðil ise iþlevin geri dönüþ deðeri 0 deðeridir.*/
int is_sorted(const int* ptr, int size);
#pragma endregion


int main()
{





}

void Ornek() {

#pragma region Ornek66
	/* ÝNDÝS SIRALAMASI ALGORÝTMASINI KODLAMAK */
	/* SIZE elemanlý bir int türden diziyi ilkdeðer vererek tanýmlayýn. Bu dizinin elemanlarýný
		deðil de elemanlarýnýn indislerini sýraya dizerek baþka bir dizi içerisine yerleþtirin. Bu
		algoritmaya “indis sýralamasý” denir. SIZE simgesel deðiþmezine istediðiniz deðeri
		verebilirsiniz.*/

#pragma endregion

	//hatalý
#pragma region Ornek67
		/* DÝZÝDE EN ÇOK YÝNELENEN DEÐERÝ BULMAK */
		/* 100 elemanlý int türden bir dizi içindeki en çok yinelenen deðeri bulun. En çok yinelenen
			sayý birden fazla ise, bunlardan dizi içinde ilk görülen bulunmalý. Denemeyi diziye ilkdeðer
			vererek yapýn:*/
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
	/* HER SATIRA BÝR KARAKTER FAZLA */
	/* char türden bir dizi içinde bir yazý tutuluyor. Yazýnýn ilk karakterini birinci satýra, ilk iki
		karakterini ikinci satýra, ilk üç karakterini üçücü.satýra... yazdýran bir C programý yazýn.
		Diziye girilen yazýnýn "necati" olduðunu düþünürsek aþaðýdaki gibi olmalý:
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
	/* YAZIDA HANGÝ HARFTEN KAC TANE VAR? */
	/* Bir yazýnýn içinde bulunan ingilizce harf karakterlerinden her birinin adedini ekrana
		listeleyin. Küçük büyük harf ayrýmý yapýlmamalý. */
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
	/* YAZIDA KAÇ SÖZCÜK VAR? */
	/* char türden bir dizi içinde tutulan bir yazýdaki sözcük sayýsýný hesaplayýn. Yazýnýn baþýnda,
		içinde ya da sonunda boþluk karakterleri olabilir. */
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
	/* YAZIDAN TAMSAYI DEÐERÝ ELDE ETMEK */
	/* char türden bir dizi içinde yazý olarak tutulan bir tamsayý deðeri o dizinin içinden alarak
		bir deðiþkene atamaya çalýþýn: */
	char buffer71[100];
	printf("Enter any number:");
	int number71 = 0;
	gets_s(buffer71, 100);
	number71 = atoi(buffer71);
	printf("your number as integer: %d\n", number71);

#pragma endregion

#pragma region Ornek72
	/* YAZIDAN BAÞKA BÝR YAZIDA OLAN KARAKTERLERÝ SÝLMEK */
	/* char türden bir dizi içinde tutulan bir yazýnýn içinden, char türden baþka bir dizi içinde
		tutulan yazýda bulunan tüm karakterleri silmeye çalýþýn:*/
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
	/* YAZININ SÖZCÜKLERÝNÝ TERSTEN YAZDIRMAK */
	/* char türden bir dizinin içindeki yazýnýn sözcüklerini sondan baþa doðru yazdýrmaya çalýþýn */


#pragma endregion

#pragma region Ornek74
/* YAZIYI AYRAÇ ÝÇÝNE ALMAK */
/* char türden bir dizi içinde tutulan yazýyý ayraç içine alan bir kod parçasý yazýn: */
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
