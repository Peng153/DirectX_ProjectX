#include "stdafx.h"
#include "InputClass.h"

InputClass::InputClass()
{
}

InputClass::InputClass(const InputClass&)
{
}

InputClass::~InputClass()
{
}

void InputClass::Initialize()
{
	// 키 배열 초기화
	for (int i = 0; i < 256; ++i) m_key[i] = false;
}

void InputClass::KeyDown(unsigned int input)
{
	// 키가 눌렸을 시 키값 true
	m_key[input] = true;
}

void InputClass::KeyUp(unsigned int input)
{
	// 키가 해제되었을 시 키값 false
	m_key[input] = false;
}

bool InputClass::IsKeyDown(unsigned int key)
{
	// 키가 눌렸는지 아닌지 상태 반환
	return m_key[key];
}
