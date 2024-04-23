#include <iostream>
using namespace std;

string job;

int main()
{
	EnterLobby();
}

void EnterLobby()
{
	cout << "로비에 입장하였습니다.";
	SelectPlayer();
}

void SelectPlayer()
{
	cout << "직업을 골라주세요.";
	cout << "기사 궁수 법사";

	while (true)
	{
		cin >> job;
		if (job == "기사")
		{
			cout << "기사 생성중...";
			break;
		}
		else if (job == "궁수")
		{
			cout << "궁수 생성중...";
			break;
		}
		else if (job == "법사")
		{
			cout << "법사 생성중...";
			break;
		}
		else if (job == "하온")
		{
			cout << "명수 생성중...";
			break;
		}
		else
		{
			cout << "없어 다시해";
		}
	}
	
	EnterField();
}

void EnterField()
{
	cout << "필드에 입장하였습니다.";
}

void CreateMonster()
{

}

void EnterBattle()
{

}
