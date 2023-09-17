#include <stdio.h>

int main()
{
  int jam;
  int hargaPerJam = 10000;
  double hargaSebelumDiskon, hargaTotal, diskon, potonganHarga;
  int persentaseDiskon;

  printf("=============SELAMAT DATANG DI WARNET=============\n\n");

  printf("Masukkan lama bermain dalam jam:");
  scanf("%d", &jam);

  if (jam > 10)
  {
    diskon = 0.25;
  }
  else if (jam > 8)
  {
    diskon = 0.20;
  }
  else if (jam > 6)
  {
    diskon = 0.15;
  }
  else if (jam > 4)
  {
    diskon = 0.10;
  }
  else
  {
    diskon = 0.0;
  }

  hargaSebelumDiskon = hargaPerJam * jam;
  potonganHarga = hargaSebelumDiskon * diskon;
  hargaTotal = hargaSebelumDiskon - potonganHarga;
  persentaseDiskon = diskon * 100;

  if (jam <= 0)
  {
    printf("Masukkan angka yang valid!");
  }
  else if (jam >= 1)
  {
    printf("\n===================TOTAL BAYAR====================\n\n");

    printf("Anda bermain selama: %d jam\n", jam);
    printf("Harga perjam: Rp.%d.00\n", hargaPerJam);
    printf("Total harga: Rp.%.2f\n", hargaSebelumDiskon);
    if (diskon > 0.0)
    {
      printf("Anda mendapatkan diskon sebesar: %d%%\n", persentaseDiskon);
      printf("Anda berhak mendapat potongan harga sebanyak: Rp.%.2f\n", potonganHarga);
      printf("Maka total yang harus dibayar adalah: Rp.%.2f", hargaTotal);
    }
    printf("\n\n==================================================");
  }

  return 0;
}