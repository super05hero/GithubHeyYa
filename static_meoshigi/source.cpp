#include <iostream>
#include<cstdlib>
#include<ctime>

using namespace std;
//GameŬ���� ����

class Game {
private:
	double energy = 100;
	static int life;

public:
	Game();
	double Damage();
	static void Die();
	double Heal();
};
int Game::life = 10;

void Game::Die() {
	life--;
	cout << "**������ 1 �����Ͽ� " << life << "�� �Ǿ����ϴ�." << endl << endl;

}
double Game::Damage() {
	double damaged = 0;

	if (energy > 0) {
		damaged += rand() % 100;
		energy -= damaged;
		cout << "�������� " << damaged << " �����Ͽ� " << energy << " �� �Ǿ����ϴ�.\n";
		if (energy < 0) {
			life--;
			energy = 100;
			cout << "������ 1 �����Ͽ� " << life << "�� �Ǿ����ϴ�." << endl << endl;

		}
	}
	return energy;
}

double Game::Heal() {
	double healed = 0;

	if (energy > 0) {
		healed += rand() % 100;
		energy += healed;
		cout << "�������� " << healed << " �����Ͽ� " << energy << " �� �Ǿ����ϴ�.\n";
		
	}
	return energy;
}

//GameŬ���� ��� �Լ��� ����
Game::Game()
{
	cout << "�������� " << energy << " �̸�, ������ " << life << "�� ĳ���Ͱ� ����������ϴ�.\n";
	Damage();
	Damage();
	Damage();
	Damage();
	Damage();

}

int main()
{
	srand((unsigned int)time(NULL)); //seed������ ����ð� �ο�
	Game c1;
	Game::Die();
	Game c2;
	c2.Damage();
	c2.Damage();
	c2.Damage();
	c2.Die();
	return 0;
}