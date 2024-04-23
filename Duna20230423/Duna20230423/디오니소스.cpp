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
	cout << "�κ� �����Ͽ����ϴ�." << endl;
	SelectPlayer();
}

void SelectPlayer()
{
	cout << "������ ����ּ���." << endl;
	cout << "(1)��� (2)�ü� (3)���� (4)�Ͽ�" << endl;

	while (true)
	{
		cin >> job;
		if (job == 1)
		{
			cout << "��� ������..." << endl;
			P_HP = 40;
			P_ATK = 10;
			P_DEF = 9;
			break;
		}
		else if (job == 2)
		{
			cout << "�ü� ������..." << endl;
			P_HP = 20;
			P_ATK = 30;
			P_DEF = 5;
			break;
		}
		else if (job == 3)
		{
			cout << "���� ������..." << endl;
			P_HP = 30;
			P_ATK = 40;
			P_DEF = 7;
			break;
		}
		else if (job == 4)
		{
			cout << "��� ������..." << endl;
			P_HP = 999;
			P_ATK = 999;
			P_DEF = 9;
			break;
		}
		else
		{
			cout << "���� �ٽ���";
		}
	}
	
	cout << "(1)�ʵ� ���� (2)���� ����" << endl;
	cin >> EnterFieldNum;
	if (EnterFieldNum == 1)
	{
		EnterField();
	}
	else
	{
		cout << "������";
	}
}

void EnterField()
{
	cout << "�ʵ忡 �����Ͽ����ϴ�." << endl;

	cout << "[���½�] HP :" << P_HP << " / ATK : " << P_ATK << " / DEF : " << P_DEF << endl;
	CreateMonster();
}

void CreateMonster()
{
	srand(time(0));
	RandMonster = rand() % 3;
	if (RandMonster == 0)
	{
		E_Name = "���Ƽ1";
		E_HP = 60;
		E_ATK = 15;
		E_DEF = 5;
	}
	else if (RandMonster == 1)
	{
		E_Name = "���Ƽ2";
		E_HP = 50;
		E_ATK = 20;
		E_DEF = 10;
	}
	else if (RandMonster == 2)
	{
		E_Name = "���Ƽ3";
		E_HP = 100;
		E_ATK = 10;
		E_DEF = 7;
	}
	cout << "�� ����! // [" << E_Name << "] HP : " <<  E_HP << " / ATK : " << E_ATK << " / DEF : " << E_DEF << endl;

	cout << "(1)���� (2)����";
	if (EnterFieldNum == 1)
	{
		EnterBattle();
	}
	else
	{	
		cout << "����� �ϼ�";
	}
}

void EnterBattle()
{
	while (true)
	{
		damage = P_ATK - E_DEF;
		E_HP -= damage;
		cout << "������ ���� ü�� : " << E_HP << endl;
		damage = P_ATK - E_DEF;
		P_HP -= damage;
		cout << "���½��� ���� ü�� : " << P_HP << endl;

		if (E_HP <= 0)
		{
			cout << "����� ���"<< endl;
			break;
		}
		else if (P_HP <= 0)
		{
			cout << "����� �ϼ�" << endl;
			break;
		}
	}
}
