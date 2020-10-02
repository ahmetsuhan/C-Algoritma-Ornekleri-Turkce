// Ornek109.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/* unique_copy ÝÞLEVÝ */
/* Bildirimi aþaðýda verilen unique_copy isimli iþlevi tanýmlayýn:
    int *unique_copy(const int *ptr, int size);
    int türden bir dizinin adresini ve boyutunu alan iþlev, dizideki deðerleri dinamik olarak
    elde ettiði bir alana kopyalamalý. Ancak dizide bulunan bir deðere dizi içinde yeniden
    rastlanýrsa bu deðer dinamik alana kopyalanmamalý. Yani dinamik alandaki her deðerden
    bir tane bulunmalý.*/
int* unique_copy(const int* ptr, int size);
#define SIZE 10
int main()
{
    int a[SIZE];
    int k, * ptr;
    srand(time(0));
    for (k = 0; k < SIZE; ++k)
        a[k] = rand() % 20;
    ptr = unique_copy(a, SIZE);
    printf("dizi yazdiriliyor \n");
    for (k = 0; k < SIZE; ++k)
        printf("%3d ", a[k]);
    printf("\n\ndinamik dizi yazdiriliyor \n");
    for (k = 0; k < SIZE; ++k)
        printf("%3d ", ptr[k]);
}
int* unique_copy(const int* ptr, int size)
{
    int *a; int counter = 0, temp = 0, lenght = 0;
    a = (int*)malloc(size * sizeof(int*));
    int i = 0,j=0,cnt=0;
    for (i = 0; i < size; i++)
    {
        counter = 0;
        for (j = 0 ;  j < size + 1; j++)
        {
            /*Increment the counter when the seaarch value is duplicate.*/
            if (i != j)
            {
                if (ptr[i] == ptr[j])
                {
                    counter++;
                }
            }
        }
        if (counter == 0)
        {
            a[cnt] = ptr[i];
            lenght++;
            cnt++;
        }
    }
    int* b;
    b =(int*) malloc(lenght * (sizeof(int*)));
    for (int c = 0; c < lenght; c++)
        b[c] = a[c];
   
    return b;
}
