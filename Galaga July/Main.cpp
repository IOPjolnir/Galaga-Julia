#include <iostream>
#include "func.h"
using namespace std;


int main() {
	setlocale(LC_ALL, "Russian");
	
	cout << "ѕриветствую ¬ас в Galaga!\n";
	cout << "”правление клавишами:\n"<<
		"A - движение влево\n" <<
		"D - движение вправо\n" <<
		"W - выстрел\n" <<
		"P - приостановка игры\n" <<
		"Q - выход из игры\n";
	system("pause");
	main_loop();

	return 0;
}