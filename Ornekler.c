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
	/* x, int türden, içinde 3 basamaklý bir deger tutan bir degiþken olsun.
	   Öyle bir ifade yazýn ki, ifadenin deðeri x deðerinin tersi olsun (örneðin 345 için 543).
	*/

	int x, tersX;
	printf("3 basamaklý bir sayi giriniz:");
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
	/* x, int türden, içinde integer bir deger tutan bir degiþken olsun.
	   Öyle bir ifade yazýn ki, ifadenin deðeri x deðerinin tersi olsun (örneðin 345 için 543).
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
	/* Kendisine gönderilen int türden iki sayýnýn büyük olanýný bulan programi yaziniz.*/
	int num1, num2;
	printf("birinci sayi:");
	scanf_s("%d", &num1);
	printf("ikinci sayi:");
	scanf_s("%d", &num2);
	printf("%d>%d", num1 > num2 ? num1 : num2, num1 > num2 ? num2 : num1);

#pragma endregion

#pragma region Ornek3
	/* Kendisine gönderilen Celsius degerinin Fahrenheit eþdeðeri ile geri dönen cel_to_fahr
	isimli iþlevi yazýn:*/

	int celcius, fahrenhait;
	printf("sýcaklýgi celcius cinsinden giriniz:");
	scanf_s("%d", &celcius);

	fahrenhait = (celcius * 9 / 5) + 32;
	printf("%d celcius --> %d Fahrenhait", celcius, fahrenhait);


#pragma endregion

#pragma region Ornek4
	/* Kendisine gönderilen int türden bir tamsayýnýn negatif mi, 0 mý, pozitif mi olduðunu
sýnayan result isimli iþlevi tanýmlayýn*/
	int num4_1, result4;
	printf("0 mi negatif mi pozitif mi oldugunu ogrenmek isteginiz sayiyi giriniz:");
	scanf_s("%d", &num4_1);
	result4 = num4_1 > 0 ? 1 : (num4_1 == 0 ? 0 : -1);
	if (result4 == 1)
		printf("Girdiginiz sayi pozitif bir sayidir\n");
	else if (result4 == -1)
		printf("Girdiginiz sayý negatif bir sayidir\n");
	else
		printf("Girdiginiz sayi 0'dir\n");


#pragma endregion

