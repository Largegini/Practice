#include "MainUpdate.h"
#include "SceneManager.h"
#include "InputManager.h"

MainUpdate::MainUpdate()
{
}

MainUpdate::~MainUpdate()
{
}

void MainUpdate::Start()
{
	SceneManager::GetInstance()->SetScene(SceneID::LOGO);
}

void MainUpdate::Update()
{
	InputManager::GetInstance()->CheckKey();
	SceneManager::GetInstance()->Update();
}

void MainUpdate::Render()
{
	SceneManager::GetInstance()->Render();
}

void MainUpdate::Release()
{
}
