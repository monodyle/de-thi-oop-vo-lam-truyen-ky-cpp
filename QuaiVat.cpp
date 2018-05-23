#include "QuaiVat.h"

QuaiVat::QuaiVat(){
	Ten = "";
}
QuaiVat::QuaiVat(std::string Name, int Level, int Class, int Type) {
	this->setTen(Name);
	this->setCapDo(Level);
	this->setHe(Class);
	this->setLoai(Type);
	this->TinhSatThuong();
}
QuaiVat::~QuaiVat(){}

int QuaiVat::TinhSatThuong() {
	if (this->Loai == 0)
		this->setSatThuong(this->getCapDo() * 3);
	if (this->Loai == 1)
		this->setSatThuong(this->getCapDo() * 7);
	if (this->Loai != 0 && this->Loai != 1) {
		// throw exception
		printf("Quai vat khong co chung loai, khong the tinh sat thuong.");
		return 0;
	}
	return this->getSatThuong();
}

std::string QuaiVat::getLoai() {
	if (this->Loai == 0)
		return "Thong thuong";
	if (this->Loai == 1)
		return "Dau Linh";
	return "Quai vat chua duoc phan loai."; // throw exception
}
void QuaiVat::setLoai(int type) {
	this->Loai = type;
}

void QuaiVat::TanCong(Mob muctieu) {
	// Debug: printf("[%s] ~ {%s}\n\nDone.\n\n", this->getMonPhai().getHe().getKhac().c_str(), muctieu.getHe().getTen().c_str());
	if (this->getHe().getSinh() == muctieu.getHe().getTen()) {
		float SatThuong = this->getSatThuong() + (this->getSatThuong() * this->getHe().TuongSinh() / (float)100);
		printf("%s sat thuong tuong sinh %s: %.2f", this->getTen().c_str(), muctieu.getTen().c_str(), roundf(SatThuong * 100) / 100);
	}
	else if (this->getHe().getKhac() == muctieu.getHe().getTen()) {
		float SatThuong = this->getSatThuong() + (this->getSatThuong() * this->getHe().TuongKhac() / (float)100);
		printf("%s sat thuong tuong khac %s: %.2f", this->getTen().c_str(), muctieu.getTen().c_str(), roundf(SatThuong * 100) / 100);
	}
	else {
		float SatThuong = (float)this->getSatThuong();
		printf("%s sat thuong %s: %.2f", this->getTen().c_str(), muctieu.getTen().c_str(), roundf(SatThuong * 100) / 100);
	}
}

void QuaiVat::Xuat() {
	printf("\n== [Thong tin quai vat] ==");
	printf("\n Quai vat: %s - Cap do: %d", this->getTen().c_str(), this->getCapDo());
	printf("\n Loai: %s", this->getLoai().c_str());
	printf("\n He: %s", this->getHeName().c_str());
	printf("\n==========================\n");
}