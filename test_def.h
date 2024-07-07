#pragma once

#include "dci_role.h"
#include <string>
#include <iostream>

using namespace std;

struct Game
{
	string name;
	int price;
};

struct Player
{
	void Play()
	{
		cout << "play " << ROLE(Game).name << endl;
	}

	USE_ROLE(Game);
};

struct Money
{
	int left;
};

struct Consumer
{
	void Buy(Game game)
	{
		ROLE(Game) = game;
		ROLE(Money).left -= game.price;
	}

	int& GetLeftMoney()
	{
		return ROLE(Money).left;
	}

	USE_ROLE(Money);
	USE_ROLE(Game);
};


struct Inst : public Player,
	public Consumer,
	private Game,
	private Money
{
	IMPL_ROLE(Game);
	IMPL_ROLE(Money);
};