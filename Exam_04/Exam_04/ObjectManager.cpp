#include "ObjectManager.h"
#include "Player.h"
#include "Enemy.h"
#include "Bullet.h"

ObjectManager* ObjectManager::Instance = nullptr;

ObjectManager::ObjectManager()
{
}

ObjectManager::~ObjectManager()
{
	Release();
}

void ObjectManager::Start()
{
	pPlayer = new Player;
	pEnemy = new Enemy;
	for (int i = 0; i < 128; ++i)
	{
		if(pBullet[i]==nullptr)
		pBullet[i] = new Bullet;
	}
}

void ObjectManager::Update()
{
	pPlayer->Update();
	pEnemy->Update();
	for (int i = 0; i < 128; ++i)
	{
		if(pBullet[i])
			pBullet[i]->Update();
	}
}

void ObjectManager::Render()
{
	pPlayer->Render();
	pEnemy->Render();
	for (int i = 0; i < 128; ++i)
	{
		if (pBullet[i])
			pBullet[i]->Render();
	}
}

void ObjectManager::Release()
{
	delete pPlayer;
	pPlayer = nullptr;
	delete pEnemy;
	pEnemy = nullptr;

	for (int i = 0; i < 128; ++i)
	{
		if (pBullet[i])
		{
			delete pBullet[i];
			pBullet[i] = nullptr;
		}
	}
}
