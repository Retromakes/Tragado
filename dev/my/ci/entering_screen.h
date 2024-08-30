// MTE MK1 (la Churrera) v5.0
// Copyleft 2010-2014, 2020 by the Mojon Twins

_x = 0; _y = 23; _t = 79;
_gp_gen = textos_pantallas[n_pant];
print_str ();

switch (n_pant) {
    // boca
	case 3:
        _x = 9; _y = 5; _t = flags[3]; _n = 128; update_tile ();
		break;
    // boca estomago
	case 19:
        _x = 10; _y = 3; _t = flags[19]; _n = 128; update_tile ();
		break;
}