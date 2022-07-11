#include "Headers.h"
#include "MainUpdate.h"

int main()
{
	ULONGLONG Time = GetTickCount64();
	MainUpdate Main;
	Main.Start();
	while (true)
	{
		if (Time + 100 < GetTickCount64())
		{
			Time = GetTickCount64();

			system("cls");

			Main.Update();
			Main.Render();
		}
	}
	return 0;
}