#pragma once

enum class MoveType {
	Right,
	Up,
	Left,
	Down
};
/*
*Actor Ŭ����
* - �ɹ� ����  
* private : MoveType mType - �ʱⰪ : MoveType::Right
* private : int x - �ʱⰪ : 0
* private : int y - �ʱⰪ : 0
* 
* function (�Լ�)
* void Tick(); // main() �Լ��� while�� �ȿ��� ȣ���� ����
* void PrintLocation();// ( x = x , z = z ) <--- �̷��� ���
* 
*/
class Actor
{
	MoveType mType;
	int x;
	int z;
public :
	void Tick();	
	void PrintLocation();
	Actor();

};