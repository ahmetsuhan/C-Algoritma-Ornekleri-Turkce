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

#pragma region Ornek80
/* GE�ERL� B�R �S�M M�? */
/* Kendisine g�nderilen bir yaz� i�indeki degisken isminin C'de ge�erli bir degi�ken ismi olup
	olmad���n� s�nayan is_legal isimli i�levi yaz�n. ��lev, ald��� isim ge�erli bir de�i�ken ismi
	ise s�f�r d��� bir de�ere, ge�erli bir de�i�ken ismi de�ilse 0 de�erine geri d�nmeli.
	int is_legal(const char *str);*/
int is_legal(const char *str);
#pragma endregion

#pragma region Ornek81
/* HECELER� YAZDIRAN ��LEV */
/* T�rk�e'nin heceleme kurallar�na uygun olarak, verilen bir s�zc��� hece hece ekrana
	yazd�racak, a�a��da bildirimi verilen hece_yaz isimli i�levi tan�mlay�n:
	int hece_yaz(const char *str)
	hece_yaz i�levi ba�lang�� adresini ald��� yaz�y� hece hece ekrana yazar. Hecelerin
	aras�nda yaln�zca tek bir bo�luk karakteri bulunmal�.
	hece_yaz i�levinin geri d�n�� de�eri ekrana yaz�lan hece say�s�d�r.*/
char* hece_yaz(const char* str);
#pragma endregion

//tekrar bak
#pragma region Ornek82
/* ROMEN RAKAMLARIYLA �LG�L� ��LEVLER */
/* Romen rakamlar�yla ilgili i�lem yapacak a�a��daki i�levleri tan�mlay�n.
	int rom_to_int(const char *str);
	��lev, kendisine g�nderilen dizgedeki romen rakamlar�yla ifade edilmi� int t�rden say�
	s�n�rlar� i�inde kalan tamsay�y�, int t�rden bir tamsay�ya �evirerek geri d�n�� de�eri
	olarak �retmeli.
	E�er adresi al�nan yaz� romen rakamlar�yla ifade edilebilen bir tamsay�y� g�stermiyorsa,
	i�lev -1 de�erine geri d�nmeli.
	Yaz� bo�luk karakterleriyle ba�layabilir. Bu durumda bo�luk karakterleri dikkate
	al�nmayacakt�r. Romen rakamlar� ile yaz�lan say�n�n, sonland�r�c� karakter g�r�ld���nde
	ya da romen rakamlar� karakterleri d���nda ilk karakterin g�r�lmesi durumunda sonland���
	d���n�lmeli. char *int_to_rom (int number, char *str);
	��leve kendisine birinci arg�man olarak g�nderilen int t�rden bir tamsay�y�, romen
	rakamlar�yla ifade ederek, ikinci arg�man olarak kendisine g�nderilen adresten
	ba�layarak yazmal�. Birinci arg�man romen rakamlar�yla ifade edilemeyecek de�er ise i�lev NULL adresine
	geri d�nmeli. Aksi halde i�lev kendisine g�nderilen adrese geri d�nmeli.
	void display_rom (unsigned int number);
	��lev kendisine arg�man olarak g�nderilen say�y� romen rakamlar�yla ekrana yazmal�.
	int isvalid_rom(const char *str);
	str i�indeki yaz�n�n romen rakamlar�yla yaz�lm�� ge�erli bir say� olup olmad���n� s�nar.
	Ge�erli bir tamsay� ise i�lev s�f�r d��� bir de�ere, ge�erli de�il ise 0 de�erine geri d�ner.
	I 1
	V 5
	X 10
	L 50
	C 100
	D 500
	M 1000*/
#pragma endregion

#pragma region Ornek83
	/* strlen ��LEV� */
	/* strlen, string.h ba�l�k dosyas� i�inde bildirilen standart bir C i�levidir.
		size_t strlen(const char *string);
		strlen i�levi ba�lang�� adresini ald��� yaz�n�n uzunlu�u ile geri d�ner. ��levi mystrlen
		ismiyle tan�mlayarak*/
size_t mystrlen(const char* string);
#pragma endregion

