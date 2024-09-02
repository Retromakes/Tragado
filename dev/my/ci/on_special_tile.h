// MTE MK1 (la Churrera) v5.0
// Copyleft 2010-2014, 2020 by the Mojon Twins

_x = 0; _y = 23; _t = 79; _gp_gen =     "     TOCANDO UN OBJETO   "; print_str ();


// INVENTARIO -> flags[30]
// mientras este tocando un tile especial el flags[31] se pone a 1, y cuando deja de tocarlo se pone a 0 (en player.h) para que no lance el if cada fotograma y cambie de objeto cada fotograma

// compruebo que el item de esta pantalla no esta a 0 (recogido)
if ((flags[n_pant] != 0) && (flags[31] != 1)) {
    switch (n_pant) {
        // boca
	    case 3:
            Recoge_Objeto(3);
		    break;
        // boca estomago
	    case 19:
            // tengo 2 objetos asi q miro tambien las coordenadas para saber cual toca
            if (p_tx == 10 && p_ty == 3) {
                Recoge_Objeto(19);
            }
		    break;
    }
}