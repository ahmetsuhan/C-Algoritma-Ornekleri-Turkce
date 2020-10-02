// Ornekler2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>
#include <ctype.h>
#include <locale.h>

#define _CRT_SECURE_NO_WARNING

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

#pragma region Ornek80
/* GEÇERLÝ BÝR ÝSÝM MÝ? */
/* Kendisine gönderilen bir yazý içindeki degisken isminin C'de geçerli bir degiþken ismi olup
	olmadýðýný sýnayan is_legal isimli iþlevi yazýn. Ýþlev, aldýðý isim geçerli bir deðiþken ismi
	ise sýfýr dýþý bir deðere, geçerli bir deðiþken ismi deðilse 0 deðerine geri dönmeli.
	int is_legal(const char *str);*/
int is_legal(const char *str);
#pragma endregion

#pragma region Ornek81
/* HECELERÝ YAZDIRAN ÝÞLEV */
/* Türkçe'nin heceleme kurallarýna uygun olarak, verilen bir sözcüðü hece hece ekrana
	yazdýracak, aþaðýda bildirimi verilen hece_yaz isimli iþlevi tanýmlayýn:
	int hece_yaz(const char *str)
	hece_yaz iþlevi baþlangýç adresini aldýðý yazýyý hece hece ekrana yazar. Hecelerin
	arasýnda yalnýzca tek bir boþluk karakteri bulunmalý.
	hece_yaz iþlevinin geri dönüþ deðeri ekrana yazýlan hece sayýsýdýr.*/
char* hece_yaz(const char* str);
#pragma endregion

//tekrar bak
#pragma region Ornek82
/* ROMEN RAKAMLARIYLA ÝLGÝLÝ ÝÞLEVLER */
/* Romen rakamlarýyla ilgili iþlem yapacak aþaðýdaki iþlevleri tanýmlayýn.
	int rom_to_int(const char *str);
	Ýþlev, kendisine gönderilen dizgedeki romen rakamlarýyla ifade edilmiþ int türden sayý
	sýnýrlarý içinde kalan tamsayýyý, int türden bir tamsayýya çevirerek geri dönüþ deðeri
	olarak üretmeli.
	Eðer adresi alýnan yazý romen rakamlarýyla ifade edilebilen bir tamsayýyý göstermiyorsa,
	iþlev -1 deðerine geri dönmeli.
	Yazý boþluk karakterleriyle baþlayabilir. Bu durumda boþluk karakterleri dikkate
	alýnmayacaktýr. Romen rakamlarý ile yazýlan sayýnýn, sonlandýrýcý karakter görüldüðünde
	ya da romen rakamlarý karakterleri dýþýnda ilk karakterin görülmesi durumunda sonlandýðý
	düþünülmeli. char *int_to_rom (int number, char *str);
	Ýþleve kendisine birinci argüman olarak gönderilen int türden bir tamsayýyý, romen
	rakamlarýyla ifade ederek, ikinci argüman olarak kendisine gönderilen adresten
	baþlayarak yazmalý. Birinci argüman romen rakamlarýyla ifade edilemeyecek deðer ise iþlev NULL adresine
	geri dönmeli. Aksi halde iþlev kendisine gönderilen adrese geri dönmeli.
	void display_rom (unsigned int number);
	Ýþlev kendisine argüman olarak gönderilen sayýyý romen rakamlarýyla ekrana yazmalý.
	int isvalid_rom(const char *str);
	str içindeki yazýnýn romen rakamlarýyla yazýlmýþ geçerli bir sayý olup olmadýðýný sýnar.
	Geçerli bir tamsayý ise iþlev sýfýr dýþý bir deðere, geçerli deðil ise 0 deðerine geri döner.
	I 1
	V 5
	X 10
	L 50
	C 100
	D 500
	M 1000*/
#pragma endregion

#pragma region Ornek83
	/* strlen ÝÞLEVÝ */
	/* strlen, string.h baþlýk dosyasý içinde bildirilen standart bir C iþlevidir.
		size_t strlen(const char *string);
		strlen iþlevi baþlangýç adresini aldýðý yazýnýn uzunluðu ile geri döner. Ýþlevi mystrlen
		ismiyle tanýmlayarak*/
size_t mystrlen(const char* string);
#pragma endregion

#pragma region Ornek84
/* strchr ÝÞLEVÝ */
/* char *strchr(const char *string, int c);
Ýþlevin birinci parametresi gönderilen yazýnýn baþlangýç adresi, ikinci parametresi bir
karakterin kod numarasýdýr. Ýþlev yazý içinde c karakterini arar. Ýþlev ilk bulduðu c
karakterinin adresiyle geri döner. Eðer yazý içinde c karakteri yoksa iþlev NULL adresi ile
geri döner.*/

char* mystrchr(const char* string, int c);
#pragma endregion


