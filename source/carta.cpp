#include "carta.h"



carta::carta(){
    codigo = 0;
    palo = 0;
    bocaAbajo = true;
}

carta::carta(int codigo,int palo){
    this->codigo = codigo;
    this->palo = palo;
    this->bocaAbajo = true;
}
carta::carta(carta &ref){
    this->codigo = ref.codigo;
    this->palo = ref.palo;
    this->bocaAbajo = ref.bocaAbajo;
}


int carta::getcodigo(){
    return codigo;
}
int carta::getPalo(){
    return palo;
}
void carta::voltear(){
    bocaAbajo=false;
}

//este metodo no verifica si esta boca abajo,solo verifica si coincide
bool carta::equivalente(carta &ref){
    return this->codigo == ref.codigo && this->palo == ref.palo;
}


carta::~carta(){
}
