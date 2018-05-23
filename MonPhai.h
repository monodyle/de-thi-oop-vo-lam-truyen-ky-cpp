#pragma once
#include <string>
#include "NguHanh.h"

class MonPhai
{
protected:
	std::string Ten;
	NguHanh He;
public:
	MonPhai();
	MonPhai(std::string, NguHanh);
	~MonPhai();

	std::string getTen();
	void setTen(std::string);
	NguHanh getHe();
	std::string getHeName();
	void setHe(NguHanh);
};

/*
class ThieuLam : public MonPhai {};
class ThienVuong : public MonPhai {};
class NguDoc : public MonPhai {};
class DuongMon : public MonPhai {};
class NgaMy : public MonPhai {};
class ThuyYen : public MonPhai {};
class CaiBang : public MonPhai {};
class ThienNhan : public MonPhai {};
class ConLon : public MonPhai {};
class VoDang : public MonPhai {};
*/

/*
	MonPhai *ThieuLam = new MonPhai("Thieu Lam", *Kim);
	MonPhai *ThienVuong = new MonPhai("Thien Vuong", *Kim);
	MonPhai *NguDoc = new MonPhai("Ngu Doc", *Moc);
	MonPhai *DuongMon = new MonPhai("Duong Mon", *Moc);
	MonPhai *NgaMy = new MonPhai("Nga My", *Thuy);
	MonPhai *ThuyYen = new MonPhai("Thuy Yen", *Thuy);
	MonPhai *CaiBang = new MonPhai("Cai Bang", *Hoa);
	MonPhai *ThienNhan = new MonPhai("Thien Nhan", *Hoa);
	MonPhai *ConLon = new MonPhai("Con Lon", *Tho);
	MonPhai *VoDang = new MonPhai("Vo Dang", *Tho);
*/