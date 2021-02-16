#ifndef PATIENT_HPP
#define PATIENT_HPP

#include <iostream>
#include <vector>
#include <string>

#include "Blood.hpp"
#include "Date.hpp"

using namespace std;

class Patient
{
protected:
	string name;
	vector<Blood> table;
public:
	Patient(string);
	void print();
	void printReport();
	
	void addRecord(Blood);
	
};
#endif