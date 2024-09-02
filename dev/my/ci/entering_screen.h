// MTE MK1 (la Churrera) v5.0
// Copyleft 2010-2014, 2020 by the Mojon Twins

_x = 0; _y = 23; _t = 79;
_gp_gen = textos_pantallas[n_pant];
print_str ();

switch (n_pant) {
    // nariz
    case 0:
        // moco
		Coloca_Objeto (0, 5, 8);
		// pared de mocos
// debug falta crear script para poner obstaculos
		//Coloca_Objeto (32, 7, 7);
		//Coloca_Objeto (32, 6, 6);
		//Coloca_Objeto (32, 6, 5);
		//Coloca_Objeto (32, 5, 5);
		//Coloca_Objeto (32, 7, 6);
        break;
    // boca
	case 3:
        Coloca_Objeto (3, 9, 5);
		break;
    // boca estomago
	case 19:
        Coloca_Objeto (19, 10, 3);
		break;
}