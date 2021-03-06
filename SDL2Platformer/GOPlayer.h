#pragma once
#include "GameObject.h"
#include "Rect.h"
class GOPlayer :
	public GameObject
{
public:
	GOPlayer(GameContext *, Rect);
	void handleEvent(SDL_Event *);
	void handleKeyboard(const Uint8 *);
	void handleCollision(GameObject *, Vector2D);

	float speed = 0.0f;
	float jumpSpeed = 0.0f;
	bool jumped = false;
	Size originalSize;
	bool crouched = false;
protected:
	void setCrouched(bool);
};

