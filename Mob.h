#pragma once
#include <stdio.h>
#include <string>
#include "NguHanh.h"

class Mob
{
protected:
	std::string Ten;
	unsigned int CapDo;
	int SatThuong = 1;
	/*int He; // 0 = Kim; 1 = Moc; 2 = Thuy; 3 = Hoa; 4 = Tho*/
	NguHanh He;
public:
	Mob();
	Mob(std::string Name, unsigned int Level, int Class);
	~Mob() {}

	std::string getTen();
	void setTen(std::string Name);
	unsigned int getCapDo();
	void setCapDo(int Level);
	std::string getHeName();
	NguHanh getHe();
	void setHe(int Class);
	void setSatThuong(int Damage);
	int getSatThuong();

	virtual void TanCong(Mob);
	virtual void Xuat();
};