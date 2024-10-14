// MTE MK1 (la Churrera) v5.0
// Copyleft 2010-2014, 2020 by the Mojon Twins

void Coloca_Objeto(unsigned int n_obj, unsigned int x_obj, unsigned int y_obj) {
    _x = x_obj; _y = y_obj; _t = flags[n_obj]; _n = 128; update_tile ();
}

void Coloca_Obstaculo(unsigned int sprite_obs, unsigned int x_obs, unsigned int y_obs) {
    _x = x_obs; _y = y_obs; _t = sprite_obs; _n = 8; update_tile ();
}

void Coloca_Walkable(unsigned int sprite_obs, unsigned int x_obs, unsigned int y_obs) {
    _x = x_obs; _y = y_obs; _t = sprite_obs; _n = 0; update_tile ();
}


void Coloca_Acido_Estomago(unsigned int sprite_obs, unsigned int x_obs, unsigned int y_obs) {
    _x = x_obs; _y = y_obs; _t = sprite_obs; _n = 1; update_tile ();
}

void Coloca_Acido_Higado(unsigned int x_obs, unsigned int y_obs) {
    _x = x_obs; _y = y_obs; _t = 38; _n = 1; update_tile ();
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

void RedibujaInventario(void) {
    _x = 29; _y = 0; _t = flags[30];
    draw_coloured_tile ();
    invalidate_tile ();
    if (flags[30] == 0) {
         _x = 29; _y = 0; _t = 47;
        draw_coloured_tile ();
        invalidate_tile ();
    }
}

void Vacia_Estomago(void) {
                    // recargo la pantalla para mostrarla sin obstaculo
                o_pant = 99;
/*
    if (n_pant == 19) {
        // la pantalla de entrada al estomago
        Vacia (11, 4);
        Vacia (12, 4);
        Vacia (13, 4);
        Vacia (14, 4);

        Vacia (12, 5);
        Vacia (13, 5);
        Vacia (14, 5);
    } else if (n_pant == 20) {
        // la pantalla con el estomago en si
        Vacia (0, 4);
        Vacia (1, 4);
        Vacia (2, 4);
        Vacia (3, 4);
        Vacia (4, 4);
        Vacia (5, 4);
        Vacia (6, 4);
        Vacia (7, 4);
        Vacia (8, 4);
        Vacia (9, 4);
        Vacia (10, 4);
        Vacia (11, 4);
        Vacia (12, 4);

        Vacia (0, 5);
        Vacia (1, 5);
        Vacia (2, 5);
        Vacia (3, 5);
        Vacia (4, 5);
        Vacia (5, 5);
        Vacia (6, 5);
        Vacia (7, 5);
        Vacia (8, 5);
        Vacia (9, 5);
        Vacia (10, 5);
        Vacia (11, 5);
        Vacia (12, 5);
        Vacia (13, 5);

        Vacia (4, 6);
        Vacia (5, 6);
        Vacia (6, 6);
        Vacia (7, 6);
        Vacia (8, 6);
        Vacia (9, 6);
        Vacia (10, 6);
        Vacia (11, 6);
        Vacia (12, 6);
        Vacia (13, 6);

        Vacia (2, 7);
        Vacia (3, 7);
        Vacia (4, 7);
        Vacia (5, 7);
        Vacia (6, 7);
        Vacia (7, 7);
        Vacia (8, 7);
        Vacia (9, 7);
        Vacia (10, 7);
        Vacia (11, 7);
        Vacia (12, 7);
        
        Vacia (0, 8);
        Vacia (1, 8);
        Vacia (2, 8);
        Vacia (3, 8);
        Vacia (4, 8);
        Vacia (5, 8);
        Vacia (6, 8);
        Vacia (7, 8);
        Vacia (8, 8);
        Vacia (9, 8);
    }
    */
}

void Desactiva_Acido(void) {
    if (n_pant == 19) {
        // la pantalla de entrada al estomago
        Coloca_Walkable (11, 11, 4);
        Coloca_Walkable (11, 12, 4);
        Coloca_Walkable (11, 13, 4);
        Coloca_Walkable (11, 14, 4);

        Coloca_Walkable (12, 12, 5);
        Coloca_Walkable (12, 13, 5);
        Coloca_Walkable (12, 14, 5);
    } else if (n_pant == 20) {
        // la pantalla con el estomago en si
        Coloca_Walkable (11, 0, 4);
        Coloca_Walkable (11, 1, 4);
        Coloca_Walkable (11, 2, 4);
        Coloca_Walkable (11, 3, 4);
        Coloca_Walkable (11, 4, 4);
        Coloca_Walkable (11, 5, 4);
        Coloca_Walkable (11, 6, 4);
        Coloca_Walkable (11, 7, 4);
        Coloca_Walkable (11, 8, 4);
        Coloca_Walkable (11, 9, 4);
        Coloca_Walkable (11, 10, 4);
        Coloca_Walkable (11, 11, 4);
        Coloca_Walkable (11, 12, 4);

        Coloca_Walkable (12, 0, 5);
        Coloca_Walkable (12, 1, 5);
        Coloca_Walkable (12, 2, 5);
        Coloca_Walkable (12, 3, 5);
        Coloca_Walkable (12, 4, 5);
        Coloca_Walkable (12, 5, 5);
        Coloca_Walkable (12, 6, 5);
        Coloca_Walkable (12, 7, 5);
        Coloca_Walkable (12, 8, 5);
        Coloca_Walkable (12, 9, 5);
        Coloca_Walkable (12, 10, 5);
        Coloca_Walkable (12, 11, 5);
        Coloca_Walkable (12, 12, 5);
        Coloca_Walkable (12, 13, 5);

        Coloca_Walkable (12, 4, 6);
        Coloca_Walkable (12, 5, 6);
        Coloca_Walkable (12, 6, 6);
        Coloca_Walkable (12, 7, 6);
        Coloca_Walkable (12, 8, 6);
        Coloca_Walkable (12, 9, 6);
        Coloca_Walkable (12, 10, 6);
        Coloca_Walkable (12, 11, 6);
        Coloca_Walkable (12, 12, 6);
        Coloca_Walkable (12, 13, 6);

        Coloca_Walkable (12, 2, 7);
        Coloca_Walkable (12, 3, 7);
        Coloca_Walkable (12, 4, 7);
        Coloca_Walkable (12, 5, 7);
        Coloca_Walkable (12, 6, 7);
        Coloca_Walkable (12, 7, 7);
        Coloca_Walkable (12, 8, 7);
        Coloca_Walkable (12, 9, 7);
        Coloca_Walkable (12, 10, 7);
        Coloca_Walkable (12, 11, 7);
        Coloca_Walkable (12, 12, 7);

        Coloca_Walkable (12, 1, 8);
        Coloca_Walkable (12, 2, 8);
        Coloca_Walkable (12, 3, 8);
        Coloca_Walkable (12, 4, 8);
        Coloca_Walkable (12, 5, 8);
        Coloca_Walkable (12, 6, 8);
        Coloca_Walkable (12, 7, 8);
        Coloca_Walkable (12, 8, 8);
        Coloca_Walkable (12, 9, 8);
    }
}

void Activa_Acido(void) {
    if (n_pant == 19) {
        // la pantalla de entrada al estomago
        Coloca_Acido_Estomago (11, 11, 4);
        Coloca_Acido_Estomago (11, 12, 4);
        Coloca_Acido_Estomago (11, 13, 4);
        Coloca_Acido_Estomago (11, 14, 4);

        Coloca_Acido_Estomago (12, 12, 5);
        Coloca_Acido_Estomago (12, 13, 5);
        Coloca_Acido_Estomago (12, 14, 5);
    } else if (n_pant == 20) {
        // la pantalla con el estomago en si
        Coloca_Acido_Estomago (11, 0, 4);
        Coloca_Acido_Estomago (11, 1, 4);
        Coloca_Acido_Estomago (11, 2, 4);
        Coloca_Acido_Estomago (11, 3, 4);
        Coloca_Acido_Estomago (11, 4, 4);
        Coloca_Acido_Estomago (11, 5, 4);
        Coloca_Acido_Estomago (11, 6, 4);
        Coloca_Acido_Estomago (11, 7, 4);
        Coloca_Acido_Estomago (11, 8, 4);
        Coloca_Acido_Estomago (11, 9, 4);
        Coloca_Acido_Estomago (11, 10, 4);
        Coloca_Acido_Estomago (11, 11, 4);
        Coloca_Acido_Estomago (11, 12, 4);

        Coloca_Acido_Estomago (12, 0, 5);
        Coloca_Acido_Estomago (12, 1, 5);
        Coloca_Acido_Estomago (12, 2, 5);
        Coloca_Acido_Estomago (12, 3, 5);
        Coloca_Acido_Estomago (12, 4, 5);
        Coloca_Acido_Estomago (12, 5, 5);
        Coloca_Acido_Estomago (12, 6, 5);
        Coloca_Acido_Estomago (12, 7, 5);
        Coloca_Acido_Estomago (12, 8, 5);
        Coloca_Acido_Estomago (12, 9, 5);
        Coloca_Acido_Estomago (12, 10, 5);
        Coloca_Acido_Estomago (12, 11, 5);
        Coloca_Acido_Estomago (12, 12, 5);
        Coloca_Acido_Estomago (12, 13, 5);

        Coloca_Acido_Estomago (12, 4, 6);
        Coloca_Acido_Estomago (12, 5, 6);
        Coloca_Acido_Estomago (12, 6, 6);
        Coloca_Acido_Estomago (12, 7, 6);
        Coloca_Acido_Estomago (12, 8, 6);
        Coloca_Acido_Estomago (12, 9, 6);
        Coloca_Acido_Estomago (12, 10, 6);
        Coloca_Acido_Estomago (12, 11, 6);
        Coloca_Acido_Estomago (12, 12, 6);
        Coloca_Acido_Estomago (12, 13, 6);

        Coloca_Acido_Estomago (12, 2, 7);
        Coloca_Acido_Estomago (12, 3, 7);
        Coloca_Acido_Estomago (12, 4, 7);
        Coloca_Acido_Estomago (12, 5, 7);
        Coloca_Acido_Estomago (12, 6, 7);
        Coloca_Acido_Estomago (12, 7, 7);
        Coloca_Acido_Estomago (12, 8, 7);
        Coloca_Acido_Estomago (12, 9, 7);
        Coloca_Acido_Estomago (12, 10, 7);
        Coloca_Acido_Estomago (12, 11, 7);
        Coloca_Acido_Estomago (12, 12, 7);

        Coloca_Acido_Estomago (12, 1, 8);
        Coloca_Acido_Estomago (12, 2, 8);
        Coloca_Acido_Estomago (12, 3, 8);
        Coloca_Acido_Estomago (12, 4, 8);
        Coloca_Acido_Estomago (12, 5, 8);
        Coloca_Acido_Estomago (12, 6, 8);
        Coloca_Acido_Estomago (12, 7, 8);
        Coloca_Acido_Estomago (12, 8, 8);
        Coloca_Acido_Estomago (12, 9, 8);
    }    
}

void Recoge_Objeto(unsigned int n_objeto) {
    wyz_play_sound(5);
    /* debug */
    /* si esto funciona puedo dibujar los riñones con el mappy en lugar de a mano y borrarlos luego */

    //_x=10; _y=0; _t=0; _n=0; update_tile ();

    /* fin debug */

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

    // por defecto NO es el preservativo (es un flag necesario para saber si el agua mata o no)
    lleva_preservativo = 0;

    // si cogemos un objeto en la pantalla del estomago se activa o desactiva el acido (por si es el condon)
    // siempre que no hayamos vaciado ya el estomago
    if (n_pant == 19 && estomago_despejado == 0){
        if (flags[30] == 26) {
            Desactiva_Acido();
        } else {
            Activa_Acido();
        }
    } 

    // escribo frase con el objeto que ha recogido
    switch (flags[30]) {
        case 18:
            EscribeTexto("   TENGO: PASTILLA MENTOLADA    ");
            break;
        case 20:
            EscribeTexto("      TENGO: MONEDA OXIDADA     ");
            break;
        case 21:
            EscribeTexto("       TENGO: MASCARA FFP2      ");
            break;
        case 22:
            EscribeTexto("    TENGO: MONEDA BRILLANTE     ");
            break;
        case 24:
            EscribeTexto("   TENGO: BEBIDA SIN ALCOHOL    ");
            break;
        case 26:
            lleva_preservativo = 1;
            EscribeTexto("QUEPO DENTRO DE ESTE CONDON XXS!");
            break;
        case 27:
            EscribeTexto(" TENGO: CONDON XXS AGUJEREADO   ");
            break;
        case 28:
            EscribeTexto("        TENGO: INHALADOR        ");
            break;
        case 31:
            EscribeTexto("TENGO: PRESERVATIVO LLENO (AGUA)");
            break;
        case 33:
            EscribeTexto("TENGO: BOLSA CON POLVOS MAGICOS ");
            break;
        case 34:
            EscribeTexto("       TENGO: MOCO ESPESO       ");
            break;
        case 36:
            EscribeTexto("  TENGO: FORCEPS DE DILATACION  ");
            break;
    }
}
