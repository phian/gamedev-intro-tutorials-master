#pragma once
#include "GameObject.h"

#define MARIO_WALKING_SPEED		0.1f
#define MARIO_JUMP_SPEED_Y		0.5f
#define MARIO_GRAVITY			0.1f

#define MARIO_STATE_IDLE					0
#define MARIO_STATE_WALKING_RIGHT			100
#define MARIO_STATE_WALKING_LEFT			200
#define MARIO_STATE_JUMP					300
#define MARIO_STATE_SITDOWN					400
#define MARIO_STATE_SITDOWN_CHANGE_COLOR	500


#define MARIO_ANI_IDLE_RIGHT						0
#define MARIO_ANI_IDLE_LEFT							1
#define MARIO_ANI_WALKING_RIGHT						2
#define MARIO_ANI_WALKING_LEFT						3
#define MARIO_ANI_SITDOWN_RIGHT						4
#define MARIO_ANI_SITDOWN_LEFT						5
#define MARIO_ANI_SITDOWN_RIGHT_CHANGE_COLOR		6
#define MARIO_ANI_SITDOWN_LEFT_CHANGE_COLOR			7

class CMario : public CGameObject
{
public:

	void Update(DWORD dt);
	void Render();
	void SetState(int state);
};