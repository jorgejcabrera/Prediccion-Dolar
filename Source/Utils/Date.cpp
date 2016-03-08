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

double Date::getDate(){
	return this->day + (this->year - 70) * 31536000 + ((this->year-69)/4)*86400 - ((this->year-1)/100)*86400 + ((this->year+299)/400)*86400;
}


string Date::toString(){
	stringstream ss;
	ss << day << "/"<<month << "/" <<year;
	return ss.str();
}

int Date::toInteger(){
	stringstream ss;
	ss << year << month << day;
	return atoi(ss.str().c_str());
}

float Date::toFloat(){
	stringstream ss;
	ss << year << month << day;
	return atof(ss.str().c_str());
}

void Date::loadDate(string sDate){
	vector<string> tokens = Utils::GetInstance()->tokenize(sDate,'/');
	this->day = atoi((*(tokens.begin())).c_str());
	this->month = atoi((*(tokens.begin()+1)).c_str());
	this->year = atoi((*(tokens.begin()+2)).c_str());
}

int Date::getDay(){
	return this->day;
}

int Date::getMonth(){
	return this->month;
}

int Date::getYear(){
	return this->year;
}

Date::~Date() {
	// TODO Auto-generated destructor stub
}