#pragma region Ornek84
/* strchr ��LEV� */
/* char *strchr(const char *string, int c);
��levin birinci parametresi g�nderilen yaz�n�n ba�lang�� adresi, ikinci parametresi bir
karakterin kod numaras�d�r. ��lev yaz� i�inde c karakterini arar. ��lev ilk buldu�u c
karakterinin adresiyle geri d�ner. E�er yaz� i�inde c karakteri yoksa i�lev NULL adresi ile
geri d�ner.*/

char* mystrchr(const char* string, int c);
#pragma endregion


#pragma region Ornek85
/* strrchr ��LEV� */
/* char *strrchr(const char *string, int c );
	��levin birinci parametresi g�nderilen yaz�n�n ba�lang�� adresi, ikinci parametresi bir
	karakterin kod numaras�d�r. ��lev yaz�n�n sonundan ba�layarak, yaz� i�inde c karakterini
	arar. ��lev ilk buldu�u c karakterinin adresiyle geri d�ner. E�er yaz� i�inde c karakteri
	yoksa, i�lev NULL adresi ile geri d�ner.*/
char* mystrrchr(const char* string, int c);
#pragma endregion

#pragma region Ornek86
/* strcpy ��LEV� */
/* char *strcpy(char *dest, const char *source);
��lev, ba�lang�� adresi source olan yaz�y� dest adresine kopyalar. ��levin geri d�n��
de�eri dest adresidir. */
char* mystrcpy(char* dest, const char* source);
#pragma endregion


#pragma region Ornek87
/* strcat ��LEV� */
/* char *strcat(char *dest, const char *source);
	��lev, ba�lang�� adresi source olan yaz�n�n sonuna dest adresindeki yaz�y� ekler. ��levin
	geri d�n�� de�eri dest adresidir.*/
char* mystrcat(char* dest, const char* source);
#pragma endregion

#pragma region Ornek88
/* strcmp ��LEV� */
/* int strcmp(const char *s1, const char *s2);
	��lev s1 ve s2 adreslerindeki yaz�lar� kar��la�t�r�r. E�er s1 adresindeki yaz� s2 adresindeki
	yaz�dan daha b�y�kse, i�lev pozitif bir de�ere, s1 adresindeki yaz� s2 adresindeki yaz�dan
	daha k���kse 0�dan k���k bir de�ere, yaz�lar e�it ise 0 de�erine geri d�ner. Bu i�levi
	mystrcmp ismiyle tan�mlay�n.*/
int mystrcmp(const char* s1, const char* s2);
#pragma endregion

#pragma region Ornek89
/* stricmp ��LEV� */
/* stricmp i�levi, standart olmamas�na kar��n pek�ok C derleyicisinde bulunur. Bu i�lev iki
	yaz�y� b�y�k harf k���k harf ayr�m� yapmadan kar��la�t�r�r. Bu i�levi mystricmp ismiyle
	tan�mlay�n.
	int mystricmp(const char *s1, const char *s2);
	��lev birinci yaz� ikinci yaz�dan b�y�kse pozitif herhangi bir de�ere, k���kse negatif
	herhangi bir de�ere ve iki yaz� birbirine e�itse s�f�r de�erine geri d�nmeli.*/
int mystricmp(const char* s1, const char* s2);
#pragma endregion

#pragma region Ornek90
/* strcmp ��LEV� (T�rk�e) */
/* �ki yaz�y� T�rk�e karakterleri dikkate alarak b�y�k harf k���k harf duyarl�l��� ile ile
	kar��la�t�ran strcmptrk isimli i�levi tasarlay�n:
	int strcmptrk(const char *s1, const char *s2);
	��lev birinci yaz� ikinci yaz�dan b�y�kse pozitif herhangi bir de�ere, k���kse negatif
	herhangi bir de�ere, e�itse s�f�ra geri d�nmeli.*/
int strcmptrk(const char* s1, const char* s2);
#pragma endregion

#pragma region Ornek91
/* strstr ��LEV� */
/* strstr, bildirimi string.h ba�l�k dosyas� i�inde bulunan standart bir C i�levidir.
	char *strstr(const char *s1, const char *s2);
	��lev ba�lang�� adresi s1 olan yaz� i�inde ba�lang�� adresi s2 olan yaz�y� arar. E�er
	aran�lan yaz� bulunursa, i�levin geri d�n�� de�eri bulunan yerin adresidir. E�er yaz�
	bulunmazsa i�lev NULL adresine geri d�ner.*/
