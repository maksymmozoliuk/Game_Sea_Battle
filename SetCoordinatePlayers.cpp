#include <iostream>

#define SIZEBOARD 10

using namespace std;
//������� �� ���������� ���������� ������ �� ���������� �� ���� ��������
short int SetRow() {
	short int RowPlayer;
	while (true) {
		cout << "Enter Number (1, " << SIZEBOARD << "): ";
		cin >> RowPlayer;
		if (RowPlayer > 0 && RowPlayer <= SIZEBOARD)
			break;
		else 
			cout << "Invalid Coordinate!" << endl;
	}
	return RowPlayer;
}

char SetCol() {
	char ColPlayer;
	while (true) {
		cout << "Enter Letter (A, J): ";
		cin >> ColPlayer;
		if (ColPlayer >= 'A' && ColPlayer <= 'J')
			break;
		else 
			cout << "Invalid Coordinate!" << endl;
	}
	return ColPlayer;
}