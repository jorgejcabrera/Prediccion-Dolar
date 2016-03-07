/*
 * MathGl.cpp
 *
 *  Created on: 3 de mar. de 2016
 *      Author: jorge
 */

#include "../../Headers/Utils/MathGl.h"

MathGl::MathGl() {
}

//TODO ver como inicializar los valores de la funcion. Son los datos que están en sample
void MathGl::drawData(map<Date,pair<float,float> >* sample,string title){
	mglData y;
	//TODO esto puede llegar a ser muy ineficiente si nuestra muestra es muy grande
	double* a = new double[sample->size()];
	int i = 0;
	for(map<Date,pair<float,float> >::iterator itDolarCompra = sample->begin(); itDolarCompra != sample->end(); ++itDolarCompra){
		a[i] = itDolarCompra->second.second;
		i++;
	}
	//le cargamos a la funcion los valores. La función link a diferencia de Set no copia los datos sino que se guarda un puntero al array
	y.Link(a,sample->size());
	//configuración de la imagen
	gr.SubPlot(1,1,0,"");
	gr.Title(title.c_str());
	gr.SetRanges(12000e5,14500e5,0,20);
	gr.SetTicksTime('x',0);
	gr.Axis();
	gr.Box("r");
	//genera el gráfico
	gr.Plot(y);
	stringstream fileName;
	fileName << title << ".png";
	gr.WriteFrame(fileName.str().c_str());
}

void MathGl::compareDate(){
	//configuración de la imagen
	gr.Title("Valor del Peso / Fecha");
	gr.SetRanges(0,25,0,25);
	gr.SubPlot(1,1,0,"");
	gr.Axis("xy");

	gr.ColumnPlot(2,0);
	gr.Box("r");

	gr.ColumnPlot(2,1);
	gr.Box("g");

	//genera el gráfico
	gr.Puts(mglPoint(0),"0","r");
	gr.Puts(mglPoint(0),"1","g");

	//gr.Plot(y);
	gr.WriteFrame("test.png");
}

MathGl::~MathGl() {
	// TODO Auto-generated destructor stub
}
