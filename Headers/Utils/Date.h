/*
 * Date.h
 *
 *  Created on: 2 de mar. de 2016
 *      Author: jorge
 */

#include "Utils.h"

#ifndef DATE_H_
#define DATE_H_

using namespace std;

class Date {
	private:
		int day;
		int month;
		int year;

	public:
		Date();
		string toString();
		void loadDate(string sDate);
	    bool operator < (const Date& a) const{
	        return ( year < a.year || ( month < a.month && year == a.year) || (day < a.day && month == a.month && year == a.year));
	    }
		virtual ~Date();
};

#endif /* DATE_H_ */
