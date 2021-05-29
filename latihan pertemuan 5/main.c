#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>
/* Nama : Aldo Marcelino Naputra Padilah Lubis
   Nim  : A11.2017.10596
   Kelompok : A11.4113
   Materi : Daspro, pdp-5
*/
int main ()
{

    printf("-----------------------------------------------------------\n");

    ///program simulasi mesin ATM
    //description
   int pilihan,pin;
   float uang,sisa;
   printf("----------\n");
   printf("|........|\n");
   printf("|.151199.|\n");
   printf("|........|\n");
   printf("----------\n\n");
   printf("Ketikkan Pin di Atas Gan ....= ");scanf("%d",&pin);fflush(stdin);
   if (pin == 151199)
   {
       printf("++---------------------PIN benar ...----------------------++\n");
       printf("|\t1.Pek saldo............................................++\n");
       printf("|\t2.Penarikan............................................++\n");
       printf("|\t3.exit.................................................++\n");
       printf("|\t\t\t\t++\n");
       printf("++---------------------------------------------------------++\n");
       printf("masukkan pilihan anda gan....= ");scanf("%d",&pilihan);fflush(stdin);
       if (pilihan == 1)
       {
           printf("SALDO ANDA= 5.500.000\n");
       }
       else
        if (pilihan==2)
       {
           printf("ketikkan Jumlah uangnya..= ");scanf("%f",&uang);fflush(stdin);
           sisa = (550000 - uang);
           if (uang<=5500000)
           {

               printf("silahkan ambil Uang dan Kartu ATM anda\n ");
               printf("sisa saldo anda adalah= %f\n",sisa);
           }
           else
           {
               printf("Saldo tidak cukup gan....\n");
           }
       }
       else
        if (pilihan==3)
       {
           printf("Ok TERIMAKASIH TELAH MENGGUNAKAN LAYANAN INI GAN...\n");
       }
   }
    else
    {
        printf("XXXXXXXXXXXXXXXXXX  PIN SALAH BROTHER  XXXXXXXXXXXXXXXXXXXX\n");
    }

    return 0;
}
