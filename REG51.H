<pre><div class="text_to_html">; Speziell Funktion Register (SFR) des 8051, 8031 und 8751
;----------------------------------------------------------
;
; interner Datenspeicher:    128 Byte RAM (<a href="https://else.dhbw-karlsruhe.de/moodle/mod/glossary/showentry.php?eid=50273&amp;displayformat=dictionary" title="Fragen: adresse" class="glossary autolink concept glossaryid313" target="_top">Adresse</a> 00...7Fh)
; interner Programmspeicher: bei 8051 = 4 kByte PROM (<a href="https://else.dhbw-karlsruhe.de/moodle/mod/glossary/showentry.php?eid=50273&amp;displayformat=dictionary" title="Fragen: adresse" class="glossary autolink concept glossaryid313" target="_top">Adresse</a> 000...0FFFh)
;                            bei 8751 = 4 kByte EPROM (<a href="https://else.dhbw-karlsruhe.de/moodle/mod/glossary/showentry.php?eid=50273&amp;displayformat=dictionary" title="Fragen: adresse" class="glossary autolink concept glossaryid313" target="_top">Adresse</a> 000...0FFFh)
;                            der 8031 besitzt keinen internen Programmspeicher
; Timer:                     zwei 16-Bit Timer
; serielle Schnittstelle:    eine zeichenorientierte 

; Der ASM51.EXE kennt die in diesem File enthaltenen Definitionen default.
;     (bis auf PCON --> hier hat der ASM51 einen Bug)
; Mit der Direktive NOMOD51 k?nnen diese Definitionen abgeschaltet werden.
; Nur dann akzeptiert der ASM51 andere PDF-Files.


;******* CODE *******
;RESET	CODE  0000	; diese CODE-Adressen kennt der ASM51.EXE trotz
;EXTI0	CODE  0003	; NOMOD51-Diretive default
;TIMER0	CODE  000Bh
;EXTI1	CODE  0013h
;TIMER1	CODE  001Bh
;SINT	CODE  0023h


;******* DATA *******
P0	DATA   80h	; Ports
P1	DATA   90h
P2	DATA  0A0h
P3	DATA  0B0h

PSW	DATA  0D0h	; CPU-Control
PCON	DATA   87h

ACC	DATA  0E0h	; Rechenregister
B	DATA  0F0h

SP	DATA   81h	; Pointer
DPL	DATA   82h
DPH	DATA   83h

TCON	DATA   88h	; Timer
TMOD	DATA   89h
TL0	DATA   8Ah
TL1	DATA   8Bh
TH0	DATA   8Ch
TH1	DATA   8Dh

IE	DATA  0A8h	; Interrupt-Control
IP	DATA  0B8h

SCON	DATA   98h	; serielle Schnittstelle
SBUF	DATA   99h



;******* BIT *******
; ..................... PSW --> D0
CY	BIT  0D7h
AC	BIT  0D6h
F0	BIT  0D5h
RS1	BIT  0D4h
RS0	BIT  0D3h
OV	BIT  0D2h
P	BIT  0D0h

; ..................... TCON --> 88
TF1	BIT  8Fh
TR1	BIT  8Eh
TF0	BIT  8Dh
TR0	BIT  8Ch
IE1	BIT  8Bh
IT1	BIT  8Ah
IE0	BIT  89h
IT0	BIT  88h

; ..................... IE --> A8
EA	BIT  0AFh
ES	BIT  0ACh
ET1	BIT  0ABh
EX1	BIT  0AAh
ET0	BIT  0A9h
EX0	BIT  0A8h

; ..................... IP --> B8
PS	BIT  0BCh
PT1	BIT  0BBh
PX1	BIT  0BAh
PT0	BIT  0B9h
PX0	BIT  0B8h

; ..................... P3 --> B0
RD	BIT  0B7h
WR	BIT  0B6h
T1	BIT  0B5h
T0	BIT  0B4h
INT1	BIT  0B3h
INT0	BIT  0B2h
TXD	BIT  0B1h
RXD	BIT  0B0h

; ..................... SCON --> 98
SM0	BIT  9Fh
SM1	BIT  9Eh
SM2	BIT  9Dh
REN	BIT  9Ch
TB8	BIT  9Bh
RB8	BIT  9Ah
TI	BIT  99h
RI	BIT  98h</div></pre>