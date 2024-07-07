#include "test_def.h"

int main()
{
	Inst john;
	Game elden{ "Elden Ring", 298 };
	elden.name = "Elden Ring";
	john.GetLeftMoney() = 300;

	cout << "john has " << john.GetLeftMoney() << endl;
	john.Buy(elden);


	cout << "john has " << john.GetLeftMoney() << endl;
	john.Play();


	return 0;
}