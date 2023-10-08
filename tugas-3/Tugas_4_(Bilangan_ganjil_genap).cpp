/*Buatlah sebuah program Bahasa C untuk menginput sebuah nilai bilangan bulat positif,
 lalu tampilkan keterangan “GANJIL” jika bilangan tersebut adalah ganjil dan “GENAP” jika bilangan tersebut adalah genap.*/
#include <stdio.h>

int main (){
	int b;
	printf("Bilangan : " );
	scanf("%i", &b);
	if (b%2==0) {
		printf("%i adalah bilangan genap",b);
	}
	else
	{
		printf("%i adalah bilangan ganjil",b);
	}
	return 0;
}
