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
timer_frames = 25;    // Asume que el juego corre a 25 cuadros por segundo

// inventario inicial
flags[30] = 27;

// debug teletransporto a pantalla inicial
n_pant = 15;
gpx = 3 << 4; p_x = gpx << FIXBITS;
gpy = 5 << 4; p_y = gpy << FIXBITS;