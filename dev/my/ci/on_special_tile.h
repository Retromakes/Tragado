// MTE MK1 (la Churrera) v5.0
// Copyleft 2010-2014, 2020 by the Mojon Twins

// 19 boca estomago
if (n_pant == 19) {
    // tengo 2 objetos asi q miro tambien las coordenadas para saber cual toca
    if (p_tx == 10 && p_ty == 3) {
        // dibujo el tile actualizado con el objeto que soltamos
        _x = 10; _y = 3; _t = flags[1]; _n = 0; update_tile ();
        // asigno el valor del objeto en el flag de objetos
        flags[1] = 33;
        // escribo texto
        _x = 0; _y = 23; _t = 79; _gp_gen = "     HAS RECOGIDO LA BOLSITA   "; print_str ();
        // muestro el objeto en el inventario
        _x = 29; _y = 0; _t = flags[1];
        draw_coloured_tile ();
        invalidate_tile ();
    }
}