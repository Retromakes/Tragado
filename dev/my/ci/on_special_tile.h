// MTE MK1 (la Churrera) v5.0
// Copyleft 2010-2014, 2020 by the Mojon Twins

_x = 0; _y = 23; _t = 79; _gp_gen = "     HAS RECOGIDO LA BOLSITA   "; print_str ();

// INVENTARIO -> flags[30]

// compruebo que el item de esta pantalla no esta a 0 (recogido)
if (flags[n_pant] != 0) {
    switch (n_pant) {
        // boca
	    case 3:
           // el flag 31 es la caché donde guardo primero lo que hay actualmente en la casilla del item
            flags[31] = flags[3];

            // actualizo la flag de la pantalla actual con el contenido nuevo (lo que tenemos en el inventario)
            flags[3] = flags[30];

            // dibujo el tile actualizado con el objeto que soltaremos del inventario
            _x = 9; _y = 5; _t = flags[30]; _n = 128; update_tile ();

            // asigno el valor del objeto recogido (en la cache) en el flag de inventario
            flags[30] = flags[31];

            // escribo texto
            _x = 0; _y = 23; _t = 79; _gp_gen = "     HAS RECOGIDO LA BOLSITA   "; print_str ();

            // muestro el objeto en el inventario
            // esto sera una funcion porque se repite
            _x = 29; _y = 0; _t = flags[30];
            draw_coloured_tile ();
            invalidate_tile ();
		    break;
        // boca estomago
	    case 19:
            // tengo 2 objetos asi q miro tambien las coordenadas para saber cual toca
            if (p_tx == 10 && p_ty == 3) {
                // el flag 31 es la caché donde guardo primero lo que hay actualmente en la casilla del item
                flags[31] = flags[19];

                // actualizo la flag de la pantalla actual con el contenido nuevo (lo que tenemos en el inventario)
                flags[19] = flags[30];

                // dibujo el tile actualizado con el objeto que soltaremos del inventario
                _x = 10; _y = 3; _t = flags[30]; _n = 128; update_tile ();

                // asigno el valor del objeto recogido (en la cache) en el flag de inventario
                flags[30] = flags[31];

                // escribo texto
                _x = 0; _y = 23; _t = 79; _gp_gen = "     HAS RECOGIDO LA BOLSITA   "; print_str ();

                // muestro el objeto en el inventario
                // esto sera una funcion porque se repite
                _x = 29; _y = 0; _t = flags[30];
                draw_coloured_tile ();
                invalidate_tile ();
            }
		    break;
    }
}