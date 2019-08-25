#include <iostream>
#include <windows.h>


// 24小时 我每秒都想啊啊张哿
using namespace std;
int main(void) {
	int time = 0;
	for (int i = 0; i < 24; i++) {
		for (int j = 0; j < 60; j++) {
			for (int k = 0; k < 60; k++) {
				
				cout << i << ":" << j << ":" << k << endl;
				cout << "第" << time << "次想你,张哿" << endl;
				Sleep(1000);
				time += 1;
			}
		}
	}
	system("pause");
	return 0;
}