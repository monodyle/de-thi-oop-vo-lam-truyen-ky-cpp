#pragma once
#include "Mob.h"
class QuaiVat :
	public Mob
{
protected:
	int Loai; // 0 = normal; 1 = voss;
public:
	QuaiVat();
	QuaiVat(std::string, int, int, int);
	~QuaiVat();

	std::string getLoai();
	void setLoai(int);
	int TinhSatThuong();

	void TanCong(Mob);
	void Xuat();
};

