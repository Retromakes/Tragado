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
        // taponado pulmones
        Coloca_Obstaculo (29, 2, 4);
        Coloca_Obstaculo (29, 2, 5);
        Coloca_Obstaculo (29, 12, 4);
        Coloca_Obstaculo (29, 12, 5);
		break;
    // pulmon izq
    case 15:
        // liquido pulmones
        Coloca_Obstaculo (30, 7, 8);
        Coloca_Obstaculo (30, 8, 8);
        Coloca_Obstaculo (30, 9, 8);
        Coloca_Obstaculo (30, 10, 8);
        break;
    // higado
	case 18:
        Coloca_Objeto (19, 2, 5);
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
        }
		break;
    // boca estomago
	case 19:
        if (moneda_introducida == 0) {
            Coloca_Objeto (19, 9, 3);
            Coloca_Obstaculo (23, 4, 3);
            Coloca_Obstaculo (23, 4, 4);
        }
	    break;
    // pancreas-riñones-intestinos
	case 22:
        Coloca_Objeto (22, 13, 2);
		break;
    // intestino final antes de ano
	case 28:
        Coloca_Objeto (28, 8, 8);
		break;
}