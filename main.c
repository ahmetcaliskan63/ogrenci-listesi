#include <stdio.h>
#include <stdlib.h>


struct Kisi{//struct ile fonkusyon belirtik 
	
	char adi[50];//burda dizinin boyutunu 50 karakter olarak belirtik.
	char soyadi[50];//burda dizinin boyutunu 50 karakter olarak belirtik.
	double no;//double boyutuyla numara belirlenilecek.
	char adres[60];//burda dizinin boyutunu 60 karakter olarak belirtik.
	
};
int main(int argc, char *argv[]) {
	
	struct Kisi kisi1,kisi2,kisi3,kisi4,kisi5;//burda kisi1,kisi2,kisi3,kisi4 ve kisi5 struct fonkusyonuyla aldýk
	
	printf("****1.ogrenci****\n");
	strcpy(kisi1.adi,"can");  //burda strcpy ile kiþinin ismini aldýk
	strcpy(kisi1.soyadi,"kara");//burda strcpy ile kiþinin soyismini aldýk
	strcpy(kisi1.adres,"izmir bayrampasa mh. 1234 sk. no:56");//burda strcpy ile kiþinin adresini aldýk
	kisi1.no=71245382159;//kiþinin numarasýný girdik
	
	printf("%s %s\nno:%.f\n%s",kisi1.adi,kisi1.soyadi,kisi1.no,kisi1.adres);//burda da yukarad girilen bilgileri ekranda görüntüledik
	printf("\n\n");
	
	printf("****2.ogrenci****\n");
	strcpy(kisi2.adi,"efe"); //burda strcpy ile kiþinin ismini aldýk
	strcpy(kisi2.soyadi,"demir"); //burda strcpy ile kiþinin soyismini aldýk
	strcpy(kisi2.adres,"sanliurfa akcali mh. 1678 sk. no:63"); //burda strcpy ile kiþinin adresini aldýk
	kisi2.no=56566767785;//kiþinin numarasýný girdik
	
	printf("%s %s\nno:%.f\n%s",kisi2.adi,kisi2.soyadi,kisi2.no,kisi2.adres);//burda da yukarad girilen bilgileri ekranda görüntüledik	
	printf("\n\n");
	
	printf("****3.ogrenci****\n");
	strcpy(kisi3.adi,"ahmet"); //burda strcpy ile kiþinin ismini aldýk
	strcpy(kisi3.soyadi,"caliskan");//burda strcpy ile kiþinin soyismini aldýk
	strcpy(kisi3.adres,"istanbu beypazari mh. 7634 sk. no:26");//burda strcpy ile kiþinin adresini aldýk
	kisi3.no=65439876540;//kiþinin numarasýný girdik
	
	printf("%s %s\nno:%.f\n%s",kisi3.adi,kisi3.soyadi,kisi3.no,kisi3.adres);//burda da yukarad girilen bilgileri ekranda görüntüledik
	printf("\n\n");
	
	printf("****4.ogrenci****\n");
	strcpy(kisi4.adi,"ece"); //burda strcpy ile kiþinin ismini aldýk
	strcpy(kisi4.soyadi,"erdem");//burda strcpy ile kiþinin soyismini aldýk
	strcpy(kisi4.adres,"izmit ayanlarpasa mh. 7352 sk. no:89");//burda strcpy ile kiþinin adresini aldýk
	kisi4.no=45327998151;//kiþinin numarasýný girdik
	
	printf("%s %s\nno:%.f\n%s",kisi4.adi,kisi4.soyadi,kisi4.no,kisi4.adres);//burda da yukarad girilen bilgileri ekranda görüntüledik
	printf("\n\n");
	
	printf("****5.ogrenci****\n");
	strcpy(kisi5.adi,"deniz"); //burda strcpy ile kiþinin ismini aldýk
	strcpy(kisi5.soyadi,"izci");//burda strcpy ile kiþinin soyismini aldýk
	strcpy(kisi5.adres,"hatay aynali mh. 8364 sk no:96");//burda strcpy ile kiþinin adresini aldýk
	kisi5.no=97864534234;//kiþinin numarasýný girdik
	
	printf("%s %s\nno:%.f\n%s",kisi5.adi,kisi5.soyadi,kisi5.no,kisi5.adres);//burda da yukarad girilen bilgileri ekranda görüntüledik
	return 0;
}
