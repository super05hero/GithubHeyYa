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
	cout << "************* 게시판입니다. *************" << endl;
	for (int i = 0; i < count; i++)
	{
		cout << i << ": " << s[i] << endl;
	}
	cout << endl;
}

int main() {
	// Board myBoard;
	Board::add("중간고사는 감독 없는 자율 시험입니다.");
	Board::add("코딩 라운지 많이 이용해 주세요.");
	Board::print();
	Board::add("진소린 학생이 경진대회 입상하였습니다. 축하해주세요");
	Board::print();
}