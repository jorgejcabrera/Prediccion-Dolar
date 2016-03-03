/*
 * Muestra.h
 *
 *  Created on: 2 de mar. de 2016
 *      Author: jorge
 */

#ifndef MUESTRA_H_
#define MUESTRA_H_

#include "../../Headers/Utils/Date.h"

#include <fstream>
#include <map>

using namespace std;

class Muestra {
	private:
		/*
		 * el primer campo del valor corresponde al precio de compra y el segundo al precio de venta
		 * */
		map<Date,pair<float,float> > muestra;
	public:
		Muestra(string path);
		map<Date,pair<float,float> >* getData();
		virtual ~Muestra();
};

#endif /* MUESTRA_H_ */
