#ifndef BLOODPRESSURE_HPP
#define BLOODPRESSURE_HPP
#include <stdio.h>
#include "Date.hpp"

class Blood {
protected:
	int sysp;
	int diastp;
	Date date;
public:
	Blood(const int, const int, const Date);
	Date getDate();
	int getSysp();
	int getDiastp();
	void print();
};
#endif