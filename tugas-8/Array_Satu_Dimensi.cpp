#include <stdio.h>
#include <windows.h>
int main(){
	int i,a[14];
	
	for (i=0;i<14;i++) {
	system("cls");	
	printf("Array Nilai : 12,15,7,10,5,2,17,25,9,20,35,28,14,11\n");	
	printf("Masukan data Nilai diatas : "); scanf("%i",&a[i]);
	}
	printf("Dokumen data A :\nA |");
	for (i=0;i<11;i++){
		if (i %2 == 0) {
		printf("%2i|",a[i]);	
		} else {
		printf("  |");	
		}
		}
	printf("\nDokumen data B :\nA |");	
	for (i=0;i<11;i++){
		if (a[i] > 9) {
		printf("%2i|",a[i]);		
		} else {
		printf("  |");	
		}
		}
	printf("\nDokumen data C :\nA |");
	for (i=0;i<14;i++){
		if (a[i] > 9) {
		printf("%2i|",a[i]);		
		}
		}
		printf("  |");
	printf("\nDokumen data D :\nA |");
	for (i=0;i<11;i++){
		if (a[i] %2 == 1) {	
		printf("%2i|",a[i]);
		} 
		}
		printf("  |  |  |  |");	
	printf("\nDokumen data E :\nA |");
	for (i=0;i<11;i++){
		if (a[i] %2 == 1) {	
		printf("%2i|",a[i]);
		} else {
		printf("  |");	
		}
		} 
	}

