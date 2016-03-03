/*
 * Date.cpp
 *
 *  Created on: 2 de mar. de 2016
 *      Author: jorge
 */

#include "../../Headers/Utils/Date.h"

Date::Date() {
	day = month = year = 0;

}

string Date::toString(){
	stringstream ss;
	ss << day << "/"<<month << "/" <<year;
	return ss.str();
}

void Date::loadDate(string sDate){
	vector<string> tokens = Utils::GetInstance()->tokenize(sDate,'/');
	this->day = atoi((*(tokens.begin())).c_str());
	this->month = atoi((*(tokens.begin()+1)).c_str());
	this->year = atoi((*(tokens.begin()+2)).c_str());
}

Date::~Date() {
	// TODO Auto-generated destructor stub
}
