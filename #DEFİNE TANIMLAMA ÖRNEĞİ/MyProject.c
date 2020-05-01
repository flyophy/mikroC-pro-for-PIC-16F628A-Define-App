#define emre portb.f0  //portb.f0 osman olarak tanýmlandý
#define metin portb.f1  //portb.f1 kazim olarak tanýmlandý
void main()
{
 trisb.f0=0;  //PORTB'nin 0. pini çýkýþ olarak ayarlandý
 trisb.f1=0;  //PORTB'nin 1. pini çýkýþ olarak ayarlandý
 while(1)     //Sonsuz döngü
         {
          emre=0;  //PORTB'nin 0. pini 0 yapýldý.
          metin=1; //PORTB'nin 1. pini 1 yapýldý.
          delay_ms(500);  //500 milisaniye beklendi.
          emre=1;  //PORTB'nin 0. pini 1 yapýldý.
          metin=0; //PORTB'nin 1. pini 0 yapýldý.
          delay_ms(500); //500 milisaniye beklendi.
         }
}