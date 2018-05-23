#include "NhanVat.h"
#include "QuaiVat.h"
#include "Game.h"
#include <conio.h>

int main() {
	Game mobs;
	mobs.Input();

	std::vector<Mob*> AllCharacters = mobs.getCharacters();
	int k;
	int max = AllCharacters[0]->getSatThuong();
	int i = 0;
	int index = 0;
	int a, b;

	system("clear");

	do {
		printf("\n---== [ Chon chuc nang can thuc hien ] ==---");
		printf("\n 0. Ket thuc chuong trinh. ");
		printf("\n 1. Tim doi tuong co sat thuong cao nhat. ");
		printf("\n 2. So sanh sat thuong. ");
		printf("\n > ");
		scanf_s("%d", &k);
		switch (k)
		{
		case 1:
			for (auto & element : AllCharacters) {
				if (element->getSatThuong() > max) {
					max = element->getSatThuong();
					index = i;
				}
				i++;
			}
			printf("\nDoi tuong co muc sat thuong cao nhat trong danh sach: ");
			mobs.Print(index);
			_getch();
			break;
		case 2:
			printf("\nChon 2 phan tu trong danh sach de so sanh (Nhap 2 so tuong ung voi vi tri trong mang)");
			do {
				printf("\n > ");
				scanf_s("%d %d", &a, &b);
			} while (a < 0 || b < 0 || a > AllCharacters.size() || b > AllCharacters.size());
			printf("\n");
			AllCharacters[a]->TanCong(*AllCharacters[b]);
			printf("\n");
			AllCharacters[b]->TanCong(*AllCharacters[a]);
			printf("\n");
			_getch();
			break;
		case 0:
			break;
		default:
			break;
		}
	} while (k != 0);

	/*
	// Test
	NhanVat player = NhanVat::NhanVat("Mac Tieu", 92, 1);
	QuaiVat wolf = QuaiVat::QuaiVat("Kim Lang Vuong", 70, 1, 1);

	player.TanCong(wolf);
	printf("\n");
	wolf.TanCong(player);
	printf("\n");
	*/

	system("pause");
	return 0;
}