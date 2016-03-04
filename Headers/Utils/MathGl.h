/*
 * MathGl.h
 *
 *  Created on: 3 de mar. de 2016
 *      Author: jorge
 */

#ifndef UTILS_MATHGL_H_
#define UTILS_MATHGL_H_

#include "Date.h"

using namespace std;

class MathGl {
	private:
		mglGraph* gr;
	public:
		MathGl();
		void drawData(map<Date,pair<float,float> >* dolarSample);
		virtual ~MathGl();
};

#endif /* UTILS_MATHGL_H_ */
