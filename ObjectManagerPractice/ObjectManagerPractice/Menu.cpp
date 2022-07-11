#include "Menu.h"
#include "SceneManager.h"
#include "InputManager.h"

void Menu::Start()
{
}

void Menu::Update()
{
	dwkey = InputManager::GetInstance()->GetKey();

	if (dwkey & KEY_RETURN)
		SceneManager::GetInstance()->SetScene(SceneID::STAGE);
}

void Menu::Render()
{
	cout << "Menu" << endl;
}

void Menu::Release()
{
}

Menu::Menu():dwkey(0)
{
}

Menu::~Menu()
{
}