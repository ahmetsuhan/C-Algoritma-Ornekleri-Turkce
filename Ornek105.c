// Ornek105.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <stdio.h>
#include <ctype.h>
#include <string.h>
/* GÖSTERÝCÝ DÝZÝLERÝ */
/* Aþaðýda pnames isimli 200 elemanlý bir gösterici dizisi veriliyor: */
/*
const char *const pnames[200] = {"Muhittin", "Mufit", "Serkan", "Kaan",
"Izzet", "Muzaffer", "Umid", "Sami", "Uykura", "Kayhan", "Yakup", "Mert",
"Cetin", "Ilknur", "Gokhan", "Salah", "Irem", "Korhan", "Isin", "Berk",
"Tacettin", "Duygu", "Figen", "Funda", "Fuat", "Arda","Muhsin", "Guray",
"Necati", "Kadriye", "Gurbuz", "Hamide", "Volkan", "Selami", "Esra",
"Cumhur", "Can", "Aleyna", "Salih", "Kamuran", "Ferhan", "Furuze", "Suku
fe", "Sidre", "Cahit", "Sercan", "Jale", "Bilge", "Tijen", "Tufan",
"Zeliha", "Cevdet", "Burak", "Ufuk", "Zarife", "Bengisu", "Melda",
"Zafer", "Yelda", "Didar", "Hande", "Cumali", "Dilek", "Kemal", "Hasan",
"Ismail", "Fatma", "Burcu", "Siyami", "Busra", "Gizem", "Ramize", "Sezai",
"Polat", "Melike", "Umut", "Serencan", "Uzeyir", "Kamile", "Deniz",
"Veysel", "Emrehan", "Gulcan", "Ender", "Furkan", "Veli", "Muhtesem",
"Necmettin", "Osman", "Perihan", "Didem", "Tunc", "Irmak","Petek",
"Sebahat", "Halime", "Mahir", "Leyla", "Eda", "Ali", "Ibrahim", "Berivan",
"Ilter", "Metin", "Bozkurt", "Olgun", "Hudai", "Esin", "Taylan", "Memduh",
"Selimcan", "Ayse", "Baran", "Keriman", "Tankurt", "Feramuz", "Abdullah",
"Ferda", "Kuntay", "Ceyhan", "Edip", "Nuri", "Mahide", "Selda",
"Murathan", "Celebi", "Talha", "Mehtap", "Ece", "Abdurrahman", "Baki",
"Anil", "Unsal", "Melahat", "Sezgin", "Miran", "Cansel", "Sibel", "Aliye",
"Derya", "Naime", "Gulden", "Konar","Soner", "Gulistan", "Mestan",
"Galip", "Lamia", "Hakan", "Ugur", "Ege", "Husnu", "Sumbul", "Mustafa",
"Simge", "Selva", "Mehmet", "Irfan", "Cezmi", "Turgut", "Konur",
"Aysegul", "Mesut", "Ceren", "Adem", "Ferhat", "Murat", "Yunus", "Beyhan",
"Erdem", "Sunusi", "Ata", "Sencer", "Handan", "Cihan", "Levent", "Aykut",
"Ferit", "Demir", "Kerim", "Feraye", "Caner", "Baris", "Ozlem", "Ihsan",
"Meltem","Kurthan", "Okan", "Huseyin", "Sezgi", "Celik", "Cemal", "Sinan",
"Sefa", "Cigdem", "Leman", "Nejla", "Gurkan", "Gulsum", "Damla",};

*/
/* Bu gösterici dizisini kullanarak sýrasýyla aþaðýdaki iþlemleri yapýn: */
/*
1. Dizinin elemanlarýnýn göstermekte olduðu isimleri ekrana yazdýrýn.
2. Dizinin elemanlarýnýn göstermekte olduðu isimlerin ilk harfini ekrana yazdýrýn.
3. Dizinin elemanlarýnýn göstermekte olduðu isimlerin son harfini ekrana yazdýrýn.
4. Kullanýcý klavyeden bir harf karakteri girsin. Dizinin elemanlarýnýn göstermekte olduðu
Ýsimlerden, içinde bu harf olanlarý ekrana yazdýrýn. (küçük ya da büyük harf olabilir)
5. Kullanýcý klavyeden bir yazý karakteri girsin. Dizinin elemanlarýnýn göstermekte olduðu
isimlerden, içinde bu yazý olanlarý ekrana yazdýrýn. (küçük ya da büyük harf olabilir)
6. Kullanýcý klavyeden bir isim girsin. Klavyeden girilen ismin, dizi elemanlarýndan
herhangi birinin gösterdiði yazýlardan biri olup olmadýðýný sýnayýn. Eðer elemanlardan
birinin gösterdiði yazýlardan biriyse, bu yazýyý gösteren dizi elemanýnýn indisini ekrana
yazdýrýn.
7. Diziyi, elemanlarýnýn gösterdiði yazýlar küçükten büyüðe olacak biçimde sýralayýn.
8. Dizinin gösterdiði yazýlarýn uzunluklarýnýn aritmetik ortalamasýný ekrana yazdýrýn.
9. Diziyi elemanlarýn gösterdiði yazýlarýnýn uzunluklarý küçükten büyüðe olacak biçimde
sýralayýn. Uzunluðu eþit olan yazýlar da kendi aralarýnda alfabetik olarak sýralanmalý.

*/
int main()
{
	const char* const pnames[200] = { "Muhittin", "Mufit", "Serkan", "Kaan",
"Izzet", "Muzaffer", "Umid", "Sami", "Uykura", "Kayhan", "Yakup", "Mert",
"Cetin", "Ilknur", "Gokhan", "Salah", "Irem", "Korhan", "Isin", "Berk",
"Tacettin", "Duygu", "Figen", "Funda", "Fuat", "Arda","Muhsin", "Guray",
"Necati", "Kadriye", "Gurbuz", "Hamide", "Volkan", "Selami", "Esra",
"Cumhur", "Can", "Aleyna", "Salih", "Kamuran", "Ferhan", "Furuze", 
"Sukufe", "Sidre", "Cahit", "Sercan", "Jale", "Bilge", "Tijen", "Tufan",
"Zeliha", "Cevdet", "Burak", "Ufuk", "Zarife", "Bengisu", "Melda",
"Zafer", "Yelda", "Didar", "Hande", "Cumali", "Dilek", "Kemal", "Hasan",
"Ismail", "Fatma", "Burcu", "Siyami", "Busra", "Gizem", "Ramize", "Sezai",
"Polat", "Melike", "Umut", "Serencan", "Uzeyir", "Kamile", "Deniz",
"Veysel", "Emrehan", "Gulcan", "Ender", "Furkan", "Veli", "Muhtesem",
"Necmettin", "Osman", "Perihan", "Didem", "Tunc", "Irmak","Petek",
"Sebahat", "Halime", "Mahir", "Leyla", "Eda", "Ali", "Ibrahim", "Berivan",
"Ilter", "Metin", "Bozkurt", "Olgun", "Hudai", "Esin", "Taylan", "Memduh",
"Selimcan", "Ayse", "Baran", "Keriman", "Tankurt", "Feramuz", "Abdullah",
"Ferda", "Kuntay", "Ceyhan", "Edip", "Nuri", "Mahide", "Selda",
"Murathan", "Celebi", "Talha", "Mehtap", "Ece", "Abdurrahman", "Baki",
"Anil", "Unsal", "Melahat", "Sezgin", "Miran", "Cansel", "Sibel", "Aliye",
"Derya", "Naime", "Gulden", "Konar","Soner", "Gulistan", "Mestan",
"Galip", "Lamia", "Hakan", "Ugur", "Ege", "Husnu", "Sumbul", "Mustafa",
"Simge", "Selva", "Mehmet", "Irfan", "Cezmi", "Turgut", "Konur",
"Aysegul", "Mesut", "Ceren", "Adem", "Ferhat", "Murat", "Yunus", "Beyhan",
"Erdem", "Sunusi", "Ata", "Sencer", "Handan", "Cihan", "Levent", "Aykut",
"Ferit", "Demir", "Kerim", "Feraye", "Caner", "Baris", "Ozlem", "Ihsan",
"Meltem","Kurthan", "Okan", "Huseyin", "Sezgi", "Celik", "Cemal", "Sinan",
"Sefa", "Cigdem", "Leman", "Nejla", "Gurkan", "Gulsum", "Damla", };
	
	//1. Dizinin elemanlarýnýn göstermekte olduðu isimleri ekrana yazdýrýn.
	for (int i = 0; i < 200; i++)
		printf("%s, ", *(pnames + i));
	printf("\n"); printf("\n"); printf("\n");
	//2. Dizinin elemanlarýnýn göstermekte olduðu isimlerin ilk harfini ekrana yazdýrýn.
	for (int i = 0; i < 200; i++)
		printf("%c, ", pnames[i][0]);

	printf("\n"); printf("\n"); printf("\n");

	//3. Dizinin elemanlarýnýn göstermekte olduðu isimlerin son harfini ekrana yazdýrýn.
	int lenght = 0;
	for (int i = 0; i < 200; i++)
	{
		lenght = 0;
		for (int j = 0; pnames[i][j] != '\0'; j++)
		{
			lenght++;
		}
		printf("%c, ", pnames[i][lenght - 1]);
	}

	printf("\n"); printf("\n"); printf("\n");

	/*  4. Kullanýcý klavyeden bir harf karakteri girsin. Dizinin elemanlarýnýn göstermekte olduðu
		Ýsimlerden, içinde bu harf olanlarý ekrana yazdýrýn. (küçük ya da büyük harf olabilir) */
	char inChar;
	printf("Enter any character:");
	scanf_s("%c", &inChar, 1);
	for (int i = 0; i < 200; i++)
	{
		for (int j = 0; pnames[i][j] != '\0'; j++)
		{
			if (toupper(inChar) == toupper(pnames[i][j]))
			{
				printf("%s, ", *(pnames + i));
			}
		}
	}

	printf("\n"); printf("\n"); printf("\n");

	/* 5. Kullanýcý klavyeden bir yazý karakteri girsin. Dizinin elemanlarýnýn göstermekte olduðu
		isimlerden, içinde bu yazý olanlarý ekrana yazdýrýn. (küçük ya da büyük harf olabilir)*/
	char str[200];
	
	printf("Enter any string:");
	scanf_s("%s", str,10);
	int lenghtStr = 0, lenghtPnames = 0, isContain = 0, counter = 0, var=0;
	for (int i = 0; str[i] != '\0'; i++)
		lenghtStr++;
	
	for (int i = 0; i < 200; i++) {
		lenghtPnames = 0;
		for (int j = 0; pnames[i][j] != '\0'; j++)
		{
			lenghtPnames++;
		}
		if (lenghtPnames >= lenghtStr)
		{
			for (int k = 0; k <= lenghtPnames - lenghtStr; k++)
			{
				var = 0;
				isContain = 0;
				if (pnames[i][k] == str[0] )
				{
					isContain++;
					for (int c = 1; c < lenghtStr; c++)
					{
						if (str[c] == pnames[i][k + c])
						{
							isContain++;
						}
					}
				}
				if (isContain == lenghtStr)
				{
					var = 1;
					break;
				}
			}
		}
		if (var)
		{
			printf("%s, ", *(pnames+i));
		}
	}

	printf("\n"); printf("\n"); printf("\n");

	/* 6. Kullanýcý klavyeden bir isim girsin. Klavyeden girilen ismin, dizi elemanlarýndan
			herhangi birinin gösterdiði yazýlardan biri olup olmadýðýný sýnayýn. Eðer elemanlardan
			birinin gösterdiði yazýlardan biriyse, bu yazýyý gösteren dizi elemanýnýn indisini ekrana
			yazdýrýn.*/
	char str2[15];
	int lenghtStr2 = 0,pnamesLenght=0,var2=0;
	printf("Enter any name:");
	scanf_s("%s", &str2, 15);
	for (int i = 0; str2[i] != '\0'; i++)
		lenghtStr2++;
	for (int i = 0; i < 200; i++) {
		pnamesLenght = 0;
		for (int j = 0; pnames[i][j] != '\0'; j++)
		{
			pnamesLenght++;
		}
		if (pnamesLenght == lenghtStr2)
		{
			var = 0;
			isContain = 0;
			for (int k = 0; k < lenghtPnames ; k++)
			{
				if (toupper(pnames[i][k]) == toupper(str2[k]))
				{
					isContain++;
					
				}
				else
				{
					break;
				}
				if (isContain == pnamesLenght)
				{
					var = 1;
					printf("pnames[%d] ", i);
					break;
				}
			}
		}
	}

	printf("\n"); printf("\n"); printf("\n");

	/* Diziyi, elemanlarýnýn gösterdiði yazýlar küçükten büyüðe olacak biçimde sýralayýn.*/
	printf("Dizideki yazilarin siralanmis hali:\n");
	char copy[200][20];
	for (int i = 0; i < 200; i++) {
		int j = 0;
		for (; pnames[i][j] != '\0'; j++)
		{
			copy[i][j] = pnames[i][j];
		}
		copy[i][j] = '\0';
	}
	for (int i = 0; i < 200; i++)
	{
		int lenght = 0;
		for (int j = 0; copy[i][j] != '\0'; j++)
		{
			lenght++;
		}
		for (int c = 0; c < lenght - 1; c++)
		{
			for (int d = 0; d < lenght - c -1 ; d++)
			{
				if (toupper(copy[i][d]) > toupper(copy[i][d + 1]))
				{
					char temp = copy[i][d];
					copy[i][d] = copy[i][d+1];
					copy[i][d + 1] = temp;
				}
			}
		}
		printf("%s, ", copy + i);
	}

	printf("\n"); printf("\n"); printf("\n");

	/*8.  Dizinin gösterdiði yazýlarýn uzunluklarýnýn aritmetik ortalamasýný ekrana yazdýrýn. */
	int size = 0; 
	long double sum = 0; 
	for (int i = 0; i < 200; i++) {
		for (int j = 0; pnames[i][j] != '\0'; j++) {
			sum += pnames[i][j];
			size++;
		}
	}
	printf("average is %lf", sum / size);
	
	printf("\n"); printf("\n"); printf("\n");

	/*9. Diziyi elemanlarýn gösterdiði yazýlarýnýn uzunluklarý küçükten büyüðe olacak biçimde
		sýralayýn. Uzunluðu eþit olan yazýlar da kendi aralarýnda alfabetik olarak sýralanmalý. */
	
	
}

