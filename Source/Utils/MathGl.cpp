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
	//función que vamos a dibujar
	mglData y;
	//TODO esto puede llegar a ser muy ineficiente si nuestra muestra es muy grande
	double* a = new double[dolarSample->size()];
	int i = 0;
	for(map<Date,pair<float,float> >::iterator itDolarCompra = dolarSample->begin(); itDolarCompra != dolarSample->end(); ++itDolarCompra){
		a[i] = itDolarCompra->second.first;
		i++;
	}
	//le cargamos a la funcion los valores. La función link a diferencia de Set no copia los datos sino que se guarda un puntero al array
	y.Link(a,dolarSample->size());
	//configuración de la imagen
	gr->Title("Valor del Peso / Fecha");
	gr->SetRanges(0,20,0,20,10);
	gr->SubPlot(1,1,0,"");
	gr->Label('x',"x");
	gr->Label('y',"y");
	//colocamos las subdivisiones en los ejes
	gr->Axis();
	gr->Box();
	//genera el gráfico
	gr->Plot(y,"+");
	gr->WriteFrame("test.png");
}


MathGl::~MathGl() {
	// TODO Auto-generated destructor stub
}
