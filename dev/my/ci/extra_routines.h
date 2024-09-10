// MTE MK1 (la Churrera) v5.0
// Copyleft 2010-2014, 2020 by the Mojon Twins

// si lleva el condon con agua
if (flags[30] == 31) {
    // comprueba el timer
    if (timer_on == 1 && timer_t < 1) {
        // cambio el objeto del inventario por el condon roto
        flags[30] = 27;
        // muestro el objeto en el inventario
        RedibujaInventario();
        // muestro texto avisando
        EscribeTexto("    EL CONDON SE HA VACIADO     ");
        timer_on = 0;     // Detener el temporizador y ponerlo a tope again
        timer_t = tiempo_condon_goteando;
    }
}

switch (n_pant) {
    // nariz
    case 0:
        // NARIZ
        // si no ha despejado aun el obstaculo y lleva en inventario el objeto 33 (bolsa de polvos)
        if (nariz_despejada == 0 && flags[30] == 33) {
            if (p_tx < 9 && p_ty > 4  && p_ty < 8) {
                // cambio el flag de nariz despejada
                nariz_despejada = 1;
                // borro las tiles del obstaculo
                Vacia (7, 7);
                Vacia (7, 6);
                Vacia (6, 6);
                Vacia (6, 5);
                Vacia (5, 5);
                // actualizo el texto que se mostrara ahora al entrar
                textos_pantallas[0] = " LA NARIZ AHORA ESTA DESPEJADA  ";
                // suelto el objeto
                flags[30] = 0;
                // muestro el objeto en el inventario
                RedibujaInventario();
                // recargo el texto de la pantalla
                EscribeTextoPantalla();
            }
        }
        break;
    case 3:
        // BOCA
        // si no ha despejado aun el obstaculo y lleva en inventario el objeto 34 (moco)
        if (diente_arreglado == 0 && flags[30] == 34) {
            if (p_tx > 10 && p_tx < 12  && p_ty < 5) {
                // cambio el flag de diente_arreglado
                diente_arreglado = 1;
                // pongo el diente
                Coloca_Obstaculo (3, 11, 3);
                // actualizo el texto que se mostrara ahora al entrar
                textos_pantallas[3] = " RATONCITO ME DIO MONEDA OXIDADA";
                // suelto el objeto
                flags[30] = 20;
                // muestro el objeto en el inventario
                RedibujaInventario();
                // recargo el texto de la pantalla
                EscribeTextoPantalla();
            }
        }
        break;
    case 4:
        // GARGANTA
        // si no ha despejado aun el obstaculo y lleva en inventario el objeto 18 (pastilla de menta)
        if (garganta_despejada == 0 && flags[30] == 18) {
            if ((p_tx == 6 && p_ty == 7) || (p_tx == 7 && p_ty == 8)) {
                // cambio el flag de garganta_despejada
                garganta_despejada = 1;
                // borro las tiles del obstaculo
                Vacia (6, 8);
                // actualizo el texto que se mostrara ahora al entrar
                textos_pantallas[4] = "   MMMH... UNA GARGANTA LIMPIA  ";
                // suelto el objeto
                flags[30] = 0;
                // muestro el objeto en el inventario
                RedibujaInventario();
                // recargo el texto de la pantalla
                EscribeTextoPantalla();
            }
        }
        break;
    case 13:
        // LARINGE PULMONES
        // si no ha despejado aun el obstaculo y lleva en inventario el objeto 28 (inhalador)
        if (pulmones_despejados == 0 && flags[30] == 28) {
            if ((p_tx == 3 && p_ty > 2 && p_ty < 7) || (p_tx == 11 && p_ty > 2 && p_ty < 7)) {
                // cambio el flag de pulmones_despejados
                pulmones_despejados = 1;
                // borro las tiles del obstaculo
                Vacia (2, 4);
                Vacia (2, 5);

                Vacia (12, 4);
                Vacia (12, 5);
                // actualizo el texto que se mostrara ahora al entrar
                textos_pantallas[13]  = "  AHHH... PULMONES DESPEJADOS!  ";
                // suelto el objeto
                flags[30] = 0;
                // muestro el objeto en el inventario
                RedibujaInventario();
                // recargo el texto de la pantalla
                EscribeTextoPantalla();
            }
        }
        break;
    case 15:
    case 17:
        // PULMONES
        // si lleva en inventario el objeto 27 (condon roto) y se pone sobre el agua
        if (flags[30] == 27 && p_ty == 7) {
            // muestro texto avisando
            EscribeTexto("HE LLENADO EL CONDON, PERO GOTEA");
            // cambio el objeto del inventario por el condon con agua
            flags[30] = 31;
            // muestro el objeto en el inventario
            RedibujaInventario();
            // activo el timer
            // Duración en "segundos" del temporizador
            timer_t = tiempo_condon_goteando;
            // Activar el temporizador
            timer_on = 1;
        }
        break;
    case 18:
        // HIGADO
        // si no ha despejado aun el obstaculo y lleva en inventario el objeto 24 (lata)
        if (higado_calmado == 0 && flags[30] == 24) {
            // cambio el flag de higado_calmado
            higado_calmado = 1;
            // borro las tiles del acido que irritaba
            Vacia (3, 7);
            Vacia (4, 8);
            Vacia (5, 8);
            Vacia (6, 8);
            Vacia (7, 7);
            Vacia (8, 7);
            Vacia (9, 6);
            Vacia (10, 6);
            Vacia (11, 6);
            Vacia (12, 5);
            Vacia (13, 5);
            // actualizo el texto que se mostrara ahora al entrar
            textos_pantallas[18] = "EL REFRESCO HA CALMADO EL HIGADO";
            // suelto el objeto
            flags[30] = 0;
            // muestro el objeto en el inventario
            RedibujaInventario();
            // recargo el texto de la pantalla
            EscribeTextoPantalla();
        }
        break;
    case 19:
        // BOCA ESTOMAGO
        // si lleva en el inventario el objeto 20 (moneda oxidada)
        if (flags[30] == 20) {
            if (p_tx == 10 && p_ty == 3) {
                // actualizo el texto que se mostrara ahora al entrar
                EscribeTexto(" EL ACIDO HA LIMPIADO LA MONEDA ");
                // cambio la moneda oxidada por una limpia
                flags[30] = 22;
                // muestro el objeto en el inventario
                RedibujaInventario();
            }
        } else if (moneda_introducida == 0 && flags[30] == 22) {
            if (p_tx == 5 && p_ty == 4) {
                // cambio el flag de moneda_introducida
                moneda_introducida = 1;
                // borro la tile del obstaculo
                Vacia (4, 4);
                // actualizo el texto que se mostrara ahora al entrar
                textos_pantallas[19] = " ENTRE EL HIGADO Y EL ESTOMAGO  ";
                // suelto el objeto
                flags[30] = 0;
                // muestro el objeto en el inventario
                RedibujaInventario();
                // recargo el texto de la pantalla
                EscribeTextoPantalla();
            }
        }
        break;
    case 20:
        // ESTOMAGO
        // si no ha despejado aun el obstaculo y lleva en inventario el objeto 26 (preservativo xxs)
        if (estomago_despejado == 0 && flags[30] == 26) {
            if (p_tx == 1 && p_ty == 8) {
                // cambio el flag de estomago_despejado
                estomago_despejado = 1;
                // borro las tiles del obstaculo
                Vacia_Estomago();
                // actualizo el texto que se mostrara ahora al entrar
                textos_pantallas[20] = "   EL ESTOMAGO YA ESTA LIMPIO   ";
                // suelto el objeto y cojo el preservativo roto
                flags[30] = 27;
                // cambio el preservativo a roto
                lleva_preservativo = 0;   
                // muestro el objeto en el inventario
                RedibujaInventario();
                // recargo el texto de la pantalla
                EscribeTexto(" VAYA, EL CONDON XXS SE HA ROTO ");
            }
        }
        break;
}