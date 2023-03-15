#include <stdio.h>

// ��renci bilgilerini depolamak i�in bir struct tan�mlad�m ve alt�na de�i�kenler tan�mlad�m
struct Ogrenci {
    char ad[25];
    char soyad[25];
    int numara;
    char adres[60];
};

int main() {
    // 5 adet ��renci bilgisini depolayacak bir Ogrenci dizisi tan�mlayal�m.
    struct Ogrenci ogrenciler[5];

    // ��renci bilgilerini kullan�c�dan d�ng� i�inde ald�m.
    for(int i=0; i<5; i++) {
        printf(" %d Ogrenci icin bilgileri girin:\n", i+1);
        printf("Ad: ");
        scanf("%s", ogrenciler[i].ad);
        printf("Soyad: ");
        scanf("%s", ogrenciler[i].soyad);
        printf("Numara: ");
        scanf("%d", &ogrenciler[i].numara);
        printf("Adres: ");
        scanf("%s", ogrenciler[i].adres);
    }

    // ��renci bilgilerini ekrana d�ng� �eklinde yazd�rd�m.
    for(int i=0; i<5; i++) {
        printf("\n*****************\n\nOgrenci %d bilgileri:\n", i+1);
        printf("Ad: %s\n", ogrenciler[i].ad);
        printf("Soyad: %s\n", ogrenciler[i].soyad);
        printf("Numara: %d\n", ogrenciler[i].numara);
        printf("Adres: %s\n", ogrenciler[i].adres);
    }

    return 0;
}

