/*Perhatikan flowchart pada Gambar 1 di atas. 
 Buatlah sebuah program Bahasa C berdasarkan flowchart tersebut! Selanjutnya jalankan dan input beberapa bilangan berikut ini!
a. 30
b. 50
c. 65
*/
#include <stdio.h>
int main (){
	int N;
	printf("Input bilangan : " );
	scanf("%i", &N);
	if (N>50) {
		N=N-25;
		printf("%i",N);
	}
	else
	{
		N=N+10;
		printf("%i",N);
	}
	return 0;
}
