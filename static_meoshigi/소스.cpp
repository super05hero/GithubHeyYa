//#include <iostream>
//#include <Windows.h>
//#include <conio.h>  // _kbhit(), _getch() 함수 사용을 위한 라이브러리
//
//#pragma comment(lib, "winmm.lib") // timeGetTime() 함수 사용을 위한 라이브러리
//
//using namespace std;
//
//int main()
//{
//
//	timeBeginPeriod(1); // timer interrupt 해상도를 1로 맞춥니다.
//
//	char pointList[4][256] = { // 점수 리스트
//		{"Bad"},
//		{"NoGood"},
//		{"Good"},
//		{"Gread"},
//	};
//
//	int g_Timing[] = { 5, 10, 14, 17, 20, 25, 29, 34, 37 }; // 타이밍
//
//	char userPoint[9][256] = { {" "} }; // 유저의 점수 기록하는 배열
//
//	double begin; // 처음 시작시 시간
//
//	double end; // 프로그램 실행 후 반복문안에서 체크할 시간
//
//	double checkC; // begin - end 값
//
//	int tIndex = 0; // 스테이지 체크
//
//	begin = timeGetTime();
//
//	cout << fixed; // 출력 소수점 자리수 고정
//	cout.precision(3); // 소수점 밑 3자리까지 출력
//
//
//	while (1) {
//
//		end = timeGetTime();
//
//		checkC = (end - begin) / 1000; // 경과시간 구하기
//
//		cout << "타이머 : " << checkC << endl;
//		cout << endl;
//
//		if (_kbhit()) {
//
//			// fabs는 double의 절대값 구하는 함수입니다.
//			if (fabs((double)g_Timing[tIndex] - checkC) >= (double)1) { // 유저 입력 시간이 1초이상 차이날 경우 
//				strcpy_s(userPoint[tIndex], strlen(pointList[0]) + 1, pointList[0]);
//			}
//
//			// 0.75이하로 차이나고 0.5초 초과로 차이날경우
//			else if (fabs((double)g_Timing[tIndex] - checkC) <= (double)0.75 && fabs((double)g_Timing[tIndex] - checkC) > (double)0.5) {
//				strcpy_s(userPoint[tIndex], strlen(pointList[1]) + 1, pointList[1]);
//
//			}
//
//			// 0.5이하로 차이나고 0.25초 초과로 차이날경우
//			else if (fabs((double)g_Timing[tIndex] - checkC) <= (double)0.5 && fabs((double)g_Timing[tIndex] - checkC) > (double)0.25) {
//				strcpy_s(userPoint[tIndex], strlen(pointList[2]) + 1, pointList[2]);
//
//			}
//			// 0.25 이하로 차이날 경우
//			else if (fabs((double)g_Timing[tIndex] - checkC) <= (double)0.25) {
//				strcpy_s(userPoint[tIndex], strlen(pointList[3]) + 1, pointList[3]);
//			}
//
//			_getch(); // 버퍼 비우기
//			tIndex++; // 스테이지 상승
//		}
//
//		// 유저가 입력하지 않았을 경우 자동으로 Bad값을 저장
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
//		for (int i = 0; i < 9; i++) { // 현재 스테이지와 유저의 점수를 출력
//			cout << g_Timing[i] << " Sec : " << userPoint[i] << endl;
//		}
//
//
//
//		if (tIndex == 9) // 스테이지가 8이 지났을 경우 종료
//			break;
//
//		system("cls"); // 콘솔 지우기
//	}
//
//	timeEndPeriod(1); // timer interrupt 초기화
//}