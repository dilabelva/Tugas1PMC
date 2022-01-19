#include <stdio.h>
#include <stdlib.h>

int main()
{
    //deklarasi A = 0 dan B = 0. Kondisi ketika ember A dan ember B kosong
    int A = 0;
    int B = 0;

    //print soal sekali
    printf("WATER JUG GAME\n");
    printf("Tersedia dua buah ember, ember A berkapasitas maks 5 liter dan ember B berkapasitas maks 3 liter.\n");
    printf("Anda diminta untuk mengambil air dari wadah lain menggunakan kedua ember tersebut,\n");
    printf("dengan syarat hanya boleh melakukan instruksi yang tersedia.\n");

    do{
            printf("Anda dinyatakan menang jika ember A atau B berisi 4 liter air.\n"); //print syarat menang
            printf("Saat ini, air di ember A = %d liter ", A); //isi air pada ember A saat ini
            printf("dan air di ember B = %d liter.\n", B); //isi air pada ember B saat ini
            printf("\n"); //space 1 line

            //print instruksi
            printf("--Instruksi yang dapat dilakukan--\n");
            printf("1. Mengisi ember A (5 liter) sampai penuh. \n");
            printf("2. Mengisi ember B (3 liter) sampai penuh. \n");
            printf("3. Mengosongkan ember A. \n");
            printf("4. Mengosongkan ember B. \n");
            printf("5. Menuangkan isi ember A ke ember B (maks 3 liter).\n");
            printf("6. Menuangkan isi ember B ke ember A (maks 5 liter). \n");

            //input instruksi
            int instruksi;
            printf("Pilih nomor instruksi : ");
            scanf("%d", &instruksi);

            //conditional untuk setiap instruksi
            if (instruksi == 1){
                A = 5;
            }
            else if (instruksi == 2){
                B = 3;
            }
            else if (instruksi == 3){
                A = 0;
            }
            else if (instruksi == 4){
                B = 0;
            }
            else if (instruksi == 5){
                while ((B < 3) && (A>0)){ //jika B belum penuh, B akan terus terisi sebanyak 1 liter dan A berkurang sebanyak 1 liter
                    B = B + 1;
                    A = A - 1;
                }
            }
            else if (instruksi == 6){
                while ((A < 5) && (B>0)){ //jika A belum penuh, B akan terus berkurang sebanyak 1 liter dan A terus terisi
                    B = B - 1;
                    A = A + 1;
                }
            }

            printf("\n"); //space 1 line

    }
    while (A != 4); //B tidak mungkin bernilai 4, sehingga yang disyaratkan cukup A saja.
    //loop tidak akan berhenti sebelum A terisi sebanyak 4 liter

    printf("Selamat, Anda Menang!\n");
    printf("Saat ini, air di ember A = %d liter ", A); //isi air pada ember A saat ini
    printf("dan air di ember B = %d liter.\n", B); //isi air pada ember B saat ini

    return 0;
}
