#include <iostream>
#include <windows.h>

using namespace std;

int main(void)
{
	int MAX_COUNT;
	
	cout << "---------------���� �˾ƺ���------------";
	cout << endl << "���� �Է����ּ��� : ";
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
		cout << "---------------���� �˾ƺ���------------" << endl;
		cout << "���簪1 : " << presentNum << endl;
		averageNum = (averageNum + presentNum) / countNum;
		cout << "��հ�1 : " << averageNum << endl << endl;
		cout << "���簪2 : " << presentNum2 << endl;
		averageNum2 = (averageNum2 + presentNum2) / countNum2;
		cout << "��հ�2 : " << averageNum2 << endl << endl;
		cout << "���簪3 : " << presentNum3 << endl;
		averageNum3 = (averageNum3 + presentNum3) / countNum2;
		cout << "��հ�3 : " << averageNum3 << endl;
	}
}