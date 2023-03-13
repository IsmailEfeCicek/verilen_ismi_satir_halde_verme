#include <stdio.h>
#include <locale.h>
#include <conio.h>
#include <math.h>
#include <time.h>
#include <stdlib.h>
#include <string.h>
#include <iostream>
main(){
	setlocale(LC_ALL,"Turkish");
	// harf harf gfirilen ismi tek tek satýrlar halinde yazdýrma
	int i,j,isim[100],b,c,d,e,a;

	tekrar:
	printf("isminiz kaç karakterden oluþuyor? ");
	scanf("%d",&b);
	deneme:
	printf("isminiz ters mi düz mü yazýlsýn? ");
	printf("\nTers için=1\nDüz için=2\nÇýkmak için=1905\nTercihiniz: ");
	scanf("%d",&d);
	printf("\n");
	if(d==1905) exit(0);
	else if(d==1||d==2) {
	}
	else {printf("Yanlýþ deðer tuþladýnýz!!! Tekrar deneyin");
	goto deneme;
	}
	for(i=0;i<=b;i++){
		printf("isminizin %d.karakterini  giriniz: ",i+1);
	    scanf("%s",&isim[i]);
	}
	system("cls");
	if(d==2){
		for(i=0;i<=b;i++){
		for(j=0;j<=i;j++) printf("%c",isim[j]);
		for(c=j++;c<=b;c++) printf(".");
	    printf("\n");}
	}
	else {
		for(i=0;i<=b;i++){
		     for(c=0;c<=a;c++) {printf(".");}
		 for(j=i;j>=0;j--) {printf("%c",isim[j]);}
		printf("\n");}
	}
	dene:
	printf("Bir daha yapmak ister misiniz?\nEvet=1\nHayýr=2\nÇýkmak için=1905\nTercihiniz: ");
	scanf("%d",&e);
	if(e==1905){
	    exit(0);}
	else if(e==1){
	    system("cls");
		goto tekrar;}
	else if(e==2) printf("Hoþçakal");
	else {
		printf("Yanlýþ deðer tuþladýnýz!!! Tekrar deneyin");
		goto dene;
	}
	
	getchar();
}

