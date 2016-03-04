/*
 * MathGl.cpp
 *
 *  Created on: 3 de mar. de 2016
 *      Author: jorge
 */

#include "../../Headers/Utils/MathGl.h"

MathGl::MathGl() {
	this->gr = new mglGraph();
}

//TODO ver como inicializar los valores de la funcion. Son los datos que están en dolarSample
void MathGl::drawData(map<Date,pair<float,float> >* dolarSample){
	mglData y(30,30);						//es la función que vamos a dibujar
	gr->SubPlot(1,1,0,"");					//ancho, alto e ubicación del gráfico
	gr->Title("Valor del Peso / Fecha");
	gr->Label('x',"x");
	gr->Label('y',"y");
	gr->Axis();								//colocamos las subdivisiones en los ejes
	gr->Box();
	gr->Plot(y,"+");						//genera el gráfico
	gr->WriteFrame("test.png");
}


MathGl::~MathGl() {
	// TODO Auto-generated destructor stub
}
