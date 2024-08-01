#include <stdio.h>

// Fungsi untuk mempersiapkan bahan-bahan
void persiapanBahan() {
    printf("Persiapan Bahan:\n");
    printf("Bahan-bahan yang dipersiapkan: nasi matang, bawang putih, bawang merah, cabai, sayuran, telur, kecap, garam, minyak goreng\n\n");
}

// Fungsi untuk menumis bumbu
void menumisBumbu() {
    printf("Menumis Bumbu:\n");
    printf("    Tumis bawang putih dan bawang merah hingga harum.\n");
    printf("    Tambahkan cabai dan tumis lagi.\n\n");
}

// Fungsi untuk menambahkan telur
void menambahkanTelur() {
    printf("Menambahkan Telur:\n");
    printf("    Masukkan telur ke dalam wajan dan aduk hingga matang.\n\n");
}

// Fungsi untuk memasak nasi
void memasakNasi() {
    printf("Memasak Nasi:\n");
    printf("    Masukkan nasi matang ke dalam wajan dan aduk hingga merata.\n\n");
}

// Fungsi untuk menambahkan bumbu dan sayuran
void menambahkanBumbuDanSayuran() {
    printf("Menambahkan Bumbu dan Sayuran:\n");
    printf("    Tambahkan kecap, garam, dan sayuran ke dalam wajan.\n");
    printf("    Aduk rata dan masak hingga sayuran matang dan bumbu meresap.\n\n");
}

// Fungsi untuk menyajikan nasi goreng
void menyajikan() {
    printf("Menyajikan:\n");
    printf("    Angkat nasi goreng dari wajan dan sajikan di atas piring.\n");
}


int main() {
    // Langkah-langkah memasak nasi goreng
    persiapanBahan();
    menumisBumbu();
    menambahkanTelur();
    memasakNasi();
    menambahkanBumbuDanSayuran();
    menyajikan();

    return 0;
}