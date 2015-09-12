#include <iostream>
#include "time.h"

using namespace std;

void getTime();

int main(){

	getTime();

	cout << "Hello world !!!" << endl;
	
	system("Pause");

	return 0;
}

void getTime()
{
	char timeBuffer[32];
	struct tm newTime;
	__time32_t aclock;

	errno_t errNum;
	_time32(&aclock);
	_localtime32_s(&newTime, &aclock);
	errNum = asctime_s(timeBuffer, 32, &newTime);

	cout << timeBuffer << endl;
}