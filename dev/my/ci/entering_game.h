// MTE MK1 (la Churrera) v5.0
// Copyleft 2010-2014, 2020 by the Mojon Twins

// defino los objetos de cada pantalla
flags[0] = 34;
flags[1] = 18;
flags[7] = 24;
flags[13] = 21;
flags[18] = 26;
flags[19] = 33;
flags[22] = 28;
flags[28] = 36;

// velocidad del timer
timer_frames = 50;    // Asume que el juego corre a 25 cuadros por segundo

// inventario inicial
flags[30] = 0;

// debug teletransporto a pantalla inicial
/*
n_pant = 28;
gpx = 3 << 4; p_x = gpx << FIXBITS;
gpy = 4 << 4; p_y = gpy << FIXBITS;
*/
// variables a cero
nariz_despejada = 0;
garganta_despejada = 0;
diente_arreglado = 0;
moneda_introducida = 0;
pulmones_despejados = 0;
higado_calmado = 0;
lleva_preservativo = 0;
estomago_despejado = 0;
rinon1_despejado = 0;
rinon2_despejado = 0;
intestino_despejado = 0;
apendice_dilatado = 0;

tiempo_condon_goteando = 20;

textos_pantallas[0] = "    LA NARIZ ESTA TAPONADA      ";
textos_pantallas[1] = "NO ERA SINUSITIS,ERA UN CARAMELO";
textos_pantallas[3] = " UNA BOCA CON UNA CARIES BRUTAL ";
textos_pantallas[4] = "AHI ABAJO HAY UNA FLEMA ATASCADA";
textos_pantallas[7] = " ESTE SE HABIA TRAGADO UNA LATA?";
textos_pantallas[9] = "   PULMON IZQUIERDO SUPERIOR    ";
textos_pantallas[10] = "CHUPA, CHUPA, QUE YO TE AVISO...";
textos_pantallas[11] = "    PULMON DERECHO SUPERIOR     ";
textos_pantallas[12] = "        PULMON IZQUIERDO        ";
textos_pantallas[13] = "  ESOS PULMONES ESTAN TAPONADOS ";
textos_pantallas[14] = "         PULMON DERECHO         ";
textos_pantallas[15] = "   AGUA EN EL PULMON IZQUIERDO  ";
textos_pantallas[16] = "    EL ESOFAGO TERMINA AQUI     ";
textos_pantallas[17] = "   AGUA EN EL PULMON DERECHO    ";
textos_pantallas[18] = "  HIGADO IRRITADO POR EL ORUJO  ";
textos_pantallas[19] = " ENTRE EL HIGADO Y EL ESTOMAGO  ";
textos_pantallas[20] = "   EL ESTOMAGO ESTA TAPONADO    ";
textos_pantallas[21] = "    ESTE RINON ESTA RESECO      ";
textos_pantallas[22] = "    HAY CACA DURA AHI ABAJO     ";
textos_pantallas[23] = " ESTE RINON TAMBIEN ESTA RESECO ";
textos_pantallas[24] = "  FINAL DEL INTESTINO DELGADO   ";
textos_pantallas[25] = "EL INTESTINO APESTA! NO ENTRARE ";
textos_pantallas[26] = "  CURVAS DEL INTESTINO DELGADO  ";
textos_pantallas[27] = "  ESE APENDICE ESTA MUY PRIETO  ";
textos_pantallas[28] = "      EL INTESTINO GRUESO       ";
textos_pantallas[29] = "   CURVA DEL INTESTINO GRUESO   ";
textos_pantallas[31] = " EL OHIO/OJALDRE/OGT ESTA CERRAO";
textos_pantallas[34] = "       EL MOJON SIN TWIN!       ";
