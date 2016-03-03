/*
 * DolarSample.cpp
 *
 *  Created on: 2 de mar. de 2016
 *      Author: jorge
 */

#include "../../Headers/Model/DolarSample.h"

using namespace std;

DolarSample::DolarSample(string path) {
	ifstream myFile(path.c_str());
	if(myFile.is_open()){
		string line;
		Date dolarDate;
		pair<float,float> dolarValue;
		while(getline(myFile,line)){
			vector<string> tokens = Utils::GetInstance()->tokenize(line,' ');
			dolarDate.loadDate(*tokens.begin());
			//si tenemos precio de venta y de compra
			if(tokens.size() == 3){
				dolarValue = make_pair(atof((*(tokens.begin()+1)).c_str()),atof((*(tokens.begin()+2)).c_str()));
			}
			this->dolarSample.insert(pair<Date,pair<float,float> >(dolarDate,dolarValue));
		}
	}else{
		cout << "el directorio que contiene los datos no se pudo abrir o es incorrecto" << endl;
	}
}

map<Date,pair<float,float> >* DolarSample::getData(){
	return &this->dolarSample;
}
DolarSample::~DolarSample() {
	// TODO Auto-generated destructor stub
}
