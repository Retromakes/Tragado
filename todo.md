Condiciones [IF](https://github.com/mojontwins/MK1/blob/master/docs/scripting.md#motor-de-cl%C3%A1usulas) (clausulas)

>NOTA: Una sola “=” y no dos “==” a diferencia de C#

>NOTA2: Los scripts PRESS_FIRE se ejecutarán en más supuestos además de cuando el jugador pulse acción: Si tenemos #define ENABLE_FIRE_ZONE en config.h, hemos definido una zona de acción con [SET_FIRE_ZONE](https://github.com/mojontwins/MK1/blob/master/docs/scripting.md#fire-zone) en nuestro script, y el jugador entra en dicha zona.

---

Comprobar [posicion](https://github.com/mojontwins/MK1/blob/master/docs/scripting.md#comprobaciones-sobre-la-posici%C3%B3n) (punto exacto o rango coords)

---

Para comprobar flags o valor:

    IF FLAG 5 = 3    -> (si la flag 5 vale 3)

    IF FLAG 5 = #3  -> (si la flag 5 vale el contenido de la flag 3)

    IF FLAG $TOTAL = #$NENEMS (esto seria si uso alias)

---

Definir [alias](https://github.com/mojontwins/MK1/blob/master/docs/scripting.md#alias)

    DEFALIAS

        $ALIAS = N

        ...

    END

---

[Dar valor, incrementar, intercambiar, etc](https://github.com/mojontwins/MK1/blob/master/docs/scripting.md#comandos-con-flags) variables con alias

    SET $LLAVE = 1

---

[Cambiar tiles](https://github.com/mojontwins/MK1/blob/master/docs/scripting.md#cambiar-tiles-del-%C3%A1rea-de-juego) (ojo que tengo que replantear la colocacion de tiles que tengo ahora segun el objeto haya sido recogido o no, algo aixi - [el flag $papel indica si l’hem agafat o no]:

    ENTERING SCREEN 6
    
        IF FLAG $PAPEL = 0
	
        THEN
	
            SET TILE (5, 4) = 22
	    
        END
	
        END

---

El [timer](https://github.com/mojontwins/MK1/blob/master/docs/scripting.md#el-timer)

---

El [inventario](https://github.com/mojontwins/MK1/blob/master/docs/scripting.md#el-inventario)

---

---


**HECHO**

[Desactivar boundaries y activar sistema solo un objeto](https://github.com/mojontwins/MK1/blob/master/docs/tutorial-cap07.md#directivas-generales)

---

