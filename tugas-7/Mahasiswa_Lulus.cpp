#include <stdio.h>
#include <windows.h>
int main(){
	int i,a[10];
	for (i=1;i<11;i++) {
	printf("Masukan Nilai Mahasiswa ke %i : ",i); scanf("%i",&a[i]);
	system("cls");
	}
	printf("Mahasiswa yang lulus :\n");
	for (i=1;i<11;i++){
		if (a[i] >= 60) {
		printf("Mahasiswa ke %i dengan nilai %i\n",i,a[i]);		
		}
	}
}
