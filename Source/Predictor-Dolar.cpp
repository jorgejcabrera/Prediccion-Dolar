//============================================================================
// Name        : Predictor-Dolar.cpp
// Author      : Jorge
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include "../Headers/Model/DolarSample.h"
#include <mgl2/mgl.h>

using namespace std;

int main() {
	DolarSample* miMuestra = new DolarSample("/home/jorge/Escritorio/Prediccion-Dolar/Datos/datos.txt");
	map<Date,pair<float,float> >* datos = miMuestra->getData();
	for(map<Date,pair<float,float> >::iterator it = datos->begin(); it != datos->end(); ++it){
		Date date = it->first;
		cout << date.toString() << " "<<it->second.first<<"\n";
	}
	cout << "tp---taller" << endl; // prints tp---taller
	return 0;
}
