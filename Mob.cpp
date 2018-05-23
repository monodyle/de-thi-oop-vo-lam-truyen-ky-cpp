#include "Mob.h"

Mob::Mob() {
	Ten = "";
	CapDo = 1;
}
Mob::Mob(std::string Name, unsigned int Level, int Class) {
	this->setTen(Name);
	this->setCapDo(Level);

	if (Class != -1) {
		this->setHe(Class);
	}

	this->setSatThuong(1);
}

std::string Mob::getTen() { return this->Ten; }
void Mob::setTen(std::string Name) {
	if (Name == "") {
		printf("Ten khong duoc de trong.");
	}
	else {
		Ten = Name;
	}
}
unsigned int Mob::getCapDo() { return this->CapDo; }
void Mob::setCapDo(int Level) {
	if (Level < 1) {
		printf("Cap do khong duoc duoi 1.");
	}
	else { CapDo = Level; }
}
NguHanh Mob::getHe() {
	return this->He;
}
std::string Mob::getHeName() {
	return this->getHe().getTen();
}
void Mob::setHe(int Class) {
	// 1 = Kim; 2 = Moc; 3 = Thuy; 4 = Hoa; 5 = Tho
	switch (Class)
	{
	case 1:
		this->He = NguHanh::NguHanh("Kim", "Thuy", "Moc");
		break;
	case 2:
		this->He = NguHanh::NguHanh("Moc", "Hoa", "Tho");
		break;
	case 3:
		this->He = NguHanh::NguHanh("Thuy", "Moc", "Hoa");
		break;
	case 4:
		this->He = NguHanh::NguHanh("Hoa", "Tho", "Kim");
		break;
	case 5:
		this->He = NguHanh::NguHanh("Tho", "Kim", "Thuy");
		break;
	default:
		// exception
		printf("Khong co he.");
		break;
	}
}

void Mob::setSatThuong(int Damage) { SatThuong = Damage; }
int Mob::getSatThuong() {
	return this->SatThuong;
}

void Mob::TanCong(Mob muctieu) {
	/*printf("[%s]\n%s\n", this->He.getSinh().c_str(), muctieu.getHe().getTen().c_str());
	if (this->getHe().getSinh() == muctieu.getHe().getTen()) {
		int SatThuong = this->getSatThuong() + (this->getSatThuong() * this->getHe().TuongSinh() / 100);
		printf("%s sat thuong tuong sinh %s: %d", this->getTen().c_str(), muctieu.getTen().c_str(), SatThuong);
	}
	else if (this->getHe().getKhac() == muctieu.getHe().getTen()) {
		int SatThuong = this->getSatThuong() + (this->getSatThuong() * this->getHe().TuongKhac() / 100);
		printf("%s sat thuong tuong khac %s: %d", this->getTen().c_str(), muctieu.getTen().c_str(), SatThuong);
	}
	else {
		int SatThuong = this->getSatThuong();
		printf("%s sat thuong %s: %d", (char*)&this->getTen(), (char*)&muctieu.getTen(), SatThuong);
	}*/
}

void Mob::Xuat() {
	/**/
}