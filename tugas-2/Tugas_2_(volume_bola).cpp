/*2. Diketahui sebuah bangun ruang berbentuk bola dan memiliki diameter 15 cm.
 Buatlah sebuah program dalam Bahasa C untuk menghitung dan menampilkan isi (volume) dari bangun ruang bola tersebut!*/
#include <stdio.h>

int main (){
	int d=15;
	int j=d/2;
	int v=(4/3)*3.14*j*j*j;
	printf("Diameter    : %d cm.\n",d);
	printf("Jari-Jari   : %d cm.\n",j);
	printf("Volume bola : %d cm^3.",v);
	return 0;
}
