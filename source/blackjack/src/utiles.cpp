﻿#include "utiles.h"
#include <locale>

#ifdef WIN32
void consolaUnicode(bool activada) {
	_setmode(_fileno(stdout), activada ? _O_U16TEXT : _O_TEXT);		// cambiamos a unicode en la consola para mostrar caracteres especiales
}
#endif

boton capturarEntrada() {
	#ifdef WIN32
	int entrada = _getch();

	//no capturaremos entrada innecesaria
	while (entrada == entradas::esc) {
			entrada = _getch();
	}



	switch (entrada) {
	case entradas::arriba: case entradas::W:
		return boton::Arriba;
		break;
	case entradas::abajo: case entradas::S:
		return boton::Abajo;
		break;
	case entradas::izquierda: case entradas::A:
		return boton::Izquierda;
		break;
	case entradas::derecha: case entradas::D:
		return boton::Derecha;
		break;
	case entradas::Q:
		return boton::Boton1;
		break;
	case entradas::E:
		return boton::Boton2;
		break;
	case entradas::Z:
		return boton::Boton3;
		break;
	case entradas::X:
		return boton::Boton4;
		break;
	case entradas::C:
		return boton::Boton5;
		break;
	case entradas::escape:
		return boton::Atras;
		break;
	case entradas::intro:
		return boton::Adelante;
	break;
	default:{
		return boton::Desconocido;
		break;
	}
	}
	#endif
	return boton::Desconocido;

}


wstring s2ws(string ref) {
	std::wstring_convert<std::codecvt_utf8_utf16<wchar_t>> converter;
	std::wstring resultado = converter.from_bytes(ref);
	return resultado;
}
string ws2s(wstring ref) {
	return std::string (ref.begin(), ref.end());
}