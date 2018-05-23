#pragma once
#include <string>
class NguHanh
{
protected:
	std::string Ten;
	std::string Sinh;
	std::string Khac;
public:
	NguHanh();
	NguHanh(std::string, std::string, std::string);
	~NguHanh();
	
	int TuongSinh();
	int TuongKhac();
	std::string getTen();
	void setTen(std::string Name);
	std::string getSinh();
	void SetSinh(std::string);
	std::string getKhac();
	void SetKhac(std::string);
};

/*
class Kim : public NguHanh {};
class Moc : public NguHanh {};
class Thuy : public NguHanh {};
class Hoa : public NguHanh {};
class Tho : public NguHanh {};
*/

/*
NguHanh *Kim = new NguHanh("Kim", "Thuy", "Moc");
NguHanh *Moc = new NguHanh("Moc", "Hoa", "Tho");
NguHanh *Thuy = new NguHanh("Thuy", "Moc", "Hoa");
NguHanh *Hoa = new NguHanh("Hoa", "Tho", "Kim");
NguHanh *Tho = new NguHanh("Tho", "Kim", "Thuy");
*/