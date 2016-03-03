/*
 * Utils.cpp
 *
 *  Created on: 2 de mar. de 2016
 *      Author: jorge
 */

#include "../../Headers/Utils/Utils.h"
Utils* Utils::instance = NULL;

Utils::Utils() {
	// TODO Auto-generated constructor stub
}

Utils* Utils::GetInstance(){
	if(!instance){
		instance = new Utils();
	}
	return instance;
}

vector<string> Utils::tokenize(string linea,char delim){
	vector<string> tokens;
	stringstream ss(linea);
	string token;
	while(getline(ss,token,delim)){
		tokens.push_back(token);
	}
	return tokens;
}

Utils::~Utils() {
	// TODO Auto-generated destructor stub
}