#pragma region Ornek85
/* strrchr ÝÞLEVÝ */
/* char *strrchr(const char *string, int c );
	Ýþlevin birinci parametresi gönderilen yazýnýn baþlangýç adresi, ikinci parametresi bir
	karakterin kod numarasýdýr. Ýþlev yazýnýn sonundan baþlayarak, yazý içinde c karakterini
	arar. Ýþlev ilk bulduðu c karakterinin adresiyle geri döner. Eðer yazý içinde c karakteri
	yoksa, iþlev NULL adresi ile geri döner.*/
char* mystrrchr(const char* string, int c);
#pragma endregion

#pragma region Ornek86
/* strcpy ÝÞLEVÝ */
/* char *strcpy(char *dest, const char *source);
Ýþlev, baþlangýç adresi source olan yazýyý dest adresine kopyalar. Ýþlevin geri dönüþ
deðeri dest adresidir. */
char* mystrcpy(char* dest, const char* source);
#pragma endregion


#pragma region Ornek87
/* strcat ÝÞLEVÝ */
/* char *strcat(char *dest, const char *source);
	Ýþlev, baþlangýç adresi source olan yazýnýn sonuna dest adresindeki yazýyý ekler. Ýþlevin
	geri dönüþ deðeri dest adresidir.*/
char* mystrcat(char* dest, const char* source);
#pragma endregion

#pragma region Ornek88
/* strcmp ÝÞLEVÝ */
/* int strcmp(const char *s1, const char *s2);
	Ýþlev s1 ve s2 adreslerindeki yazýlarý karþýlaþtýrýr. Eðer s1 adresindeki yazý s2 adresindeki
	yazýdan daha büyükse, iþlev pozitif bir deðere, s1 adresindeki yazý s2 adresindeki yazýdan
	daha küçükse 0’dan küçük bir deðere, yazýlar eþit ise 0 deðerine geri döner. Bu iþlevi
	mystrcmp ismiyle tanýmlayýn.*/
int mystrcmp(const char* s1, const char* s2);
#pragma endregion

#pragma region Ornek89
/* stricmp ÝÞLEVÝ */
/* stricmp iþlevi, standart olmamasýna karþýn pekçok C derleyicisinde bulunur. Bu iþlev iki
	yazýyý büyük harf küçük harf ayrýmý yapmadan karþýlaþtýrýr. Bu iþlevi mystricmp ismiyle
	tanýmlayýn.
	int mystricmp(const char *s1, const char *s2);
	Ýþlev birinci yazý ikinci yazýdan büyükse pozitif herhangi bir deðere, küçükse negatif
	herhangi bir deðere ve iki yazý birbirine eþitse sýfýr deðerine geri dönmeli.*/
int mystricmp(const char* s1, const char* s2);
#pragma endregion

#pragma region Ornek90
/* strcmp ÝÞLEVÝ (Türkçe) */
/* Ýki yazýyý Türkçe karakterleri dikkate alarak büyük harf küçük harf duyarlýlýðý ile ile
	karþýlaþtýran strcmptrk isimli iþlevi tasarlayýn:
	int strcmptrk(const char *s1, const char *s2);
	Ýþlev birinci yazý ikinci yazýdan büyükse pozitif herhangi bir deðere, küçükse negatif
	herhangi bir deðere, eþitse sýfýra geri dönmeli.*/
int strcmptrk(const char* s1, const char* s2);
#pragma endregion

#pragma region Ornek91
/* strstr ÝÞLEVÝ */
/* strstr, bildirimi string.h baþlýk dosyasý içinde bulunan standart bir C iþlevidir.
	char *strstr(const char *s1, const char *s2);
	Ýþlev baþlangýç adresi s1 olan yazý içinde baþlangýç adresi s2 olan yazýyý arar. Eðer
	aranýlan yazý bulunursa, iþlevin geri dönüþ deðeri bulunan yerin adresidir. Eðer yazý
	bulunmazsa iþlev NULL adresine geri döner.*/
char* mystrstr(const char* s1, const char* s2);
#pragma endregion

#pragma region Ornek92
/* strncpy ÝÞLEVÝ */
/* char *strncpy(char *dest, const char *source, size_t n);
	Ýþlev source adresindeki yazýnýn ilk n karakterini dest adresine kopyalar. Eðer n deðeri
	source adresindeki yazýnýn uzunluðuna eþit ya da yazýnýn uzunluðundan küçük ise,
	kopyalama yapýlan yazýnýn sonuna sonlandýrýcý karakter eklenmez. n deðeri source
	adresindeki yazýnýn uzunluðundan daha büyükse, kopyalama yapýlan yazýnýn sonuna
	source adresindeki yazýnýn kopyalanmasýndan sonra, sonlandýrýcý karakterler eklenmeli.
	Ýþlev dest adresine geri dönmeli.
	Bu iþlevi mystrncpy ismiyle tanýmlayýn.*/
