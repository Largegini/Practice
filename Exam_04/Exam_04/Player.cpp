#include "Player.h"
#include "InputManager.h"

Player::Player(): dwkey(0)
{
}

Player::~Player()
{
}

void Player::Start()
{
	Info.Position = Vector3(0.0f, 0.0f, 0.0f);
	Info.Rotation= Vector3(0.0f, 0.0f, 0.0f);
	Info.Scale = Vector3(0.0f, 0.0f, 0.0f);
}

void Player::Update()
{
	dwkey = InputManager::GetInstance()->GetKey();

	if (dwkey & KEY_UP)
		Info.Position.y--;
	if (dwkey & KEY_DOWN)
		Info.Position.y++;
	if (dwkey & KEY_LEFT)
		Info.Position.x--;
	if (dwkey & KEY_RIGHT)
		Info.Position.x++;
}

void Player::Render()
{
	cout << "PlayerX : " << Info.Position.x << endl;
	cout << "PlayerY : " << Info.Position.y << endl;
}

void Player::Release()
{
}
