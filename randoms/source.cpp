#include <iostream>
#include <windows.h>

using namespace std;

int main(void)
{
	int MAX_COUNT;
	
	cout << "---------------랜덤 알아보기------------";
	cout << endl << "값을 입력해주세요 : ";
	cin >> MAX_COUNT;

	srand(time(NULL));
	
	double averageNum = 0;
	int countNum = 0;
	
	double averageNum2 = 0;
	int countNum2 = 0;

	double averageNum3 = 0;

	for (int i = 0; i < MAX_COUNT; i++)
	{
		system("cls");
		countNum++;
		countNum2++;
		int presentNum = rand();
		int presentNum2 = rand();
		int presentNum3 = rand();
		cout << "---------------랜덤 알아보기------------" << endl;
		cout << "현재값1 : " << presentNum << endl;
		averageNum = (averageNum + presentNum) / countNum;
		cout << "평균값1 : " << averageNum << endl << endl;
		cout << "현재값2 : " << presentNum2 << endl;
		averageNum2 = (averageNum2 + presentNum2) / countNum2;
		cout << "평균값2 : " << averageNum2 << endl << endl;
		cout << "현재값3 : " << presentNum3 << endl;
		averageNum3 = (averageNum3 + presentNum3) / countNum2;
		cout << "평균값3 : " << averageNum3 << endl;
	}
}