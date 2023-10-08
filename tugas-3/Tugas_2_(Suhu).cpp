/*Buatlah sebuah program Bahasa C untuk menginput sebuah nilai bilangan bulat yang menyatakan suhu dalam satuan Celcius.
 Selanjutnya hitung dan tampilkan nilai sudut dalam derajat Fahrenheit dan Reamur!*/
#include <stdio.h>

int main (){
	int c;
	float f,r;
	
	printf("Celcius   : " );
	scanf("%i", &c);

	f=(c*9/5) + 32;
	r=(c*5/4);
	
	printf("Farenheit : %.1f *f",f);
	printf("\nReamur    : %.1f *R",r);
	return 0;
}