#pragma region Ornek5
	/* Kendisine gönderilen saniye cinsinden süreyi saat, dakika ve saniye olarak ayrýþtýrarak
ekrana yazdýran display_duration iþlevini yazýn. Eðer saat, dakika ya da saniye deðeri 0
ise, bu deðer ekrana yazdýrýlmamalý.*/

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
	/* Onaltýlýk sayý sisteminde bir basamaða iliþkin karakterin (kullanýlan karakter setindeki)
	   kod numarasýný alarak bu basamaða iliþkin basamak deðerine geri dönen get_hex_value
	   iþlevini yazýn:
	   Ýþlevin parametre deðiþkenine, onaltýlýk sayý sisteminde bir basamak deðeri gösteren
		karakterin sýra numarasý geçildiðinde, iþlev bu basamaða iliþkin basamak deðeriyle geri
		dönmeli. Ýþleve onaltýlýk sayý sisteminde bir basamak deðeri olamayacak bir karakterin
		sýra numarasý gönderilirse, iþlev -1 deðerine geri dönmeli. 0, 1, 2, 3, 4, 5, 6, 7, 8, 9, A,
		B, C, D, E, F ,a, b, c, d, e, f, geçerli karakterlerdir.
		Yazdýðýnýz iþlevi aþaðýdaki main iþleviyle sýnayabilirsiniz:   */
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
	/* Üç kenar uzunlugu verilen üçgenin çizilip çizilemiyeceðini sýnayan, eðer çizilebiliyorsa sýfýr
dýþý deðerle, çizilemiyorsa 0 deðeri ile geri dönen, is_triangle isimli iþlevi yazýn. Ýþlevin
bildirimi aþaðýdaki gibidir:*/
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
	/* 4'e tam bölünen yýllar içinde 100'e tam bölünmeyenler ile 400'e tam bölünenler, artýk
yýldýr. Birkaç örnek:
1967 artýk yýl deðil. (4'e tam bölünmüyor.)
1964 artýk yýl. (4'e tam bölünüyor ve 100'e tam bölünmüyor.)
2000 artýk yýl. (4'e tam bölünüyor ve 400'e tam bölünmüyor.)
1900 artýk yýl deðil. (4'e tam bölünüyor, 100'e tam bölünüyor ve 400'e tam
bölünmüyor.)
Kendisine gönderilen bir yýlýn, artýk yýl olup olmadýðýný sýnayan isleap isimli bir iþlev yazýn:*/

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
	/* AKREPLE YELKOVAN ARASINDAKÝ AÇI*/
	/*
	Kendisine gönderilen saat ve dakika deðerlerini kullanarak akrep ile yelkovan arasýndaki
	açýyý, “derece” cinsinden hesaplayarak geri dondüren “get_angle” isimli iþlevi yazýn.

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
	/* BASAMAK DEÐERLERÝNÝN TOPLAMI */

	/*
		Kendisine gönderilen int türden bir sayýnýn basamak deðerleri toplamýyla geri dönen
		sum_digits iþlevini tanýmlayýn:
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
		Kendisine gönderilen iki sayýdan, birincisinin rakamlarý ile ikinci sayýnýn elde edilip
		edilemiyeceðini sýnayan is_possible isimli iþlevi yazýn. Ýþlevin bildirimi:
		int is_possible(int num1, int num2);
		Ýþlev eðer yazmak mümkünse sýfýr dýþý bir deðere, deðilse 0 deðerine geri dönmeli.

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
			//printf("ikinci rakamýn aynýsý var.\n");
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
	/* BÖLENLERÝN TOPLAMI */

	/*  Kendisine gönderilen pozitif bir tamsayýnýn, kendisi hariç tüm çarpanlarýnýn toplamý ile
		geri dönen sum_factors iþlevini tanýmlayýn:
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
	/* ARKADAÞ SAYÝLAR */
	/* x, y pozitif tamsayýlar olmak üzere, eðer x sayýsýnýn çarpanlarý toplamý y sayýsýna, ve ayný
		zamanda y sayýsýnýn çarpanlarý toplamý x sayýsýna eþit ise, bu sayýlar “arkadaþtýr” denir.
		Örneðin 220 ve 284 arkadaþ sayýlardýr:
		220 => 1 + 2 + 4 + 5 + 10 + 11 + 20 + 22 + 44 + 55 + 110 = 284
		284 => 1 + 2 + 4 + 71 + 142 = 220
		Kendisine gönderilen iki tamsayýnýn arkadaþ olup olmadýklarýný sýnayan, are_friends
		iþlevini tanýmlayýn:
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
	/* DÖRT BASAMAKLI ARKADAÞ SAYILAR */
	/*Dört basamaklý tüm arkadaþ sayý çiftlerini bulan bir C programý yazýn.
		Not: Her bir çift bir kez yazýlmalý.*/
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
	/*  Eðer bir tamsayý basamaklarýnýn toplamýna tam olarak bölünüyorsa, bu tamsayý “Niven”
		(Harshed) tamsayýsýdýr. Verilen iki tamsayý aralýðýnda kaç tane “Niven” sayýsý olduðunu
		hesaplayan bir program yazýnýz.
		Not : 1987000 ile 1988000 arasýnda 65 Niven sayýsý vardýr.*/

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
	/* NIVEN (HARSHED) ARKADAÞ SAYILARI */
	/* Bir arkadaþ sayý çiftine konu tamsayýlarýn ikisi de niven(harshed) tamsayýsý ise, bu
	sayýlara “harshed arkadaþ sayýlarý” denir.
	2620 ve 2924 Harshed arkadaþ sayý çiftidir.
	2620, 2924 arkadaþ sayýlardýr.
	2620, 10 tamsayýsýna tam olarak bölünür : 10 = 2 + 6 + 2 + 0
	2924, 17 tamsayýsýna tam olarak bölünür : 17 = 2 + 9 + 2 + 4
	Baþka Harshed Arkadaþ sayý örnekleri:
	10634085 ve 14084763
	23389695 ve 25132545
	34256222 ve 35997346
	Verilen bir tamsayý aralýðýndaki “Harshed arkadaþ sayýlarý” ný ekrana yazdýran bir program
	yazýn.*/
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
	/* Kendisine gönderilen pozitif bir tamsayýnýn asal olup olmadýðýný sýnayan, isprime iþlevini tanýmlayýn.

		int isprime(int number);
		isprime iþlevi kendisine gönderilen sayý asal ise sýfýr dýþý bir deðere, asal deðil ise 0 deðerine geri dönmeli. 0 ve 1 sayýlarý asal deðildir.*/
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
	/* Argüman olarak gönderilen int türden sayýdan küçük ilk asal sayýyý bulan closest_prime
		isimli iþlevi yazýn. Ýþlevin bildirimi
		int closest_prime(int value);
		Ýþlevin geri dönüþ deðeri, kendisine gönderilen deðerden daha küçük olan en büyük asal
		sayý olmalý. Bu koþulu saðlayan bir asal sayý olmamasý durumunda iþlev 0 deðerine geri dönmeli.

		int number21,  prime21;//degisken türleri tanýmlanýyor
		printf(" Enter a number ");//kullanýcýya bilgiveriliyor
		scanf_s("%d", &number21);//kullanýcýdan veri alýnýyor
		for (int i = 2; i <= number21; i++) {//sayi degerine kadar 2 den baslayarak döndürüluyor
			prime21 = 1;
			for (int i2 = 2; i2 < i; i2++) {//i degerine kadar sayý dön
				if (i % i2 == 0) {//eger i i2ye bölünüyorsa yani kendisinden baska boleni varsa
					prime21 = 0;//m degerine 0 yap
					break;//döngüden çýk
				}
			}
			if (prime21 == 1) printf("%d\n", i);//eger i degeri kendisine kadar olan sayýlara bolunmuyorsa
		}
		*/

	int number21, prime21, returnValue21;//degisken türleri tanýmlanýyor
	printf(" Enter a number ");//kullanýcýya bilgiveriliyor
	scanf_s("%d", &number21);//kullanýcýdan veri alýnýyor
	for (int i = number21 - 1; i >= 2; i--) {//sayi degerine kadar 2 den baslayarak döndürüluyor
		prime21 = 1;
		for (int i2 = 2; i2 < i; i2++) {//i degerine kadar sayý dön
			if (i % i2 == 0) {//eger i i2ye bölünüyorsa yani kendisinden baska boleni varsa
				prime21 = 0;//m degerine 0 yap
				break;//döngüden çýk
			}
		}
		if (prime21 == 1) {//eger i degeri kendisine kadar olan sayýlara bolunmuyorsa
			returnValue21 = i;
			break;
		}
	}
	printf("%d\n", returnValue21);
