#include <iostream>
#include <windows.h>


// 24Сʱ ��ÿ�붼�밡������
using namespace std;
int main(void) {
	int time = 0;
	for (int i = 0; i < 24; i++) {
		for (int j = 0; j < 60; j++) {
			for (int k = 0; k < 60; k++) {
				
				cout << i << ":" << j << ":" << k << endl;
				cout << "��" << time << "������,����" << endl;
				Sleep(1000);
				time += 1;
			}
		}
	}
	system("pause");
	return 0;
}