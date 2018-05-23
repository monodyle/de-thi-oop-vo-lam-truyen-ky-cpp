#pragma once
#include "Mob.h"
#include "MonPhai.h"

class NhanVat :
	public Mob
{
protected:
	MonPhai Phai;
public:
	NhanVat();
	NhanVat(std::string, int, int);
	~NhanVat();

	int TinhSatThuong();
	void TanCong(Mob);

	NguHanh getHe();
	std::string getHeName();
	MonPhai getMonPhai();
	std::string getMonPhaiName();
	void setMonPhai(int);

	void Xuat();
};