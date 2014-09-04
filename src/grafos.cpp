#include "grafos.h"
#include <iostream>

template <typename V, typename A> Grafos<V,A>::Grafos(){
puntVertices=0;}                                             //Inicializa el puntero inical en 0
template <typename V, typename A> Grafos<V,A>::~Grafos(){
}

template <typename V, typename A> void Grafos<V,A>::agregarVertice(V valor)
{
  puntAux=puntVertices;

    while (puntAux!=0){
        puntAux=puntAux->sig;
    }

    if (puntAux==0){
        puntAux = new Vertice();
        puntAux->id=valor;
        puntAux->sig=0;
        puntAux->ady=0;
    }
}

template <typename V, typename A> void Grafos<V,A>::eliminarVertice(V target)
{
 while ((puntAux!=0) && (puntAux->id==target)){         // Avanzo hacia mi target
		puntAux=puntAux->sig;
 }
    if (puntAux!=0 && puntAux->id==target)
        puntAux=puntAux->sig;
}

template <typename V, typename A> bool Grafos<V,A>::existeVertice(V target) const
{
puntAux=puntVertices;

 while ((puntAux!=0) && (puntAux->id==target)){         // Avanzo hacia mi target
		puntAux=puntAux->sig;
 }
    if (puntAux!=0 && puntAux->id==target)
        return true
        else
            return false;
}


template class Grafos<int>;
template class Grafos<char>;
template class Grafos<string>;
