//**********************************
//製作者　：安田稜香
//製作日　：2021/09/30
//クラス名：Component
//概要
//　基底コンポーネントクラス
//**********************************
#pragma once

class Component
{
public:
	Component() {};
	Component(GameObject*);

	virtual void Start() {};
	virtual void Update() {};
	virtual void Stop() {};

	// GetSet
	// 自身の子クラスが以外がアクセスするための関数
	GameObject* GetGameObject() { return m_gameObject; };
protected:
	GameObject* m_gameObject;
};