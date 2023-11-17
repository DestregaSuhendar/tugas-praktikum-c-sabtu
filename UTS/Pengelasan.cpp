#include <stdio.h>
#include <windows.h>

int main () {
 char ulangi = 'y';
	

	
	int m,c,c2,c3,c4,wp,kp,nt;
	
	Sleep(1000);
	for (c=0;c<182;c=c+5) {
	system("cls");
	printf("Tombol Start Ditekan");	
	printf("\nMotor Listrik Utama Aktif Dan Berputar %i derajat",c);
	}	
	while (kp =! 0){
	
	printf("\nMasukan Ketebalan pengelasan Las (mm) : ");
	scanf("%i",&kp);
	
	nt=kp/2;
	printf("Maka Nilai Tengah : %i",nt);
	Sleep(1000);
	printf("\nMotor Listrik Utama Berputar dan Berpindah Pada Salah Satu Titik Nilai Tengah %i ",nt);
	Sleep(1000);
	for (c2=0;c2<46;c2++) {
	system("cls");	
	printf("Tombol Start Ditekan");	
	printf("\nMotor Listrik Utama Aktif Dan Berputar %i derajat",c-5);
	printf("\nMasukan Ketebalan pengelasan Las (mm) : %i",kp);
	printf("\nMaka Nilai Tengah : %i ",nt);
	printf("\nMotor Listrik Utama Berputar dan Berpindah Pada Salah Satu Titik Nilai Tengah %i ",nt);
	printf("\nMotor Listrik Lengan Tunggkai Aktif Dan Berputar %i derajat",c2);	
	}
	printf("\nMotor Listrik jari Robot Berputar mendekati Objek");
	Sleep(1000);
	
	wp=nt/2;
	if (kp == 24) {
		wp = wp - 2;
	} 
	if (kp == 30) {
		wp = wp - 2;
	} 
	if (kp == 36) {
		wp = wp - 3;
	} 
	if (kp == 42) {
		wp = wp - 3;
	} 
	if (kp == 49) {
		wp = wp - 4;
	} 
	if (kp == 50) {
		wp = wp - 3;
	} 
	
	for (c4=wp;c4>0;c4--) {
	printf("\nRobot Sedang mengelas dengan ekstimasi waktu %i detik",c4);	
	Sleep(1000);
	}
	printf("\nProses las Selesai");
	}
	return 1;
}
