#pragma once

enum class MoveType {
	Right,
	Up,
	Left,
	Down
};
/*
*Actor 클래스
* - 맴버 변수  
* private : MoveType mType - 초기값 : MoveType::Right
* private : int x - 초기값 : 0
* private : int y - 초기값 : 0
* 
* function (함수)
* void Tick(); // main() 함수에 while문 안에서 호출할 예정
* void PrintLocation();// ( x = x , z = z ) <--- 이렇게 출력
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