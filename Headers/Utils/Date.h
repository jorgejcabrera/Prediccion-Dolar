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
		int getDay();
		int getMonth();
		int getYear();
		double getDate();
		string toString();
		int toInteger();
		float toFloat();
		void loadDate(string sDate);
	    bool operator < (const Date& a) const{
	        return ( year < a.year || ( month < a.month && year == a.year) || (day < a.day && month == a.month && year == a.year));
	    }
	    friend ostream& operator << (ostream& os, const Date& m){
	        os << m.day <<"/" << m.month<<"/"<<m.year;
	        return os ;
	    }
		virtual ~Date();
};

#endif /* DATE_H_ */
