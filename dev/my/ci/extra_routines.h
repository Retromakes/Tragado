// MTE MK1 (la Churrera) v5.0
// Copyleft 2010-2014, 2020 by the Mojon Twins

if (n_pant == 0)
    // si no ha despejado aun el obstaculo
    // y lleva en inventario el objeto de la pantalla 19
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
            // suelto el objeto
            flags[30] = 0;
            // muestro el objeto en el inventario
            RedibujaInventario();
            // actualizo el texto que se mostrara ahora al entrar
            textos_pantallas[0] = " LA NARIZ AHORA ESTA DESPEJADA ";
            // recargo el texto de la pantalla
            EscribeTextoPantalla();
        }
    }
}