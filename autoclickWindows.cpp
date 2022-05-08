#include <iostream>
#include <Windows.h>
using namespace std;

void clicker(int przerwa)
{
	bool click = false; //sets click to false

	while (true)
	{

		if (GetAsyncKeyState('F')) {
			mouse_event(MOUSEEVENTF_LEFTDOWN, 0, 0, 0, 0);
			mouse_event(MOUSEEVENTF_LEFTUP, 0, 0, 0, 0);
			Sleep(przerwa);
		}
		
	}
}

int main()
{
	int przerwa = 50;
	cout << "Jaka przerwa wariacie (w milisekundach): ";
	cin >> przerwa;
	clicker(przerwa);

	return 0;
}