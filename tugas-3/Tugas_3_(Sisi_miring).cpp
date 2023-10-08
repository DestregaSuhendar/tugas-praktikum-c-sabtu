/*Buatlah sebuah program Bahasa C untuk menginput sisi alas dan sisi tinggi sebuah segitiga siku-siku (dalam cm). Dengan menggunakan rumus Phitagoras,
 buatlah sebuah program Bahasa C untuk menghitung sisi miring segitiga tersebut dan menampilkannya di layar!*/
 #include <stdio.h>
#include <math.h>

int main (){
	int sa,st,sm;
	
	printf("Sisi alas (cm)   : " );
	scanf("%i", &sa);
	printf("Sisi tinggi (cm) : " );
	scanf("%i", &st);
	
	sm=sqrt((sa*sa)+(st*st));

	printf("Sisi miring      : %d cm.",sm);
	return 0;
}
