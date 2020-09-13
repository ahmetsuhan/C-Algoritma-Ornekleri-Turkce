#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

#define _CRT_SECURE_NO_WARNINGS

int main()
{


	
}

void Ornekler() {
	
	
#pragma region Ornek1
	/* x, int t�rden, i�inde 3 basamakl� bir deger tutan bir degi�ken olsun.
	   �yle bir ifade yaz�n ki, ifadenin de�eri x de�erinin tersi olsun (�rne�in 345 i�in 543).
	*/

	int x, tersX;
	printf("3 basamakl� bir sayi giriniz:");
	scanf_s("%d", &x);
	int birler, onlar, yuzler = 0;
	tersX = x;
	yuzler = tersX / 100;
	tersX -= (yuzler) * 100;
	onlar = tersX / 10;
	tersX -= (onlar * 10);
	birler = tersX;
	tersX = (100 * birler) + (onlar * 10) + (yuzler * 1);
	printf("%d-->%d\n", x, tersX);

#pragma endregion

#pragma region Ornek1_1
	/* x, int t�rden, i�inde integer bir deger tutan bir degi�ken olsun.
	   �yle bir ifade yaz�n ki, ifadenin de�eri x de�erinin tersi olsun (�rne�in 345 i�in 543).
	*/
	int num, swap, remainder, inverse;
	printf("tersini gormek isteginiz bir sayi giriniz:");
	scanf_s("%d", &num);

	remainder = 0, swap = num, inverse = 0;
	while (swap > 0) {
		remainder = swap % 10;
		inverse = inverse * 10 + remainder;
		swap = swap / 10;
	}
	printf("%d-->%d", num, inverse);

	
#pragma endregion

#pragma region Ornek2
	/* Kendisine g�nderilen int t�rden iki say�n�n b�y�k olan�n� bulan programi yaziniz.*/
	int num1, num2;
	printf("birinci sayi:");
	scanf_s("%d", &num1);
	printf("ikinci sayi:");
	scanf_s("%d", &num2);
	printf("%d>%d", num1 > num2 ? num1 : num2, num1 > num2 ? num2 : num1);

#pragma endregion

#pragma region Ornek3
	/* Kendisine g�nderilen Celsius degerinin Fahrenheit e�de�eri ile geri d�nen cel_to_fahr
	isimli i�levi yaz�n:*/

	int celcius, fahrenhait;
	printf("s�cakl�gi celcius cinsinden giriniz:");
	scanf_s("%d", &celcius);

	fahrenhait = (celcius * 9 / 5) + 32;
	printf("%d celcius --> %d Fahrenhait", celcius, fahrenhait);


#pragma endregion

#pragma region Ornek4
	/* Kendisine g�nderilen int t�rden bir tamsay�n�n negatif mi, 0 m�, pozitif mi oldu�unu
s�nayan result isimli i�levi tan�mlay�n*/
	int num4_1, result4;
	printf("0 mi negatif mi pozitif mi oldugunu ogrenmek isteginiz sayiyi giriniz:");
	scanf_s("%d", &num4_1);
	result4 = num4_1 > 0 ? 1 : (num4_1 == 0 ? 0 : -1);
	if (result4 == 1)
		printf("Girdiginiz sayi pozitif bir sayidir\n");
	else if (result4 == -1)
		printf("Girdiginiz say� negatif bir sayidir\n");
	else
		printf("Girdiginiz sayi 0'dir\n");


#pragma endregion

#pragma region Ornek5
	/* Kendisine g�nderilen saniye cinsinden s�reyi saat, dakika ve saniye olarak ayr��t�rarak
ekrana yazd�ran display_duration i�levini yaz�n. E�er saat, dakika ya da saniye de�eri 0
ise, bu de�er ekrana yazd�r�lmamal�.*/

	int sure, swap5, saniye5 = 0, dakika5=0, saat5=0;
	printf("Can you enter any time:");
	scanf_s("%d", &sure);
	swap5 = sure;
	while (swap5 > 0)
	{
		saniye5 = swap5 % 60;
		swap5 = swap5 - saniye5;
		saat5 = swap5 / 3600; //1
		swap5 = swap5 - (saat5 * 3600);
		dakika5 = swap5 / 60;
		swap5 = swap5 - (dakika5 * 60);
	}
	printf("%d saniye-->%d saat %d dakika %d saniye ", sure, saat5, dakika5, saniye5);
#pragma endregion

#pragma region Ornek6
	int num6;
	printf("Hexal bir sayi giriniz:");
	scanf_s("%X", &num6);
	printf("Girdiginiz sayi:%X--> 10 luk tabanda karsiligi:%d\n", num6, num6);
	printf("Karakter karsiligi: %c", num6);
#pragma endregion

#pragma region Ornek7
	/* Onalt�l�k say� sisteminde bir basama�a ili�kin karakterin (kullan�lan karakter setindeki)
	   kod numaras�n� alarak bu basama�a ili�kin basamak de�erine geri d�nen get_hex_value
	   i�levini yaz�n:
	   ��levin parametre de�i�kenine, onalt�l�k say� sisteminde bir basamak de�eri g�steren
		karakterin s�ra numaras� ge�ildi�inde, i�lev bu basama�a ili�kin basamak de�eriyle geri
		d�nmeli. ��leve onalt�l�k say� sisteminde bir basamak de�eri olamayacak bir karakterin
		s�ra numaras� g�nderilirse, i�lev -1 de�erine geri d�nmeli. 0, 1, 2, 3, 4, 5, 6, 7, 8, 9, A,
		B, C, D, E, F ,a, b, c, d, e, f, ge�erli karakterlerdir.
		Yazd���n�z i�levi a�a��daki main i�leviyle s�nayabilirsiniz:   */
	char num7, returnValue7 = 0;
	printf("bir seyler yaz:");
	num7 = getchar();
	//printf("Girdiginiz %X sayisinin decimal karsiligi:%d\n", num7, num7);
	if ((65 <= num7 && num7 < 71) || (97 <= num7 && num7 <= 102)) // A-F && a-f
		printf("returnValue:%c", num7);
	else if (48 <= num7 && num7 <= 57) // 0-9
		printf("returnValue:%c", num7);
	else {
		returnValue7 = -1;
		printf("return value:%d", returnValue7);
	}
#pragma endregion

#pragma region Ornek8
	/* �� kenar uzunlugu verilen ��genin �izilip �izilemiyece�ini s�nayan, e�er �izilebiliyorsa s�f�r
d��� de�erle, �izilemiyorsa 0 de�eri ile geri d�nen, is_triangle isimli i�levi yaz�n. ��levin
bildirimi a�a��daki gibidir:*/
	int kenar8_0, kenar8_1, kenar8_2;
	printf("birinci kenar:");
	scanf_s("%d", &kenar8_0);
	printf("ikinci kenar:");
	scanf_s("%d", &kenar8_1);
	printf("Ucuncu kenar:");
	scanf_s("%d", &kenar8_2);
	if ((kenar8_0 == 0) || (kenar8_1 == 0) || (kenar8_2 == 0))
		printf("Ucgen cizilemez");
	else if ((kenar8_0 < (kenar8_1 + kenar8_2)) || (kenar8_1 < (kenar8_0 + kenar8_2)) || (kenar8_2 < (kenar8_0 + kenar8_1)))
		printf("Ucgen cizilebilir.");
	else
		printf("Ucgen cizilemez");
#pragma endregion

#pragma region Ornek9
	/* ARTIK YIL SINAMASI */
	/* 4'e tam b�l�nen y�llar i�inde 100'e tam b�l�nmeyenler ile 400'e tam b�l�nenler, art�k
y�ld�r. Birka� �rnek:
1967 art�k y�l de�il. (4'e tam b�l�nm�yor.)
1964 art�k y�l. (4'e tam b�l�n�yor ve 100'e tam b�l�nm�yor.)
2000 art�k y�l. (4'e tam b�l�n�yor ve 400'e tam b�l�nm�yor.)
1900 art�k y�l de�il. (4'e tam b�l�n�yor, 100'e tam b�l�n�yor ve 400'e tam
b�l�nm�yor.)
Kendisine g�nderilen bir y�l�n, art�k y�l olup olmad���n� s�nayan isleap isimli bir i�lev yaz�n:*/

	int year9;
	printf("Artik yil sinamasi yapmak istediginiz yili giriniz:");
	scanf_s("%d", &year9);
	if (((year9 % 4) == 0)) {
		if (((year9 % 100) == 0)) {
			if ((year9 % 400) == 0) {
				printf("%d artik yildir\n", year9);
			}
			else {
				printf("artik yil degildir.\n");
			}
		}
		else {
			printf("%d artik yildir\n", year9);
		}
	}
	else
	{
		printf("%d artik yil degildir\n", year9);
	}
#pragma endregion

#pragma region Ornek10
	int num10_0, num10_1, num10_2;
	printf("Giris: ");
	scanf_s("%d %d %d", &num10_0, &num10_1, &num10_2);

	if (num10_0 > num10_1 && num10_1 > num10_2) // 1> 2> 3 
		printf("Yanit: %d>%d>%d\n", num10_0, num10_1, num10_2);
	else if (num10_0 > num10_2 && num10_2 > num10_1) // 1>3>2
		printf("Yanit: %d>%d>%d\n", num10_0, num10_2, num10_1);
	else if (num10_1 > num10_0 && num10_0 > num10_2) // 2>1>3 
		printf("Yanit: %d>%d>%d\n", num10_1, num10_0, num10_2);
	else if (num10_1 > num10_2 && num10_2 > num10_0)// 2>3>1
		printf("Yanit: %d>%d>%d\n", num10_1, num10_2, num10_0);
	else if (num10_2 > num10_0 && num10_0 > num10_1) // 3>1>2
		printf("Yanit: %d>%d>%d\n", num10_2, num10_0, num10_1);
	else if (num10_2 > num10_1 && num10_1 > num10_0) // 3>2>1
		printf("Yanit: %d>%d>%d\n", num10_2, num10_1, num10_0);
	else if (num10_0 == num10_1 && num10_0 == num10_2)
		printf("Yanit: % d = % d = % d\n", num10_0, num10_1, num10_2); // a=b=c
	else if (num10_0 == num10_1 && num10_0 > num10_2)// a = b > c 
		printf("Yanit: %d=%d>%d\n", num10_0, num10_1, num10_2);
	else if (num10_0 == num10_1 && num10_2 > num10_1)// c> a = b  
		printf("Yanit: %d>%d=%d\n", num10_2, num10_1, num10_0);
	else if (num10_0 == num10_2 && num10_0 > num10_1) // a=c>b
		printf("Yanit: %d=%d>%d\n", num10_0, num10_2, num10_1);
	else if (num10_0 == num10_2 && num10_1 > num10_0) // b>a=c
		printf("Yanit: %d>%d=%d\n", num10_1, num10_0, num10_2);
	else if (num10_1 == num10_2 && num10_1 > num10_0) //b=c>a
		printf("Yanit: %d=%d>%d\n", num10_1, num10_2, num10_0);
	else if (num10_1 == num10_2 && num10_0 > num10_1) // a>b=c
		printf("Yanit: %d>%d=%d\n", num10_0, num10_1, num10_2);
#pragma endregion

#pragma region Ornek11
	/* AKREPLE YELKOVAN ARASINDAK� A�I*/
	/*
	Kendisine g�nderilen saat ve dakika de�erlerini kullanarak akrep ile yelkovan aras�ndaki
	a��y�, �derece� cinsinden hesaplayarak geri dond�ren �get_angle� isimli i�levi yaz�n.

	double get_angle(int hour, int minute);

	*/
	//akrep = hour hand
	//yelkovan = minute hand
	int hour11, min11;
	int x11, y11, hourHand11, minuteHand11;
	double result11;
	printf("Saat ve dakika degerlerini giriniz:n");
	scanf_s("%d %d", &hour11, &min11);
	x11 = hour11 * 30;
	y11 = 30 * min11 / 60;
	hourHand11 = x + y11;
	minuteHand11 = 6 * min11;
	if (hourHand11 > minuteHand11) {
		result11 = hourHand11 - minuteHand11;
	}
	else {
		result11 = minuteHand11 - hourHand11;
	}
	printf("Saat %d : %d iken akrep ile yelkovan arasindaki aci %2.f'dir", hour11, min11, result11);

#pragma endregion

#pragma region Ornek12
	/* BASAMAK SAYISINI BULMAK */
	int num12, digitNo12 = 0, swap12;
	printf("bir sayi giriniz:");
	scanf_s("%d", &num12);
	swap12 = num12;
	while (swap12 > 0) {
		swap12 /= 10;
		digitNo12++;
	}
	printf("%d sayisi %d basamakli", num12, digitNo12);
#pragma endregion

#pragma region Ornek13
	/* BASAMAK DE�ERLER�N�N TOPLAMI */

	/*
		Kendisine g�nderilen int t�rden bir say�n�n basamak de�erleri toplam�yla geri d�nen
		sum_digits i�levini tan�mlay�n:
		int sum_digits(int value);

	*/
	int num13, sum13 = 0, swap13 = 0, digitNo13 = 0, ones13 = 0, tens13 = 0, hundreds13 = 0, tousands13 = 0, tenTousands13 = 0;

	printf("Bir sayi giriniz:");
	scanf_s("%d", &num13);
	swap13 = num13;
	while (swap13 > 0) {
		ones13 = swap13 % 10;
		swap13 = swap13 - ones13;
		tenTousands13 = swap13 / 10000;
		swap13 = swap13 - (tenTousands13 * 10000);
		tousands13 = swap13 / 1000;
		swap13 = swap13 - (tousands13 * 1000);
		hundreds13 = swap13 / 100;
		swap13 = swap13 - (hundreds13 * 100);
		tens13 = swap13 / 10;
		swap13 = swap13 - (tens13 * 10);
	}
	sum13 = ones13 + tens13 + hundreds13 + tousands13 + tenTousands13;
	printf("%d sayisinin basamak degerleri toplami: %d", num13, sum13);
#pragma endregion

#pragma region Ornek14
	/* ORTAK BASAMAKLAR */ // NEcati ergin 27. soru 12.sayfa
	/*
		Kendisine g�nderilen iki say�dan, birincisinin rakamlar� ile ikinci say�n�n elde edilip
		edilemiyece�ini s�nayan is_possible isimli i�levi yaz�n. ��levin bildirimi:
		int is_possible(int num1, int num2);
		��lev e�er yazmak m�mk�nse s�f�r d��� bir de�ere, de�ilse 0 de�erine geri d�nmeli.

	*/
	int num14_1, num14_2, swap14_1 = 0, swap14_2 = 0;
	int birlerB14_1 = 0, birlerB14_2 = 0, onlarB14_1 = 0, onlarB14_2 = 0, yuzlerB14_1 = 0, yuzlerB14_2 = 0, binlerB14_1 = 0, binlerB14_2 = 0, onBinlerB14_1 = 0, onBinlerB14_2 = 0;
	int nums14_1[6] = { 0 }, nums14_2[6] = { 0 };
	int counterYazilir = 0, counterYazilamaz = 0;

	printf("birinci sayi:");
	scanf_s("%d", &num14_1);
	printf("ikinci sayi:");
	scanf_s("%d", &num14_2);
	swap14_1 = num14_1;
	swap14_2 = num14_2;
	while (swap14_1 > 0)
	{
		birlerB14_1 = swap14_1 % 10;
		swap14_1 = swap14_1 - birlerB14_1;
		onBinlerB14_1 = swap14_1 / 10000;
		swap14_1 = swap14_1 - (onBinlerB14_1 * 10000);
		binlerB14_1 = swap14_1 / 1000;
		swap14_1 = swap14_1 - (binlerB14_1 * 1000);
		yuzlerB14_1 = swap14_1 / 100;
		swap14_1 = swap14_1 - (yuzlerB14_1 * 100);
		onlarB14_1 = swap14_1 / 10;
		swap14_1 = swap14_1 - (onlarB14_1 * 10);
	}
	while (swap14_2 > 0)
	{
		birlerB14_2 = swap14_2 % 10;
		swap14_2 = swap14_2 - birlerB14_2;
		onBinlerB14_2 = swap14_2 / 10000;
		swap14_2 = swap14_2 - (onBinlerB14_2 * 10000);
		binlerB14_2 = swap14_2 / 1000;
		swap14_2 = swap14_2 - (binlerB14_2 * 1000);
		yuzlerB14_2 = swap14_2 / 100;
		swap14_2 = swap14_2 - (yuzlerB14_2 * 100);
		onlarB14_2 = swap14_2 / 10;
		swap14_2 = swap14_2 - (onlarB14_2 * 10);
	}

	nums14_1[0] = birlerB14_1; nums14_1[1] = onlarB14_1; nums14_1[2] = yuzlerB14_1; nums14_1[3] = binlerB14_1; nums14_1[4] = onBinlerB14_1;
	nums14_2[0] = birlerB14_2; nums14_2[1] = onlarB14_2; nums14_2[2] = yuzlerB14_2; nums14_2[3] = binlerB14_2; nums14_2[4] = onBinlerB14_2;

	if ((nums14_2[0] == nums14_1[0]) || (nums14_2[0] == nums14_1[1]) || (nums14_2[0] == nums14_1[2]) || (nums14_2[0] == nums14_1[3]) || (nums14_2[0] == nums14_1[4]) || (nums14_2[0] == 0)) {
		//printf("birinci rakamin aynisi var.\n");
		if ((nums14_2[1] == nums14_1[0]) || (nums14_2[1] == nums14_1[1]) || (nums14_2[1] == nums14_1[2]) || (nums14_2[1] == nums14_1[3]) || (nums14_2[1] == nums14_1[4]) || (nums14_2[1] == 0)) {
			//printf("ikinci rakam�n ayn�s� var.\n");
			if ((nums14_2[2] == nums14_1[0]) || (nums14_2[2] == nums14_1[1]) || (nums14_2[2] == nums14_1[2]) || (nums14_2[2] == nums14_1[3]) || (nums14_2[2] == nums14_1[4]) || (nums14_2[2] == 0)) {
				//printf("ucuncu rakamin aynisi var.\n");
				if ((nums14_2[3] == nums14_1[0]) || (nums14_2[3] == nums14_1[1]) || (nums14_2[3] == nums14_1[2]) || (nums14_2[3] == nums14_1[3]) || (nums14_2[3] == nums14_1[4]) || (nums14_2[3] == 0)) {
					//printf("dorduncu rakamin aynisi var.\n");
					if ((nums14_2[4] == nums14_1[0]) || (nums14_2[4] == nums14_1[1]) || (nums14_2[4] == nums14_1[2]) || (nums14_2[4] == nums14_1[3]) || (nums14_2[4] == nums14_1[4]) || (nums14_2[4] == 0)) {
						printf("%d ile %d yazilabilir\n", num14_1, num14_2);
					}
					else {
						printf("%d ile %d yazilamaz\n", num14_1, num14_2);
					}
				}
				else {
					printf("%d ile %d yazilamaz\n", num14_1, num14_2);
				}
			}
			else {
				printf("%d ile %d yazilamaz\n", num14_1, num14_2);
			}
		}
		else {
			printf("%d ile %d yazilamaz\n", num14_1, num14_2);
		}
	}
	else {
		printf("%d ile %d yazilamaz\n", num14_1, num14_2);
	}



#pragma endregion

#pragma region Ornek15
	/* B�LENLER�N TOPLAMI */

	/*  Kendisine g�nderilen pozitif bir tamsay�n�n, kendisi hari� t�m �arpanlar�n�n toplam� ile
		geri d�nen sum_factors i�levini tan�mlay�n:
		int sum_factors(int value); */
	int number15, sum15 = 0, swap15;
	printf("Enter a number:");
	scanf_s("%d", &number15);
	swap15 = number15;

	for (int i = 1; i < number15; i++) {
		if (swap15 % i == 0) {
			sum15 += i;
		}
	}
	printf("sum=%d", sum15);


#pragma endregion

#pragma region Ornek16
	/* ARKADA� SAY�LAR */
	/* x, y pozitif tamsay�lar olmak �zere, e�er x say�s�n�n �arpanlar� toplam� y say�s�na, ve ayn�
		zamanda y say�s�n�n �arpanlar� toplam� x say�s�na e�it ise, bu say�lar �arkada�t�r� denir.
		�rne�in 220 ve 284 arkada� say�lard�r:
		220 => 1 + 2 + 4 + 5 + 10 + 11 + 20 + 22 + 44 + 55 + 110 = 284
		284 => 1 + 2 + 4 + 71 + 142 = 220
		Kendisine g�nderilen iki tamsay�n�n arkada� olup olmad�klar�n� s�nayan, are_friends
		i�levini tan�mlay�n:
		int are_friends(int number1, int number2);*/

	int number16_1, number16_2, sum16_1 = 0, sum16_2 = 0;
	printf("Enter first number:");
	scanf_s("%d", &number16_1);
	printf("Enter second number:");
	scanf_s("%d", &number16_2);
	for (int i = 1; i < number16_1; i++) {
		if (number16_1 % i == 0)
			sum16_1 += i;
	}
	for (int i = 1; i < number16_2; i++) {
		if (number16_2 % i == 0)
			sum16_2 += i;
	}
	if (sum16_2 == number16_1 && sum16_1 == number16_2)
		printf("%d ile %d arkadas sayilardir.", number16_1, number16_2);

#pragma endregion

#pragma region Ornek17
	/* D�RT BASAMAKLI ARKADA� SAYILAR */
	/*D�rt basamakl� t�m arkada� say� �iftlerini bulan bir C program� yaz�n.
		Not: Her bir �ift bir kez yaz�lmal�.*/
	int sum17_1 = 0, sum17_2 = 0, number17_2 = 0;
	for (int i = 1000; i <= 9999; i++) {
		for (int j = 1; j < i; j++) {
			if (i % j == 0) {
				sum17_1 += j;
			}
		}if (sum17_1 / 1000 != 0 && sum17_1 / 1000 < 10) {
			number17_2 = sum17_1;
			for (int k = 1; k < number17_2; k++) {
				if (number17_2 % k == 0) {
					sum17_2 += k;
				}
			}
		}
		if (sum17_2 == i && sum17_1 == number17_2 && (i != number17_2)) {
			printf("%d ile %d arkadas sayidir.\n", i, number17_2);
		}
		sum17_1 = 0;
		sum17_2 = 0;
	}
#pragma endregion

#pragma region Ornek18
	/* NIVEN (HARSHED) SAYILARI */
	/*  E�er bir tamsay� basamaklar�n�n toplam�na tam olarak b�l�n�yorsa, bu tamsay� �Niven�
		(Harshed) tamsay�s�d�r. Verilen iki tamsay� aral���nda ka� tane �Niven� say�s� oldu�unu
		hesaplayan bir program yaz�n�z.
		Not : 1987000 ile 1988000 aras�nda 65 Niven say�s� vard�r.*/

	int num18_1, num18_2, sum18 = 0;
	int birler18 = 0, onlar18 = 0, yuzler18 = 0, binler18 = 0, onBinler18 = 0, yuzBinler18 = 0, milyonlar18 = 0, onMilyonlar18 = 0;
	int nivenNumberCounter18 = 0;
	printf("Enter first number:");
	scanf_s("%d", &num18_1);
	printf("Enter second number:");
	scanf_s("%d", &num18_2);
	int swap18_1 = 0, swap18_2 = 0;
	swap18_1 = num18_1;
	swap18_2 = num18_1;

	for (int i = num18_1; i <= num18_2; i++)
	{
		swap18_1 = i;
		while (swap18_1 > 0) {
			birler18 = swap18_1 % 10;
			swap18_1 = swap18_1 - birler18;
			onMilyonlar18 = swap18_1 / 10000000;
			swap18_1 = swap18_1 - (onMilyonlar18 * 10000000);
			milyonlar18 = swap18_1 / 1000000;
			swap18_1 = swap18_1 - (milyonlar18 * 1000000);
			yuzBinler18 = swap18_1 / 100000;
			swap18_1 = swap18_1 - (yuzBinler18 * 100000);
			onBinler18 = swap18_1 / 10000;
			swap18_1 = swap18_1 - (onBinler18 * 10000);
			binler18 = swap18_1 / 1000;
			swap18_1 = swap18_1 - (binler18 * 1000);
			yuzler18 = swap18_1 / 100;
			swap18_1 = swap18_1 - (yuzler18 * 100);
			onlar18 = swap18_1 / 10;
			swap18_1 = swap18_1 - (onlar18 * 10);
			sum18 = onMilyonlar18 + milyonlar18 + yuzBinler18 + onBinler18 + binler18 + yuzBinler18 + yuzler18 + onlar18 + birler18;
		}
		if (num18_1 % sum18 == 0) {
			nivenNumberCounter18++;
			//birler18 = 0; onlar18 = 0; yuzler18 = 0; binler18 = 0; onBinler18 = 0; yuzBinler18 = 0; milyonlar18 = 0; onMilyonlar18 = 0;
			//swap18_1 = swap18_2;
		}
	}
	printf("%d ile %d arasinda %d adet niven sayisi vardir.\n", num18_1, num18_2, nivenNumberCounter18);
#pragma endregion

#pragma region Ornek19
	/* NIVEN (HARSHED) ARKADA� SAYILARI */
	/* Bir arkada� say� �iftine konu tamsay�lar�n ikisi de niven(harshed) tamsay�s� ise, bu
	say�lara �harshed arkada� say�lar�� denir.
	2620 ve 2924 Harshed arkada� say� �iftidir.
	2620, 2924 arkada� say�lard�r.
	2620, 10 tamsay�s�na tam olarak b�l�n�r : 10 = 2 + 6 + 2 + 0
	2924, 17 tamsay�s�na tam olarak b�l�n�r : 17 = 2 + 9 + 2 + 4
	Ba�ka Harshed Arkada� say� �rnekleri:
	10634085 ve 14084763
	23389695 ve 25132545
	34256222 ve 35997346
	Verilen bir tamsay� aral���ndaki �Harshed arkada� say�lar�� n� ekrana yazd�ran bir program
	yaz�n.*/
	int num19_1, num19_2, sum19 = 0;
	int birler19 = 0, onlar19 = 0, yuzler19 = 0, binler19 = 0, onBinler19 = 0, yuzBinler19 = 0, milyonlar19 = 0, onMilyonlar19 = 0;
	int nivenNumberCounter19 = 0;
	printf("Enter first number:");
	scanf_s("%d", &num19_1);
	printf("Enter second number:");
	scanf_s("%d", &num19_2);
	int swap19_1 = 0, swap19_2 = 0;
	swap19_1 = num19_1;
	swap19_2 = num19_1;

	for (int i = num19_1; i <= num19_2; i++)
	{
		swap19_1 = i;
		while (swap19_1 > 0) {
			birler19 = swap19_1 % 10;
			swap19_1 = swap19_1 - birler19;
			onMilyonlar19 = swap19_1 / 10000000;
			swap19_1 = swap19_1 - (onMilyonlar19 * 10000000);
			milyonlar19 = swap19_1 / 1000000;
			swap19_1 = swap19_1 - (milyonlar19 * 1000000);
			yuzBinler19 = swap19_1 / 100000;
			swap19_1 = swap19_1 - (yuzBinler19 * 100000);
			onBinler19 = swap19_1 / 10000;
			swap19_1 = swap19_1 - (onBinler19 * 10000);
			binler19 = swap19_1 / 1000;
			swap19_1 = swap19_1 - (binler19 * 1000);
			yuzler19 = swap19_1 / 100;
			swap19_1 = swap19_1 - (yuzler19 * 100);
			onlar19 = swap19_1 / 10;
			swap19_1 = swap19_1 - (onlar19 * 10);
			sum19 = onMilyonlar19 + milyonlar19 + yuzBinler19 + onBinler19 + binler19 + yuzBinler19 + yuzler19 + onlar19 + birler19;
		}
		if (num19_1 % sum19 == 0) {

			printf("%d --> %d ile %d arasinda niven sayisidir.\n", i, num19_1, num19_2);
			//birler18 = 0; onlar18 = 0; yuzler18 = 0; binler18 = 0; onBinler18 = 0; yuzBinler18 = 0; milyonlar18 = 0; onMilyonlar18 = 0;
			//swap18_1 = swap18_2;
		}
	}

#pragma endregion

#pragma region Ornek20
	/* SAYI ASAL MI */
	/* Kendisine g�nderilen pozitif bir tamsay�n�n asal olup olmad���n� s�nayan, isprime i�levini tan�mlay�n.

		int isprime(int number);
		isprime i�levi kendisine g�nderilen say� asal ise s�f�r d��� bir de�ere, asal de�il ise 0 de�erine geri d�nmeli. 0 ve 1 say�lar� asal de�ildir.*/
	int num20, isPrime20 = 1, notPrime = 0; //0 is False, 1 is True

	printf("Enter a number:");
	scanf_s("%d", &num20);

	if (num20 == 2)
		isPrime20 = 1;
	else if (num20 > 2 && !(num20 < 0)) {
		for (int i = 2; i < num20; i++) {
			if (num20 % i == 0) {
				isPrime20 = 0;
			}
		}
	}

	if (isPrime20 == 1) {
		printf("%d asaldir.", num20);
	}
	else {
		printf("%d asal degil", num20);
	}

#pragma endregion

#pragma region Ornek21
	/* EN YAKIN ASAL SAYI */
	/* Arg�man olarak g�nderilen int t�rden say�dan k���k ilk asal say�y� bulan closest_prime
		isimli i�levi yaz�n. ��levin bildirimi
		int closest_prime(int value);
		��levin geri d�n�� de�eri, kendisine g�nderilen de�erden daha k���k olan en b�y�k asal
		say� olmal�. Bu ko�ulu sa�layan bir asal say� olmamas� durumunda i�lev 0 de�erine geri d�nmeli.

		int number21,  prime21;//degisken t�rleri tan�mlan�yor
		printf(" Enter a number ");//kullan�c�ya bilgiveriliyor
		scanf_s("%d", &number21);//kullan�c�dan veri al�n�yor
		for (int i = 2; i <= number21; i++) {//sayi degerine kadar 2 den baslayarak d�nd�r�luyor
			prime21 = 1;
			for (int i2 = 2; i2 < i; i2++) {//i degerine kadar say� d�n
				if (i % i2 == 0) {//eger i i2ye b�l�n�yorsa yani kendisinden baska boleni varsa
					prime21 = 0;//m degerine 0 yap
					break;//d�ng�den ��k
				}
			}
			if (prime21 == 1) printf("%d\n", i);//eger i degeri kendisine kadar olan say�lara bolunmuyorsa
		}
		*/

	int number21, prime21, returnValue21;//degisken t�rleri tan�mlan�yor
	printf(" Enter a number ");//kullan�c�ya bilgiveriliyor
	scanf_s("%d", &number21);//kullan�c�dan veri al�n�yor
	for (int i = number21 - 1; i >= 2; i--) {//sayi degerine kadar 2 den baslayarak d�nd�r�luyor
		prime21 = 1;
		for (int i2 = 2; i2 < i; i2++) {//i degerine kadar say� d�n
			if (i % i2 == 0) {//eger i i2ye b�l�n�yorsa yani kendisinden baska boleni varsa
				prime21 = 0;//m degerine 0 yap
				break;//d�ng�den ��k
			}
		}
		if (prime21 == 1) {//eger i degeri kendisine kadar olan say�lara bolunmuyorsa
			returnValue21 = i;
			break;
		}
	}
	printf("%d\n", returnValue21);
#pragma endregion

#pragma region Ornek22
	/* n'�NC� ASAL SAYI */
	/* n 1'den b�y�k ya da 1'e e�it bir tamsay� olmak �zere n. asal say�y� bulan bir i�lev
		tan�mlay�n.
		int nprime(int n);
		��levin geri d�n�� de�eri n. asal say� olmal�.*/
	int number22, prime22, primeCounter22 = 0, returnValue;
	printf("kacinci asal sayiyi bulmak istediginizi giriniz:");
	scanf_s("%d", &number22);

	for (int i = 2; i <= INT_MAX; i++) {
		prime22 = 1;
		for (int j = 2; j < i; j++) {
			if (i % j == 0) {
				prime22 = 0;
				break;
			}
		}
		if (prime22 == 1) {
			primeCounter22++;
			returnValue = i;
		}
		if (number22 == primeCounter22) {
			printf("%d inci asal sayi :%d\n", number22, returnValue);
			break;
		}
	}


#pragma endregion

#pragma region Ornek23
	/* BASAMAKLARLA YAZILACAK T�M ASAL SAYILAR */
	/*  Kendisine g�nderilen bir say�n�n basamaklar� ile yaz�labilecek t�m asal say�lar�, ekrana
		k���kten b�y��e do�ru yazan bir i�lev yaz�n. ��levin bildirimi a�a��daki gibidir:
		void print_primes(int value); */
	int num23, swap23 = 0, index23 = 0, prime23;
	int nums23[100000];
	int birler23 = 0, onlar23 = 0, yuzler23 = 0, binler23 = 0, onBinler23 = 0, yuzBinler23 = 0, milyonlar23 = 0, onMilyonlar23 = 0;
	printf("Enter a number:");
	scanf_s("%d", &num23);
	swap23 = num23;
	while (swap23 > 0) {
		birler23 = swap23 % 10;
		swap23 = swap23 - birler23;
		onMilyonlar23 = swap23 / 10000000;
		swap23 = swap23 - (onMilyonlar23 * 10000000);
		milyonlar23 = swap23 / 1000000;
		swap23 = swap23 - (milyonlar23 * 1000000);
		yuzBinler23 = swap23 / 100000;
		swap23 = swap23 - (yuzBinler23 * 100000);
		onBinler23 = swap23 / 10000;
		swap23 = swap23 - (onBinler23 * 10000);
		binler23 = swap23 / 1000;
		swap23 = swap23 - (binler23 * 1000);
		yuzler23 = swap23 / 100;
		swap23 = swap23 - (yuzler23 * 100);
		onlar23 = swap23 / 10;
		swap23 = swap23 - (onlar23 * 10);
	}

	for (int i = 2; i <= num23; i++) {//sayi degerine kadar 2 den baslayarak d�nd�r�luyor
		prime23 = 1;
		for (int i2 = 2; i2 < i; i2++) {//i degerine kadar say� d�n
			if (i % i2 == 0) {//eger i i2ye b�l�n�yorsa yani kendisinden baska boleni varsa
				prime23 = 0;//m degerine 0 yap
				break;//d�ng�den ��k
			}
		}
		if (prime23 == 1) {//eger i degeri kendisine kadar olan say�lara bolunmuyorsa
			nums23[index23] = i;
			++index23;
		}
	}


	for (int i = 0; i < index23; i++)
	{
		if ((nums23[i] == birler23) || (nums23[i] == onlar23) || (nums23[i] == yuzler23) || (nums23[i] == binler23) || (nums23[i] == onBinler23) || (nums23[i] == yuzBinler23) || (nums23[i] == milyonlar23) || (nums23[i] == onMilyonlar23)) {
			printf("%d yazilabilir\n", nums23[i]);
		}
	}

	if (onlar23 != 0) {
		for (int i = 0; i < index23; i++) {
			if ((nums23[i] == birler23 + (onlar23 * 10))) {
				printf("%d yazilabilir\n", nums23[i]);
			}
		}
	}

	if (yuzler23 != 0) {
		for (int i = 0; i < index23; i++) {
			if ((nums23[i] == birler23 + (yuzler23 * 10))) {
				printf("%d yazilabilir\n", nums23[i]);
			}
		}
	}
	if (binler23 != 0) {
		for (int i = 0; i < index23; i++) {
			if ((nums23[i] == birler23 + (binler23 * 10))) {
				printf("%d yazilabilir\n", nums23[i]);
			}
		}
	}

	if (onBinler23 != 0) {
		for (int i = 0; i < index23; i++) {
			if ((nums23[i] == birler23 + (onBinler23 * 10))) {
				printf("%d yazilabilir\n", nums23[i]);
			}
		}
	}

	if (yuzBinler23 != 0) {
		for (int i = 0; i < index23; i++) {
			if ((nums23[i] == birler23 + (yuzBinler23 * 10))) {
				printf("%d yazilabilir\n", nums23[i]);
			}
		}
	}

	if (milyonlar23 != 0) {
		for (int i = 0; i < index23; i++) {
			if ((nums23[i] == birler23 + (milyonlar23 * 10))) {
				printf("%d yazilabilir\n", nums23[i]);
			}
		}
	}

	if (onMilyonlar23 != 0) {
		for (int i = 0; i < index23; i++) {
			if ((nums23[i] == birler23 + (onMilyonlar23 * 10))) {
				printf("%d yazilabilir\n", nums23[i]);
			}
		}
	}
	if (onlar23 != 0) {
		for (int i = 0; i < index23; i++) {
			if ((nums23[i] == birler23 + (onlar23 * 100))) {
				printf("%d yazilabilir\n", nums23[i]);
			}
		}
	}

	if (yuzler23 != 0) {
		for (int i = 0; i < index23; i++) {
			if ((nums23[i] == birler23 + (yuzler23 * 100))) {
				printf("%d yazilabilir\n", nums23[i]);
			}
		}
	}
	if (binler23 != 0) {
		for (int i = 0; i < index23; i++) {
			if ((nums23[i] == birler23 + (binler23 * 100))) {
				printf("%d yazilabilir\n", nums23[i]);
			}
		}
	}

	if (onBinler23 != 0) {
		for (int i = 0; i < index23; i++) {
			if ((nums23[i] == birler23 + (onBinler23 * 100))) {
				printf("%d yazilabilir\n", nums23[i]);
			}
		}
	}

	if (yuzBinler23 != 0) {
		for (int i = 0; i < index23; i++) {
			if ((nums23[i] == birler23 + (yuzBinler23 * 100))) {
				printf("%d yazilabilir\n", nums23[i]);
			}
		}
	}

	if (milyonlar23 != 0) {
		for (int i = 0; i < index23; i++) {
			if ((nums23[i] == birler23 + (milyonlar23 * 100))) {
				printf("%d yazilabilir\n", nums23[i]);
			}
		}
	}

	if (onMilyonlar23 != 0) {
		for (int i = 0; i < index23; i++) {
			if ((nums23[i] == birler23 + (onMilyonlar23 * 100))) {
				printf("%d yazilabilir\n", nums23[i]);
			}
		}
	}
	//
	if (onlar23 != 0) {
		for (int i = 0; i < index23; i++) {
			if ((nums23[i] == birler23 + (onlar23 * 1000))) {
				printf("%d yazilabilir\n", nums23[i]);
			}
		}
	}

	if (yuzler23 != 0) {
		for (int i = 0; i < index23; i++) {
			if ((nums23[i] == birler23 + (yuzler23 * 1000))) {
				printf("%d yazilabilir\n", nums23[i]);
			}
		}
	}
	if (binler23 != 0) {
		for (int i = 0; i < index23; i++) {
			if ((nums23[i] == birler23 + (binler23 * 1000))) {
				printf("%d yazilabilir\n", nums23[i]);
			}
		}
	}

	if (onBinler23 != 0) {
		for (int i = 0; i < index23; i++) {
			if ((nums23[i] == birler23 + (onBinler23 * 1000))) {
				printf("%d yazilabilir\n", nums23[i]);
			}
		}
	}

	if (yuzBinler23 != 0) {
		for (int i = 0; i < index23; i++) {
			if ((nums23[i] == birler23 + (yuzBinler23 * 1000))) {
				printf("%d yazilabilir\n", nums23[i]);
			}
		}
	}

	if (milyonlar23 != 0) {
		for (int i = 0; i < index23; i++) {
			if ((nums23[i] == birler23 + (milyonlar23 * 1000))) {
				printf("%d yazilabilir\n", nums23[i]);
			}
		}
	}

	if (onMilyonlar23 != 0) {
		for (int i = 0; i < index23; i++) {
			if ((nums23[i] == birler23 + (onMilyonlar23 * 1000))) {
				printf("%d yazilabilir\n", nums23[i]);
			}
		}
	}
	//
	if (onlar23 != 0) {
		for (int i = 0; i < index23; i++) {
			if ((nums23[i] == onlar23 + (birler23 * 10))) {
				printf("%d yazilabilir\n", nums23[i]);
			}
		}
	}

	if (yuzler23 != 0) {
		for (int i = 0; i < index23; i++) {
			if ((nums23[i] == onlar23 + (yuzler23 * 10))) {
				printf("%d yazilabilir\n", nums23[i]);
			}
		}
	}
	if (binler23 != 0) {
		for (int i = 0; i < index23; i++) {
			if ((nums23[i] == onlar23 + (binler23 * 10))) {
				printf("%d yazilabilir\n", nums23[i]);
			}
		}
	}

	if (onBinler23 != 0) {
		for (int i = 0; i < index23; i++) {
			if ((nums23[i] == onlar23 + (onBinler23 * 10))) {
				printf("%d yazilabilir\n", nums23[i]);
			}
		}
	}

	if (yuzBinler23 != 0) {
		for (int i = 0; i < index23; i++) {
			if ((nums23[i] == onlar23 + (yuzBinler23 * 10))) {
				printf("%d yazilabilir\n", nums23[i]);
			}
		}
	}

	if (milyonlar23 != 0) {
		for (int i = 0; i < index23; i++) {
			if ((nums23[i] == onlar23 + (milyonlar23 * 10))) {
				printf("%d yazilabilir\n", nums23[i]);
			}
		}
	}

	if (onMilyonlar23 != 0) {
		for (int i = 0; i < index23; i++) {
			if ((nums23[i] == birler23 + (onMilyonlar23 * 10))) {
				printf("%d yazilabilir\n", nums23[i]);
			}
		}
	}
	//

	if (onlar23 != 0) {
		for (int i = 0; i < index23; i++) {
			if ((nums23[i] == onlar23 + (birler23 * 100))) {
				printf("%d yazilabilir\n", nums23[i]);
			}
		}
	}

	if (yuzler23 != 0) {
		for (int i = 0; i < index23; i++) {
			if ((nums23[i] == onlar23 + (yuzler23 * 100))) {
				printf("%d yazilabilir\n", nums23[i]);
			}
		}
	}
	if (binler23 != 0) {
		for (int i = 0; i < index23; i++) {
			if ((nums23[i] == onlar23 + (binler23 * 100))) {
				printf("%d yazilabilir\n", nums23[i]);
			}
		}
	}

	if (onBinler23 != 0) {
		for (int i = 0; i < index23; i++) {
			if ((nums23[i] == onlar23 + (onBinler23 * 100))) {
				printf("%d yazilabilir\n", nums23[i]);
			}
		}
	}

	if (yuzBinler23 != 0) {
		for (int i = 0; i < index23; i++) {
			if ((nums23[i] == onlar23 + (yuzBinler23 * 100))) {
				printf("%d yazilabilir\n", nums23[i]);
			}
		}
	}

	if (milyonlar23 != 0) {
		for (int i = 0; i < index23; i++) {
			if ((nums23[i] == onlar23 + (milyonlar23 * 100))) {
				printf("%d yazilabilir\n", nums23[i]);
			}
		}
	}

	if (onMilyonlar23 != 0) {
		for (int i = 0; i < index23; i++) {
			if ((nums23[i] == birler23 + (onMilyonlar23 * 100))) {
				printf("%d yazilabilir\n", nums23[i]);
			}
		}
	}

	//
	if (onlar23 != 0) {
		for (int i = 0; i < index23; i++) {
			if ((nums23[i] == onlar23 + (birler23 * 1000))) {
				printf("%d yazilabilir\n", nums23[i]);
			}
		}
	}

	if (yuzler23 != 0) {
		for (int i = 0; i < index23; i++) {
			if ((nums23[i] == onlar23 + (yuzler23 * 1000))) {
				printf("%d yazilabilir\n", nums23[i]);
			}
		}
	}
	if (binler23 != 0) {
		for (int i = 0; i < index23; i++) {
			if ((nums23[i] == onlar23 + (binler23 * 1000))) {
				printf("%d yazilabilir\n", nums23[i]);
			}
		}
	}

	if (onBinler23 != 0) {
		for (int i = 0; i < index23; i++) {
			if ((nums23[i] == onlar23 + (onBinler23 * 1000))) {
				printf("%d yazilabilir\n", nums23[i]);
			}
		}
	}

	if (yuzBinler23 != 0) {
		for (int i = 0; i < index23; i++) {
			if ((nums23[i] == onlar23 + (yuzBinler23 * 1000))) {
				printf("%d yazilabilir\n", nums23[i]);
			}
		}
	}

	if (milyonlar23 != 0) {
		for (int i = 0; i < index23; i++) {
			if ((nums23[i] == onlar23 + (milyonlar23 * 1000))) {
				printf("%d yazilabilir\n", nums23[i]);
			}
		}
	}

	if (onMilyonlar23 != 0) {
		for (int i = 0; i < index23; i++) {
			if ((nums23[i] == birler23 + (onMilyonlar23 * 1000))) {
				printf("%d yazilabilir\n", nums23[i]);
			}
		}
	}

	//
	if (onlar23 != 0) {
		for (int i = 0; i < index23; i++) {
			if ((nums23[i] == yuzler23 + (birler23 * 10))) {
				printf("%d yazilabilir\n", nums23[i]);
			}
		}
	}

	if (yuzler23 != 0) {
		for (int i = 0; i < index23; i++) {
			if ((nums23[i] == yuzler23 + (onlar23 * 10))) {
				printf("%d yazilabilir\n", nums23[i]);
			}
		}
	}
	if (binler23 != 0) {
		for (int i = 0; i < index23; i++) {
			if ((nums23[i] == yuzler23 + (binler23 * 10))) {
				printf("%d yazilabilir\n", nums23[i]);
			}
		}
	}

	if (onBinler23 != 0) {
		for (int i = 0; i < index23; i++) {
			if ((nums23[i] == yuzler23 + (onBinler23 * 10))) {
				printf("%d yazilabilir\n", nums23[i]);
			}
		}
	}

	if (yuzBinler23 != 0) {
		for (int i = 0; i < index23; i++) {
			if ((nums23[i] == yuzler23 + (yuzBinler23 * 10))) {
				printf("%d yazilabilir\n", nums23[i]);
			}
		}
	}

	if (milyonlar23 != 0) {
		for (int i = 0; i < index23; i++) {
			if ((nums23[i] == yuzler23 + (milyonlar23 * 10))) {
				printf("%d yazilabilir\n", nums23[i]);
			}
		}
	}

	if (onMilyonlar23 != 0) {
		for (int i = 0; i < index23; i++) {
			if ((nums23[i] == yuzler23 + (onMilyonlar23 * 10))) {
				printf("%d yazilabilir\n", nums23[i]);
			}
		}
	}

	//
	if (onlar23 != 0) {
		for (int i = 0; i < index23; i++) {
			if ((nums23[i] == yuzler23 + (birler23 * 100))) {
				printf("%d yazilabilir\n", nums23[i]);
			}
		}
	}

	if (yuzler23 != 0) {
		for (int i = 0; i < index23; i++) {
			if ((nums23[i] == yuzler23 + (onlar23 * 100))) {
				printf("%d yazilabilir\n", nums23[i]);
			}
		}
	}
	if (binler23 != 0) {
		for (int i = 0; i < index23; i++) {
			if ((nums23[i] == yuzler23 + (binler23 * 100))) {
				printf("%d yazilabilir\n", nums23[i]);
			}
		}
	}

	if (onBinler23 != 0) {
		for (int i = 0; i < index23; i++) {
			if ((nums23[i] == yuzler23 + (onBinler23 * 100))) {
				printf("%d yazilabilir\n", nums23[i]);
			}
		}
	}

	if (yuzBinler23 != 0) {
		for (int i = 0; i < index23; i++) {
			if ((nums23[i] == yuzler23 + (yuzBinler23 * 100))) {
				printf("%d yazilabilir\n", nums23[i]);
			}
		}
	}

	if (milyonlar23 != 0) {
		for (int i = 0; i < index23; i++) {
			if ((nums23[i] == yuzler23 + (milyonlar23 * 100))) {
				printf("%d yazilabilir\n", nums23[i]);
			}
		}
	}

	if (onMilyonlar23 != 0) {
		for (int i = 0; i < index23; i++) {
			if ((nums23[i] == yuzler23 + (onMilyonlar23 * 100))) {
				printf("%d yazilabilir\n", nums23[i]);
			}
		}
	}

	//
	if (onlar23 != 0) {
		for (int i = 0; i < index23; i++) {
			if ((nums23[i] == yuzler23 + (birler23 * 1000))) {
				printf("%d yazilabilir\n", nums23[i]);
			}
		}
	}

	if (yuzler23 != 0) {
		for (int i = 0; i < index23; i++) {
			if ((nums23[i] == yuzler23 + (onlar23 * 1000))) {
				printf("%d yazilabilir\n", nums23[i]);
			}
		}
	}
	if (binler23 != 0) {
		for (int i = 0; i < index23; i++) {
			if ((nums23[i] == yuzler23 + (binler23 * 1000))) {
				printf("%d yazilabilir\n", nums23[i]);
			}
		}
	}

	if (onBinler23 != 0) {
		for (int i = 0; i < index23; i++) {
			if ((nums23[i] == yuzler23 + (onBinler23 * 1000))) {
				printf("%d yazilabilir\n", nums23[i]);
			}
		}
	}

	if (yuzBinler23 != 0) {
		for (int i = 0; i < index23; i++) {
			if ((nums23[i] == yuzler23 + (yuzBinler23 * 1000))) {
				printf("%d yazilabilir\n", nums23[i]);
			}
		}
	}

	if (milyonlar23 != 0) {
		for (int i = 0; i < index23; i++) {
			if ((nums23[i] == yuzler23 + (milyonlar23 * 1000))) {
				printf("%d yazilabilir\n", nums23[i]);
			}
		}
	}

	if (onMilyonlar23 != 0) {
		for (int i = 0; i < index23; i++) {
			if ((nums23[i] == yuzler23 + (onMilyonlar23 * 1000))) {
				printf("%d yazilabilir\n", nums23[i]);
			}
		}
	}

	//
		//
	if (onlar23 != 0) {
		for (int i = 0; i < index23; i++) {
			if ((nums23[i] == binler23 + (birler23 * 10))) {
				printf("%d yazilabilir\n", nums23[i]);
			}
		}
	}

	if (yuzler23 != 0) {
		for (int i = 0; i < index23; i++) {
			if ((nums23[i] == binler23 + (onlar23 * 10))) {
				printf("%d yazilabilir\n", nums23[i]);
			}
		}
	}
	if (binler23 != 0) {
		for (int i = 0; i < index23; i++) {
			if ((nums23[i] == binler23 + (yuzler23 * 10))) {
				printf("%d yazilabilir\n", nums23[i]);
			}
		}
	}

	if (onBinler23 != 0) {
		for (int i = 0; i < index23; i++) {
			if ((nums23[i] == binler23 + (onBinler23 * 10))) {
				printf("%d yazilabilir\n", nums23[i]);
			}
		}
	}

	if (yuzBinler23 != 0) {
		for (int i = 0; i < index23; i++) {
			if ((nums23[i] == binler23 + (yuzBinler23 * 10))) {
				printf("%d yazilabilir\n", nums23[i]);
			}
		}
	}

	if (milyonlar23 != 0) {
		for (int i = 0; i < index23; i++) {
			if ((nums23[i] == binler23 + (milyonlar23 * 10))) {
				printf("%d yazilabilir\n", nums23[i]);
			}
		}
	}

	if (onMilyonlar23 != 0) {
		for (int i = 0; i < index23; i++) {
			if ((nums23[i] == binler23 + (onMilyonlar23 * 10))) {
				printf("%d yazilabilir\n", nums23[i]);
			}
		}
	}

	//
	if (onlar23 != 0) {
		for (int i = 0; i < index23; i++) {
			if ((nums23[i] == binler23 + (birler23 * 100))) {
				printf("%d yazilabilir\n", nums23[i]);
			}
		}
	}

	if (yuzler23 != 0) {
		for (int i = 0; i < index23; i++) {
			if ((nums23[i] == binler23 + (onlar23 * 100))) {
				printf("%d yazilabilir\n", nums23[i]);
			}
		}
	}
	if (binler23 != 0) {
		for (int i = 0; i < index23; i++) {
			if ((nums23[i] == binler23 + (yuzler23 * 100))) {
				printf("%d yazilabilir\n", nums23[i]);
			}
		}
	}

	if (onBinler23 != 0) {
		for (int i = 0; i < index23; i++) {
			if ((nums23[i] == binler23 + (onBinler23 * 100))) {
				printf("%d yazilabilir\n", nums23[i]);
			}
		}
	}

	if (yuzBinler23 != 0) {
		for (int i = 0; i < index23; i++) {
			if ((nums23[i] == binler23 + (yuzBinler23 * 100))) {
				printf("%d yazilabilir\n", nums23[i]);
			}
		}
	}

	if (milyonlar23 != 0) {
		for (int i = 0; i < index23; i++) {
			if ((nums23[i] == binler23 + (milyonlar23 * 100))) {
				printf("%d yazilabilir\n", nums23[i]);
			}
		}
	}

	if (onMilyonlar23 != 0) {
		for (int i = 0; i < index23; i++) {
			if ((nums23[i] == binler23 + (onMilyonlar23 * 100))) {
				printf("%d yazilabilir\n", nums23[i]);
			}
		}
	}

	//

	if (onlar23 != 0) {
		for (int i = 0; i < index23; i++) {
			if ((nums23[i] == binler23 + (birler23 * 1000))) {
				printf("%d yazilabilir\n", nums23[i]);
			}
		}
	}

	if (yuzler23 != 0) {
		for (int i = 0; i < index23; i++) {
			if ((nums23[i] == binler23 + (onlar23 * 1000))) {
				printf("%d yazilabilir\n", nums23[i]);
			}
		}
	}
	if (binler23 != 0) {
		for (int i = 0; i < index23; i++) {
			if ((nums23[i] == binler23 + (yuzler23 * 1000))) {
				printf("%d yazilabilir\n", nums23[i]);
			}
		}
	}

	if (onBinler23 != 0) {
		for (int i = 0; i < index23; i++) {
			if ((nums23[i] == binler23 + (onBinler23 * 1000))) {
				printf("%d yazilabilir\n", nums23[i]);
			}
		}
	}

	if (yuzBinler23 != 0) {
		for (int i = 0; i < index23; i++) {
			if ((nums23[i] == binler23 + (yuzBinler23 * 1000))) {
				printf("%d yazilabilir\n", nums23[i]);
			}
		}
	}

	if (milyonlar23 != 0) {
		for (int i = 0; i < index23; i++) {
			if ((nums23[i] == binler23 + (milyonlar23 * 1000))) {
				printf("%d yazilabilir\n", nums23[i]);
			}
		}
	}

	if (onMilyonlar23 != 0) {
		for (int i = 0; i < index23; i++) {
			if ((nums23[i] == binler23 + (onMilyonlar23 * 1000))) {
				printf("%d yazilabilir\n", nums23[i]);
			}
		}
	}

#pragma endregion

#pragma region Ornek24
	/* ASAL SAYI BULMACASI */
	/* abc, �� basamakl� bir tamsay�d�r. A�a��daki ko�ullar� sa�lamaktad�r:
ko�ul 1 cba > abc olacak
ko�ul 2 abc asal say� olacak
ko�ul 3 cba asal say� olacak
ko�ul 4 ab asal say� olacak
ko�ul 5 bc asal say� olacak
ko�ul 6 cb asal say� olacak
ko�ul 7 ba asal say� olacak
113 say�s� bu ko�ullar� sa�lamaktad�r:
ko�ul 1 cba > abc olacak 311 > 113
ko�ul 2 abc asal say� olacak 113 asal
ko�ul 3 cba asal say� olacak 311 asal
ko�ul 4 ab asal say� olacak 11 asal
ko�ul 5 bc asal say� olacak 13 asal
ko�ul 6 cb asal say� olacak 31 asal
ko�ul 7 ba asal say� olacak 11 asal
Bir C program� yazarak, yukar�daki ko�ullar�n hepsini sa�layan t�m abc say�lar�n� bulun.*/
	int isPrime24 = 1, isPrime_1 = 1, isPrime1_2 = 1, isPrime1_3 = 1, isPrime1_4 = 1, isPrime1_5 = 1; // if its 1 answer would be true
	int swap24; // for swapping number that is our 3 digits number.
	int unitsDigit24 = 0;
	int tenth24 = 0; // onlar basamagi
	int hundredsDigit24 = 0; //yuzler basamagi
	int numberABC = 0;
	int numberCBA = 0;
	int numberAB = 0;
	int numberBC = 0;
	int numberCB = 0;
	int numberBA = 0;
	for (int i = 100; i < 1000; i++) // 100<=number<=999
	{
		for (int j = 2; j < i; j++) {
			isPrime24 = 1;
			if (i % j == 0) {
				isPrime24 = 0; // non prime number
				break;
			}
		}
		if (isPrime24 == 1) { //ABC number is prime
			/* for find each digits */
			swap24 = i;
			while (swap24 > 0) {
				unitsDigit24 = swap24 % 10;
				swap24 -= unitsDigit24;
				hundredsDigit24 = swap24 / 100;
				swap24 = swap24 - (hundredsDigit24 * 100);
				tenth24 = swap24 / 10;
				swap24 = swap24 - (tenth24 * 10);
			}
			numberCBA = (unitsDigit24 * 100) + (tenth24 * 10) + hundredsDigit24;

			if (numberCBA > i) { // 1. cba>abc
				isPrime_1 = 1;
				for (int c = 2; c < numberCBA; c++)
				{
					if (((numberCBA % c) == 0)) {
						isPrime_1 = 0;
						break;
					}
				}
				if (isPrime_1 == 1) { //cba is prime 
					numberAB = (hundredsDigit24 * 10) + tenth24; // numberAB
					isPrime1_2 = 1;
					for (int d = 2; d < numberAB; d++) {
						if ((numberAB % d) == 0) { // numberAB is not prime 
							isPrime1_2 = 0;
							break;
						}
					}
					if (isPrime1_2 == 1) { // numberAB is prime
						numberBC = (tenth24 * 10) + unitsDigit24; // numberBC
						isPrime1_3 = 1;
						for (int e = 2; e < numberBC; e++) {
							if (numberBC % e == 0) {// numberBC is not prime
								isPrime1_3 = 0;
								break;
							}
						}
						if (isPrime1_3 == 1) { //numberBC is prime
							numberCB = (unitsDigit24 * 10) + tenth24;//numberCB
							isPrime1_4 = 1;
							for (int f = 2; f < numberCB; f++) {
								if (numberCB % f == 0) { //numberCB  is not prime 
									isPrime1_4 = 0;
									break;
								}
							}
							if (isPrime1_4 == 1) {//numberCB is prime
								numberBA = (tenth24 * 10) + hundredsDigit24;
								isPrime1_5 = 1;
								for (int g = 2; g < numberBA; g++) {
									if (numberBA % g == 0) { // numberBA is not prime
										isPrime1_5 = 0;
										break;
									}
								}
								if (isPrime1_5 == 1) {//numberBA is prime
									printf("%d\n", i);
								}
							}
						}
					}
				}
			}
		}
	}


#pragma endregion 

#pragma region Ornek25
	/* ASAL SAYI TOPLAMLARI 1*/
	/*	2 basamakl� birbirinden farkl� 3 asal say�n�n toplam� �eklinde ifade edilebilecek en b�y�k
		ve en k���k asal say�lar hangileridir?
		Bir C program� yazarak bu say�lar� bulun.
	*/

	int primeNumbersSums25[13800] = { 0 };
	int primeNumbers25_1[25] = { 0 }, primeNumbers25_2[25] = { 0 }, primeNumbers25_3[25] = { 0 };
	int indexCounter25_1 = 0, indexCounter25_2 = 0, indexCounter25_3 = 0, indexCounter25_4 = 0, indexCounter25_5 = 0, indexCounter25_6 = 0;
	int isPrime25_1 = 1, isPrime25_2 = 1, isPrime25_3 = 1, isPrime25_4 = 1;
	int swap25 = 0;
	int hundredsDigit = 0;
	int aa[1326] = { 0 };
	int maxPrime2Digits25 = 0;
	int minPrime2Digits25 = 0;

	for (int i = 2; i < 100; i++) {
		isPrime25_1 = 1;
		for (int j = 2; j < i; j++) {
			if (i % j == 0) {
				isPrime25_1 = 0;
				break;
			}
		}
		if (isPrime25_1 == 1) {
			primeNumbers25_1[indexCounter25_1] = i;
			indexCounter25_1++;
		}
	}

	for (int i = 2; i < 100; i++) {
		isPrime25_2 = 1;
		for (int j = 2; j < i; j++) {
			if (i % j == 0) {
				isPrime25_2 = 0;
				break;
			}
		}
		if (isPrime25_2 == 1) {
			primeNumbers25_2[indexCounter25_2] = i;
			indexCounter25_2++;
		}
	}
	
	for (int i = 2; i < 100; i++) {
		isPrime25_3 = 1;
		for (int j = 2; j < i; j++) {
			if (i % j == 0) {
				isPrime25_3 = 0;
				break;
			}
		}
		if (isPrime25_3 == 1) {
			primeNumbers25_3[indexCounter25_3] = i;
			indexCounter25_3++;
		}
	}
	for (int i = 0; i < 25; i++) {
		for (int j = 0; j < 25; j++) {
			for (int k = 0; k < 25; k++) {
				if ((primeNumbers25_1[i] == primeNumbers25_2[j]) || (primeNumbers25_1[i] == primeNumbers25_3[k]) || (primeNumbers25_2[j] == primeNumbers25_3[k])) {
					;
				}
				else {
					primeNumbersSums25[indexCounter25_4] = (primeNumbers25_1[i]) + (primeNumbers25_2[j]) + (primeNumbers25_3[k]);
					if (primeNumbersSums25[indexCounter25_4] / 100 == 0) {
						isPrime25_4 = 1;
						for (int c = 2; c < primeNumbersSums25[indexCounter25_4]; c++) {
							if (primeNumbersSums25[indexCounter25_4] % c == 0) {
								isPrime25_4 = 0;
								break;
							}
						}
						if (isPrime25_4 == 1) {
							aa[indexCounter25_6] = primeNumbersSums25[indexCounter25_4];
							for (int d = 1; d < indexCounter25_6; d++) {
								if (aa[d - 1] > aa[d]) {
									maxPrime2Digits25 = aa[d - 1];
								}
								if (aa[d - 1] < aa[d]) {
									minPrime2Digits25 = aa[d - 1];
								}
							}
							indexCounter25_6++; /// 
						}
					}
					else {
						;
					}
					indexCounter25_4++;
				}
			}
		}
	}

	printf("max: %d\n", maxPrime2Digits25);
	printf("min: %d\n", minPrime2Digits25);
#pragma endregion

#pragma region Ornek26
	/* ASAL SAYI TOPLAMLARI 2*/
	/*	3 basamakl� birbirinden farkl� 3 asal say�n�n toplam� �eklinde ifade edilebilecek en b�y�k
		ve en k���k asal say�lar hangileridir?
		Bir C program� yazarak bu say�lar� bulun. */
	int isPrime26_1 = 1, isPrime26_2 = 1, isPrime26_3 = 1;
	int primeNumbers26[143];//100-999 number of prime numbers 
	int indexCounter26_1 = 0, indexCounter26_2 = 0, indexCounter26_3 = 0;
	int max3DigitsPrimeNumber26 = 0;
	int min3DigitsPrimeNumber26 = 0;
	int sums26[17369] = { 0 };
	for (int i = 100; i < 1000; i++) {
		for (int j = 2; j < i; j++) {
			isPrime26_1 = 1;
			if (i % j == 0) {
				isPrime26_1 = 0;
				break;
			}
		}
		if (isPrime26_1 == 1) {
			primeNumbers26[indexCounter26_1] = i;
			indexCounter26_1++;
		}
	}
	for (int i = 0; i < indexCounter26_1; i++) {
		for (int j = i + 1; j < indexCounter26_1; j++) {
			for (int k = j + 1; k < indexCounter26_1; k++) {
				if ((primeNumbers26[i] + primeNumbers26[j] + primeNumbers26[k]) > 99 && (primeNumbers26[i] + primeNumbers26[j] + primeNumbers26[k]) < 1000) {
					isPrime26_2 = 1;
					for (int m = 2; m < (primeNumbers26[i] + primeNumbers26[j] + primeNumbers26[k]); m++) {
						if (((primeNumbers26[i] + primeNumbers26[j] + primeNumbers26[k]) % m) == 0) {
							isPrime26_2 = 0;
							break;
						}
					}
					if (isPrime26_2 == 1) {
						sums26[indexCounter26_2] = primeNumbers26[i] + primeNumbers26[j] + primeNumbers26[k];
						indexCounter26_2++;
					}
				}
			}
		}
	}
	max3DigitsPrimeNumber26 = sums26[0];
	min3DigitsPrimeNumber26 = sums26[0];
	for (int i = 1; i < indexCounter26_2 - 1; i++) {
		if (max3DigitsPrimeNumber26 < sums26[i]) {
			max3DigitsPrimeNumber26 = sums26[i];
		}
		if (min3DigitsPrimeNumber26 > sums26[i]) {
			min3DigitsPrimeNumber26 = sums26[i];
		}
	}
	printf("max of 3 digits: %d\n", max3DigitsPrimeNumber26);
	printf("min of 3 digits: %d\n", min3DigitsPrimeNumber26);
#pragma endregion

#pragma region Ornek27
	/*	�S HESAPLAMAK */
	/*	Bir pozitif tamsay�n�n ba�ka bir pozitif kuvvetini hesaplayan, power isimli i�levi
		tan�mlay�n:
		int power(unsigned int base, unsigned int exp);
		power i�levi base exp ile geri d�nmeli.*/

	double number27_1, number27_2;
	double result27 = 1;
	printf("Enter base number:");
	scanf_s("%lf", &number27_1);
	printf("Enter exp number:");
	scanf_s("%lf", &number27_2);

	if (number27_1 == 0) {
		result27 = 0;
	}
	else if (number27_1 > 0 && number27_2 == 0) {
		result27 = 1;
	}
	else if (number27_2 < 0 && number27_1>0) {
		result27 /= number27_1;
	}
	else {
		for (int i = number27_2; i > 0; i--) {
			result27 *= number27_1;
		}
	}
	printf("result:%f\n", result27);

#pragma endregion

#pragma region Ornek28
	/* B�NOM ��GEN� */
	/*	Klavyeden girilen bir �n� say�s� i�in binom ��geninin ilgili sat�r�ndaki katsay�lar� ekrana
		yazan program� yaz�n:
		�n� say�s� yukar�daki gibi iki bilinmeyenli n. dereceden bir denklemin derecesini
		g�steriyor.
		n = 0 icin :		 1
		n = 1 icin :		1 1
		n = 2 icin :	   1 2 1
		n = 3 icin :	  1 3 3 1
		n = 4 icin :     1 4 6 4 1
		n = 5 icin :    1 5 10 10 5 1
		n = 6 icin :   1 6 15 20 15 6 1
		Program girilen �n� degerine kar��l�k, binom ��geninin ilgili sat�r�n� yukar�daki gibi
		yazmal�.*/

	int a28;
	printf("Pascal triangle row? = ");
	scanf_s("%d", &a28); //Burada d��ar�dan pascal ��geni ka� sat�r olmas�n� istiyorsan�z onu giriyoruz.
	printf("\n");
	for (int b = 0; b < a28; b++) //Burada for d�ng�s� kulland�k.Pascal ��geni i�in toplamda 3 for d�ng�s� kullanaca��z.
	{
		int c = 1;
		for (int d = 0; d < a28 - b; d++)
		{
			printf(" "); //Burada pascal ��genimiz olu�sun diye de�erler aras�na bo�luk b�rak�yoruz ki ��gen g�r�n�m�n� als�n.
		}
		for (int e = 0; e <= b; e++)
		{
			printf(" %d ", c); //Gerekli i�lemlerimiz yap�ld� ve pascal ��genimizdeki elemanlar�n de�erleri teker teker girildi.
			c = c * (b - e) / (e + 1);
		}
		printf("\n");
	}
#pragma endregion

#pragma region Ornek29
	/* TOMBALA OYUNU OLASILI�I */
	/*	Bir tombala torbas�nda 1'den 99'a kadar numaralanm�� (99 dahil) pullar bulunuyor. Bu
		tombala torbas�yla a�a��daki oyunlar oynan�yor:
		�ekilen bir pul torbaya geri at�lmamak �zere
		1) Torbadan 3 pul �ekiliyor. �ekilen pullar�n toplam� 150'den k���k ise oyuncu kazan�yor.
		2) Torbadan 3 pul �ekiliyor. �ekilen pullar�n toplam� asal say� ise oyuncu kazan�yor.
		3) Torbadan 3 pul �ekiliyor. En b�y�k de�erli pul ile en k���k de�erli pul aras�ndaki fark
		ortanca de�erli puldan b�y�kse oyuncu kazan�yor.
		Oynanacak her bir oyun i�in oyuncunun kazanma olas�l���n� en az 30000 oyunu simule
		ederek hesaplay�n.*/
	int numbers29[3];
	int winTime29 = 0;
	int result29 = 0;
	int isPrime29 = 1;
	int max29 = 0, min29 = 0, mid29 = 0;
	srand(time(NULL));   // Initialization, should only be called once.
	int r29 = rand() % 99;      // Returns a pseudo-random integer between 0 and RAND_MAX.
	for (int i = 0; i < 30000; i++) {
		for (int j = 0; j < 3; j++) {
			numbers29[j] = (rand() % 99);
			result29 += numbers29[j];
		}
		if (numbers29[0] >= numbers29[1] && numbers29[0] >= numbers29[2]) { //0>1 0>2
			max29 = numbers29[0];
		}
		else if (numbers29[1] >= numbers29[0] && numbers29[1] >= numbers29[2]) {
			max29 = numbers29[1];
		}
		else if (numbers29[2] >= numbers29[0] && numbers29[2] >= numbers29[1]) {
			max29 = numbers29[2];
		}
		if (numbers29[0] <= numbers29[1] && numbers29[0] <= numbers29[2]) {
			min29 = numbers29[0];
		}
		else if (numbers29[1] <= numbers29[2] && numbers29[1] <= numbers29[0]) {
			min29 = numbers29[1];
		}
		else if (numbers29[2] <= numbers29[0] && numbers29[2] <= numbers29[1]) {
			min29 = numbers29[2];
		}
		if (numbers29[0] >= numbers29[1] && numbers29[1] >= numbers29[2]) { // a>b b>c mid=b
			mid29 = numbers29[1];
		}
		else if (numbers29[1] >= numbers29[0] && numbers29[0] >= numbers29[2]) { // b>a a>c mid=a
			mid29 = numbers29[0];
		}
		else if (numbers29[0] >= numbers29[2] && numbers29[2] >= numbers29[1]) { // a>c c>b mid=c
			mid29 = numbers29[2];
		}
		isPrime29 = 1;
		for (int b = 2; b < result29; b++) {
			if (result29 % b == 0) {
				isPrime29 = 0;
				break;
			}
		}
		if (isPrime29 == 1) {
			winTime29++;
		}
		else if (result29 < 150) {
			winTime29++;
		}
		else if ((max29 - min29) > mid29) {
			winTime29++;
		}
	}
	printf("min=%d mid=%d max=%d\n", min29, mid29, max29);
	double winRate29 = ((double)winTime29 / 30000);
	printf("kazanma orani:%%%f\n", winRate29 * 100);
#pragma endregion

#pragma region Ornek30
	/*	CRAPS OYUNU */
	/*	Craps hemen hemen d�nyan�n her yerinde bilinen, iki zarla oynanan bir kumard�r.
		Oyunun kurallar� ��yledir :
		Zarlar� atacak oyuncu oyunu kasaya (kumarhaneye) kar�� oynar. At�lan iki zar�n toplam
		de�eri
		7 ya da 11 ise oyuncu kazan�r.
		2, 3, 12 ise oyuncu kaybeder. (buna craps denir!)
		�ki zar�n toplam de�eri yukar�dakilerin d���nda bir de�er ise (yani 4, 5, 6, 8, 9, 10) oyun
		�u �ekilde s�rer:
		Oyuncu ayn� sonucu buluncaya kadar zarlar� yeniden atar. E�er ayn� sonucu bulamadan
		�nce oyuncu 7 atarsa (yani at�lan iki zar�n toplam de�eri 7 olursa) oyuncu kaybeder.
		E�er 7 gelmeden �nce oyuncu ayn� sonucu yeniden atmay� ba�ar�rsa , kazan�r.
		Birka� �rnek :
		Oyuncu zarlar� att�, zarlar�n toplam de�eri :
		11 oyuncu kazand�. Yeni oyun oynanacak.
		3 oyuncu kaybetti. Yeni oyun oynanacak.
		12 oyuncu kaybetti. Yeni oyun oynanacak.
		7 oyuncu kazand�. Yeni oyun oynanacak.
		9 sonu� belli de�il, oyuncu tekrar zar atacak.
		8 sonu� belli de�il, oyuncu tekrar zar atacak.
		11 sonu� belli de�il oyuncu tekrar zar atacak.
		5 sonu� belli de�il oyuncu tekrar zar atacak.
		9 oyuncu kazand�. (7 atmadan ayn� zar� tekrar att�). Yeni oyun
		oynanacak.
		6 sonu� belli de�il, oyuncu tekrar zar atacak.
		3 sonu� belli de�il, oyuncu tekrar zar atacak.
		10 sonu� belli de�il, oyuncu tekrar zar atacak.
		7 oyuncu kaybetti. (Ayn� zar� tekrar atamadan 7 geldi)
		B�yle bir oyunu bir kez oynad���n�zda kazanma olas�l���n�z nedir?
		Bu oyunun benzetimini (simulasyon) yaparak bilgisayara 100.000 kez oynatan, ve
		oyuncunun kazanma olas�l���n� hesaplayan bir C program� yaz�n�z.*/

	int winTime30 = 0;
	int sum30_1 = 0;
	int sum30_2 = 0;
	double winRate30 = 0;
	srand(time(NULL));

	for (int i = 0; i < 100000; i++) {
		int firstDice30 = (rand() % 6) + 1;
		//printf("first dice:%d\n", firstDice30);

		int secondDice30 = (rand() % 6) + 1;
		//printf("second dice:%d\n", secondDice30);
		sum30_1 = firstDice30 + secondDice30;
		//printf("ilk atilan zarlar toplami:%d\n", sum30_1);
		if (((firstDice30 + secondDice30) == 7) || ((firstDice30 + secondDice30) == 11)) {
			winTime30++;
		}
		else if (((firstDice30 + secondDice30) == 2) || ((firstDice30 + secondDice30) == 3) || ((firstDice30 + secondDice30) == 12)) {
			//printf("craps\n");
		}
		else if (((firstDice30 + secondDice30) == 4) || ((firstDice30 + secondDice30) == 5) || ((firstDice30 + secondDice30) == 6) || ((firstDice30 + secondDice30) == 8) || ((firstDice30 + secondDice30) == 9) || ((firstDice30 + secondDice30) == 10)) {
			while (sum30_1 != sum30_2) {
				//printf("zar atiliyor...\n\n");
				firstDice30 = (rand() % 6) + 1;
				secondDice30 = (rand() % 6) + 1;
				sum30_2 = firstDice30 + secondDice30;
				//printf("1. dice:%d\n", firstDice30);
				//printf("1. dice:%d\n", secondDice30);
				if (sum30_2 == 7) {
					//printf("zarlar toplami:%d ... Kaybettiniz!!\n", sum30_2);
					break;
				}
				else if (sum30_2 == sum30_1) {
					winTime30++;
					break;
				}
			}
		}
	}
	winRate30 = ((double)winTime30 / 100000) * 100; // %winRate
	printf("winRate:%%%f\n", winRate30);
	printf("kazanma sayisi:%d\n", winTime30);
#pragma endregion

	//hatal� tekrar yap31
#pragma region Ornek31
	/* e, n, d HARFLER�N� G�R�NCE SONLANAN PROGRAM */
	/*	Klavyeden al�nan her karakteri ekrandan g�steren, ancak klavyeden ard���k olarak 'e', 'n',
		'd' karakterleri al�nd���nda sonlanan bir C program� yaz�n.*/
	char chrStr31[150];
	int i = 0;
	int d = 0;
	while (1) {

		while (i < 10) {
			chrStr31[i] = (char)getchar();
			printf("%c", chrStr31[i]);
			i++;
		}
		if (!(_stricmp(chrStr31[i], (char)"e"))) {
			if (!(_stricmp(chrStr31[i + 1], (char)"n"))) {
				if (!(_stricmp(chrStr31[i + 2], (char)"d"))) {
					printf("asdasd");
				}
			}
		}
		else {
			i = 0;
		}
		d++;
	}
#pragma endregion

#pragma region Ornek32
	/* e SAYISININ HESAPLANMASI */
	/*	e say�s�n� a�a��daki seri toplam�yla bulabilirsiniz:
		e = 1/0! + 1/1! + 1/2! + 1/3! + 1/4! + 1/5!
		Bir C program� yazarak e say�s�n� yukar�daki seri toplam�yla hesaplayarak ekrana
		yazd�r�n.*/
	double e32 = 1;
	double toplanacakSayi31 = 1;
	for (int i = 1; i < 6; i++) {
		for (int j = 1; j < 6; j++) {
			toplanacakSayi31 *= j;
		}
		e32 += (1 / toplanacakSayi31);
	}
	printf("e sayisi:%f\n", e32);
#pragma endregion

#pragma region Ornek33
	/* EKRANA RASTGELE S�ZC�KLER�N YAZDIRILMASI */
	/*A�a��daki ko�ullar� sa�layan bir C program� yaz�n :
		Ekrana her sat�ra bir tane olmak �zere NO_OF_WORDS tane rastgele s�zc�k yazd�r�lmal�.
		Her s�zc�k �ngiliz alfabesindeki b�y�k harf karakterlerinden olu�turulmal�.
		Her bir s�zc���n uzunlu�u en az MIN_WORD_LEN en fazla MAX_WORD_LEN olmal�.
		Bir s�zc���n i�inde NO_SUC_VOWELS say�da sesli harf yanyana gelmemeli.
		Bir s�zc���n i�inde NO_SUC_CONS say�da sessiz harf yanyana gelmemeli.
		Program�n�z� a�a��daki "simgesel de�i�mez" de�erleriyle �al��t�r�n :

		#define NO_OF_WORDS 10
		#define MIN_WORD_LEN 9
		#define MAX_WORD_LEN 15
		#define NO_SUC_VOWELS 2
		#define NO_SUC_CONS 3

		A�a��da �rnek bir ekran ��kt�s� g�r�l�yor.
		HQUMEYLIRCUXWOZ
		SREPGEVIKEFFI
		KKASVENZADPOF
		ZBOJUVPABOY
		POYLIPYAMYE
		WQUJJOVAWUXWOK
		FZATXIXJUF
		UXXOKETLOGZ
		RCITEJWAYYAJL
		VGUBFAVLES
	*/
	srand(time(NULL));
	int b33 = 10;
	for (int c = 0; c < b33; c++) {
		int randomNumber33_1 = 9 + (rand() % 6);
		int randomNumber33_2 = 65 + (rand() % 25);
		int randomNumber33_3 = 65 + (rand() % 25);
		int randomNumber33_4 = 65 + (rand() % 25);
		int randomNumber33_5 = 65 + (rand() % 25);
		int randomNumber33_6 = 65 + (rand() % 25);
		int randomNumber33_7 = 65 + (rand() % 25);
		int randomNumber33_8 = 65 + (rand() % 25);
		int randomNumber33_9 = 65 + (rand() % 25);
		int randomNumber33_10 = 65 + (rand() % 25);
		int randomNumber33_11 = 65 + (rand() % 25);
		int randomNumber33_12 = 65 + (rand() % 25);
		int randomNumber33_13 = 65 + (rand() % 25);
		int randomNumber33_14 = 65 + (rand() % 25);
		int randomNumber33_15 = 65 + (rand() % 25);
		int randomNumber33_16 = 65 + (rand() % 25);
		char buffer33_1[20];
		int control33_1 = 1;
		int cTemp33 = 0;
		if (randomNumber33_1 == 9) {
			int buffer33[9];
			buffer33[0] = randomNumber33_2;
			buffer33[1] = randomNumber33_3;
			buffer33[2] = randomNumber33_4;
			buffer33[3] = randomNumber33_5;
			buffer33[4] = randomNumber33_6;
			buffer33[5] = randomNumber33_7;
			buffer33[6] = randomNumber33_8;
			buffer33[7] = randomNumber33_9;
			buffer33[8] = randomNumber33_10;
			for (int i = 0; i < 9; i++) {
				if ((buffer33[i] == 65) || (buffer33[i] == 69) || (buffer33[i] == 73) || (buffer33[i] == 79) || (buffer33[i] == 85)) {
					if ((buffer33[i - 1] == 65) || (buffer33[i - 1] == 69) || (buffer33[i - 1] == 73) || (buffer33[i - 1] == 79) || (buffer33[i - 1] == 85)) {
						control33_1 = 0;
						break;
					}
				}
			}
			if (control33_1 == 1) {
				for (int a = 0; a < 9; a++) {
					printf("%c", buffer33[a]);
				}
				printf("\n");
			}
			else {
				b33++;
			}
		}
		else if (randomNumber33_1 == 10) {
			int buffer33[15];
			buffer33[0] = randomNumber33_2;
			buffer33[1] = randomNumber33_3;
			buffer33[2] = randomNumber33_4;
			buffer33[3] = randomNumber33_5;
			buffer33[4] = randomNumber33_6;
			buffer33[5] = randomNumber33_7;
			buffer33[6] = randomNumber33_8;
			buffer33[7] = randomNumber33_9;
			buffer33[8] = randomNumber33_10;
			buffer33[9] = randomNumber33_11;
			for (int i = 0; i < 10; i++) {
				if ((buffer33[i] == 65) || (buffer33[i] == 69) || (buffer33[i] == 73) || (buffer33[i] == 79) || (buffer33[i] == 85)) {
					if ((buffer33[i - 1] == 65) || (buffer33[i - 1] == 69) || (buffer33[i - 1] == 73) || (buffer33[i - 1] == 79) || (buffer33[i - 1] == 85)) {
						control33_1 = 0;
						break;
					}
				}
			}
			if (control33_1 == 1) {
				for (int a = 0; a < 10; a++) {
					printf("%c", buffer33[a]);
				}
				printf("\n");
			}
			else {
				b33++;
			}
		}
		else if (randomNumber33_1 == 11) {
			int buffer33[15];
			buffer33[0] = randomNumber33_2;
			buffer33[1] = randomNumber33_3;
			buffer33[2] = randomNumber33_4;
			buffer33[3] = randomNumber33_5;
			buffer33[4] = randomNumber33_6;
			buffer33[5] = randomNumber33_7;
			buffer33[6] = randomNumber33_8;
			buffer33[7] = randomNumber33_9;
			buffer33[8] = randomNumber33_10;
			buffer33[9] = randomNumber33_11;
			buffer33[10] = randomNumber33_12;
			for (int i = 0; i < 11; i++) {
				if ((buffer33[i] == 65) || (buffer33[i] == 69) || (buffer33[i] == 73) || (buffer33[i] == 79) || (buffer33[i] == 85)) {
					if ((buffer33[i - 1] == 65) || (buffer33[i - 1] == 69) || (buffer33[i - 1] == 73) || (buffer33[i - 1] == 79) || (buffer33[i - 1] == 85)) {
						control33_1 = 0;
						break;
					}
				}
			}
			if (control33_1 == 1) {
				for (int a = 0; a < 11; a++) {
					printf("%c", buffer33[a]);
				}
				printf("\n");
			}
			else {
				b33++;
			}
		}
		else if (randomNumber33_1 == 12) {
			int buffer33[15];
			buffer33[0] = randomNumber33_2;
			buffer33[1] = randomNumber33_3;
			buffer33[2] = randomNumber33_4;
			buffer33[3] = randomNumber33_5;
			buffer33[4] = randomNumber33_6;
			buffer33[5] = randomNumber33_7;
			buffer33[6] = randomNumber33_8;
			buffer33[7] = randomNumber33_9;
			buffer33[8] = randomNumber33_10;
			buffer33[9] = randomNumber33_11;
			buffer33[10] = randomNumber33_12;
			buffer33[11] = randomNumber33_13;
			for (int i = 0; i < 12; i++) {
				if ((buffer33[i] == 65) || (buffer33[i] == 69) || (buffer33[i] == 73) || (buffer33[i] == 79) || (buffer33[i] == 85)) {
					if ((buffer33[i - 1] == 65) || (buffer33[i - 1] == 69) || (buffer33[i - 1] == 73) || (buffer33[i - 1] == 79) || (buffer33[i - 1] == 85)) {
						control33_1 = 0;
						break;
					}
				}
			}
			if (control33_1 == 1) {
				for (int a = 0; a < 12; a++) {
					printf("%c", buffer33[a]);
				}
				printf("\n");
			}
			else {
				b33++;
			}
		}
		else if (randomNumber33_1 == 13) {
			int buffer33[15];
			buffer33[0] = randomNumber33_2;
			buffer33[1] = randomNumber33_3;
			buffer33[2] = randomNumber33_4;
			buffer33[3] = randomNumber33_5;
			buffer33[4] = randomNumber33_6;
			buffer33[5] = randomNumber33_7;
			buffer33[6] = randomNumber33_8;
			buffer33[7] = randomNumber33_9;
			buffer33[8] = randomNumber33_10;
			buffer33[9] = randomNumber33_11;
			buffer33[10] = randomNumber33_12;
			buffer33[11] = randomNumber33_13;
			buffer33[12] = randomNumber33_14;
			for (int i = 0; i < 13; i++) {
				if ((buffer33[i] == 65) || (buffer33[i] == 69) || (buffer33[i] == 73) || (buffer33[i] == 79) || (buffer33[i] == 85)) {
					if ((buffer33[i - 1] == 65) || (buffer33[i - 1] == 69) || (buffer33[i - 1] == 73) || (buffer33[i - 1] == 79) || (buffer33[i - 1] == 85)) {
						control33_1 = 0;
						break;
					}
				}
			}
			if (control33_1 == 1) {
				for (int a = 0; a < 13; a++) {
					printf("%c", buffer33[a]);
				}
				printf("\n");
			}
			else {
				b33++;
			}
		}
		else if (randomNumber33_1 == 14) {
			int buffer33[15];
			buffer33[0] = randomNumber33_2;
			buffer33[1] = randomNumber33_3;
			buffer33[2] = randomNumber33_4;
			buffer33[3] = randomNumber33_5;
			buffer33[4] = randomNumber33_6;
			buffer33[5] = randomNumber33_7;
			buffer33[6] = randomNumber33_8;
			buffer33[7] = randomNumber33_9;
			buffer33[8] = randomNumber33_10;
			buffer33[9] = randomNumber33_11;
			buffer33[10] = randomNumber33_12;
			buffer33[11] = randomNumber33_13;
			buffer33[12] = randomNumber33_14;
			buffer33[13] = randomNumber33_15;
			for (int i = 0; i < 14; i++) {
				if ((buffer33[i] == 65) || (buffer33[i] == 69) || (buffer33[i] == 73) || (buffer33[i] == 79) || (buffer33[i] == 85)) {
					if ((buffer33[i - 1] == 65) || (buffer33[i - 1] == 69) || (buffer33[i - 1] == 73) || (buffer33[i - 1] == 79) || (buffer33[i - 1] == 85)) {
						control33_1 = 0;
						break;
					}
				}
			}
			if (control33_1 == 1) {
				for (int a = 0; a < 14; a++) {
					printf("%c", buffer33[a]);
				}
				printf("\n");
			}
			else {
				b33++;
			}
		}
		else if (randomNumber33_1 == 15) {
			int buffer33[15];
			buffer33[0] = randomNumber33_2;
			buffer33[1] = randomNumber33_3;
			buffer33[2] = randomNumber33_4;
			buffer33[3] = randomNumber33_5;
			buffer33[4] = randomNumber33_6;
			buffer33[5] = randomNumber33_7;
			buffer33[6] = randomNumber33_8;
			buffer33[7] = randomNumber33_9;
			buffer33[8] = randomNumber33_10;
			buffer33[9] = randomNumber33_11;
			buffer33[10] = randomNumber33_12;
			buffer33[11] = randomNumber33_13;
			buffer33[12] = randomNumber33_14;
			buffer33[13] = randomNumber33_15;
			buffer33[14] = randomNumber33_16;
			for (int i = 0; i < 15; i++) {
				if ((buffer33[i] == 65) || (buffer33[i] == 69) || (buffer33[i] == 73) || (buffer33[i] == 79) || (buffer33[i] == 85)) {
					if ((buffer33[i - 1] == 65) || (buffer33[i - 1] == 69) || (buffer33[i - 1] == 73) || (buffer33[i - 1] == 79) || (buffer33[i - 1] == 85)) {
						control33_1 = 0;
						break;
					}
				}
			}
			if (control33_1 == 1) {
				for (int a = 0; a < 15; a++) {
					printf("%c", buffer33[a]);
				}
				printf("\n");
			}
			else {
				b33++;
			}
		}
	}
#pragma endregion

#pragma region Ornek34
	/* FAKT�R�YEL HESAPLAYAN ��LEV */
	/*	Kendisine g�nderilen bir tamsay�ya ili�kin fakt�riyel de�eriyle geri d�nen factorial i�levini
		tan�mlay�n:
		int factorial(int);*/
	int number34;
	int factorial34 = 1;
	printf("Enter any number to calculate its factorial:");
	scanf_s("%d", &number34);
	for (int i = 1; i <= number34; i++) {
		factorial34 *= i;
	}
	printf("entered number:%d  factorial:%d", number34, factorial34);
#pragma endregion

#pragma region Ornek35
	/* HAFTANIN HANG� G�N�? */
	/*  G�n, ay ve y�l olarak verilen ge�erli bir tarihin haftan�n hangi g�n�ne geldi�ini
		hesaplayan
		int day_of_week(int day, int month, int year);
		i�levini tan�mlay�n. ��lev 01.01.1900 tarihinden sonraki t�m tarihler i�in do�ru �al��mal�.
		��lev pazar g�n� i�in 0 de�erine, Sal� g�n� i�in 1 de�erine� Cumartesi g�n� i�in 6
		de�erine geri d�nmeli. Tan�mlad���n�z i�levin do�ru �al���p �al��mad���n� g�rmek i�in �e�itli
		tarih de�erleriyle s�nay�n.*/
	int d35 = 27, m35 = 6, y35 = 2015, weekday35;
	printf("Enter date, month and year(dd/mm/yyyy): ");
	scanf_s("%d/%d/%d", &d35, &m35, &y35);
	weekday35 = (d35 += m35 < 3 ? y35-- : y35 - 2, 23 * m35 / 9 + d35 + 4 + y35 / 4 - y35 / 100 + y35 / 400) % 7;
	printf("The day of the week is : %d", weekday35);
	switch (weekday35) {
	case 0:
		printf(" Sunday.\n");
		break;
	case 1:
		printf(" Monday.\n");
		break;
	case 2:
		printf(" Tuesday.\n");
		break;
	case 3:
		printf(" Wednesday.\n");
		break;
	case 4:
		printf(" Thursday.\n");
		break;
	case 5:
		printf(" Friday.\n");
		break;
	case 6:
		printf(" Saturday.\n");
	}
#pragma endregion

#pragma region Ornek36
	/* KAPI VE ANAHTAR BULMACASI */
	/*	100 tane kap� var. Bu kap�lar 1'den 100'e kadar numaraland�r�lm��.
		Kap�lar�n hepsi kilitli.
		Elimizde 1'den 20'ye kadar numaraland�r�lm�� 20 tane anahtar var.
		Bir kap�n�n numaras� bir anahtar�n numaras�na tam b�l�n�yorsa o anahtar o kap�y�
		a�abiliyor (ya da kilitleyebiliyor!)
		1 numaral� anahtardan ba�layarak her anahtar i�in kap�lar dola��l�yor. Anahtar ile kap�
		a��ksa kilitleniyor, kilitliyse a��l�yor.
		20. turdan sonra, yani son anahtar�n kullan�lmas�ndan sonra hangi kap�lar a��k hangi
		kap�lar kilitlidir? Bir C program� yazarak a��k olan kap�lar�n numaralar�n� ekrana yazd�r�n.*/
		//at the begining : all doors are closed. initial position is zero.
		/* if status is odd, the door is opened.*/
	int status36[100] = { 0 };//door is closed.
	int doors36[100];
	int keys36[20];
	for (int i = 0; i < 100; i++) {
		doors36[i] = i + 1;
	}
	for (int i = 0; i < 20; i++) {
		keys36[i] = i + 1;
	}
	for (int i = 0; i < 20; i++) {
		for (int j = 0; j < 100; j++) {
			if (doors36[j] % keys36[i] == 0) {
				status36[i]++;
			}
			else if (doors36[j] == 1) {
				status36[j] = 1;
			}
		}
	}
	for (int i = 0; i < 100; i++) {
		if (status36[i] % 2 == 0) { // door closed
			printf("door:%d is closed\n", doors36[i]);
		}
		else if (status36[i] % 2 != 0) {
			printf("door:%d is opened\n", doors36[i]);
		}
	}
#pragma endregion

#pragma region Ornek37
	/* KLAVYEDEN G�R�LEN SAYILARIN ORTALAMASINI BULMAK */
	/* Klavyeden girilen tamsay� de�erlerin, toplam say�s�n�, en b�y���n�, en k�����n�,
		ortalamas�n� hesaplayan �deger.c� isimli bir C program� yaz�n. Kullan�c�n�n her de�er
		giri�inden �nce, yeni bir de�er girmek isteyip istemedi�i sorulmal�:
		Yeni bir deger girmek istiyor musunuz? [e] [h]
		Kullan�c� 'e' ya da 'e' tu�una basarsa, program kullan�c�n�n bir de�er girmesini istemeli:
		bir tamsay� giriniz: 53 enter
		Kullan�c� 'h' ya da 'h' tu�una basarsa, program o ana kadar girilen de�erlerle ilgili olarak
		a�a��daki d�k�m� olarak vererek sonlanmal�:
		toplam 17 deger girildi.
		max = 89
		min = 17
		ortalama = 37.456786
		program sonland�!
		Kullan�c�n�n 'e', 'e', 'h' ya da 'h' tu�lar� d���nda ba�ka bir tu�a basmas� durumunda
		program bir tepki vermemeli.
		Programda dizi kullan�lmamal�.
		Girilen de�erler [0 - 100] aral���nda olmal�. Ge�ersiz bir de�er girilmesi s�ras�nda ekrana "ge�ersiz de�er " uyar�s� yaz�larak yeni bir giri� yap�lmas� istenmeli.
		"yeni bir deger giriniz" */
	int numbers36[] = { 0 };
	double average36 = 0;
	int indexCounter36 = 0;
	int numCounter = 0;
	double sum36 = 0;
	int max36 = 0;
	int min36 = 0;
	while (1) {
		printf("bir sayi girmek istiyor musunuz?(e ya da h):");
		int cevap36_1 = getchar();
		if (cevap36_1 == 'e') {
			printf("Enter any number 0 between 100:");
			scanf_s("%d", (numbers36 + indexCounter36));
			if ((numbers36[indexCounter36] >= 0) && (numbers36[indexCounter36] <= 100)) {
				numCounter++;
				sum36 += numbers36[indexCounter36];
				average36 = sum36 / numCounter;
				max36 = numbers36[0];
				min36 = numbers36[0];
				max36 = (max36 > numbers36[indexCounter36] ? max36 : numbers36[indexCounter36]);
				min36 = (min36 < numbers36[indexCounter36] ? min36 : numbers36[indexCounter36]);
			}
			else {
				printf("Invalid entered...Please enter new operation!!\n");
			}
		}
		else if (cevap36_1 == 'h') {
			printf("max:%d\n", max36);
			printf("min:%d\n", min36);
			printf("sum:%f\n", sum36);
			printf("average:%f\n", average36);
			printf("Number of entered number:%d\n", numCounter);
			printf("Program is finished...\n");
			break;
		}
		else {
			printf("Invalid type of enter...Try again!!!\n");
		}
		indexCounter36++;
	}
#pragma endregion

#pragma region Ornek38
	/* M�KEMMEL SAYI SINAMASI */
	/*	 Kendisi haricindeki t�m �arpanlar�n�n toplam�na e�it olan tamsay�lara "m�kemmel say�"
		(perfect number) denir. �rne�in 6 ve 28 m�kemmel say�lard�r:
			6 = 1 + 2 + 3
			28 = 1 + 2 + 4 + 7 + 14
		Kendisine g�nderilen int t�rden bir de�erin m�kemmel say� olup olmad���n� s�nayan
		is_perfect i�levini tan�mlay�n:
		int is_perfect(int value);
		is_perfect i�levi kendisine g�nderilen tamsay� m�kemmel ise s�f�r d��� bir de�ere,
		m�kermmel de�il ise 0 de�erine geri d�nmeli.*/
	int number38;
	int sum38 = 0;
	int bool38 = 1;//true
	printf("is perfect number:");
	scanf_s("%d", &number38);
	for (int i = 1; i < number38; i++) {
		if (number38 % i == 0) {
			sum38 += i;
		}
	}
	if (number38 == sum38) {
		bool38 = 1;
	}
	else
	{
		bool38 = 0;
	}
	if (bool38 == 1)
		printf("%d is perfect number\n", number38);
	else
		printf("%d is not perfect number\n\n", number38);
#pragma endregion

#pragma region Ornek39
	/* 4 BASAMAKLI M�KEMMEL SAYI */
	/*  4 basamakl� tek bir m�kemmel say� vard�r. Yazm�� oldu�unuz isperfect i�levini kullanarak
		4 basamakl� m�kemmel say�y� bulan bir C program� yaz�n.*/
	int bool39 = 0; //true
	int sum39 = 0;
	for (int i = 1000; i < 10000; i++) {
		sum39 = 0;
		for (int j = 1; j < i; j++) {
			if (i % j == 0) {
				sum39 += j;
			}
		}
		if (i == sum39) {
			bool39 = 1;
			printf("4 Digits perfect number is:%d\n", i);
		}
	}
#pragma endregion

#pragma region Ornek40
	/* OLASILIK S�MULASYONU */
	/*	Yaz� tura ile oynanan a�a��daki oyunu kazanma olas�l���n�z nedir?
		Bir C program� ile 1.000.000 oyunun benzetimini yaparak bulun.
		- Oyun sizinle x aras�nda ge�iyor. �kinizin de 100 YTL�si var.
		- Paran�n her at�lmas�ndan �nce x size 10 YTL veriyor.
		- �st �ste iki yaz� geldi�inde, siz ona 35 YTL, �st �ste �� tura geldi�inde siz ona 60 YTL
		veriyorsunuz.
		Bir taraf�n paras� bitince oyun sona eriyor. */
	int myMoney40 = 100;
	int xMoney40 = 100;
	int winTime40 = 0;
	double winRate40 = 0;
	srand(time(NULL));
	// 1 is heads // yazi
	//2 is tail //tura
	int pitchAndToss40 = 1 + (rand() % 2);
	int pitchAndToss40_1 = 0;
	int pitchAndToss40_2 = 0;

	for (int i = 0; i < 1000000; i++) {
		while ((myMoney40 > 0) || (xMoney40 > 0)) {

			xMoney40 = xMoney40 - 10;
			myMoney40 = myMoney40 + 10;
			pitchAndToss40 = 1 + (rand() % 2);
			if (pitchAndToss40 == 1) {
				xMoney40 = xMoney40 - 10;
				myMoney40 = myMoney40 + 10;
				pitchAndToss40_1 = 1 + (rand() % 2);
				if (pitchAndToss40_1 == 1) {
					xMoney40 = xMoney40 + 35;
					myMoney40 = myMoney40 - 35;
				}
			}
			else if (pitchAndToss40 == 2) {
				xMoney40 = xMoney40 - 10;
				myMoney40 = myMoney40 + 10;
				pitchAndToss40_1 = 1 + (rand() % 2);
				if (pitchAndToss40_1 == 2) {
					xMoney40 = xMoney40 - 10;
					myMoney40 = myMoney40 + 10;
					pitchAndToss40_2 = 1 + (rand() % 2);
					if (pitchAndToss40_2 == 2) {
						xMoney40 = xMoney40 + 60;
						myMoney40 = myMoney40 - 60;
					}
				}
			}
		}
		if (myMoney40 > xMoney40)
			winTime40++;
		else if (xMoney40 == myMoney40)
			;
		else
			;
	}
	winRate40 = (double)(winTime40 / 1000000) * 100;
	printf("%%%f\n", winRate40);
#pragma endregion

#pragma region Ornek41
	/* ORTAK B�LENLER�N EN B�Y���N� BULMAK */ // greatest common divisor
	/*	�ki tamsay�n�n ortak b�lenlerinin en b�y���n� hesaplayan obeb i�levini yaz�n:
		int obeb(int sayi1, int sayi2);
		��lev, parametre de�i�kenlerine ge�ilen tamsay�lar�n ortak b�lenlerinin en b�y���
		de�eriyle geri d�nmeli. */
	int number41_1, number41_2, gcd41 = 1;

	printf("First Number:");
	scanf_s("%d", &number41_1);
	printf("Second Number:");
	scanf_s("%d", &number41_2);
	for (int i = 1; i <= number41_1 && i <= number41_2; ++i)
	{
		if (number41_1 % i == 0 && number41_2 % i == 0)
			gcd41 = i;
	}

	printf("obeb(%d,%d)=%d)\n", number41_1, number41_2, gcd41);
#pragma endregion

#pragma region Ornek42
	/* ORTAK KATLARIN EN K����� */ //lowest common multiple
	/*	�ki tamsay�n�n ortak katlar�n�n en k�����n� hesaplayan okek i�levini yaz�n:
		int okek(int sayi1, int sayi2);
		��lev parametre de�i�kenlerine ge�ilen tamsay�lar�n ortak katlar�n�n en k����� de�eriyle
		geri d�nmeli.*/

		/*LCM = (num1*num2)/GCD*/
	int lcm42 = 0;
	int number42_1, number42_2, minMultiple42 = 0;
	printf("First number:");
	scanf_s("%d", &number42_1);
	printf("Second number:");
	scanf_s("%d", &number42_2);
	minMultiple42 = (number42_1 > number42_2) ? number42_1 : number42_2;

	while (1)
	{
		if (minMultiple42 % number42_1 == 0 && minMultiple42 % number42_2 == 0)
		{
			printf("%d ve %d EKOK'u %d.", number42_1, number42_2, minMultiple42);
			break;
		}
		++minMultiple42;
	}
#pragma endregion

#pragma region Ornek43
	/* OYUN S�MULASYONU */
	/*	Bir C program� yazarak a�a��daki oyunda A oyuncusunun kazanma olas�l���n� hesaplay�n:
		1. Oyun A ile B aras�nda oynan�r. Oyuna ba�lang��ta A�n�n ve B�nin 100 YTL paras� vard�r.
		A, her bir oyuna girmek i�in B'ye 5 YTL verir. Yeni bir oyuna girmek i�in A�n�n e�er 5 YTL
		paras� yoksa A oyunu kaybeder.
		B, 0 - ile 9 aras�nda (0 ve 9 dahil olmak �zere) bir say� tutar. A, bu say�y� 3 tahminde
		bulmaya �al���r.
		1. E�er A, B�nin tuttu�u say�y� ilk tahminde bulursa B, A ya 20 YTL �der.
		2. E�er A, B�nin tuttu�u say�y� ikinci tahminde bulursa B, A ya 15 YTL �der.
		2. E�er A, B�nin tuttu�u say�y� ���nc� tahminde bulursa B A ya 10 YTL �der.
		B�nin tuttu�u say�y� A n�n bulmas� durumunda B�de �deme yapacak kadar para
		bulunmams� durumunda B oyunu kaybeder.
		Bu oyunu A n�n kazanma olas�l��� nedir?*/
	srand(time(NULL));
	int aMoney43 = 100;
	int bMoney43 = 100;
	int bRand = rand() % 9;
	int aRand = rand() % 9;
	double bWinCounter43 = 0;
	double aWinCounter43 = 0;
	double aWinRate43 = 0;
	for (int j = 0; j < 100000; j++) {
		aMoney43 = 100;
		bMoney43 = 100;
		while (aMoney43 > 4 && bMoney43 > 4) {
			bMoney43 += 5;
			aMoney43 -= 5;
			int bRand = rand() % 9;
			for (int i = 0; i < 3; i++) {
				aRand = rand() % 9;
				if (i == 0 && aRand == bRand) {
					bMoney43 -= 20;
					aMoney43 += 20;
					break;
				}
				else if (i == 1 && aRand == bRand) {
					bMoney43 -= 15;
					aMoney43 += 15;
					break;
				}
				else if (i == 2 && aRand == bRand) {
					bMoney43 -= 10;
					aMoney43 += 10;
					break;
				}
			}
		}
		if (aMoney43 < 5 && bMoney43>4) {
			bWinCounter43++;
		}
		else if (bMoney43 < 5 && aMoney43>4) {
			aWinCounter43++;
		}
	}
	printf("%f %f %f\n", aWinCounter43, bWinCounter43, aWinCounter43 + bWinCounter43);
	aWinRate43 = (aWinCounter43 / 100000);
	printf("aWinRate is %%%.4f\n", aWinRate43 * 100);
#pragma endregion

#pragma region Ornek44
	/* P� SAYISINI HESAPLAMAK */
	/* pi say�s�n� a�a��daki seri toplam�yla bulabilirsiniz:
		pi / 4 = 1/1 - 1/3 + 1/5 - 1/7 + 1/9 ....
		pi say�s�n� yukar�daki seri toplam�yla hesaplayarak ekrana yazd�ran bir C program� yaz�n.*/
	double pi44 = 4;
	int termCounter = 0; // to count terms
	for (int i = 3; i < 5000; i += 2) {
		if (termCounter % 2 == 0) {
			pi44 = pi44 - (4 / i);
		}
		else if (termCounter % 2 != 0) {
			pi44 = pi44 - (4 / i);
		}
		termCounter++;
	}
	printf("pi:%f\n", pi44);
#pragma endregion

#pragma region Ornek45
	/* PRIMEX SAYILAR */
	/*	Bildirimi a�a��da verilen isprimex i�levini tan�mlay�n.
		int isprimex(int number);
		isprimex, kendisine g�nderilen arg�man�n asal olup olmad���n� s�namal�. E�er say� asal
		ise bu kez say�n�n basamak de�erleri toplanarak elde edilen say�n�n asal olup olmad���
		s�nanmal�. Bu i�lem sonu�ta tek basamakl� bir say� kalana kadar s�rmeli. E�er en son
		elde edilen tek basamakl� say� dahil t�m say�lar asal ise isprimex i�levi s�f�r d��� bir de�ere
		geri d�nmeli. E�er herhangi bir kademede asal olmayan bir say� elde edilirse i�lev, 0
		de�erine geri d�nmeli.
		Not : Birden fazla i�lev tan�mlayabilirsiniz.*/
	int number45, number45_1 = 0, swap45 = 0, isPrime45 = 1, isPrime_45 = 1, isPrime45_2 = 1;
	int unitDigit45 = 0, tenth45 = 0, hundreadsDigit45 = 0, thousandsDigit = 0, tenthThousandsDigit45 = 0;
	int sumOfDigits45 = 0, sumOfDigits45_1 = 0;
	//printf("Enter any number:");
	//scanf_s("%d", &number45);
	for (number45 = 2; number45 < 100000; number45++) {
		unitDigit45 = 0, tenth45 = 0, hundreadsDigit45 = 0, thousandsDigit = 0, tenthThousandsDigit45 = 0;
		sumOfDigits45 = 0, sumOfDigits45_1 = 0;
		number45_1 = 0, swap45 = 0, isPrime45 = 1, isPrime_45 = 1, isPrime45_2 = 1;
		for (int i = 2; i < number45; i++) {
			if (number45 % i == 0) {
				isPrime45 = 0;
				break;
			}
		}
		if (isPrime45 == 1) {
			swap45 = number45;
			while (swap45 > 0) {
				unitDigit45 = swap45 % 10;
				tenthThousandsDigit45 = swap45 / 10000;
				swap45 = swap45 - (tenthThousandsDigit45 * 10000);
				thousandsDigit = swap45 / 1000;
				swap45 = swap45 - (unitDigit45)-(thousandsDigit * 1000);
				hundreadsDigit45 = swap45 / 100;
				swap45 = swap45 - (hundreadsDigit45 * 100);
				tenth45 = swap45 / 10;
				swap45 = swap45 - (tenth45 * 10);
			}
			sumOfDigits45 = unitDigit45 + tenth45 + hundreadsDigit45 + thousandsDigit + tenthThousandsDigit45;
			for (int j = 2; j < sumOfDigits45; j++) {
				if (sumOfDigits45 % j == 0) {
					isPrime_45 = 0;
					break;
				}
			}
			if (isPrime_45 == 1) {
				while (sumOfDigits45 > 0) {
					unitDigit45 = sumOfDigits45 % 10;
					tenthThousandsDigit45 = swap45 / 10000;
					swap45 = swap45 - (tenthThousandsDigit45 * 10000);
					thousandsDigit = sumOfDigits45 / 1000;
					sumOfDigits45 = sumOfDigits45 - (unitDigit45)-(thousandsDigit * 1000);
					hundreadsDigit45 = sumOfDigits45 / 100;
					sumOfDigits45 = sumOfDigits45 - (hundreadsDigit45 * 100);
					tenth45 = sumOfDigits45 / 10;
					sumOfDigits45 = sumOfDigits45 - (tenth45 * 10);
				}
				sumOfDigits45_1 = unitDigit45 + tenth45 + hundreadsDigit45 + thousandsDigit + tenthThousandsDigit45;
				for (int c = 2; c < sumOfDigits45_1; c++) {
					if (sumOfDigits45_1 % c == 0) {
						isPrime45_2 = 0;
						break;
					}
				}
				if (isPrime45_2 == 1) {
					printf("%d is primex number\n", number45);
				}
			}

		}
	}
#pragma endregion

#pragma region Ornek46
	/* RASTGELE B�R TAR�H YAZDIRMAK */ // Random Date
	/* �a�r�ld���nda ekrana 01.01.1900 ile 31.12.2020 aras�nda rastgele bir tarih yazacak
		void print_random_date(void);

		i�levini tan�mlay�n. ��levin ekrana yazd�rd��� tarih ge�erli bir tarih olmal�. Rastgele tarihin
		�ubat ay�na denk gelmesi durumunda, se�ilen y�l�n art�k y�l olup olmamas�na g�re, g�n
		de�eri 29 olabilmeli. Tarih ekrana a�a��daki formatta yazd�r�lmal�:
		03rd Jan 1857
		*/
	srand(time(NULL));
	int month46 = 1 + (rand() % 11);
	int year46 = 1900 + (rand() % 120);
	int day46;
	if (month46 == 1 || month46 == 3 || month46 == 5 || month46 == 7 || month46 == 8 || month46 == 10 || month46 == 12) {
		day46 = 1 + (rand() % 30);
	}
	else if (month46 == 2 && year46 % 4 == 0) {
		day46 = 1 + (rand() % 28);
	}
	else if (month46 == 2 && year46 % 4 != 0) {
		day46 = 1 + (rand() % 27);
	}
	else {
		day46 = 1 + (rand() % 29);
	}
	if (day46 == 1 || day46 == 11 || day46 == 21 || day46 == 31) {
		printf("%dst", day46);
	}
	else if (day46 == 2 || day46 == 12 || day46 == 22) {
		printf("%dnd", day46);
	}
	else if (day46 == 3 || day46 == 13 || day46 == 23) {
		printf("%drd", day46);
	}
	else {
		printf("%dth", day46);
	}
	switch (month46)
	{
	case 1:printf(" Jan %d", year46); break;
	case 2:printf(" Feb %d", year46); break;
	case 3:printf(" Mar %d", year46); break;
	case 4:printf(" Apr %d", year46); break;
	case 5:printf(" May %d", year46); break;
	case 6:printf(" Jun %d", year46); break;
	case 7:printf(" Jul %d", year46); break;
	case 8:printf(" Aug %d", year46); break;
	case 9:printf(" Sep %d", year46); break;
	case 10:printf(" Oct %d", year46); break;
	case 11:printf(" Nov %d", year46); break;
	case 12:printf(" Dec %d", year46); break;
	default:
		break;
	}
#pragma endregion

#pragma region Ornek47
	/* HER SATIRA DAHA FAZLA YILDIZ */
	/* A�a��da bildirimi verilen put_stars isimli i�levi tan�mlay�n:
		void put_stars(int n);
		��lev �a��r�ld��� zaman n de�eri kadar sat�ra �*� karakteri basmal�. Birinci sat�ra bir �*�
		karakteri, ikinci sat�ra iki �*� karakteri, ���nc� sat�ra �� �*� karakteri... n.sat�ra n adet �*�
		karakteri.:
		*
		**
		***
		****
		*****
		*/
	int n47; //row
	printf("How many row you want:");
	scanf_s("%d", &n47);
	for (int i = 1; i <= n47; i++) {
		for (int j = 1; j <= i; j++) {
			printf("*");
		}
		printf("\n");
	}
#pragma endregion

#pragma region Ornek48
	/* MASTERM�ND OYUNU */
	/*	Mastermind iki ki�i ile oynanan bir say� bulmaca oyunudur. Oyunculardan biri, [1000-9999]
		k�mesinden basamak de�erleri birbirinden farkl� bir say� belirler. Di�er oyuncunun
		amac� bu say�y� en fazla 10 tahminde bulmakt�r. Say�y� belirleyen oyuncu, di�er
		oyuncunun her tahmininden sonra oyunun kurallar� do�rultusunda bilgiler verir.
		Tahmin edilen say� i�inde belirlenen say�n�n i�erisindeki rakamlardan biri varsa, fakat
		basamak de�eri tutmuyorsa - i�areti ile, basamak de�eride tutuyorsa + i�areti ile bilgi
		verilir. �rnekler:
		Belirlenen say� : 1234
		Tahmin edilen say� : 4567
		Verilecek bilgi : -
		Belirlenen say� : 1234
		Tahmin edilen say� : 5674
		Verilecek bilgi : +
		Belirlenen say� : 1234
		Tahmin edilen say� : 4237
		Verilecek bilgi : +2 -
		Not : verilecek olan bilgide + ve - 'lerin s�ras�n�n bir �nemi yoktur.
		Bir say� belirleyerek mastermind oyununu oynatan program� yaz�n.*/
	int numberToGuess48 = 1234;
	int numberToGuess48_1[4];
	int estimatedNumber48;
	int estimatedNumber48_1[4];
	int	guessCounter48 = 10;
	int unitDigits48 = 0, tenth48 = 0, hundredsDigit48 = 0, thousandsDigit48 = 0;
	int unitDigits48_1 = 0, tenth48_1 = 0, hundredsDigit48_1 = 0, thousandsDigit48_1 = 0;
	int pGivenInfoCounter48 = 0; // positive info
	int nGivenInfoCounter48 = 0;//negative info
	int swap48 = numberToGuess48;

	printf("\t\tWelcome to Mastermind Game \n\n");
	while (swap48 > 0) {
		unitDigits48 = swap48 % 10;
		thousandsDigit48 = swap48 / 1000;
		swap48 = swap48 - (thousandsDigit48 * 1000) - (unitDigits48);
		hundredsDigit48 = swap48 / 100;
		swap48 = swap48 - (hundredsDigit48 * 100);
		tenth48 = swap48 / 10;
		swap48 = swap48 - (tenth48 * 10);
	}
	numberToGuess48_1[0] = unitDigits48;
	numberToGuess48_1[1] = tenth48;
	numberToGuess48_1[2] = hundredsDigit48;
	numberToGuess48_1[3] = thousandsDigit48;

	while (guessCounter48 > 0) {
		printf("Enter your estimation:");
		scanf_s("%d", &estimatedNumber48);
		nGivenInfoCounter48 = 0;
		pGivenInfoCounter48 = 0;
		swap48 = estimatedNumber48;
		while (swap48 > 0) {
			unitDigits48_1 = swap48 % 10;
			thousandsDigit48_1 = swap48 / 1000;
			swap48 = swap48 - (thousandsDigit48_1 * 1000) - (unitDigits48_1);
			hundredsDigit48_1 = swap48 / 100;
			swap48 = swap48 - (hundredsDigit48_1 * 100);
			tenth48_1 = swap48 / 10;
			swap48 = swap48 - (tenth48_1 * 10);
		}
		estimatedNumber48_1[0] = unitDigits48_1;
		estimatedNumber48_1[1] = tenth48_1;
		estimatedNumber48_1[2] = hundredsDigit48_1;
		estimatedNumber48_1[3] = thousandsDigit48_1;
		for (int i = 0; i < 4; i++) {
			if (numberToGuess48_1[i] == estimatedNumber48_1[i]) {
				pGivenInfoCounter48++;
			}
			else if (numberToGuess48_1[i] != estimatedNumber48_1[i]) {
				for (int j = 0; j < 4; j++) {
					if (numberToGuess48_1[i] == estimatedNumber48_1[j]) {
						nGivenInfoCounter48++;
					}
				}
			}
		}
		printf("belirlenen sayi:%d\n", numberToGuess48);
		printf("tahmin edilen sayi:%d\n", estimatedNumber48);
		if (pGivenInfoCounter48 > 0 || nGivenInfoCounter48 > 0) {
			printf("Verilecek bilgi:");
			if (pGivenInfoCounter48 == 4) {
				printf("buldunuz....\n");
				break;
			}
			if (pGivenInfoCounter48 > 0) {
				printf(" + %d ", pGivenInfoCounter48);
			}if (nGivenInfoCounter48 > 0) {
				printf(" - %d", nGivenInfoCounter48);
			}
			printf("\n"); /// buralarda kald�m...
		}
		guessCounter48--;
		printf("Kalan hak:%d\n", guessCounter48);
	}
	if (guessCounter48 == 0) {
		printf("Game Over....!!!\n");
	}
#pragma endregion

#pragma region Ornek49
	/* SMITH SAYILARI */
	/*	1�den b�y�k asal olmayan bir tamsay�n�n rakamlar�n�n toplam�, say� asal �arpanlar�na
		ayr�larak yaz�ld���nda bu yaz�l��ta bulunan t�m asal say�lar�n rakamlar�n�n toplam�na e�it
		oluyorsa bu t�r say�lara �Smith say�s�� denir.
		728 = 2 * 2 * 2 * 7 * 13
		7 + 2 + 8 = 2 + 2 + 2 + 7 + 1 + 3
		oldu�undan 728 bir Smith say�s�d�r.
		1 ile 10000 aras�ndaki t�m Smith say�lar�n� bularak ekrana yazd�ran bir C program� yaz�n.	*/
	int number49 = 0;
	int swap49 = 0;
	int dividers49[10];
	int indexCounter49 = 0;
	int sum49 = 0, sum49_1 = 0;
	int units49 = 0, tenth49 = 0, hundredsDigit49 = 0, thousandsDigit49 = 0;
	for (number49 = 2; number49 < 10000; number49++) {
		swap49 = number49;
		sum49 = 0;
		sum49_1 = 0;
		indexCounter49 = 0;
		units49 = 0, tenth49 = 0, hundredsDigit49 = 0, thousandsDigit49 = 0;
		while (swap49 > 1) {
			for (int j = 2; j <= number49; j++) {
				if (swap49 % j == 0) {
					swap49 = swap49 / j;
					dividers49[indexCounter49] = j;
					j -= 1;
					indexCounter49++;
				}
			}
		}
		for (int c = 0; c < indexCounter49; c++) {
			swap49 = dividers49[c];
			while (swap49 > 0) {
				units49 = swap49 % 10;
				thousandsDigit49 = swap49 / 1000;
				swap49 = swap49 - (thousandsDigit49 * 1000) - (units49);
				hundredsDigit49 = swap49 / 100;
				swap49 = swap49 - (hundredsDigit49 * 100);
				tenth49 = swap49 / 10;
				swap49 = swap49 - (tenth49 * 10);
			}
			sum49 = sum49 + units49 + tenth49 + hundredsDigit49 + thousandsDigit49;
		}
		swap49 = number49;
		while (swap49 > 0) {
			units49 = swap49 % 10;
			thousandsDigit49 = swap49 / 1000;
			swap49 = swap49 - (thousandsDigit49 * 1000) - (units49);
			hundredsDigit49 = swap49 / 100;
			swap49 = swap49 - (hundredsDigit49 * 100);
			tenth49 = swap49 / 10;
			swap49 = swap49 - (tenth49 * 10);
		}
		sum49_1 = units49 + tenth49 + hundredsDigit49 + thousandsDigit49;
		if (sum49 == sum49_1) {
			printf("%d is smith number\n", number49);
		}
	}
#pragma endregion

	//yapamad�m bir daha bak.
#pragma region Ornek50
	/* T�RK�E KARAKTER� D�N��T�REN ��LEV */
	/*	Kendisine g�nderilen karakter t�rk�e'nin �zel karakterlerinden biri ise (�, �, �, �, �, �, �,
		�, �, �, �, �) bu karakterin ingilizce benzerininin s�ra numaras�na geri d�nen, aksi halde
		g�nderilen karakterin s�ra numaras�na geri d�nen to_eng i�levini yaz�n:
		int to_eng(int ch);
		��levin tasar�m�nda switch kontrol deyimini kullan�n. Otomatik t�r d�n���m� nedeniyle
		olu�abilecek b�ceklere kar�� �nlem al�n!
		*/
#pragma endregion

#pragma region Ornek51
		/* Cumledeki kelime sayisini bulma */
	char str51[100];
	int i51 = 0;
	int counter51 = 0;
	printf("Enter any sentences:");
	fgets(str51, 100, stdin);
	while (str51[i51]) {
		if (str51[i51] == 32) {
			counter51++;
		}
		i51++;
	}
	printf("%s de %d tane kelime var.\n", str51, counter51 + 1);
#pragma endregion

#pragma region Ornek52
	/* TOMBALA VE OLASILIK BENZET�M� */ //64.�rnek
	/*	Bir tombala torbas�nda 1'den 99'a kadar numaralanm�� (99 dahil) pullar bulunuyor. Bu
		tombala torbas�yla a�a��daki oyunlar oynan�yor:
		�ekilen bir pul torbaya geri at�lmamak �zere

		1) Torbadan 3 pul �ekiliyor. �ekilen pullar�n toplam� 150'den k���k ise oyuncu kazan�yor.
		2) Torbadan 3 pul �ekiliyor. �ekilen pullar�n toplam� asal say� ise oyuncu kazan�yor.
		3) Torbadan 3 pul �ekiliyor. En b�y�k de�erli pul ile en k���k de�erli pul aras�ndaki fark
		ortanca de�erli puldan b�y�kse oyuncu kazan�yor.

		Oynanacak her bir oyun i�in oyuncunun kazanma olas�l���n� en az 30000 oyunun
		benzetimini (simulasyon) yaparak hesaplay�n.
*/
	srand(time(NULL));
	int stamp52_1 = 1 + (rand() % 98); // First stamp
	int stamp52_2 = 1 + (rand() % 98); // Second stamp
	int stamp52_3 = 1 + (rand() % 98); // Third stamp
	double winCounter52 = 0;
	double winRate52 = 0;
	int stampSum52 = 0;
	int isPrime52 = 1;
	int maxStamp52 = 0, minStamp52 = 0, midStamp52 = 0;
	int stamps52[3];
	for (int j = 0; j < 30000; j++) {
		stamp52_1 = 1 + (rand() % 98); // First stamp
		stamp52_2 = 1 + (rand() % 98); // Second stamp
		stamp52_3 = 1 + (rand() % 98); // Third stamp
		isPrime52 = 1;
		maxStamp52 = (stamp52_1 > stamp52_2 ? stamp52_1 : stamp52_2) > stamp52_3 ? (stamp52_1 > stamp52_2 ? stamp52_1 : stamp52_2) : stamp52_3;
		minStamp52 = (stamp52_1 < stamp52_2 ? stamp52_1 : stamp52_2) < stamp52_3 ? (stamp52_1 < stamp52_2 ? stamp52_1 : stamp52_2) : stamp52_3;
		stamps52[0] = stamp52_1;
		stamps52[1] = stamp52_2;
		stamps52[2] = stamp52_3;
		for (int i = 0; i < 3; i++) {
			if (stamps52[i]<maxStamp52 && stamps52[i]>minStamp52) {
				midStamp52 = stamps52[i];
			}
		}
		stampSum52 = (stamp52_1 + stamp52_2 + stamp52_3);
		for (int i = 2; i < stampSum52; i++) {
			if (stampSum52 % i == 0) {
				isPrime52 = 0;
				break;
			}
		}
		if (stamp52_1 != stamp52_2 && stamp52_2 != stamp52_3) {
			if ((stamp52_1 + stamp52_2 + stamp52_3) < 150) {
				winCounter52++;
			}
			else if (isPrime52 == 1) {
				winCounter52++;
			}
			else if ((maxStamp52 - minStamp52) > midStamp52) {
				winCounter52++;
			}
			//
		}
	}
	winRate52 = (double)(winCounter52 / 30000);
	printf("win rate for 30000 games is %%%f\n", winRate52 * 100);
#pragma endregion

#pragma region Ornek53
	/* urand ��LEV� */
	/*	�a�r�ld���nda 0 ile LIMIT de�erleri aras�nda rastgele farkl� bir tamsay� �reten u_rand
		isimli i�levi tan�mlay�n:
		int urand(void);
		��lev verilen aral�ktaki t�m rastgele de�erler �retildikten sonra �a�r�l�rsa, -1 de�erine geri
		d�nmeli.*/
#define LIMIT 100
	int sayi53;
	srand(time(NULL));
	sayi53 = rand() % LIMIT;
#pragma endregion

#pragma region Ornek54
	/* YILIN KA�INCI G�N�? */
	/*	Kendisine g�nderilen g�n, ay ve y�l de�erlerinden olu�an bilgiyi bir tarih olarak ele al�p
		s�z konusu tarihin y�l�n ka��nc� g�n� oldu�u bilgisiyle geri d�nen day_of_year i�levini tan�mlay�n:
		int day_of_year(int day, int mon, int year);
	*/
	int totalDay54; //there is how many days in a year?
	int day54, month54, year54;
	int artikYil = 0;
	int sum54 = 0;
	printf("Enter date(dd/mm/yyyy):");
	scanf_s("%d/%d/%d", &day54, &month54, &year54);
	if (year54 % 4 == 0 || year54 % 100 != 0 || year54 % 400 == 0) {
		artikYil = 1;
	}
	else {
		artikYil = 0;
	}
	for (int i = 1; i < month54; i++) {
		if (i <= 7) {
			if (i == 2) {
				sum54 = sum54 + 28 + artikYil;
			}
			else if (i % 2 == 0) {
				sum54 = sum54 + 30;
			}
			else {
				sum54 = sum54 + 31;
			}
		}
		else {
			if (i % 2 == 0) {
				sum54 = sum54 + 31;
			}
			else {
				sum54 = sum54 + 30;
			}
		}
	}
	sum54 += day54;
	printf("%d/%d/%d tarihi %d yilinin %d. gunu!", day54, month54, year54, year54, sum54);
#pragma endregion

	//evde yap
#pragma region Ornek55
	/* �K�NC� DERECEDEN B�R DENKLEM� ��ZMEK */
	/*	�kinci dereceden bir denklemi ��zen bir C program� yaz�n. �kinci dereceden bir denklem
		ax2 + bx + c = 0
		bi�imindedir. a, b, ve c ger�ek say�lard�r. Program kullan�c�dan a, b ve c katsay�lar�n�
		almal�. Program�n ��kt�s� a�a��daki bi�imlerde olabilir:
		denkleminizin ger�ek k�k� yoktur!
		veya
		denkleminizin tek ger�ek k�k� vard�r:
		kok = 3.750000
		veya
		denkleminizin iki ger�ek k�k� vard�r:
		kok1 = -3.250000
		kok2 = 2.000000*/
#pragma endregion

}

