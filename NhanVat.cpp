#include "NhanVat.h"
#include <math.h>

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

NhanVat::NhanVat() {}
NhanVat::NhanVat(std::string Name, int Level, int Guild) {
	this->setTen(Name);
	this->setCapDo(Level);
	this->setMonPhai(Guild);
	this->TinhSatThuong();
}
NhanVat::~NhanVat() {}

int NhanVat::TinhSatThuong() {
	int Satthuong = this->getCapDo() * 5;
	this->setSatThuong(Satthuong);
	return Satthuong;
}

NguHanh NhanVat::getHe() {
	return this->getMonPhai().getHe();
}
std::string NhanVat::getHeName() {
	return this->getHe().getTen();
}

MonPhai NhanVat::getMonPhai() {
	return this->Phai;
}
std::string NhanVat::getMonPhaiName() {
	return this->Phai.getTen();
}

void NhanVat::setMonPhai(int Guild) {
	switch (Guild) {
	case 1:
		this->Phai = MonPhai::MonPhai("Thieu Lam", NguHanh::NguHanh("Kim", "Thuy", "Moc"));
		break;
	case 2:
		this->Phai = MonPhai::MonPhai("Thien Vuong", NguHanh::NguHanh("Kim", "Thuy", "Moc"));
		break;
	case 3:
		this->Phai = MonPhai::MonPhai("Ngu Doc", NguHanh::NguHanh("Moc", "Hoa", "Tho"));
		break;
	case 4:
		this->Phai = MonPhai::MonPhai("Duong Mon", NguHanh::NguHanh("Moc", "Hoa", "Tho"));
		break;
	case 5:
		this->Phai = MonPhai::MonPhai("Nga My", NguHanh::NguHanh("Thuy", "Moc", "Hoa"));
		break;
	case 6:
		this->Phai = MonPhai::MonPhai("Thuy Lien", NguHanh::NguHanh("Thuy", "Moc", "Hoa"));
		break;
	case 7:
		this->Phai = MonPhai::MonPhai("Cai Bang", NguHanh::NguHanh("Hoa", "Tho", "Kim"));
		break;
	case 8:
		this->Phai = MonPhai::MonPhai("Thien Nhan", NguHanh::NguHanh("Hoa", "Tho", "Kim"));
		break;
	case 9:
		this->Phai = MonPhai::MonPhai("Con Lon", NguHanh::NguHanh("Tho", "Kim", "Thuy"));
		break;
	case 10:
		this->Phai = MonPhai::MonPhai("Vo Dang", NguHanh::NguHanh("Tho", "Kim", "Thuy"));
		break;
	default:
		// exception
		printf("Khong co mon phai.");
		break;
	}
}

void NhanVat::TanCong(Mob muctieu) {
	// Debug: printf("[%s] ~ {%s}\n\nDone.\n\n", this->getMonPhai().getHe().getKhac().c_str(), muctieu.getHe().getTen().c_str());
	if (this->getMonPhai().getHe().getSinh() == muctieu.getHe().getTen()) {
		float SatThuong = this->getSatThuong() + (this->getSatThuong() * this->getHe().TuongSinh() / (float)100);
		printf("%s sat thuong tuong sinh %s: %.2f", this->getTen().c_str(), muctieu.getTen().c_str(), roundf(SatThuong * 100) / 100);
	}
	else if (this->getMonPhai().getHe().getKhac() == muctieu.getHe().getTen()) {
		float SatThuong = this->getSatThuong() + (this->getSatThuong() * this->getHe().TuongKhac() / (float)100);
		printf("%s sat thuong tuong khac %s: %.2f", this->getTen().c_str(), muctieu.getTen().c_str(), roundf(SatThuong * 100) / 100);
	}
	else {
		float SatThuong = (float)this->getSatThuong();
		printf("%s sat thuong %s: %.2f", this->getTen().c_str(), muctieu.getTen().c_str(), roundf(SatThuong * 100) / 100);
	}
}

void NhanVat::Xuat() {
	printf("\n== [Thong tin nguoi choi] ==");
	printf("\n Nguoi choi: %s - Cap do: %d", this->getTen().c_str(), this->getCapDo());
	printf("\n Mon phai: %s", this->getMonPhaiName().c_str());
	printf("\n He: %s", this->getHeName().c_str());
	printf("\n============================\n");
}