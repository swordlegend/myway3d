#include "Player.h"
#include "Engine.h"

namespace Myway {

	Player::Player()
	{
	}

	void Player::Init()
	{
		MeshPtr mesh = MeshManager::Instance()->CreateSphere("playerM", 20, 20, 30);
		mEntity = World::Instance()->CreateEntity("playerM", mesh);
		mSceneNode = World::Instance()->CreateSceneNode();

		mSceneNode->Attach(mEntity);

		mShape = new Newton::tEllipsoid(32);

		float padding = 1 / 64.0f;
		float maxStairStepFactor = mesh->GetAabb().GetHeight();

		mController = new Newton::tPlayerController(mSceneNode, mShape);

		Mat4 worldTm;

		mSceneNode->SetPosition(0, 30, -100);
	}

	void Player::Shutdown()
	{
	}

	void Player::Update()
	{
		const float PLAYER_SPEED = 100.0f;

		float forwardSpeed = 0;
		float sideSpeed = 0;
		float dirAngle = 0;

		if (IKeyboard::Instance()->KeyPressed(KC_W))
		{
			forwardSpeed = PLAYER_SPEED;
		}
		else if (IKeyboard::Instance()->KeyPressed(KC_S))
		{
			forwardSpeed = -PLAYER_SPEED;
		}

		if (IKeyboard::Instance()->KeyPressed(KC_A))
		{
			sideSpeed = -PLAYER_SPEED;
		}
		else if (IKeyboard::Instance()->KeyPressed(KC_D))
		{
			sideSpeed = PLAYER_SPEED;
		}

		if (mSceneNode->GetPosition().y <= 50)
			mController->SetVelocity(forwardSpeed);

		float frameTime = Engine::Instance()->GetFrameTime();

		mController->Update(frameTime);
	}



}