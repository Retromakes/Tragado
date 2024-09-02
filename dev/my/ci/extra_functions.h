// MTE MK1 (la Churrera) v5.0
// Copyleft 2010-2014, 2020 by the Mojon Twins

void Recoge_Objeto(unsigned int n_objeto) {
    // el flag 31 es la caché donde guardo primero lo que hay actualmente en la casilla del item
    flags[31] = flags[n_objeto];

    // actualizo la flag de la pantalla actual con el contenido nuevo (lo que tenemos en el inventario)
    flags[n_objeto] = flags[30];

    // dibujo el tile actualizado con el objeto que soltaremos del inventario
    _x = p_tx; _y = p_ty; _t = flags[30]; _n = 128; update_tile ();

    // asigno el valor del objeto recogido (en la cache) en el flag de inventario
    flags[30] = flags[31];

    // escribo texto
    //_x = 0; _y = 23; _t = 79; _gp_gen = "     HAS RECOGIDO LA BOLSITA   "; print_str ();

    // muestro el objeto en el inventario
    _x = 29; _y = 0; _t = flags[30];
    draw_coloured_tile ();
    invalidate_tile ();
    // aviso al motor que aun esta tocando un tile especial
    flags[31] = 1;
}