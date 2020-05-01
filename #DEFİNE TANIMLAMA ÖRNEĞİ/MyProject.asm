
_main:

;MyProject.c,3 :: 		void main()
;MyProject.c,5 :: 		trisb.f0=0;  //PORTB'nin 0. pini çýkýþ olarak ayarlandý
	BCF        TRISB+0, 0
;MyProject.c,6 :: 		trisb.f1=0;  //PORTB'nin 1. pini çýkýþ olarak ayarlandý
	BCF        TRISB+0, 1
;MyProject.c,7 :: 		while(1)     //Sonsuz döngü
L_main0:
;MyProject.c,9 :: 		emre=0;  //PORTB'nin 0. pini 0 yapýldý.
	BCF        PORTB+0, 0
;MyProject.c,10 :: 		metin=1; //PORTB'nin 1. pini 1 yapýldý.
	BSF        PORTB+0, 1
;MyProject.c,11 :: 		delay_ms(500);  //500 milisaniye beklendi.
	MOVLW      3
	MOVWF      R11+0
	MOVLW      138
	MOVWF      R12+0
	MOVLW      85
	MOVWF      R13+0
L_main2:
	DECFSZ     R13+0, 1
	GOTO       L_main2
	DECFSZ     R12+0, 1
	GOTO       L_main2
	DECFSZ     R11+0, 1
	GOTO       L_main2
	NOP
	NOP
;MyProject.c,12 :: 		emre=1;  //PORTB'nin 0. pini 1 yapýldý.
	BSF        PORTB+0, 0
;MyProject.c,13 :: 		metin=0; //PORTB'nin 1. pini 0 yapýldý.
	BCF        PORTB+0, 1
;MyProject.c,14 :: 		delay_ms(500); //500 milisaniye beklendi.
	MOVLW      3
	MOVWF      R11+0
	MOVLW      138
	MOVWF      R12+0
	MOVLW      85
	MOVWF      R13+0
L_main3:
	DECFSZ     R13+0, 1
	GOTO       L_main3
	DECFSZ     R12+0, 1
	GOTO       L_main3
	DECFSZ     R11+0, 1
	GOTO       L_main3
	NOP
	NOP
;MyProject.c,15 :: 		}
	GOTO       L_main0
;MyProject.c,16 :: 		}
L_end_main:
	GOTO       $+0
; end of _main
