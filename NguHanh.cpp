#include "NguHanh.h"

NguHanh::NguHanh(void) {
	Ten = "";
}
NguHanh::NguHanh(std::string Name, std::string tSinh, std::string tKhac) {
	this->setTen(Name);
	this->SetSinh(tSinh);
	this->SetKhac(tKhac);
}
NguHanh::~NguHanh(void) {}

int NguHanh::TuongSinh() {
	return 10;
}
int NguHanh::TuongKhac() {
	return 20;
}
std::string NguHanh::getTen() {
	return this->Ten;
}
void NguHanh::setTen(std::string Name) {
	if (Name == "") {
		// exception
		printf("Ten He khong duoc bo trong.");
	} else {
		Ten = Name;
	}
}
std::string NguHanh::getSinh() {
	return this->Sinh;
}
void NguHanh::SetSinh(std::string nHe) {
	this->Sinh = nHe;
}
std::string NguHanh::getKhac() {
	return this->Khac;
}
void NguHanh::SetKhac(std::string nHe) {
	this->Khac = nHe;
}