#pragma endregion

#pragma region Ornek22
	/* n'ÝNCÝ ASAL SAYI */
	/* n 1'den büyük ya da 1'e eþit bir tamsayý olmak üzere n. asal sayýyý bulan bir iþlev
		tanýmlayýn.
		int nprime(int n);
		Ýþlevin geri dönüþ deðeri n. asal sayý olmalý.*/
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
	/* BASAMAKLARLA YAZILACAK TÜM ASAL SAYILAR */
	/*  Kendisine gönderilen bir sayýnýn basamaklarý ile yazýlabilecek tüm asal sayýlarý, ekrana
		küçükten büyüðe doðru yazan bir iþlev yazýn. Ýþlevin bildirimi aþaðýdaki gibidir:
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

	for (int i = 2; i <= num23; i++) {//sayi degerine kadar 2 den baslayarak döndürüluyor
		prime23 = 1;
		for (int i2 = 2; i2 < i; i2++) {//i degerine kadar sayý dön
			if (i % i2 == 0) {//eger i i2ye bölünüyorsa yani kendisinden baska boleni varsa
				prime23 = 0;//m degerine 0 yap
				break;//döngüden çýk
			}
		}
		if (prime23 == 1) {//eger i degeri kendisine kadar olan sayýlara bolunmuyorsa
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
	/* abc, üç basamaklý bir tamsayýdýr. Aþaðýdaki koþullarý saðlamaktadýr:
koþul 1 cba > abc olacak
koþul 2 abc asal sayý olacak
koþul 3 cba asal sayý olacak
koþul 4 ab asal sayý olacak
koþul 5 bc asal sayý olacak
koþul 6 cb asal sayý olacak
koþul 7 ba asal sayý olacak
113 sayýsý bu koþullarý saðlamaktadýr:
koþul 1 cba > abc olacak 311 > 113
koþul 2 abc asal sayý olacak 113 asal
koþul 3 cba asal sayý olacak 311 asal
koþul 4 ab asal sayý olacak 11 asal
koþul 5 bc asal sayý olacak 13 asal
koþul 6 cb asal sayý olacak 31 asal
koþul 7 ba asal sayý olacak 11 asal
Bir C programý yazarak, yukarýdaki koþullarýn hepsini saðlayan tüm abc sayýlarýný bulun.*/
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
	/*	2 basamaklý birbirinden farklý 3 asal sayýnýn toplamý þeklinde ifade edilebilecek en büyük
		ve en küçük asal sayýlar hangileridir?
		Bir C programý yazarak bu sayýlarý bulun.
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
	/*	3 basamaklý birbirinden farklý 3 asal sayýnýn toplamý þeklinde ifade edilebilecek en büyük
		ve en küçük asal sayýlar hangileridir?
		Bir C programý yazarak bu sayýlarý bulun. */
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
	/*	ÜS HESAPLAMAK */
	/*	Bir pozitif tamsayýnýn baþka bir pozitif kuvvetini hesaplayan, power isimli iþlevi
		tanýmlayýn:
		int power(unsigned int base, unsigned int exp);
		power iþlevi base exp ile geri dönmeli.*/

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
	/* BÝNOM ÜÇGENÝ */
	/*	Klavyeden girilen bir “n” sayýsý için binom üçgeninin ilgili satýrýndaki katsayýlarý ekrana
		yazan programý yazýn:
		“n” sayýsý yukarýdaki gibi iki bilinmeyenli n. dereceden bir denklemin derecesini
		gösteriyor.
		n = 0 icin :		 1
		n = 1 icin :		1 1
		n = 2 icin :	   1 2 1
		n = 3 icin :	  1 3 3 1
		n = 4 icin :     1 4 6 4 1
		n = 5 icin :    1 5 10 10 5 1
		n = 6 icin :   1 6 15 20 15 6 1
		Program girilen “n” degerine karþýlýk, binom üçgeninin ilgili satýrýný yukarýdaki gibi
		yazmalý.*/

	int a28;
	printf("Pascal triangle row? = ");
	scanf_s("%d", &a28); //Burada dýþarýdan pascal üçgeni kaç satýr olmasýný istiyorsanýz onu giriyoruz.
	printf("\n");
	for (int b = 0; b < a28; b++) //Burada for döngüsü kullandýk.Pascal üçgeni için toplamda 3 for döngüsü kullanacaðýz.
	{
		int c = 1;
		for (int d = 0; d < a28 - b; d++)
		{
			printf(" "); //Burada pascal üçgenimiz oluþsun diye deðerler arasýna boþluk býrakýyoruz ki üçgen görünümünü alsýn.
		}
		for (int e = 0; e <= b; e++)
		{
			printf(" %d ", c); //Gerekli iþlemlerimiz yapýldý ve pascal üçgenimizdeki elemanlarýn deðerleri teker teker girildi.
			c = c * (b - e) / (e + 1);
		}
		printf("\n");
	}
