#include <iostream>
#include <string>

using namespace std;

class Board {
private:
	static string s[1000];
	static int count;
public:
	static void add(string add);
	static void print();
	~Board() {
		cout << "--------------------";
	}
}; int Board::count = 0;
string Board::s[1000] = {};

void Board::add(string add)
{
	s[count] = add;
	count++;
}

void Board::print()
{
	cout << "************* �Խ����Դϴ�. *************" << endl;
	for (int i = 0; i < count; i++)
	{
		cout << i << ": " << s[i] << endl;
	}
	cout << endl;
}

int main() {
	// Board myBoard;
	Board::add("�߰����� ���� ���� ���� �����Դϴ�.");
	Board::add("�ڵ� ����� ���� �̿��� �ּ���.");
	Board::print();
	Board::add("���Ҹ� �л��� ������ȸ �Ի��Ͽ����ϴ�. �������ּ���");
	Board::print();
}