#include <stdio.h>
#include <windows.h>
int main(){
	int i,a[11];
	
	for (i=0;i<11;i++) {
	printf("Array Nilai : 12,15,7,10,5,2,17,25,9,20,35\n");	
	printf("Masukan data Nilai diatas : "); scanf("%i",&a[i]);
	system("cls");
	}
	printf("Nilai yang bernilai genap :\n");
	for (i=0;i<11;i++){
		if (a[i] %2 == 0) {
		printf("%2i|",a[i]);		
		} 
		}
		printf("  |  |  |  |  |  |  |");
}