char* mystrstr(const char* s1, const char* s2);
#pragma endregion

#pragma region Ornek92
/* strncpy ��LEV� */
/* char *strncpy(char *dest, const char *source, size_t n);
	��lev source adresindeki yaz�n�n ilk n karakterini dest adresine kopyalar. E�er n de�eri
	source adresindeki yaz�n�n uzunlu�una e�it ya da yaz�n�n uzunlu�undan k���k ise,
	kopyalama yap�lan yaz�n�n sonuna sonland�r�c� karakter eklenmez. n de�eri source
	adresindeki yaz�n�n uzunlu�undan daha b�y�kse, kopyalama yap�lan yaz�n�n sonuna
	source adresindeki yaz�n�n kopyalanmas�ndan sonra, sonland�r�c� karakterler eklenmeli.
	��lev dest adresine geri d�nmeli.
	Bu i�levi mystrncpy ismiyle tan�mlay�n.*/
char* mystrncpy(char* dest, const char* source, size_t n);
#pragma endregion


#pragma region Ornek93
/* strncat ��LEV� */
/* strncat, bildirimi string.h ba�l�k dosyas� i�inde bulunan standart bir C i�levidir.
	char *strncat(char *dest, const char *source, size_t n);
	��lev dest adresindeki yaz�n�n sonuna source adresindeki yaz�n�n ilk n karakterini ekler.
	source adresindeki yaz�n�n ilk karakteri dest adresindeki yaz�n�n sonundaki sonland�r�c�
	karakterin �zerine yaz�l�r. E�er n de�erine ula��lmadan source adresindeki yaz�da
	sonland�r�c� karakter ile kar��la��l�rsa, dest adresindeki yaz�n�n sonuna, yaln�zca
	sonland�r�c� karaktere kadar olan karakterler eklenir. dest adresindeki yaz�n�n sonuna her
	zaman sonland�r�c� karakter eklenir. ��levin geri d�n�� de�eri dest adresidir.
	Bu i�levi mystrncat ismiyle tan�mlay�n.*/
char* mystrncat(char* dest, const char* source, size_t n);
#pragma endregion

#pragma region Ornek94
/* strrev ��LEV� */
/* strrev i�levi standart bir C i�levi olmamas�na kar��n pek�ok C derleyicisinde bulunur:
	char *mystrrev(char *str);
	Bu i�lev ba�lang�� adresini ald��� yaz�y� ters �evirir. Bu i�levi mystrrev ismiyle tan�mlay�n. */
char* mystrrev(char* str);
#pragma endregion

#pragma region Ornek95
/* strset ��LEV� */
/* strset i�levi standart bir C i�levi olmamas�na kar��n hemen hemen t�m C derleyicilerinde
	bulunur. Bu i�lev ba�lang�� adresini ald��� yaz�n�n t�m karakterlerini ikinci parametresine
	s�ra numaras�n� ald��� karaktere d�n��t�r�r. ��levin geri d�n�� de�eri ald��� yaz�n�n
	ba�lang�� adresidir.
	*/
char* mystrset(char* str,char ch);
#pragma endregion

#pragma region Ornek96
/* squeze ��LEV� */
/* char *squeze(char *s1, const char *s2);
	squeze i�levi s1 adresindeki yaz� i�indeki karakterlerden biri, s2 adresi i�inde bulunan
	yaz� i�inde var ise bu karakteri yaz�dan silmeli. Ba�ka bir deyi�le s1 adresindeki yaz�
	i�inde s2 adresindeki yaz�daki karakterlerden hi�birini i�ermeyecek hale getirilmeli.
	��levin s1 adresine geri d�nmeli.*/
char* squeze(char* s1, const char* s2);
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
		if (*(str + i) == '�' || *(str + i) == '�' || *(str + i) == '�' || *(str + i) == '�' || *(str + i) == '�' || *(str + i) == '�' || *(str + i) == '�' || *(str + i) == '�' || *(str + i) == '�' || *(str+i) == '�' || *(str+i) == '�' || *(str+i) == '�') {
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



