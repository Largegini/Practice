#pragma once
#include "Object.h"
class Enemy : public Object
{
public:
	Enemy();
	virtual ~Enemy();
public:
	virtual void Start()override;
	virtual void Update()override;
	virtual void Render()override;
	virtual void Release()override;
};

