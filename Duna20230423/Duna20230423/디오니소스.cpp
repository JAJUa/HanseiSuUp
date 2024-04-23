#include <iostream>
using namespace std;

int job;
int EnterFieldNum;

int RandMonster;
int damage;

int P_HP;
int P_ATK;
int P_DEF;

string E_Name;
int E_HP;
int E_ATK;
int E_DEF;

void EnterLobby();
void SelectPlayer();
void EnterField();
void CreateMonster();
void EnterBattle();


int main()
{
	cout << RandMonster << endl;
	EnterLobby();
}

void EnterLobby()
{
	cout << "로비에 입장하였습니다." << endl;
	SelectPlayer();
}

void SelectPlayer()
{
	cout << "직업을 골라주세요." << endl;
	cout << "(1)기사 (2)궁수 (3)법사 (4)하온" << endl;

	while (true)
	{
		cin >> job;
		if (job == 1)
		{
			cout << "기사 생성중..." << endl;
			P_HP = 40;
			P_ATK = 10;
			P_DEF = 9;
			break;
		}
		else if (job == 2)
		{
			cout << "궁수 생성중..." << endl;
			P_HP = 20;
			P_ATK = 30;
			P_DEF = 5;
			break;
		}
		else if (job == 3)
		{
			cout << "법사 생성중..." << endl;
			P_HP = 30;
			P_ATK = 40;
			P_DEF = 7;
			break;
		}
		else if (job == 4)
		{
			cout << "명수 생성중..." << endl;
			P_HP = 999;
			P_ATK = 999;
			P_DEF = 9;
			break;
		}
		else
		{
			cout << "없어 다시해";
		}
	}
	
	cout << "(1)필드 입장 (2)게임 종료" << endl;
	cin >> EnterFieldNum;
	if (EnterFieldNum == 1)
	{
		EnterField();
	}
	else
	{
		cout << "꺼지슈";
	}
}

void EnterField()
{
	cout << "필드에 입장하였습니다." << endl;

	cout << "[위승싱] HP :" << P_HP << " / ATK : " << P_ATK << " / DEF : " << P_DEF << endl;
	CreateMonster();
}

void CreateMonster()
{
	srand(time(0));
	RandMonster = rand() % 3;
	if (RandMonster == 0)
	{
		E_Name = "기모티1";
		E_HP = 60;
		E_ATK = 15;
		E_DEF = 5;
	}
	else if (RandMonster == 1)
	{
		E_Name = "기모티2";
		E_HP = 50;
		E_ATK = 20;
		E_DEF = 10;
	}
	else if (RandMonster == 2)
	{
		E_Name = "기모티3";
		E_HP = 100;
		E_ATK = 10;
		E_DEF = 7;
	}
	cout << "적 출현! // [" << E_Name << "] HP : " <<  E_HP << " / ATK : " << E_ATK << " / DEF : " << E_DEF << endl;

	cout << "(1)전투 (2)도주";
	if (EnterFieldNum == 1)
	{
		EnterBattle();
	}
	else
	{	
		cout << "당신은 하수";
	}
}

void EnterBattle()
{
	while (true)
	{
		damage = P_ATK - E_DEF;
		E_HP -= damage;
		cout << "몬스터의 남은 체력 : " << E_HP << endl;
		damage = P_ATK - E_DEF;
		P_HP -= damage;
		cout << "위승싱의 남은 체력 : " << P_HP << endl;

		if (E_HP <= 0)
		{
			cout << "당신은 고수"<< endl;
			break;
		}
		else if (P_HP <= 0)
		{
			cout << "당신은 하수" << endl;
			break;
		}
	}
}
