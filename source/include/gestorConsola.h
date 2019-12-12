#include "utiles.h"



class gestorConsola {
	#ifdef WIN32
	HANDLE salidaConsola;
	DWORD dwBytesWritten = 0;
	#endif
public:
	gestorConsola();


	// cambia la posicion del cursor (consola) a la ubicacion indicada en coordenadas 2D 
	void gotoXY(int x, int y);


	//en esta funcion no ocupamos restaurar los colores a diferiencia de la original,tambien elige por defecto fondo negro
	#ifdef WIN32
	void cambiarColor(color texto, color fondo = negro);
	#endif

	//nos permite mostrar/ocultar el cursor, por defecto lo muestra
	void mostrarCursor(bool mostrarCursor = true);
	void gestorConsola::limpiarPantalla();

	#ifdef WIN32
	void setConsola(HANDLE consola);
	HANDLE getConsola();
	#endif

	~gestorConsola();

};