char* mystrncpy(char* dest, const char* source, size_t n);
#pragma endregion


#pragma region Ornek93
/* strncat ÝÞLEVÝ */
/* strncat, bildirimi string.h baþlýk dosyasý içinde bulunan standart bir C iþlevidir.
	char *strncat(char *dest, const char *source, size_t n);
	Ýþlev dest adresindeki yazýnýn sonuna source adresindeki yazýnýn ilk n karakterini ekler.
	source adresindeki yazýnýn ilk karakteri dest adresindeki yazýnýn sonundaki sonlandýrýcý
	karakterin üzerine yazýlýr. Eðer n deðerine ulaþýlmadan source adresindeki yazýda
	sonlandýrýcý karakter ile karþýlaþýlýrsa, dest adresindeki yazýnýn sonuna, yalnýzca
	sonlandýrýcý karaktere kadar olan karakterler eklenir. dest adresindeki yazýnýn sonuna her
	zaman sonlandýrýcý karakter eklenir. Ýþlevin geri dönüþ deðeri dest adresidir.
	Bu iþlevi mystrncat ismiyle tanýmlayýn.*/
char* mystrncat(char* dest, const char* source, size_t n);
#pragma endregion

#pragma region Ornek94
/* strrev ÝÞLEVÝ */
/* strrev iþlevi standart bir C iþlevi olmamasýna karþýn pekçok C derleyicisinde bulunur:
	char *mystrrev(char *str);
	Bu iþlev baþlangýç adresini aldýðý yazýyý ters çevirir. Bu iþlevi mystrrev ismiyle tanýmlayýn. */
char* mystrrev(char* str);
#pragma endregion

#pragma region Ornek95
/* strset ÝÞLEVÝ */
/* strset iþlevi standart bir C iþlevi olmamasýna karþýn hemen hemen tüm C derleyicilerinde
	bulunur. Bu iþlev baþlangýç adresini aldýðý yazýnýn tüm karakterlerini ikinci parametresine
	sýra numarasýný aldýðý karaktere dönüþtürür. Ýþlevin geri dönüþ deðeri aldýðý yazýnýn
	baþlangýç adresidir.
	*/
char* mystrset(char* str,char ch);
#pragma endregion

#pragma region Ornek96
/* squeze ÝÞLEVÝ */
/* char *squeze(char *s1, const char *s2);
	squeze iþlevi s1 adresindeki yazý içindeki karakterlerden biri, s2 adresi içinde bulunan
	yazý içinde var ise bu karakteri yazýdan silmeli. Baþka bir deyiþle s1 adresindeki yazý
	içinde s2 adresindeki yazýdaki karakterlerden hiçbirini içermeyecek hale getirilmeli.
	Ýþlevin s1 adresine geri dönmeli.*/
char* squeze(char* s1, const char* s2);
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
	int temp = 0;
	for (int i = 0; i < size-1; i++)
	{
		if (*(ptr + i) <= *(ptr + i + 1))
		{
			temp = 0;
		}
		else {
			temp = 1;
			break;
		}
	}
	if (temp == 1)
		return 0;

	return 1;
}

int is_legal(const char * str)
{
	int legal = 1; //zero is not legal
	for (int i = 0; *(str + i) != '\0'; i++)
	{
		if (*(str + i) == 'Ý' || *(str + i) == 'ý' || *(str + i) == 'ç' || *(str + i) == 'Ç' || *(str + i) == 'ö' || *(str + i) == 'Ö' || *(str + i) == 'þ' || *(str + i) == 'Þ' || *(str + i) == 'Ü' || *(str+i) == 'ü' || *(str+i) == 'ð' || *(str+i) == 'Ð') {
			legal = 0;
			break;
		}
	}
	if (legal == 0)
		return 0;
	else
		return 1; 
}

//tekrar bak 
char* hece_yaz(const char* str)
{
	char* token1 = NULL;
	char* nextToken = NULL;
	char seps[] = "a,e,i,o,u,A,E,I,U,O";
	token1 = strtok_s(str,seps,&nextToken);
	return token1;
}

size_t mystrlen(const char* string)
{
	size_t length = 0;
	for (int i = 0; *(string + i) != '\0'; i++)
	{
		length++;
	}
	return length;
}

char* mystrchr(const char* string, int c)
{
	int i = 0;
	for (; *(string + i) != '\0'; i++)
	{
		if (*(string + i) == c)
		{
			return string + i;
		}
	}
	return NULL;
	
}

char* mystrrchr(const char* string, int c)
{
	int length = 0;
	for (int i = 0; *(string + i) != '\0'; i++)
		length++;
	for (int i = length - 1; i >= 0; i--)
	{
		if (*(string + i) == c)
		{
			return string + i;
		}
	}
	return NULL;
}

