// MTE MK1 (la Churrera) v5.0
// Copyleft 2010-2014, 2020 by the Mojon Twins

const unsigned char decos_0 [] = { 0x37, 22, 0x47, 23, 0x15, 29, 0x16, 20, 0x17, 21, 0x66, 20, 0x67, 21, 0x77, 28, 0x12, 27, 0x13, 28, 0x22, 29, 0x23, 27, 0x32, 32, 0x33, 33, 0x91, 30, 0x92, 30, 0x93, 31, 0xff };
    const unsigned char decos_1 [] = { 0x72, 24, 0x82, 25, 0x92, 26, 0x16, 32, 0x17, 33, 0xD6, 32, 0xD7, 33, 0xff };
    const unsigned char decos_6 [] = { 0xA1, 30, 0XA2, 31, 0XA4, 35, 0xff};
    const unsigned char decos_18 [] = { 0x48, 34, 0xff };

    unsigned char *my_spacer  = "                                ";
    unsigned char *my_message = "12345678901234567890123456789012";

extern unsigned char nariz_despejada = 0;
extern unsigned char garganta_despejada = 0;
extern unsigned char diente_arreglado = 0;
extern unsigned char moneda_introducida = 0;
extern unsigned char pulmones_despejados = 0;
extern unsigned char higado_calmado = 0;
extern unsigned char lleva_preservativo = 0;
extern unsigned char estomago_despejado = 0;

extern unsigned char *textos_pantallas [0];

#asm
    .texto0 defm  "    LA NARIZ ESTA TAPONADA      ", 0
    .texto1 defm  "NO ERA SINUSITIS,ERA UN CARAMELO", 0
    .texto2 defm  "", 0

    .texto3 defm  " UNA BOCA CON UNA CARIES BRUTAL ", 0
    .texto4 defm  "ESO VERDE ES UN GARGAJO ATASCADO", 0
    .texto5 defm  "", 0

    .texto6 defm  "", 0
    .texto7 defm  "ESTE TIO SE HA TRAGADO UNA LATA?", 0
    .texto8 defm  "", 0

    .texto9 defm  "   PULMON IZQUIERDO SUPERIOR    ", 0
    .texto10 defm "CHUPA, CHUPA, QUE YO TE AVISO...", 0
    .texto11 defm "    PULMON DERECHO SUPERIOR     ", 0

    .texto12 defm "        PULMON IZQUIERDO        ", 0
    .texto13 defm "  ESOS PULMONES ESTAN TAPONADOS ", 0
    .texto14 defm "         PULMON DERECHO         ", 0

    .texto15 defm "   AGUA EN EL PULMON IZQUIERDO  ", 0
    .texto16 defm "    EL ESOFAGO TERMINA AQUI     ", 0
    .texto17 defm "   AGUA EN EL PULMON DERECHO    ", 0

    .texto18 defm "  HIGADO IRRITADO POR EL ORUJO  ", 0
    .texto19 defm " UNA BOLSITA CON POLVOS MAGICOS ", 0
    .texto20 defm "   EL ESTOMAGO ESTA TAPONADO    ", 0

    .texto21 defm "    ESTE RINON ESTA RESECO      ", 0
    .texto22 defm " HAY UN INHALADOR EN EL PANCREAS", 0
    .texto23 defm " ESTE RINON TAMBIEN ESTA RESECO ", 0

    .texto24 defm "  FINAL DEL INTESTINO DELGADO   ", 0
    .texto25 defm "EL INTESTINO APESTA! NO ENTRARE ", 0
    .texto26 defm "  CURVAS DEL INTESTINO DELGADO  ", 0

    .texto27 defm "  ESE APENDICE ESTA MUY PRIETO  ", 0
    .texto28 defm "      EL INTESTINO GRUESO       ", 0
    .texto29 defm "   CURVA DEL INTESTINO GRUESO   ", 0

    .texto30 defm "", 0
    .texto31 defm " EL ANO, OHIO, OJETER, OJALDRE  ", 0
    .texto32 defm "", 0

    .texto33 defm "", 0
    .texto34 defm "       EL MOJON SIN TWIN!       ", 0


    ._textos_pantallas
        defw texto0, texto1, texto2, texto3, texto4, texto5, texto6, texto7, texto8, texto9, texto10, texto11, texto12, texto13, texto14, texto15, texto16, texto17, texto18, texto19, texto20, texto21, texto22, texto23, texto24, texto25, texto26, texto27, texto28, texto29, texto30, texto31, texto32, texto33, texto34
#endasm