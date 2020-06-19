#include <iostream>
#include <time.h>
using namespace std;

class baseballgame {
	int strike;
	int ball;
	int gameround = 1;
	int a1, a2, a3, a4;
	int b1, b2, b3, b4;

public:
	baseballgame() {
		strike = 0;
		ball = 0;
		b1 = 0;
		b2 = 0;
		b3 = 0;
		b4 = 0;

		a1 = (rand() % 10);
		a2 = (rand() % 10);
		a3 = (rand() % 10);
		a4 = (rand() % 10);

		if (a1 == a2 || a1 == 0) {
			a1 = (rand() % 10);
		}
		if (a2 == a3 || a2 == 0) {
			a2 = (rand() % 10);
		}
		if (a3 == a4 || a3 == 0) {
			a3 = (rand() % 10);
		}
		if (a4 == a1 || a4 == 0) {
			a4 = (rand() % 10);
		}
	}

	void gamestart() {
		cout << "������ ȥ���ϴ� �߾��� ���� �߱����� ��~~��!\n";
		cout << "number baseball game start!\n\n";
		cout << "-------------------------------\n\n";
		cout << "��Ģ ����(Rule)\n\n";
		cout << "�� ������ ������ 1���� 9���� �Դϴ�.\n�� 4�ڸ� �����̸� ��� ���ڴ� �޶�� �մϴ�.\n";
		cout << "���ڰ� �ƴ� ���ڴ� ���� �Է����� ������.\n\n";
		cout << "-------------------------------\n\n";
		cout << "GAME RULE\n\n";
		cout << "number range 1 to 9\nIt's four digit number, every number must be differ.\n\n";
		cout << "you must don't put characters. only put number please. \n\n";
		while (true) {
			if (strike != 3) {
				cout << gameround << " ����(round)\n >>";
				input();
				compare();
				gameround++;
				go();

			}
		}
	}

	void input() {
		cin >> b1;
		cin >> b2;
		cin >> b3;
		cin >> b4;
	}

	void compare() {
		strike = 0;
		ball = 0;
		if (a1 == b1) { strike++; }
		if (a1 == b2) { ball++; }
		if (a1 == b3) { ball++; }
		if (a1 == b4) { ball++; }

		if (a2 == b1) { ball++; }
		if (a2 == b2) { strike++; }
		if (a2 == b3) { ball++; }
		if (a2 == b4) { ball++; }

		if (a3 == b1) { ball++; }
		if (a3 == b2) { ball++; }
		if (a3 == b3) { strike++; }
		if (a3 == b4) { ball++; }

		if (a4 == b1) { ball++; }
		if (a4 == b2) { ball++; }
		if (a4 == b3) { ball++; }
		if (a4 == b4) { strike++; }

		cout << strike << "[��Ʈ����ũ(strike)]" << "," << ball << "[��(ball)]" << endl;
	}

	void out() {
		cout << "�ƿ�~~!!!!!" << endl;
		gameround = 1;
	}

	void go() {
		if (ball == 1) {
			out();
			finish();
		}
	}

	int finish() {
		char finish;
		cout << "����Ͽ� �ٽ� ���ο� ������ �����ϰ� �����Ű���? [�빮�� �Է� Y/N]";
		cin >> finish;
		if (finish == 'y') {
			gameround = 1;
			baseballgame temp;
			temp.gamestart();
		}
		else if (finish == 'n') {
			cout << "������ ����Ǿ����ϴ�. \n �����մϴ�^^" << endl;
		}
		else {
			while (true) {
				cout << "��Ȯ�� ��ɾ �ƴմϴ�. �ٽ� �Է����ּ���.[�빮�� �Է� Y/N] ";
				cin >> finish;
				cout << endl;
				if (finish == 'y') {
					gameround = 1;
					baseballgame temp;
					temp.gamestart();
				}
				else if (finish == 'n') {
					break;
				}
				cout << "������ ����Ǿ����ϴ�. \n �����մϴ�^^" << endl;
				return 0;
			}
		}
	}

};

int main() {
	cout << "\n\n";
	cout << " �����       ��      �����  �����  �����      ��     ��        ��      \n";
	cout << " ��    ��     ��  ��    ��        ��        ��    ��    ��  ��   ��        ��      \n";
	cout << " ����     ������  �����  �����  ����    ������ ��        ��      \n";
	cout << " ��    ��   ��      ��        ��  ��        ��    ��  ��      �� ��        ��      \n";
	cout << " �����   ��      ��  �����  �����  �����  ��      �� �����  �����\n\n";

	cout << "                     ����       ��      ������   ����� \n";
	cout << "                   ��           ��  ��    ��  ��  ��   ��       \n";
	cout << "                   ��  ���   ������  ��  ��  ��   ����� \n";
	cout << "                   ��    ��   ��      ��  ��  ��  ��   ��       \n";
	cout << "                     ����   ��      ��  ��      ��   ����� \n\n";
	srand((unsigned int)time(0));
	baseballgame one;
	one.gamestart();
}