// MTE MK1 (la Churrera) v5.0
// Copyleft 2010-2014, 2020 by the Mojon Twins

// INVENTARIO -> flags[30]
// mientras este tocando un tile especial el flags[31] se pone a 1, y cuando deja de tocarlo se pone a 0 (en player.h) para que no lance el if cada fotograma y cambie de objeto cada fotograma

// compruebo que el item de esta pantalla no esta a 0 (recogido)
// y que el flag 31 (tocando objeto especial) ya no esta activo
if ((flags[n_pant] != 0) && (flags[31] != 1)) {
    Recoge_Objeto(n_pant);
}