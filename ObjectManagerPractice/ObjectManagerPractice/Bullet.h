#pragma once
#include "Object.h"
class Bullet : public Object
{
public : 
	Bullet();
	virtual ~Bullet();
private:
	Object* pBullet[128];
public:
	virtual void Start()override;
	virtual void Update()override;
	virtual void Render()override;
	virtual void Release()override;
};