char* mystrcpy(char* dest, const char* source)
{
	for (int i = 0; *(source + i) != '\0'; i++)
	{
		*(dest + i) = *(source + i);
	}
	return dest;
}

/*
char* mystrcat(char* dest, const char* source)
{
	
}
*/

int mystrcmp(const char* s1, const char* s2)
{
	int equal = 0; 
	for (int i = 0; *(s1 + i) != '\0'; i++)
	{
		if (*(s1 + i) > * (s2 + i)) {
			equal = 1;
			break;
		}
		else if (*(s1 + i) < *(s2 + i)) {
			equal = -1;
			break;
		}
		equal = 0;
	}
	return equal;
}

int mystricmp(const char* s1, const char* s2)
{
	int equal = 0; 
	for (int i = 0; *(s1 + i) != '\0'; i++)
	{
		if (toupper(*(s1 + i)) > toupper(*(s2 + i)))
		{
			equal = 1;
			break;
		}
		else if (toupper(*(s1 + i)) < toupper(*(s2 + i)))
		{
			equal = -1;
			break;
		}
		else if (toupper(*(s1 + i)) == toupper(*(s2 + i)))
		{
			equal = 0;
		}
	}
	return equal;
}

int strcmptrk(const char* s1, const char* s2)
{
	setlocale(LC_ALL, "Turkish");
	int equal = 0;
	for (int i = 0; *(s1 + i) != '\0'; i++)
	{
		if (*(s1 + i) > * (s2 + i)) {
			equal = 1;
			break;
		}
		else if (*(s1 + i) < *(s2 + i)) {
			equal = -1;
			break;
		}
		equal = 0;
	}
	return equal;

}

char* mystrstr(const char* s1, const char* s2)
{
	return (strstr(s1, s2));
}

char* mystrncpy(char* dest, const char* source, size_t n)
{
	int sourceLength = 0;
	for (int i = 0; *(source + i) != '\0'; i++)
	{
		sourceLength++;
	}
	if (n <= sourceLength)
	{
		for (int i = 0; i < n; i++)
		{
			*(dest + i) = *(source + i);
		}
	}
	else
	{
		for (int i = 0; i < n; i++)
		{
			*(dest + i) = *(source + i);
		}
		*(dest + n) = '\0';
	}
	return dest;
}

char* mystrncat(char* dest, const char* source, size_t n)
{
	int sourceLength = 0;
	for (int i = 0; *(source + i) != '\0'; i++)
	{
		sourceLength++;
	}
	int i = 0;
	for ( ; i<n ; i++)
	{
		*(dest + sourceLength + i) = *(source + i);
	}
	*(dest + sourceLength + i + 1 ) = '\0';
	return dest;
}

char* mystrrev(char* str)
{
	char* begin_ptr, * end_ptr, ch;
	int length = 0;
	int i = 0;
	// Get the length of the string 
	for (; *(str + i) != '\0'; i++) {
		length++;
	}
	// Set the begin_ptr and end_ptr 
	// initially to start of string 
	begin_ptr = str;
	// Move the end_ptr to the last character
	end_ptr = str+length-1;

	// Swap the char from start and end 
	// index using begin_ptr and end_ptr 
	for (i = 0; i < length / 2; i++) {

		// swap character 
		ch = *end_ptr;
		*end_ptr = *begin_ptr;
		*begin_ptr = ch;

		// update pointers positions 
		begin_ptr++;
		end_ptr--;
	}
	return str;
}

char* mystrset(char* str,char ch)
{
	int length = 0;
	for (int i = 0; *(str + i) != '\0'; i++)
		length++;
	for (int i = 0; i < length; i++)
	{
		*str = ch;
		str++;
	}
	return str;
}

char* squeze(char* s1, const char* s2)
{
	int lenghtS1 = 0, lenghtS2 = 0,isContais=0;//isContain = 0 no match
	char* copiedStr = s1;
	int index = 0;
	for (int i = 0; *(s2 + i) != '\0'; i++)
		lenghtS2++;
	for (int i = 0; *(s1 + i) != '\0'; i++)
		lenghtS1++;

	for (int k = 0; k < lenghtS1; k++)
	{
		isContais = 0;
		for (int c = 0; c < lenghtS2; c++)
		{
			if (toupper(*(s1)) == toupper(*(s2+c) ))
			{
				isContais = 1;
				break;
			}
		}
		if (isContais==0)
		{
			*(copiedStr + index) = *s1;
			index++;
		}
		s1++;
	}
	char* a = malloc(index+1);
	char b;
	*(a + index) = '\0';
	for (int m = 0; m < index; m++)
	{
		b = *(copiedStr + m);
		*(a+m) = b;
	}
	s1 = a;
	return s1;
}



