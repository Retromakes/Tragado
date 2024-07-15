// MTE MK1 (la Churrera) v5.0
// Copyleft 2010-2014, 2020 by the Mojon Twins

_t = 79;
_x = 0; _y = 23;

switch (n_pant) {
    case 0:
        _gp_gen = "    LA NARIZ ESTA TAPONADA      "; break;
    case 1:
        _gp_gen = " AHI HAY UNA PASTILLA MENTOLADA "; break;

    case 3:
        _gp_gen = " UNA BOCA CON UNA CARIES BRUTAL "; break;
    case 4:
        _gp_gen = "ESO VERDE ES UN GARGAJO ATASCADO"; break;

    case 7:
        _gp_gen = "ESTE TIO SE HA TRAGADO UNA LATA?"; break;

    case 9:
        _gp_gen = "   PULMON IZQUIERDO SUPERIOR    "; break;
    case 10:
        _gp_gen = "CHUPA, CHUPA, QUE YO TE AVISO..."; break;
    case 11:
        _gp_gen = "    PULMON DERECHO SUPERIOR     "; break;

    case 12:
        _gp_gen = "        PULMON IZQUIERDO        "; break;
    case 13:
        _gp_gen = "  ESOS PULMONES ESTAN TAPONADOS "; break;
    case 14:
        _gp_gen = "         PULMON DERECHO         "; break;

    case 15:
        _gp_gen = "   AGUA EN EL PULMON IZQUIERDO  "; break;
    case 16:
        _gp_gen = "    EL ESOFAGO TERMINA AQUI     "; break;
    case 17:
        _gp_gen = "   AGUA EN EL PULMON DERECHO    "; break;

    case 18:
        _gp_gen = "  HIGADO IRRITADO POR EL ORUJO  "; break;
    case 19:
        _gp_gen = "UNA BOLSITA CON POLVOS MAGICOS! "; break;
    case 20:
        _gp_gen = "   EL ESTOMAGO ESTA TAPONADO    "; break;

    case 21:
        _gp_gen = "    ESTE RIÑON ESTA RESECO      "; break;
    case 22:
        _gp_gen = " VAYA, EL CONDON XXS SE HA ROTO "; break;
    case 23:
        _gp_gen = " ESTE RIÑON TAMBIEN ESTA RESECO "; break;

    case 24:
        _gp_gen = "  FINAL DEL INTESTINO DELGADO   "; break;
    case 25:
        _gp_gen = "EL INTESTINO APESTA! NO ENTRARE "; break;
    case 26:
        _gp_gen = "  CURVAS DEL INTESTINO DELGADO  "; break;

    case 27:
        _gp_gen = "  ESE APENDICE ESTA MUY PRIETO  "; break;
    case 28:
        _gp_gen = "      EL INTESTINO GRUESO       "; break;
    case 29:
        _gp_gen = "   CURVA DEL INTESTINO GRUESO   "; break;

    case 31:
        _gp_gen = " EL ANO, OHIO, OJETER, OJALDRE  "; break;

    case 34:
        _gp_gen = "       EL MOJON SIN TWIN!       "; break;

}

print_str ();

// Force reenter
o_pant = 99;

