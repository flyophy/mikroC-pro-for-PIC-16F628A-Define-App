#define emre portb.f0  //portb.f0 osman olarak tan�mland�
#define metin portb.f1  //portb.f1 kazim olarak tan�mland�
void main()
{
 trisb.f0=0;  //PORTB'nin 0. pini ��k�� olarak ayarland�
 trisb.f1=0;  //PORTB'nin 1. pini ��k�� olarak ayarland�
 while(1)     //Sonsuz d�ng�
         {
          emre=0;  //PORTB'nin 0. pini 0 yap�ld�.
          metin=1; //PORTB'nin 1. pini 1 yap�ld�.
          delay_ms(500);  //500 milisaniye beklendi.
          emre=1;  //PORTB'nin 0. pini 1 yap�ld�.
          metin=0; //PORTB'nin 1. pini 0 yap�ld�.
          delay_ms(500); //500 milisaniye beklendi.
         }
}