#pragma endregion

#pragma region Ornek29
	/* TOMBALA OYUNU OLASILIÐI */
	/*	Bir tombala torbasýnda 1'den 99'a kadar numaralanmýþ (99 dahil) pullar bulunuyor. Bu
		tombala torbasýyla aþaðýdaki oyunlar oynanýyor:
		Çekilen bir pul torbaya geri atýlmamak üzere
		1) Torbadan 3 pul çekiliyor. Çekilen pullarýn toplamý 150'den küçük ise oyuncu kazanýyor.
		2) Torbadan 3 pul çekiliyor. çekilen pullarýn toplamý asal sayý ise oyuncu kazanýyor.
		3) Torbadan 3 pul çekiliyor. En büyük deðerli pul ile en küçük deðerli pul arasýndaki fark
		ortanca deðerli puldan büyükse oyuncu kazanýyor.
		Oynanacak her bir oyun için oyuncunun kazanma olasýlýðýný en az 30000 oyunu simule
		ederek hesaplayýn.*/
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
	/*	Craps hemen hemen dünyanýn her yerinde bilinen, iki zarla oynanan bir kumardýr.
		Oyunun kurallarý þöyledir :
		Zarlarý atacak oyuncu oyunu kasaya (kumarhaneye) karþý oynar. Atýlan iki zarýn toplam
		deðeri
		7 ya da 11 ise oyuncu kazanýr.
		2, 3, 12 ise oyuncu kaybeder. (buna craps denir!)
		Ýki zarýn toplam deðeri yukarýdakilerin dýþýnda bir deðer ise (yani 4, 5, 6, 8, 9, 10) oyun
		þu þekilde sürer:
		Oyuncu ayný sonucu buluncaya kadar zarlarý yeniden atar. Eðer ayný sonucu bulamadan
		önce oyuncu 7 atarsa (yani atýlan iki zarýn toplam deðeri 7 olursa) oyuncu kaybeder.
		Eðer 7 gelmeden önce oyuncu ayný sonucu yeniden atmayý baþarýrsa , kazanýr.
		Birkaç örnek :
		Oyuncu zarlarý attý, zarlarýn toplam deðeri :
		11 oyuncu kazandý. Yeni oyun oynanacak.
		3 oyuncu kaybetti. Yeni oyun oynanacak.
		12 oyuncu kaybetti. Yeni oyun oynanacak.
		7 oyuncu kazandý. Yeni oyun oynanacak.
		9 sonuç belli deðil, oyuncu tekrar zar atacak.
		8 sonuç belli deðil, oyuncu tekrar zar atacak.
		11 sonuç belli deðil oyuncu tekrar zar atacak.
		5 sonuç belli deðil oyuncu tekrar zar atacak.
		9 oyuncu kazandý. (7 atmadan ayný zarý tekrar attý). Yeni oyun
		oynanacak.
		6 sonuç belli deðil, oyuncu tekrar zar atacak.
		3 sonuç belli deðil, oyuncu tekrar zar atacak.
		10 sonuç belli deðil, oyuncu tekrar zar atacak.
		7 oyuncu kaybetti. (Ayný zarý tekrar atamadan 7 geldi)
		Böyle bir oyunu bir kez oynadýðýnýzda kazanma olasýlýðýnýz nedir?
		Bu oyunun benzetimini (simulasyon) yaparak bilgisayara 100.000 kez oynatan, ve
		oyuncunun kazanma olasýlýðýný hesaplayan bir C programý yazýnýz.*/

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

	//hatalý tekrar yap31
