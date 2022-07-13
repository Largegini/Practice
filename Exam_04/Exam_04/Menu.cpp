#include "Menu.h"
#include "SceneManager.h"
#include "InputManager.h"

Menu::Menu()
{
}

Menu::~Menu()
{
}

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
