#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	

	int boyut; //dizinin boyutunu tanimladik.
	
	printf("lutfen dizinin boyutunu giriniz \n"); 
	scanf("%d",&boyut); //dizinin boyutunu kullanicidan aldik.
    int dizi[boyut]; //diziyi tanimladik.
    
    
	int i ;
	for(i=0;i<boyut;i++) //kullanicidan tanimladigimiz dizinin elemanlarini aldik.
	{
		printf(" %d. indisin degeri : ",i);
		scanf("%d",&dizi[i]);
	}
	
	printf("\n\n");
	
	int key ; //dizide aranacak elemani tanimladik.
	printf("Dizide aranacak elemani giriniz:");
	scanf("%d",&key);
	
	// doðrusal arama yapisini kurduk.
	int sonuc;//donguden cikan degerin sonucu tanimladik
	int m;
	sonuc= -5 ; // sonuc donguye girmeden once -5'e esittir Aranan key deger dongu icerisinde taranan dizinin elemanlarindan biriyle
	//eslesmezse sonuc'un degeri -5 olarak kalir ve dizinin index degerlerinin herhangi birine atanamaz.
	
	for(m=0;m<boyut;m++)
	{
		if(dizi[m]==key)
		{
			sonuc = m ; //aranan degerin indexi bulundu ve sonuc a atandi
		}
	   
	}
	
	
	
	if ( sonuc == -5 ) //onceki for'dan cikan sonuc degeriyle sorgulama yaptik.
	{
		printf("aranan deger bulunamadi");
	}
	else
	{
		printf("aranan degerin indisi : %d \n ",sonuc);
	}
	
	
	
	
	
	return 0;
}
