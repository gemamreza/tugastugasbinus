#include <stdio.h>
#include <stdbool.h>

char grade(float nilai)
{
    if (nilai <= 55.00)
    {
        return 'E';
    }
    else if (nilai <= 65.00)
    {
        return 'D';
    }
    else if (nilai <= 75.00)
    {
        return 'C';
    }
    else if (nilai <= 85.00)
    {
        return 'B';
    }
    else if (nilai <= 100.00)
    {
        return 'A';
    }
}
struct dataMahasiswa
{
    char nama[50];
    float quis;
    float tugas;
    float absensi;
    float praktek;
    float uas;
    float rataRata;
    bool isPass;
};

int main()
{
    struct dataMahasiswa mahasiswa[100];
    int perulangan = 0;
    char opsi;
    bool lanjut = true;
    bool isNilaiValid = true;
    float rataRataAll = 0;

    printf("\n=======================\n");
    printf("MASUKKAN DATA MAHASISWA\n");
    printf("=======================\n\n");

    for (int i = 0; i < 100 && lanjut; i++)
    {
        printf("Masukkan nama mahasiswa: ");
        scanf(" %[^\n]%*c", mahasiswa[i].nama);
        do
        {
            printf("Masukkan nilai quiz: ");
            scanf(" %f", &mahasiswa[i].quis);
            if (mahasiswa[i].quis <= 0 || mahasiswa[i].quis > 100)
            {
                printf("Harap masukkan nilai didalam jangkauan 1-100!\n");
                isNilaiValid = false;
            }
            else
            {
                isNilaiValid = true;
            }
        } while (isNilaiValid == false);
        do
        {
            printf("Masukkan nilai tugas: ");
            scanf(" %f", &mahasiswa[i].tugas);
            if (mahasiswa[i].tugas <= 0 || mahasiswa[i].tugas > 100)
            {
                printf("Harap masukkan nilai didalam jangkauan 1-100!\n");
                isNilaiValid = false;
            }
            else
            {
                isNilaiValid = true;
            }
        } while (isNilaiValid == false);
        do
        {
            printf("Masukkan nilai absensi: ");
            scanf(" %f", &mahasiswa[i].absensi);
            if (mahasiswa[i].absensi <= 0 || mahasiswa[i].absensi > 100)
            {
                printf("Harap masukkan nilai didalam jangkauan 1-100!\n");
                isNilaiValid = false;
            }
            else
            {
                isNilaiValid = true;
            }
        } while (isNilaiValid == false);
        do
        {
            printf("Masukkan nilai praktek: ");
            scanf(" %f", &mahasiswa[i].praktek);
            if (mahasiswa[i].praktek <= 0 || mahasiswa[i].praktek > 100)
            {
                printf("Harap masukkan nilai didalam jangkauan 1-100!\n");
                isNilaiValid = false;
            }
            else
            {
                isNilaiValid = true;
            }
        } while (isNilaiValid == false);
        do
        {
            printf("Masukkan nilai UAS: ");
            scanf(" %f", &mahasiswa[i].uas);
            if (mahasiswa[i].uas <= 0 || mahasiswa[i].uas > 100)
            {
                printf("Harap masukkan nilai didalam jangkauan 1-100!\n");
                isNilaiValid = false;
            }
            else
            {
                isNilaiValid = true;
            }
        } while (isNilaiValid == false);
        printf("\nApakah anda ingin memasukkan data mahasiswa lagi (Y/N)? ");
        scanf(" %c", &opsi);

        perulangan++;

        if (perulangan < 10 && opsi != 'y' && opsi != 'Y')
        {
            printf("Masukkan minimal 10 data mahasiswa!\n");
        }
        else if (opsi != 'Y' && opsi != 'y' && opsi != 'N' && opsi != 'n')
        {
            printf("Masukkan input yang valid!");
        }
        else if (opsi == 'N' || opsi == 'n')
        {
            lanjut = false;
        }

        mahasiswa[i].rataRata = (mahasiswa[i].quis + mahasiswa[i].tugas +
                                 mahasiswa[i].absensi + mahasiswa[i].praktek +
                                 mahasiswa[i].uas) /
                                5;

        if (grade(mahasiswa[i].rataRata) == 'D' || grade(mahasiswa[i].rataRata) == 'E')
        {
            mahasiswa[i].isPass = false;
        }
        else
        {
            mahasiswa[i].isPass = true;
        }

        rataRataAll += mahasiswa[i].rataRata;
    }

    printf("\n==============REKAP NILAI MAHASISWA==============\n\n");
    rataRataAll /= perulangan;
    for (int i = 0; i < perulangan; i++)
    {
        printf("Nama mahasiswa: %s\n", mahasiswa[i].nama);
        printf("Nilai Quiz: %.2f & Grade = %c\n", mahasiswa[i].quis, grade(mahasiswa[i].quis));
        printf("Nilai Tugas: %.2f & Grade = %c\n", mahasiswa[i].tugas, grade(mahasiswa[i].tugas));
        printf("Nilai Absensi: %.2f & Grade = %c\n", mahasiswa[i].absensi, grade(mahasiswa[i].absensi));
        printf("Nilai Praktek: %.2f & Grade = %c\n", mahasiswa[i].praktek, grade(mahasiswa[i].praktek));
        printf("Nilai UAS: %.2f & Grade = %c\n", mahasiswa[i].uas, grade(mahasiswa[i].uas));
        printf("Rata-rata nilai: %.2f & Grade akhir = %c\n\n", mahasiswa[i].rataRata, grade(mahasiswa[i].rataRata));
        mahasiswa[i].isPass ? printf("Status: Lulus\n\n") : printf("Status: Tidak Lulus\n\n");
    }
    printf("==================================================\n\n");
    printf("Jumlah mahasiswa: %d\n", perulangan);
    printf("Rata rata nilai keseluruhan mahasiswa: %.2f\n\n", rataRataAll);

    return 0;
}
