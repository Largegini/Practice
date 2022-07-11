#pragma once
#include "Headers.h"

class Scene;
class InputManager
{
private:
	static InputManager* Instance;
public:
	static InputManager* GetInstance()
	{
		if (Instance == nullptr)
		{
			Instance = new InputManager;
		}
		return Instance;
	}
private:
	DWORD dwkey;
public:
	void CheckKey();
	DWORD	GetKey()
	{
		return dwkey;
	}
private:
	InputManager();
public:
	~InputManager();
};