#pragma region Ornek31
	/* e, n, d HARFLERÝNÝ GÝRÝNCE SONLANAN PROGRAM */
	/*	Klavyeden alýnan her karakteri ekrandan gösteren, ancak klavyeden ardýþýk olarak 'e', 'n',
		'd' karakterleri alýndýðýnda sonlanan bir C programý yazýn.*/
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
	/*	e sayýsýný aþaðýdaki seri toplamýyla bulabilirsiniz:
		e = 1/0! + 1/1! + 1/2! + 1/3! + 1/4! + 1/5!
		Bir C programý yazarak e sayýsýný yukarýdaki seri toplamýyla hesaplayarak ekrana
		yazdýrýn.*/
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
	/* EKRANA RASTGELE SÖZCÜKLERÝN YAZDIRILMASI */
	/*Aþaðýdaki koþullarý saðlayan bir C programý yazýn :
		Ekrana her satýra bir tane olmak üzere NO_OF_WORDS tane rastgele sözcük yazdýrýlmalý.
		Her sözcük Ýngiliz alfabesindeki büyük harf karakterlerinden oluþturulmalý.
		Her bir sözcüðün uzunluðu en az MIN_WORD_LEN en fazla MAX_WORD_LEN olmalý.
		Bir sözcüðün içinde NO_SUC_VOWELS sayýda sesli harf yanyana gelmemeli.
		Bir sözcüðün içinde NO_SUC_CONS sayýda sessiz harf yanyana gelmemeli.
		Programýnýzý aþaðýdaki "simgesel deðiþmez" deðerleriyle çalýþtýrýn :

		#define NO_OF_WORDS 10
		#define MIN_WORD_LEN 9
		#define MAX_WORD_LEN 15
		#define NO_SUC_VOWELS 2
		#define NO_SUC_CONS 3

		Aþaðýda örnek bir ekran çýktýsý görülüyor.
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
	/* FAKTÖRÝYEL HESAPLAYAN ÝÞLEV */
	/*	Kendisine gönderilen bir tamsayýya iliþkin faktöriyel deðeriyle geri dönen factorial iþlevini
		tanýmlayýn:
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
	/* HAFTANIN HANGÝ GÜNÜ? */
	/*  Gün, ay ve yýl olarak verilen geçerli bir tarihin haftanýn hangi gününe geldiðini
		hesaplayan
		int day_of_week(int day, int month, int year);
		iþlevini tanýmlayýn. Ýþlev 01.01.1900 tarihinden sonraki tüm tarihler için doðru çalýþmalý.
		Ýþlev pazar günü için 0 deðerine, Salý günü için 1 deðerine… Cumartesi günü için 6
		deðerine geri dönmeli. Tanýmladýðýnýz iþlevin doðru çalýþýp çalýþmadýðýný görmek için çeþitli
		tarih deðerleriyle sýnayýn.*/
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
	/*	100 tane kapý var. Bu kapýlar 1'den 100'e kadar numaralandýrýlmýþ.
		Kapýlarýn hepsi kilitli.
		Elimizde 1'den 20'ye kadar numaralandýrýlmýþ 20 tane anahtar var.
		Bir kapýnýn numarasý bir anahtarýn numarasýna tam bölünüyorsa o anahtar o kapýyý
		açabiliyor (ya da kilitleyebiliyor!)
		1 numaralý anahtardan baþlayarak her anahtar için kapýlar dolaþýlýyor. Anahtar ile kapý
		açýksa kilitleniyor, kilitliyse açýlýyor.
		20. turdan sonra, yani son anahtarýn kullanýlmasýndan sonra hangi kapýlar açýk hangi
		kapýlar kilitlidir? Bir C programý yazarak açýk olan kapýlarýn numaralarýný ekrana yazdýrýn.*/
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
	/* KLAVYEDEN GÝRÝLEN SAYILARIN ORTALAMASINI BULMAK */
	/* Klavyeden girilen tamsayý deðerlerin, toplam sayýsýný, en büyüðünü, en küçüðünü,
		ortalamasýný hesaplayan “deger.c” isimli bir C programý yazýn. Kullanýcýnýn her deðer
		giriþinden önce, yeni bir deðer girmek isteyip istemediði sorulmalý:
		Yeni bir deger girmek istiyor musunuz? [e] [h]
		Kullanýcý 'e' ya da 'e' tuþuna basarsa, program kullanýcýnýn bir deðer girmesini istemeli:
		bir tamsayý giriniz: 53 enter
		Kullanýcý 'h' ya da 'h' tuþuna basarsa, program o ana kadar girilen deðerlerle ilgili olarak
		aþaðýdaki dökümü olarak vererek sonlanmalý:
		toplam 17 deger girildi.
		max = 89
		min = 17
		ortalama = 37.456786
		program sonlandý!
		Kullanýcýnýn 'e', 'e', 'h' ya da 'h' tuþlarý dýþýnda baþka bir tuþa basmasý durumunda
		program bir tepki vermemeli.
		Programda dizi kullanýlmamalý.
		Girilen deðerler [0 - 100] aralýðýnda olmalý. Geçersiz bir deðer girilmesi sýrasýnda ekrana "geçersiz deðer " uyarýsý yazýlarak yeni bir giriþ yapýlmasý istenmeli.
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
	/* MÜKEMMEL SAYI SINAMASI */
	/*	 Kendisi haricindeki tüm çarpanlarýnýn toplamýna eþit olan tamsayýlara "mükemmel sayý"
		(perfect number) denir. Örneðin 6 ve 28 mükemmel sayýlardýr:
			6 = 1 + 2 + 3
			28 = 1 + 2 + 4 + 7 + 14
		Kendisine gönderilen int türden bir deðerin mükemmel sayý olup olmadýðýný sýnayan
		is_perfect iþlevini tanýmlayýn:
		int is_perfect(int value);
		is_perfect iþlevi kendisine gönderilen tamsayý mükemmel ise sýfýr dýþý bir deðere,
		mükermmel deðil ise 0 deðerine geri dönmeli.*/
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
	/* 4 BASAMAKLI MÜKEMMEL SAYI */
	/*  4 basamaklý tek bir mükemmel sayý vardýr. Yazmýþ olduðunuz isperfect iþlevini kullanarak
		4 basamaklý mükemmel sayýyý bulan bir C programý yazýn.*/
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
	/* OLASILIK SÝMULASYONU */
	/*	Yazý tura ile oynanan aþaðýdaki oyunu kazanma olasýlýðýnýz nedir?
		Bir C programý ile 1.000.000 oyunun benzetimini yaparak bulun.
		- Oyun sizinle x arasýnda geçiyor. Ýkinizin de 100 YTL’si var.
		- Paranýn her atýlmasýndan önce x size 10 YTL veriyor.
		- Üst üste iki yazý geldiðinde, siz ona 35 YTL, üst üste üç tura geldiðinde siz ona 60 YTL
		veriyorsunuz.
		Bir tarafýn parasý bitince oyun sona eriyor. */
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
	/* ORTAK BÖLENLERÝN EN BÜYÜÐÜNÜ BULMAK */ // greatest common divisor
	/*	Ýki tamsayýnýn ortak bölenlerinin en büyüðünü hesaplayan obeb iþlevini yazýn:
		int obeb(int sayi1, int sayi2);
		Ýþlev, parametre deðiþkenlerine geçilen tamsayýlarýn ortak bölenlerinin en büyüðü
		deðeriyle geri dönmeli. */
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
	/* ORTAK KATLARIN EN KÜÇÜÐÜ */ //lowest common multiple
	/*	Ýki tamsayýnýn ortak katlarýnýn en küçüðünü hesaplayan okek iþlevini yazýn:
		int okek(int sayi1, int sayi2);
		Ýþlev parametre deðiþkenlerine geçilen tamsayýlarýn ortak katlarýnýn en küçüðü deðeriyle
		geri dönmeli.*/

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
	/* OYUN SÝMULASYONU */
	/*	Bir C programý yazarak aþaðýdaki oyunda A oyuncusunun kazanma olasýlýðýný hesaplayýn:
		1. Oyun A ile B arasýnda oynanýr. Oyuna baþlangýçta A’nýn ve B’nin 100 YTL parasý vardýr.
		A, her bir oyuna girmek için B'ye 5 YTL verir. Yeni bir oyuna girmek için A’nýn eðer 5 YTL
		parasý yoksa A oyunu kaybeder.
		B, 0 - ile 9 arasýnda (0 ve 9 dahil olmak üzere) bir sayý tutar. A, bu sayýyý 3 tahminde
		bulmaya çalýþýr.
		1. Eðer A, B’nin tuttuðu sayýyý ilk tahminde bulursa B, A ya 20 YTL öder.
		2. Eðer A, B’nin tuttuðu sayýyý ikinci tahminde bulursa B, A ya 15 YTL öder.
		2. Eðer A, B’nin tuttuðu sayýyý üçüncü tahminde bulursa B A ya 10 YTL öder.
		B’nin tuttuðu sayýyý A nýn bulmasý durumunda B’de ödeme yapacak kadar para
		bulunmamsý durumunda B oyunu kaybeder.
		Bu oyunu A nýn kazanma olasýlýðý nedir?*/
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
	/* PÝ SAYISINI HESAPLAMAK */
	/* pi sayýsýný aþaðýdaki seri toplamýyla bulabilirsiniz:
		pi / 4 = 1/1 - 1/3 + 1/5 - 1/7 + 1/9 ....
		pi sayýsýný yukarýdaki seri toplamýyla hesaplayarak ekrana yazdýran bir C programý yazýn.*/
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
	/*	Bildirimi aþaðýda verilen isprimex iþlevini tanýmlayýn.
		int isprimex(int number);
		isprimex, kendisine gönderilen argümanýn asal olup olmadýðýný sýnamalý. Eðer sayý asal
		ise bu kez sayýnýn basamak deðerleri toplanarak elde edilen sayýnýn asal olup olmadýðý
		sýnanmalý. Bu iþlem sonuçta tek basamaklý bir sayý kalana kadar sürmeli. Eðer en son
		elde edilen tek basamaklý sayý dahil tüm sayýlar asal ise isprimex iþlevi sýfýr dýþý bir deðere
		geri dönmeli. Eðer herhangi bir kademede asal olmayan bir sayý elde edilirse iþlev, 0
		deðerine geri dönmeli.
		Not : Birden fazla iþlev tanýmlayabilirsiniz.*/
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
	/* RASTGELE BÝR TARÝH YAZDIRMAK */ // Random Date
	/* Çaðrýldýðýnda ekrana 01.01.1900 ile 31.12.2020 arasýnda rastgele bir tarih yazacak
		void print_random_date(void);

		iþlevini tanýmlayýn. Ýþlevin ekrana yazdýrdýðý tarih geçerli bir tarih olmalý. Rastgele tarihin
		Þubat ayýna denk gelmesi durumunda, seçilen yýlýn artýk yýl olup olmamasýna göre, gün
		deðeri 29 olabilmeli. Tarih ekrana aþaðýdaki formatta yazdýrýlmalý:
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
	/* Aþaðýda bildirimi verilen put_stars isimli iþlevi tanýmlayýn:
		void put_stars(int n);
		Ýþlev çaðýrýldýðý zaman n deðeri kadar satýra ‘*’ karakteri basmalý. Birinci satýra bir ‘*’
		karakteri, ikinci satýra iki ‘*’ karakteri, üçüncü satýra üç ‘*’ karakteri... n.satýra n adet ‘*’
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
	/* MASTERMÝND OYUNU */
	/*	Mastermind iki kiþi ile oynanan bir sayý bulmaca oyunudur. Oyunculardan biri, [1000-9999]
		kümesinden basamak deðerleri birbirinden farklý bir sayý belirler. Diðer oyuncunun
		amacý bu sayýyý en fazla 10 tahminde bulmaktýr. Sayýyý belirleyen oyuncu, diðer
		oyuncunun her tahmininden sonra oyunun kurallarý doðrultusunda bilgiler verir.
		Tahmin edilen sayý içinde belirlenen sayýnýn içerisindeki rakamlardan biri varsa, fakat
		basamak deðeri tutmuyorsa - iþareti ile, basamak deðeride tutuyorsa + iþareti ile bilgi
		verilir. Örnekler:
		Belirlenen sayý : 1234
		Tahmin edilen sayý : 4567
		Verilecek bilgi : -
		Belirlenen sayý : 1234
		Tahmin edilen sayý : 5674
		Verilecek bilgi : +
		Belirlenen sayý : 1234
		Tahmin edilen sayý : 4237
		Verilecek bilgi : +2 -
		Not : verilecek olan bilgide + ve - 'lerin sýrasýnýn bir önemi yoktur.
		Bir sayý belirleyerek mastermind oyununu oynatan programý yazýn.*/
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
			printf("\n"); /// buralarda kaldým...
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
	/*	1’den büyük asal olmayan bir tamsayýnýn rakamlarýnýn toplamý, sayý asal çarpanlarýna
		ayrýlarak yazýldýðýnda bu yazýlýþta bulunan tüm asal sayýlarýn rakamlarýnýn toplamýna eþit
		oluyorsa bu tür sayýlara “Smith sayýsý” denir.
		728 = 2 * 2 * 2 * 7 * 13
		7 + 2 + 8 = 2 + 2 + 2 + 7 + 1 + 3
		olduðundan 728 bir Smith sayýsýdýr.
		1 ile 10000 arasýndaki tüm Smith sayýlarýný bularak ekrana yazdýran bir C programý yazýn.	*/
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

	//yapamadým bir daha bak.
