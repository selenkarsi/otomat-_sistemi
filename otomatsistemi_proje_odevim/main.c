#include <stdio.h>

void menuGoster(int stok[], float fiyat[], char urunler[][20]);
void dosyayaYaz(char urun[], int adet, float toplam);
void urunSat(int secim, int stok[], float fiyat[], char urunler[][20]);

int main() {
    int secim;
    int stok[3] = {5, 3, 4};
    float fiyat[3] = {120.0, 80.0, 60.0};
    char urunler[3][20] = {"Orkide", "Zambak", "Menekse"};

    while (1) {
        menuGoster(stok, fiyat, urunler);

        printf("Seciminizi girin: ");
        scanf("%d", &secim);

        if (secim == 0) {
            printf("Cikis yapiliyor.\n");
            break;
        }
        else if (secim >= 1 && secim <= 3) {
            urunSat(secim, stok, fiyat, urunler);
        }
        else {
            printf("Hatali secim yaptiniz!\n");
        }
    }

    return 0;
}

// Menü gösterme
void menuGoster(int stok[], float fiyat[], char urunler[][20]) {
    int i;
    printf("CICEK OTOMATI\n");
    for (i = 0; i < 3; i++) {
        printf("%d - %s | Stok: %d | Fiyat: %.2f TL\n",
               i + 1, urunler[i], stok[i], fiyat[i]);
    }
    printf("0 - Cikis\n");
}

// Satýþ iþlemi
void urunSat(int secim, int stok[], float fiyat[], char urunler[][20]) {
    int adet;
    float toplam;

    printf("Kac adet almak istiyorsunuz: ");
    scanf("%d", &adet);

    if (adet <= stok[secim - 1]) {
        stok[secim - 1] -= adet;
        toplam = adet * fiyat[secim - 1];

        printf("%d adet %s alindi. Toplam: %.2f TL\n",
               adet, urunler[secim - 1], toplam);

        dosyayaYaz(urunler[secim - 1], adet, toplam);
    }
    else {
        printf("Yetersiz stok!\n");
    }
}

// Dosyaya yazma
void dosyayaYaz(char urun[], int adet, float toplam) {
    FILE *dosya;
    dosya = fopen("satislar.txt", "a");

    fprintf(dosya, "%d adet %s satildi. Toplam: %.2f TL\n",
            adet, urun, toplam);

    fclose(dosya);
}


