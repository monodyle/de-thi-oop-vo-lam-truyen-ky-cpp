#pragma once
#include "NhanVat.h"
#include "QuaiVat.h"
#include <vector>

class Game
{
protected:
	std::vector<Mob*> characters;
public:
	Game(void);
	~Game();
	void NhapNhanVat();
	NhanVat MakeNhanVat(std::string, int, int);
	void NhapQuaiVat();
	QuaiVat MakeQuaiVat(std::string, int, int, int);
	void Input();
	void Print(int);
	std::vector<Mob*> getCharacters() {
		return this->characters;
	}
};