#pragma region Ornek50
	/* TÜRKÇE KARAKTERÝ DÖNÜÞTÜREN ÝÞLEV */
	/*	Kendisine gönderilen karakter türkçe'nin özel karakterlerinden biri ise (Ç, Ð, Ý, Ö, Þ, Ü, Ç,
		ð, ý, ö, þ, ü) bu karakterin ingilizce benzerininin sýra numarasýna geri dönen, aksi halde
		gönderilen karakterin sýra numarasýna geri dönen to_eng iþlevini yazýn:
		int to_eng(int ch);
		Ýþlevin tasarýmýnda switch kontrol deyimini kullanýn. Otomatik tür dönüþümü nedeniyle
		oluþabilecek böceklere karþý önlem alýn!
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
	/* TOMBALA VE OLASILIK BENZETÝMÝ */ //64.örnek
	/*	Bir tombala torbasýnda 1'den 99'a kadar numaralanmýþ (99 dahil) pullar bulunuyor. Bu
		tombala torbasýyla aþaðýdaki oyunlar oynanýyor:
		Çekilen bir pul torbaya geri atýlmamak üzere

		1) Torbadan 3 pul çekiliyor. Çekilen pullarýn toplamý 150'den küçük ise oyuncu kazanýyor.
		2) Torbadan 3 pul çekiliyor. Çekilen pullarýn toplamý asal sayý ise oyuncu kazanýyor.
		3) Torbadan 3 pul çekiliyor. En büyük deðerli pul ile en küçük deðerli pul arasýndaki fark
		ortanca deðerli puldan büyükse oyuncu kazanýyor.

		Oynanacak her bir oyun için oyuncunun kazanma olasýlýðýný en az 30000 oyunun
		benzetimini (simulasyon) yaparak hesaplayýn.
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
	/* urand ÝÞLEVÝ */
	/*	Çaðrýldýðýnda 0 ile LIMIT deðerleri arasýnda rastgele farklý bir tamsayý üreten u_rand
		isimli iþlevi tanýmlayýn:
		int urand(void);
		Ýþlev verilen aralýktaki tüm rastgele deðerler üretildikten sonra çaðrýlýrsa, -1 deðerine geri
		dönmeli.*/
