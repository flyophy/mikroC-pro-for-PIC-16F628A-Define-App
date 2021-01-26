#define emre portb.f0  //portb.f0 emre olarak tanımlandı
#define metin portb.f1  //portb.f1 metin olarak tanımlandı
void main()
{
 trisb.f0=0;  //PORTB'nin 0. pini çıkış olarak ayarlandı
 trisb.f1=0;  //PORTB'nin 1. pini çıkış olarak ayarlandı
 while(1)     //Sonsuz döngü
         {
          emre=0;  //PORTB'nin 0. pini 0 yapıldı.
          metin=1; //PORTB'nin 1. pini 1 yapıldı.
          delay_ms(500);  //500 milisaniye beklendi.
          emre=1;  //PORTB'nin 0. pini 1 yapıldı.
          metin=0; //PORTB'nin 1. pini 0 yapıldı.
          delay_ms(500); //500 milisaniye beklendi.
         }
}
