#include "Logo.h"
#include "SceneManager.h"
#include "InputManager.h"

void Logo::Start()
{
}

void Logo::Update()
{
	dwkey = InputManager::GetInstance()->GetKey();

	if (dwkey & KEY_RETURN)
		SceneManager::GetInstance()->SetScene(SceneID::MENU);
}

void Logo::Render()
{
	cout << "Logo" << endl;
}

void Logo::Release()
{
}

Logo::Logo():dwkey(0)
{
}

Logo::~Logo()
{
}
