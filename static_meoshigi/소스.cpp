//#include <iostream>
//#include <Windows.h>
//#include <conio.h>  // _kbhit(), _getch() �Լ� ����� ���� ���̺귯��
//
//#pragma comment(lib, "winmm.lib") // timeGetTime() �Լ� ����� ���� ���̺귯��
//
//using namespace std;
//
//int main()
//{
//
//	timeBeginPeriod(1); // timer interrupt �ػ󵵸� 1�� ����ϴ�.
//
//	char pointList[4][256] = { // ���� ����Ʈ
//		{"Bad"},
//		{"NoGood"},
//		{"Good"},
//		{"Gread"},
//	};
//
//	int g_Timing[] = { 5, 10, 14, 17, 20, 25, 29, 34, 37 }; // Ÿ�̹�
//
//	char userPoint[9][256] = { {" "} }; // ������ ���� ����ϴ� �迭
//
//	double begin; // ó�� ���۽� �ð�
//
//	double end; // ���α׷� ���� �� �ݺ����ȿ��� üũ�� �ð�
//
//	double checkC; // begin - end ��
//
//	int tIndex = 0; // �������� üũ
//
//	begin = timeGetTime();
//
//	cout << fixed; // ��� �Ҽ��� �ڸ��� ����
//	cout.precision(3); // �Ҽ��� �� 3�ڸ����� ���
//
//
//	while (1) {
//
//		end = timeGetTime();
//
//		checkC = (end - begin) / 1000; // ����ð� ���ϱ�
//
//		cout << "Ÿ�̸� : " << checkC << endl;
//		cout << endl;
//
//		if (_kbhit()) {
//
//			// fabs�� double�� ���밪 ���ϴ� �Լ��Դϴ�.
//			if (fabs((double)g_Timing[tIndex] - checkC) >= (double)1) { // ���� �Է� �ð��� 1���̻� ���̳� ��� 
//				strcpy_s(userPoint[tIndex], strlen(pointList[0]) + 1, pointList[0]);
//			}
//
//			// 0.75���Ϸ� ���̳��� 0.5�� �ʰ��� ���̳����
//			else if (fabs((double)g_Timing[tIndex] - checkC) <= (double)0.75 && fabs((double)g_Timing[tIndex] - checkC) > (double)0.5) {
//				strcpy_s(userPoint[tIndex], strlen(pointList[1]) + 1, pointList[1]);
//
//			}
//
//			// 0.5���Ϸ� ���̳��� 0.25�� �ʰ��� ���̳����
//			else if (fabs((double)g_Timing[tIndex] - checkC) <= (double)0.5 && fabs((double)g_Timing[tIndex] - checkC) > (double)0.25) {
//				strcpy_s(userPoint[tIndex], strlen(pointList[2]) + 1, pointList[2]);
//
//			}
//			// 0.25 ���Ϸ� ���̳� ���
//			else if (fabs((double)g_Timing[tIndex] - checkC) <= (double)0.25) {
//				strcpy_s(userPoint[tIndex], strlen(pointList[3]) + 1, pointList[3]);
//			}
//
//			_getch(); // ���� ����
//			tIndex++; // �������� ���
//		}
//
//		// ������ �Է����� �ʾ��� ��� �ڵ����� Bad���� ����
//		if (checkC > 6 && tIndex == 0) {
//			strcpy_s(userPoint[tIndex], strlen(pointList[0]) + 1, pointList[0]);
//			tIndex++;
//		}
//		else if (checkC > 11 && tIndex == 1) {
//			strcpy_s(userPoint[tIndex], strlen(pointList[0]) + 1, pointList[0]);
//			tIndex++;
//		}
//		else if (checkC > 15 && tIndex == 2) {
//			strcpy_s(userPoint[tIndex], strlen(pointList[0]) + 1, pointList[0]);
//			tIndex++;
//		}
//		else if (checkC > 18 && tIndex == 3) {
//			strcpy_s(userPoint[tIndex], strlen(pointList[0]) + 1, pointList[0]);
//			tIndex++;
//		}
//		else if (checkC > 21 && tIndex == 4) {
//			strcpy_s(userPoint[tIndex], strlen(pointList[0]) + 1, pointList[0]);
//			tIndex++;
//		}
//		else if (checkC > (double)26 && tIndex == 5) {
//			strcpy_s(userPoint[tIndex], strlen(pointList[0]) + 1, pointList[0]);
//			tIndex++;
//		}
//		else if (checkC > (double)30 && tIndex == 6) {
//			strcpy_s(userPoint[tIndex], strlen(pointList[0]) + 1, pointList[0]);
//			tIndex++;
//		}
//		else if (checkC > (double)35 && tIndex == 7) {
//			strcpy_s(userPoint[tIndex], strlen(pointList[0]) + 1, pointList[0]);
//			tIndex++;
//		}
//		else if (checkC > (double)38 && tIndex == 8) {
//			strcpy_s(userPoint[tIndex], strlen(pointList[0]) + 1, pointList[0]);
//			tIndex++;
//			break;
//		}
//
//
//		for (int i = 0; i < 9; i++) { // ���� ���������� ������ ������ ���
//			cout << g_Timing[i] << " Sec : " << userPoint[i] << endl;
//		}
//
//
//
//		if (tIndex == 9) // ���������� 8�� ������ ��� ����
//			break;
//
//		system("cls"); // �ܼ� �����
//	}
//
//	timeEndPeriod(1); // timer interrupt �ʱ�ȭ
//}