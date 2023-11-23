#include<stdio.h>
#include<stdio.h>
#include<stdbool.h>

void main(void)
{
	float a = 0.1;
	int b = 0;
	signed int la = -128;
	b = '1';
	printf("taille en octet de bool :%d\n", sizeof(bool));
	printf("taille en octet de -128 :%d\n",sizeof(-128));
	printf("taille en octet d'un float:%d\n", sizeof(a));
	printf("taille en octet de '1':%d\n", sizeof('1'));
	printf("taille en octet de 1 chaine :%d\n", sizeof("2431"));
	printf("taille en octet de double:%d\n", sizeof(double));
	printf("taille en octet de signed int:%d\n", sizeof(signed int));
}


