#line 1 "D:/T�M YEDEKLER�M/Elektronik-20191028T093703Z-001/Elektronik/WEB S�TEM/G�THUB/#DEF�NE TANIMLAMA �RNE��/MyProject.c"


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
