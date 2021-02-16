#include "Patient.hpp"
#include "Blood.hpp"

Patient::Patient(string name) {
	this->name = name;
	this->table = vector<Blood>();
	
}


void Patient::printReport() {
	vector<Blood> max_abnormal = vector<Blood>();
	int max = 140;
	double mean_diastp = 0.0;
	for (int i = 0; i < this->table.size(); i++)
	{
		mean_diastp += table[i].getDiastp();
		
		if (table[i].getSysp() > max) {
			max_abnormal.clear();
			max_abnormal.push_back(table[i]);
			max = table[i].getSysp();
		}
		else if (table[i].getSysp() == max) {
			max_abnormal.push_back(table[i]);
		}
	}
	cout << "----Patient " << this->name << " report----" << endl;
	if (max_abnormal.size() == 0)
		cout << "No abnormal blood pressure." << endl;
	else {
		cout << "abnormal systolic pressure " << endl;
		for (int i = 0; i < max_abnormal.size(); i++) {
			cout << "\t";
			max_abnormal[i].print();
		}
	}
	cout << "Average diastolic pressure: " << mean_diastp / table.size() << endl;
	cout << "- - - - - - - - - - - - - " << endl;
}


void Patient::addRecord(Blood record) {
	this->table.push_back(record);
}

void Patient::print()
{
	cout << "-----Patient: " << this->name << "-----" << endl;
	for (int i = 0; i < this->table.size(); i++)
	{
		this->table[i].print();

	}
}
