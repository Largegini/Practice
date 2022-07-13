#pragma once
#include "Scene.h"
class Menu : public Scene
{
public:
	Menu();
	virtual ~Menu();
private:
	DWORD dwkey;
public:
	virtual void Start()override;
	virtual void Update()override;
	virtual void Render()override;
	virtual void Release()override;
};