#define LIMIT 100
	int sayi53;
	srand(time(NULL));
	sayi53 = rand() % LIMIT;
#pragma endregion

#pragma region Ornek54
	/* YILIN KAÇINCI GÜNÜ? */
	/*	Kendisine gönderilen gün, ay ve yýl deðerlerinden oluþan bilgiyi bir tarih olarak ele alýp
		söz konusu tarihin yýlýn kaçýncý günü olduðu bilgisiyle geri dönen day_of_year iþlevini tanýmlayýn:
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
	/* ÝKÝNCÝ DERECEDEN BÝR DENKLEMÝ ÇÖZMEK */
	/*	Ýkinci dereceden bir denklemi çözen bir C programý yazýn. Ýkinci dereceden bir denklem
		ax2 + bx + c = 0
		biçimindedir. a, b, ve c gerçek sayýlardýr. Program kullanýcýdan a, b ve c katsayýlarýný
		almalý. Programýn çýktýsý aþaðýdaki biçimlerde olabilir:
		denkleminizin gerçek kökü yoktur!
		veya
		denkleminizin tek gerçek kökü vardýr:
		kok = 3.750000
		veya
		denkleminizin iki gerçek kökü vardýr:
		kok1 = -3.250000
		kok2 = 2.000000*/
#pragma endregion

}

