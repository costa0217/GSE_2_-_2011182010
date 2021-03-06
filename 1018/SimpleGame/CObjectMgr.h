#pragma once
#include "Renderer.h"

#include "CObj.h"
#include "CSceneMgr.h"

class CObjectMgr
{
public:
	CObjectMgr();
	~CObjectMgr();

private:
	list<CObj*>		m_ObjList;
	CSceneMgr*		m_pSceneMgr;

	float			m_fStartTime{ 0.f };
	float			m_fNowTime{ 0.f };

public:
	list<CObj*>*	GetObjectList() { return &m_ObjList; };

public:
	void pushObject(CObj* pObject);

	void RenderObjects(Renderer* pRenderer);
};

