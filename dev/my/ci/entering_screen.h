// MTE MK1 (la Churrera) v5.0
// Copyleft 2010-2014, 2020 by the Mojon Twins

EscribeTextoPantalla();

switch (n_pant) {
    // nariz
    case 0:
        // moco
		Coloca_Objeto (0, 5, 8);
        // pared mocos secos
        if (nariz_despejada == 0) {
            Coloca_Obstaculo (32, 7, 7);
            Coloca_Obstaculo (32, 7, 6);
            Coloca_Obstaculo (32, 6, 6);
            Coloca_Obstaculo (32, 6, 5);
            Coloca_Obstaculo (32, 5, 5);
        } else {
            // redibujo inventario por si hemos reentrado para borrar obstaculos
            RedibujaInventario();
        }
        break;
    // sinusitis
	case 1:
        Coloca_Objeto (1, 1, 2);
		break;
    // boca
	case 3:
        if (diente_arreglado == 0) {
            Coloca_Obstaculo (19, 11, 3);
        }
	    break;
    // garganta
	case 4:
        if (garganta_despejada == 0) {
            Coloca_Obstaculo (15, 6, 8);
        }
		break;
    // laringe
	case 7:
        Coloca_Objeto (7, 8, 6);
		break;
    // laringe-pulmones
	case 13:
        Coloca_Objeto (13, 7, 6);
        if (pulmones_despejados == 0) {
            // taponado pulmones
            Coloca_Obstaculo (29, 2, 4);
            Coloca_Obstaculo (29, 2, 5);
            Coloca_Obstaculo (29, 12, 4);
            Coloca_Obstaculo (29, 12, 5);
        } else {
            // redibujo inventario por si hemos reentrado para borrar obstaculos
            RedibujaInventario();
        }
		break;
    // pulmon izq
    case 15:
        // liquido pulmones
        Coloca_Obstaculo (30, 7, 8);
        Coloca_Obstaculo (30, 8, 8);
        Coloca_Obstaculo (30, 9, 8);
        Coloca_Obstaculo (30, 10, 8);
        break;
    // pulmon der
    case 17:
        // liquido pulmones
        Coloca_Obstaculo (30, 4, 8);
        Coloca_Obstaculo (30, 5, 8);
        Coloca_Obstaculo (30, 6, 8);
        Coloca_Obstaculo (30, 7, 8);
        break;
    // higado
	case 18:
        Coloca_Objeto (18, 2, 5);
        if (higado_calmado == 0) {
            Coloca_Acido_Higado (3, 7);
            Coloca_Acido_Higado (4, 8);
            Coloca_Acido_Higado (5, 8);
            Coloca_Acido_Higado (6, 8);
            Coloca_Acido_Higado (7, 7);
            Coloca_Acido_Higado (8, 7);
            Coloca_Acido_Higado (9, 6);
            Coloca_Acido_Higado (10, 6);
            Coloca_Acido_Higado (11, 6);
            Coloca_Acido_Higado (12, 5);
            Coloca_Acido_Higado (13, 5);
        } else {
            // redibujo inventario por si hemos reentrado para borrar obstaculos
            RedibujaInventario();
        }
		break;
    // boca estomago
	case 19:
        Coloca_Objeto (19, 9, 3);
        if (moneda_introducida == 0) {
            Coloca_Obstaculo (23, 4, 4);
        }
        if (lleva_preservativo == 1) {
            Desactiva_Acido();
        } else {
            if (estomago_despejado == 0) {
                // dibujo el acido
                Activa_Acido();
            } else {
                // borro las tiles del obstaculo
                Vacia_Estomago();
            }
        }        
	    break;
    // interior estomago
	case 20:
        if (lleva_preservativo == 1) {
            Coloca_Obstaculo (15, 0, 8);
            Desactiva_Acido();
        } else {
            if (estomago_despejado == 1) {
                // si aun lleva el condon roto es que acabo de recargar pantalla para vaciarlo
                if (flags[30] == 27)
                {
                    // muestro el objeto en el inventario
                    RedibujaInventario();
                    // recargo el texto de la pantalla
                    EscribeTexto("EL ACIDO HA AGUJEREADO EL CONDON");
                }
                /*
                // borro las tiles del obstaculo
                Vacia_Estomago();
                */
            } else {
                Coloca_Obstaculo (15, 0, 8);
                Activa_Acido();
            }
        }
	    break;
    // riñon izq
	case 21:
        if (rinon1_despejado == 0) {
            Coloca_Obstaculo (25, 3, 1);
            Coloca_Obstaculo (25, 4, 1);
            Coloca_Obstaculo (25, 5, 1);
            Coloca_Obstaculo (25, 6, 1);

            Coloca_Obstaculo (25, 2, 2);
            Coloca_Obstaculo (25, 3, 2);
            Coloca_Obstaculo (25, 4, 2);
            Coloca_Obstaculo (25, 5, 2);
            Coloca_Obstaculo (25, 6, 2);

            Coloca_Obstaculo (25, 1, 3);
            Coloca_Obstaculo (25, 2, 3);
            Coloca_Obstaculo (25, 3, 3);
            Coloca_Obstaculo (25, 4, 3);
            Coloca_Obstaculo (25, 5, 3);

            Coloca_Obstaculo (25, 1, 4);
            Coloca_Obstaculo (25, 2, 4);
            Coloca_Obstaculo (25, 3, 4);
            Coloca_Obstaculo (25, 4, 4);
            Coloca_Obstaculo (25, 5, 4);

            Coloca_Obstaculo (25, 1, 5);
            Coloca_Obstaculo (25, 2, 5);
            Coloca_Obstaculo (25, 3, 5);
            Coloca_Obstaculo (25, 4, 5);
            Coloca_Obstaculo (25, 5, 5);
            Coloca_Obstaculo (25, 6, 5);

            Coloca_Obstaculo (25, 2, 6);
            Coloca_Obstaculo (25, 3, 6);
            Coloca_Obstaculo (25, 4, 6);
            Coloca_Obstaculo (25, 5, 6);
            Coloca_Obstaculo (25, 6, 6);

            Coloca_Obstaculo (25, 2, 7);
            Coloca_Obstaculo (25, 3, 7);
            Coloca_Obstaculo (25, 4, 7);
            Coloca_Obstaculo (25, 5, 7);
            Coloca_Obstaculo (25, 6, 7);

            Coloca_Obstaculo (25, 3, 8);
            Coloca_Obstaculo (25, 4, 8);
            Coloca_Obstaculo (25, 5, 8);
            Coloca_Obstaculo (25, 6, 8);
        } else if (flags[30] == 27) {
            // si lleva el condon roto puede ser porque ha humedecido el riñon asi que
            // muestro el objeto en el inventario
            RedibujaInventario();
        }
		break;
    // pancreas-riñones-intestinos
	case 22:
        Coloca_Objeto (22, 13, 2);
        if (rinon1_despejado == 0 || rinon2_despejado == 0) {
            // pongo caca seca
            Coloca_Obstaculo (6, 3, 7);
            Coloca_Obstaculo (6, 4, 7);
            Coloca_Obstaculo (6, 3, 8);
            Coloca_Obstaculo (6, 4, 8);
            Coloca_Obstaculo (6, 3, 9);
            Coloca_Obstaculo (6, 4, 9);
        }
		break;
    // riñon der
	case 23:
        if (rinon2_despejado == 0) {
            Coloca_Obstaculo (25,  8, 1);
            Coloca_Obstaculo (25,  9, 1);
            Coloca_Obstaculo (25, 10, 1);
            Coloca_Obstaculo (25, 11, 1);

            Coloca_Obstaculo (25,  8, 2);
            Coloca_Obstaculo (25,  9, 2);
            Coloca_Obstaculo (25, 10, 2);
            Coloca_Obstaculo (25, 11, 2);
            Coloca_Obstaculo (25, 12, 2);

            Coloca_Obstaculo (25,  9, 3);
            Coloca_Obstaculo (25, 10, 3);
            Coloca_Obstaculo (25, 11, 3);
            Coloca_Obstaculo (25, 12, 3);
            Coloca_Obstaculo (25, 13, 3);
            
            Coloca_Obstaculo (25,  9, 4);
            Coloca_Obstaculo (25, 10, 4);
            Coloca_Obstaculo (25, 11, 4);
            Coloca_Obstaculo (25, 12, 4);
            Coloca_Obstaculo (25, 13, 4);

            Coloca_Obstaculo (25,  8, 5);
            Coloca_Obstaculo (25,  9, 5);
            Coloca_Obstaculo (25, 10, 5);
            Coloca_Obstaculo (25, 11, 5);
            Coloca_Obstaculo (25, 12, 5);
            Coloca_Obstaculo (25, 13, 5);

            Coloca_Obstaculo (25,  8, 6);
            Coloca_Obstaculo (25,  9, 6);
            Coloca_Obstaculo (25, 10, 6);
            Coloca_Obstaculo (25, 11, 6);
            Coloca_Obstaculo (25, 12, 6);

            Coloca_Obstaculo (25,  8, 7);
            Coloca_Obstaculo (25,  9, 7);
            Coloca_Obstaculo (25, 10, 7);
            Coloca_Obstaculo (25, 11, 7);
            Coloca_Obstaculo (25, 12, 7);

            Coloca_Obstaculo (25,  8, 8);
            Coloca_Obstaculo (25,  9, 8);
            Coloca_Obstaculo (25, 10, 8);
            Coloca_Obstaculo (25, 11, 8);
        } else if (flags[30] == 27) {
            // si lleva el condon roto puede ser porque ha humedecido el riñon asi que
            // muestro el objeto en el inventario
            RedibujaInventario();
        }
		break;
    // intestino
	case 25:
        if( intestino_despejado == 0) {
            Coloca_Obstaculo (47, 7, 1);
        }
		break;
    // apendice
	case 27:
        if( apendice_dilatado == 0) {
            Coloca_Obstaculo (37, 1, 5);
            Coloca_Obstaculo (37, 2, 5);
            Coloca_Obstaculo (37, 3, 5);
            Coloca_Obstaculo (37, 4, 5);
        }
		break;
    // intestino final antes de ano
	case 28:
        Coloca_Objeto (28, 8, 8);
		break;
    // ojete
	case 31:
        if( apendice_dilatado == 0) {
            Coloca_Obstaculo (7, 7, 4);
        }
		break;

}