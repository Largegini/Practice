#pragma once
#include "Scene.h"
class Logo : public Scene
{
private:
	DWORD dwkey;
public:
	virtual void Start()override;
	virtual void Update()override;
	virtual void Render()override;
	virtual void Release()override;
public:
	Logo();
	virtual ~Logo();
};

