#pragma once
#include "GameObject.h"
#include "Define.h"
#include "Texture.h"
#include "Grid.h"


class BulletKraid : public GameObject
{
private:

	bool isRendered;
	float startX;
	float startY;
	float endX;
	float endY;


public:
	Sprite * sprite;

	void initBullet(float _Kraid_posX, float _Kraid_posY, float _Samus_posX);
	void Update(float t);
	void Update(float t, float posX, float posY);
	void Render();
	void InitSprites(LPDIRECT3DDEVICE9 d3ddv, LPDIRECT3DTEXTURE9 texture);
	void Reset(float posX, float posY);
	BulletKraid();
	BulletKraid(LPD3DXSPRITE spriteHandler, Grid* grid);
	~BulletKraid();

	void setIsRendered(bool isRendered);
	bool getIsRendered();

	Bullet_Enemy_Direction bulletDirection;

	float Kraid_posX;
	float Kraid_posY;

	float Samus_posX;

	bool isCollided;

	bool isUp;
	bool isDown;

	float collideDistanceY;
	float collideDistanceX;

	float liveTime = 0;
	bool isWaiting = false;
};