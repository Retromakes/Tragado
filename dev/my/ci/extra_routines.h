// MTE MK1 (la Churrera) v5.0
// Copyleft 2010-2014, 2020 by the Mojon Twins

if (n_pant == 0) {
    // NARIZ
    // si no ha despejado aun el obstaculo
    // y lleva en inventario el objeto 33 (bolsa de polvos)
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
            textos_pantallas[0] = " LA NARIZ AHORA ESTA DESPEJADA ";
            // suelto el objeto
            flags[30] = 0;
            // muestro el objeto en el inventario
            RedibujaInventario();
            // recargo el texto de la pantalla
            EscribeTextoPantalla();
        }
    }
} else if (n_pant == 3) {
    // BOCA
    // si no ha despejado aun el obstaculo
    // y lleva en inventario el objeto 34 (moco)
    if (diente_arreglado == 0 && flags[30] == 34) {
        if if (p_tx > 10 && p_tx < 12  && p_ty < 5) {
            // cambio el flag de diente_arreglado
            diente_arreglado = 1;
            // borro las tiles del obstaculo
            Vacia (11, 3);
            // actualizo el texto que se mostrara ahora al entrar
            textos_pantallas[3] = "RATONCITO ME DIO MONEDA OXIDADA";
            // suelto el objeto
            flags[30] = 0;
            // muestro el objeto en el inventario
            RedibujaInventario();
            // recargo el texto de la pantalla
            EscribeTextoPantalla();
        }
    }
} else if (n_pant == 4) {
    // GARGANTA
    // si no ha despejado aun el obstaculo
    // y lleva en inventario el objeto 18 (pastilla de menta)
    if (garganta_despejada == 0 && flags[30] == 18) {
        if ((p_tx == 6 || p_tx == 7) && p_ty > 6) {
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
}