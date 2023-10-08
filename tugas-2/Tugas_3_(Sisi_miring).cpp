/*3. Diketahui sebuah segitiga siku-siku dengan panjang sisi alas 4 cm dan sisi tinggi 5 cm. Dengan menggunakan rumus Phitagoras, 
 buatlah sebuah program Bahasa C untuk menghitung sisi miring segitiga tersebut dan menampilkannya di layar!*/
#include <stdio.h>
#include <math.h>

int main (){
	int psa=4;
	int st=5;
	int sm=sqrt((psa*psa)+(st*st));
	printf("Panjang sisi alas : %d cm.\n",psa);
	printf("Sisi tinggi       : %d cm.\n",st);
	printf("Sisi miring       : %d cm.",sm);
	return 0;
}
