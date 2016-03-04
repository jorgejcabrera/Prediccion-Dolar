/*
 * Utils.h
 *
 *  Created on: 2 de mar. de 2016
 *      Author: jorge
 */

#ifndef UTILS_H_
#define UTILS_H_

#include <mgl2/mgl.h>

#include <iostream>
#include <vector>
#include <string>
#include <sstream>
#include <algorithm>
#include <map>
using namespace std;

class Utils {
	private:
		Utils();
		static Utils* instance;
	public:
		static Utils* GetInstance();
		vector<string> tokenize(string linea,char delim);
		virtual ~Utils();
};

#endif /* UTILS_H_ */
