// MTE MK1 (la Churrera) v5.0
// Copyleft 2010-2014, 2020 by the Mojon Twins
/*

https://zx.remysharp.com/audio/#src=MjA4LDMy

ojo que la URL es para espectrum, y en amstrad todo es mas grave

Copiar el segundo y tercer digitos de Per en el primer valor de DB
el primer digito de Per en el primer digito del segundo valor seguido del volumen (V)
el tercer valor es directamente el del ruido

(ejemplo EFECTO3)
000 T-023 19 3
001 T-02E 1A 0
002 T-020 00 F
003 T-05A 1B E
004 T-035 00 F
005 T-042 1C 0
006 T-009 00 1
007 T-04C 1D 2
008 T-045 00 1
009 T-050 1E 0
010 T-00C 00 F
011 T-018 1F E
012 T-008 00 F
*/

#asm

; [0] Start
EFECTO0:	DB $78, $08, $00
			DB $7A, $09, $00
			DB $7C, $09, $00
			DB $7E, $09, $00
			DB $80, $09, $00
			DB $82, $09, $00
			DB $84, $09, $00
			DB $86, $09, $00
			DB $88, $09, $00
			DB $8A, $09, $00
			DB $8C, $09, $00
			DB $8E, $09, $00
			DB $90, $09, $00
			DB $92, $09, $00
			DB $94, $09, $00
			DB $96, $09, $00
			DB $98, $09, $00
			DB $9A, $09, $00
			DB $9C, $09, $00
			DB $9E, $09, $00
			DB $A0, $09, $00
			DB $A2, $09, $00
			DB $A4, $09, $00
			DB $A6, $09, $00
			DB $A8, $09, $00
			DB $AA, $09, $00
			DB $AC, $09, $00
			DB $AE, $09, $00
			DB $AF, $09, $00
			DB $B0, $08, $00
			DB	$FF

; [1] Tile rompiscible golpeado
EFECTO1:		
				DB	$FF

; [2] Tile rompiscible destruído
EFECTO2:		
				DB	$FF

; [3] Empujar una caja / abrir un cerrojo
EFECTO3:	DB $35, $0F, 15
			DB $00, $0F, $00
			DB $31, $0F, $00
			DB $00, $0F, $00
			DB $00, $0F, $00
			DB $00, $0F, $00
			DB $29, $0F, $00
			DB $00, $0F, $00
			DB $00, $0F, $00
			DB $00, $0F, $00
			DB $25, $0F, $00
			DB $00, $0F, $00
			DB $00, $0F, $00
			DB $00, $0F, $00
			DB $0C, $0F, $00
			DB $00, $0F, $00
			DB $FF

; [4] Disparar
EFECTO4:		
				DB	$FF

; [5] Coger un objeto coleccionable
EFECTO5:	DB $41, $0A, $0A
			DB $20, $00, $00
			DB $45, $0A, $00
			DB $20, $0A, $00
			DB $31, $0A, $00
			DB $18, $0A, $00
			DB $2D, $0A, $00
			DB	$FF

; [6] Matar a un enemigo
EFECTO6:		
				DB	$FF	

; [7] Golpear a un enemigo
EFECTO7:		
				DB	$FF

; [8] Modo "un sólo objeto", recoger
EFECTO8:		
				DB	$FF

; [9] Modo "un sólo objeto", ya tengo
EFECTO9:		
				DB	$FF	

; [10] Coger una llave
EFECTO10:		
				DB	$FF

; [11] Coger cualquier tipo de refill
EFECTO11:		
				DB	$FF

; [12] Sartar
EFECTO12:	DB $DA, $0F, $1F
			DB $DA, $0F, $00
			DB $D1, $0D, $00
			DB $D6, $0D, $00
			DB $C5, $0D, $00
			DB $B9, $0D, $00
			DB $9C, $0C, $00
			DB $83, $0C, $00
			DB $62, $0B, $00
			DB $39, $0A, $00
			DB $14, $0A, $00
			DB $00, $0A, $00
			DB $FF

; [13] Puncho
EFECTO13:	DB $2D, $3F, $0A
			DB $97, $1E, $00
			DB $CC, $0D, $00
			DB $FF, $2F, $00
			DB $80, $1E, $00
			DB $C0, $0D, $00
			DB $60, $0C, $00
			DB $30, $0B, $00
			DB $18, $0A, $00
			DB $0C, $08, $00
			DB $06, $06, $00
			DB $03, $04, $00
			DB $FF	

; [14] Ser golpeado por enemigo
EFECTO14:	DB $68, $3C, $1E
			DB $81, $3A, $00
			DB $91, $3F, $00
			DB $26, $4F, $00
			DB $36, $4E, $00
			DB $C3, $32, $00
			DB $E0, $3E, $14
			DB $E8, $3E, $00
			DB $70, $4E, $00
			DB $C2, $4F, $00
			DB $FF

#endasm

