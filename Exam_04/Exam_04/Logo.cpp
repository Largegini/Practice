#include "Logo.h"
#include "SceneManager.h"
#include "InputManager.h"

Logo::Logo()
{
}

Logo::~Logo()
{
}

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
