//**********************************
//����ҁ@�F���c�ō�
//������@�F2021/09/30
//�N���X���FComponent
//�T�v
//�@���R���|�[�l���g�N���X
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
	// ���g�̎q�N���X���ȊO���A�N�Z�X���邽�߂̊֐�
	GameObject* GetGameObject() { return m_gameObject; };
protected:
	GameObject* m_gameObject;
};