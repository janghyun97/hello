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
		cout << "집에서 혼자하는 추억의 숫자 야구게임 시~~작!\n";
		cout << "number baseball game start!\n\n";
		cout << "-------------------------------\n\n";
		cout << "규칙 설명(Rule)\n\n";
		cout << "각 숫자의 범위는 1부터 9까지 입니다.\n총 4자리 숫자이며 모든 숫자는 달라야 합니다.\n";
		cout << "숫자가 아닌 문자는 절대 입력하지 마세요.\n\n";
		cout << "-------------------------------\n\n";
		cout << "GAME RULE\n\n";
		cout << "number range 1 to 9\nIt's four digit number, every number must be differ.\n\n";
		cout << "you must don't put characters. only put number please. \n\n";
		while (true) {
			if (strike != 3) {
				cout << gameround << " 라운드(round)\n >>";
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

		cout << strike << "[스트라이크(strike)]" << "," << ball << "[볼(ball)]" << endl;
	}

	void out() {
		cout << "아웃~~!!!!!" << endl;
		gameround = 1;
	}

	void go() {
		if (strike == 4) {
			out();
			finish();
		}
	}

	int finish() {
		char finish;
		cout << "계속하여 다시 새로운 게임을 진행하고 싶으신가요? [대문자 입력 Y/N]";
		cin >> finish;
		if (finish == 'Y') {
			gameround = 1;
			baseballgame temp;
			temp.gamestart();
		}
		else if (finish == 'n') {
			cout << "게임이 종료되었습니다. \n 감사합니다^^" << endl;
		}
		else {
			while (true) {
				cout << "정확한 명령어가 아닙니다. 다시 입력해주세요.[대문자 입력 Y/N] ";
				cin >> finish;
				cout << endl;
				if (finish == 'Y') {
					gameround = 1;
					baseballgame temp;
					temp.gamestart();
				}
				else if (finish == 'N') {
					break;
				}
				cout << "게임이 종료되었습니다. \n 감사합니다^^" << endl;
				return 0;
			}
		}
	}

};

int main() {
	cout << "\n\n";
	cout << " ■■■■       ■      ■■■■  ■■■■  ■■■■      ■     ■        ■      \n";
	cout << " ■    ■     ■  ■    ■        ■        ■    ■    ■  ■   ■        ■      \n";
	cout << " ■■■     ■■■■■  ■■■■  ■■■■  ■■■    ■■■■■ ■        ■      \n";
	cout << " ■    ■   ■      ■        ■  ■        ■    ■  ■      ■ ■        ■      \n";
	cout << " ■■■■   ■      ■  ■■■■  ■■■■  ■■■■  ■      ■ ■■■■  ■■■■\n\n";

	cout << "                     ■■■       ■      ■■■■■   ■■■■ \n";
	cout << "                   ■           ■  ■    ■  ■  ■   ■       \n";
	cout << "                   ■  ■■   ■■■■■  ■  ■  ■   ■■■■ \n";
	cout << "                   ■    ■   ■      ■  ■  ■  ■   ■       \n";
	cout << "                     ■■■   ■      ■  ■      ■   ■■■■ \n\n";
	srand((unsigned int)time(0));
	baseballgame one;
	one.gamestart();
}
