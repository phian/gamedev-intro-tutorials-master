#pragma once

#include <Windows.h>
#include <d3dx9.h>

class CGameObject
{
protected: 
	float x; 
	float y;

	LPDIRECT3DTEXTURE9 texture;			
public: 
	void SetPosition(float x, float y) { this->x = x, this->y = y; }

	CGameObject(LPCWSTR texturePath);
	CGameObject() {}
	virtual void Update(DWORD dt);
	void Render();
	~CGameObject();
};

class CMario : public CGameObject
{
public: 
	CMario() {}
	CMario(LPCWSTR texturePath) :CGameObject(texturePath) {};
	void Update(DWORD dt);
};

class CBall : public CGameObject
{
public:
	CBall() {}
	CBall(LPCWSTR textTurePath) :CGameObject(textTurePath) { vtx = 0.1f; vty = 0.1f; };

	float vtx;
	float vty;
	void Update(DWORD dt);
};