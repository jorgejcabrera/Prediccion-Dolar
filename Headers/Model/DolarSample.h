/*
 * DolarSample.h
 *
 *  Created on: 2 de mar. de 2016
 *      Author: jorge
 */

#ifndef DOLAR_SAMPLE_H_
#define DOLAR_SAMPLE_H_

#include "../../Headers/Utils/Date.h"

#include <fstream>
#include <map>

using namespace std;

class DolarSample {
	private:
		/*
		 * el primer campo del valor corresponde al precio de compra y el segundo al precio de venta
		 * */
		map<Date,pair<float,float> > dolarSample;
	public:
		DolarSample(string path);
		map<Date,pair<float,float> >* getData();
		virtual ~DolarSample();
};

#endif /* DOLAR_SAMPLE_H_ */
