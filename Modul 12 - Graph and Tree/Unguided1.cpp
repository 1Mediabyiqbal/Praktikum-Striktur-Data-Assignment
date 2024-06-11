#include <stdio.h>

typedef struct {
    char nama_68[20];
    int jarak_68[10];
} Kota_68;

int main() {
    int n_68;
    printf("Masukkan Jumlah Simpul : ");
    scanf("%d", &n_68);
    
    Kota_68 kota_68[n_68];
    for (int i_68 = 0; i_68 < n_68; i_68++) {
        printf("Masukkan Nama Simpul Ke-%d : ", i_68 + 1);
        scanf("%s", kota_68[i_68].nama_68);
    }
    
    printf("Masukkan Bobot Antar Simpul\n");
    for (int i_68 = 0; i_68 < n_68; i_68++) {
        for (int j_68 = 0; j_68 < n_68; j_68++) {
            printf("%s--->%s = ", kota_68[i_68].nama_68, kota_68[j_68].nama_68);
            scanf("%d", &kota_68[i_68].jarak_68[j_68]);
        }
    }
    
    printf("\n");

    // Header Kolom
    printf("%-8s", "");
    for (int i_68 = 0; i_68 < n_68; i_68++) {
        printf("%-8s", kota_68[i_68].nama_68);
    }
    printf("\n");

    // Matriks Bobot
    for (int i_68 = 0; i_68 < n_68; i_68++) {
        printf("%-8s", kota_68[i_68].nama_68);
        for (int j_68 = 0; j_68 < n_68; j_68++) {
            printf("%-8d", kota_68[i_68].jarak_68[j_68]);
        }
        printf("\n");
    }
    

    return 0;
}