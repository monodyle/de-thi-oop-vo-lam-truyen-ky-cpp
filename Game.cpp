#include <stdio.h>
#include <iostream>
#include "Game.h"
#include "NhanVat.h"
#include "QuaiVat.h"

Game::Game(void){}
Game::~Game(void){}

NhanVat Game::MakeNhanVat(std::string Name, int Level, int Guild) {
	return NhanVat::NhanVat(Name, Level, Guild);
}
void Game::NhapNhanVat() {
	std::string Name;
	int Level;
	int Guild;
	printf("\n===== [ Nhap nguoi choi ] =====");

	printf("\n> Ten nguoi choi: ");
	do {
		getline(std::cin, Name);
	} while (Name == "" || Name == " ");
	printf("> Cap do: ");
	do {
		scanf_s("%d", &Level);
	} while (Level < 1);
	printf("> Mon phai: ");
	printf("\n  | 1. Thieu Lam");
	printf("\n  | 2. Thien Vuong");
	printf("\n  | 3. Ngu Doc");
	printf("\n  | 4. Duong Mon");
	printf("\n  | 5. Nga My");
	printf("\n  | 6. Thuy Lien");
	printf("\n  | 7. Cai Bang");
	printf("\n  | 8. Thien Nhan");
	printf("\n  | 9. Con Lon");
	printf("\n  | 10. Vo Dang");
	printf("\nChon mon phai - nhap tu 1 ~ 10: > ");
	do {
		scanf_s("%d", &Guild);
	} while (Guild < 1 || Guild > 10);
	printf("===============================\n");
	NhanVat *Input = new NhanVat(Name, Level, Guild);
	characters.push_back(Input);
}
QuaiVat Game::MakeQuaiVat(std::string Name, int Level, int Class, int Type) {
	return QuaiVat::QuaiVat(Name, Level, Class, Type);
}
void Game::NhapQuaiVat() {
	std::string Name;
	int Level;
	int Class;
	int Type;
	printf("\n===== [ Nhap quai vat ] =====");

	printf("\n> Ten quai vat: ");
	do {
		getline(std::cin, Name);
	} while (Name == "" || Name == " ");
	printf("> Cap do: ");
	do {
		scanf_s("%d", &Level);
	} while (Level < 1);
	printf("> He ngu hanh: ");
	printf("\n  | 1. Kim");
	printf("\n  | 2. Moc");
	printf("\n  | 3. Thuy");
	printf("\n  | 4. Hoa");
	printf("\n  | 5. Tho");
	printf("\nChon ngu hanh - nhap tu 1 ~ 5: > ");
	do {
		scanf_s("%d", &Class);
	} while (Class < 1 || Class > 5);
	printf("> Loai quai vat:");
	printf("\n  | 0. Thong thuong");
	printf("\n  | 1. Dau linh");
	printf("\n> ");
	do {
		scanf_s("%d", &Type);
	} while (Type < 0 || Type > 1);
	printf("=============================\n");
	QuaiVat *Input = new QuaiVat(Name, Level, Class, Type);
	characters.push_back(Input);
}


void Game::Input() {
	int k;
	do {
		printf("\n========== Chon doi tuong nhap ==========");
		printf("\n | 0. Thoat ra                         ");
		printf("\n | 1. Nhap nguoi choi                  ");
		printf("\n | 2. Nhap quai vat                    ");
		printf("\n========== =================== ==========");
		printf("\n > ");
		scanf_s("%d", &k);

		switch (k)
		{
		case 1:
			NhapNhanVat();
			break;
		case 2:
			NhapQuaiVat();
			break;
		case 0:
			break;
		default:
			break;
		}

	} while (k != 0);
}

void Game::Print(int i) {
	if (i == -1) {
		int k = 0;
		for (auto j = begin(this->characters); j != end(this->characters); ++j) {
			this->characters[k]->Xuat();
			k++;
		}
	} else
		this->characters[i]->Xuat();
}