#include <iostream>
using namespace std;

string job;

int main()
{
	EnterLobby();
}

void EnterLobby()
{
	cout << "�κ� �����Ͽ����ϴ�.";
	SelectPlayer();
}

void SelectPlayer()
{
	cout << "������ ����ּ���.";
	cout << "��� �ü� ����";

	while (true)
	{
		cin >> job;
		if (job == "���")
		{
			cout << "��� ������...";
			break;
		}
		else if (job == "�ü�")
		{
			cout << "�ü� ������...";
			break;
		}
		else if (job == "����")
		{
			cout << "���� ������...";
			break;
		}
		else if (job == "�Ͽ�")
		{
			cout << "��� ������...";
			break;
		}
		else
		{
			cout << "���� �ٽ���";
		}
	}
	
	EnterField();
}

void EnterField()
{
	cout << "�ʵ忡 �����Ͽ����ϴ�.";
}

void CreateMonster()
{

}

void EnterBattle()
{

}
