/*
 * Muestra.cpp
 *
 *  Created on: 2 de mar. de 2016
 *      Author: jorge
 */

#include "../../Headers/Model/Muestra.h"

using namespace std;

Muestra::Muestra(string path) {
	ifstream archivo(path.c_str());
	if(archivo.is_open()){
		string linea;
		Date fechaDolar;
		pair<float,float> precioDolar;
		while(getline(archivo,linea)){
			vector<string> tokens = Utils::GetInstance()->tokenize(linea,' ');
			fechaDolar.loadDate(*tokens.begin());
			//si tenemos precio de venta y de compra
			if(tokens.size() == 3){
				precioDolar = make_pair(atof((*(tokens.begin()+1)).c_str()),atof((*(tokens.begin()+2)).c_str()));
			//tenemos solo precio de compra
			}else{
				precioDolar = make_pair(atof((*(tokens.begin()+1)).c_str()),0);
			}
			this->muestra.insert(pair<Date,pair<float,float> >(fechaDolar,precioDolar));
		}
	}else{
		cout << "el directorio que contiene los datos no se pudo abrir o es incorrecto" << endl;
	}
}

map<Date,pair<float,float> >* Muestra::getData(){
	return &this->muestra;
}
Muestra::~Muestra() {
	// TODO Auto-generated destructor stub
}
