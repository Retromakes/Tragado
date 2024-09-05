// MTE MK1 (la Churrera) v5.0
// Copyleft 2010-2014, 2020 by the Mojon Twins

void RedibujaInventario(void) {
    _x = 29; _y = 0; _t = flags[30];
    draw_coloured_tile ();
    invalidate_tile ();
}

void Recoge_Objeto(unsigned int n_objeto) {
    // el flag 31 es la caché donde guardo primero lo que hay actualmente en la casilla del item
    flags[31] = flags[n_objeto];

    // actualizo la flag de la pantalla actual con el contenido nuevo (lo que tenemos en el inventario)
    flags[n_objeto] = flags[30];

    // dibujo el tile actualizado con el objeto que soltaremos del inventario
    _x = p_tx; _y = p_ty; _t = flags[30]; _n = 128; update_tile ();

    // asigno el valor del objeto recogido (en la cache) en el flag de inventario
    flags[30] = flags[31];

    // muestro el objeto en el inventario
    RedibujaInventario();

    // aviso al motor que aun esta tocando un tile especial
    flags[31] = 1;
}

void Coloca_Objeto(unsigned int n_obj, unsigned int x_obj, unsigned int y_obj) {
    _x = x_obj; _y = y_obj; _t = flags[n_obj]; _n = 128; update_tile ();
}

void Coloca_Obstaculo(unsigned int sprite_obs, unsigned int x_obs, unsigned int y_obs) {
    _x = x_obs; _y = y_obs; _t = sprite_obs; _n = 8; update_tile ();
}

void Coloca_Acido_Higado(unsigned int x_obs, unsigned int y_obs) {
    _x = x_obs; _y = y_obs; _t = 25; _n = 1; update_tile ();
}

void Vacia(unsigned int x_obs, unsigned int y_obs) {
    _x = x_obs; _y = y_obs; _t = _n = 0; update_tile ();
}

void EscribeTextoPantalla(void) {
    _x = 0; _y = 23; _t = 79;
    _gp_gen = textos_pantallas[n_pant];
    print_str ();
}

void EscribeTexto(char *frase) {
    _x = 0; _y = 23; _t = 79;
    _gp_gen = frase;
    print_str ();
}

// debug esto no se usara
void EscribeNumero(unsigned int numero) {
    _x = 10; _y = 0; _t = numero;
    print_number2 ();
}