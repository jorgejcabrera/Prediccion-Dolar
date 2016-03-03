//============================================================================
// Name        : Predictor-Dolar.cpp
// Author      : Jorge
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include "../Headers/Model/Muestra.h"
#include <mgl2/mgl.h>

using namespace std;

int main() {
	/*Muestra* miMuestra = new Muestra("/home/jorge/Escritorio/Prediccion-Dolar/Datos/datos.txt");
	map<Date,pair<float,float> >* datos = miMuestra->getData();
	cout << "rompio antes del for"<<endl;
	for(map<Date,pair<float,float> >::iterator it = datos->begin(); it != datos->end(); ++it){
		cout << it->second.first<<"\n";
	}*/
	  mglGraph gr;
	  gr.FPlot("sin(pi*x)");
	  gr.WriteFrame("test.png");
	cout << "tp---taller" << endl; // prints tp---taller
	return 0;
}
