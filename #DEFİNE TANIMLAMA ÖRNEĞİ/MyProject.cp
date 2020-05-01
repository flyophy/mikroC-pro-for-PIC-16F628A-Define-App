#line 1 "D:/TÜM YEDEKLERÝM/Elektronik-20191028T093703Z-001/Elektronik/WEB SÝTEM/GÝTHUB/#DEFÝNE TANIMLAMA ÖRNEÐÝ/MyProject.c"


void main()
{
 trisb.f0=0;
 trisb.f1=0;
 while(1)
 {
  portb.f0 =0;
  portb.f1 =1;
 delay_ms(500);
  portb.f0 =1;
  portb.f1 =0;
 delay_ms(500);
 }
}
