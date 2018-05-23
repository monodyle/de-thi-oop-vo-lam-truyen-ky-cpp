#include "MonPhai.h"

MonPhai::MonPhai(){
	Ten = "";
}
MonPhai::MonPhai(std::string Name, NguHanh Class) {
	this->setTen(Name);
	He = *new NguHanh(Class);
}
MonPhai::~MonPhai(){}

std::string MonPhai::getTen() {
	return this->Ten;
}
void MonPhai::setTen(std::string Name) {
	if (Name == "") {
		// exception
		printf("Ten He khong duoc bo trong.");
	}
	else {
		Ten = Name;
	}
}
NguHanh MonPhai::getHe() {
	return this->He;
}
std::string MonPhai::getHeName() {
	return this->He.getTen();
}
void MonPhai::setHe(NguHanh Class) {
	this->He = *new NguHanh(Class);
}