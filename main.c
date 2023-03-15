#include <stdio.h>

// Öðrenci bilgilerini depolamak için bir struct tanýmladým ve altýna deðiþkenler tanýmladým
struct Ogrenci {
    char ad[25];
    char soyad[25];
    int numara;
    char adres[60];
};

int main() {
    // 5 adet öðrenci bilgisini depolayacak bir Ogrenci dizisi tanýmlayalým.
    struct Ogrenci ogrenciler[5];

    // Öðrenci bilgilerini kullanýcýdan döngü içinde aldým.
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

    // Öðrenci bilgilerini ekrana döngü þeklinde yazdýrdým.
    for(int i=0; i<5; i++) {
        printf("\n*****************\n\nOgrenci %d bilgileri:\n", i+1);
        printf("Ad: %s\n", ogrenciler[i].ad);
        printf("Soyad: %s\n", ogrenciler[i].soyad);
        printf("Numara: %d\n", ogrenciler[i].numara);
        printf("Adres: %s\n", ogrenciler[i].adres);
    }

    return 0;
}

