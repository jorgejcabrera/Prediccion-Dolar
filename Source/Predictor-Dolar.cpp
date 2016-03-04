//============================================================================
// Name        : Predictor-Dolar.cpp
// Author      : Jorge
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include "../Headers/Model/DolarSample.h"
#include "../Headers/Utils/MathGl.h"
using namespace std;

int main() {
	DolarSample* dolarSample = new DolarSample("/home/jorge/Escritorio/Prediccion-Dolar/Datos/datos.txt");
	map<Date,pair<float,float> >* dataDolar = dolarSample->getData();
	MathGl* mathGl = new MathGl();
	mathGl->drawData(dataDolar);
	cout << "tp---taller" << endl; // prints tp---taller
	return 0;
}
