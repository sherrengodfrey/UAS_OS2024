void dolar ()
{
    float rupiah, dolar;

    printf("Masukkan Jumlah Rupiah : ");
    scanf("%f", &rupiah);
    dolar = rupiah/15943;
    printf ("\t nilai konversi rupiah ke dolar adalah : $%f\n", dolar);
}

void rupiah ()
{
    float rupiah, dolar;

    printf("Masukkan Jumlah Dolar : ");
    scanf("%f", &dolar);
    rupiah = dolar*15943;
    printf ("\t nilai konversi rupiah ke dolar adalah : Rp%f\n", rupiah);
}
