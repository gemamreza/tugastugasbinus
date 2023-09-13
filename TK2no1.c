/*
1.	Terdapat suatu tempat game online ingin membuat billing dengan aturan sebagai berikut:
a.	Harga tiap jamnya adalah Rp 10000
b.	Jika ada customer ingin main melebihi 4jam maka akan mendapat diskon 10%
c.	Jika ada customer ingin main melebihi 6jam maka akan mendapat diskon 15%
d.	Jika ada customer ingin main melebihi dari 8jam maka akan mendapat diskon 20%
e.	Diatas 10 jam maka akan diskon berlaku 25%.
Buatlah sistem tersebut untuk menghitung lama pemakian dan jumlah yang harus dibayarkan oleh customer game online tersebut
*/

#include <stdio.h>

int main() {
  int jam;
  int hargaPerJam = 10000;
  double hargaSebelumDiskon, hargaTotal, diskon, potonganHarga;

  printf("=============SELAMAT DATANG DI WARNET=============\n");

  printf("Masukkan lama bermain dalam jam:");
  scanf("%d", &jam);

  if (jam > 10 ) {
    diskon = 0.25;
  } else if (jam > 8) {
    diskon = 0.20;
  } else if (jam > 6) {
    diskon = 0.15;
  } else if (jam > 4) {
    diskon = 0.10;
  } else {
    diskon = 0.0;
  }

  printf("\n\n===================TOTAL BAYAR====================\n\n");

  hargaSebelumDiskon = hargaPerJam * jam;
  potonganHarga = hargaSebelumDiskon * diskon;
  hargaTotal = hargaSebelumDiskon - potonganHarga;

  printf("Anda bermain selama: %d jam\n", jam);
  printf("Harga perjam: Rp.%d.00\n", hargaPerJam);
  printf("Total harga: Rp.%.2f\n", hargaSebelumDiskon);
  printf("Anda berhak mendapat potongan harga sebanyak: Rp.%.2f\n", potonganHarga);
  printf("Maka total yang harus dibayar adalah: Rp.%.2f", hargaTotal);

  printf("\n\n==================================================");
  return 0;
}