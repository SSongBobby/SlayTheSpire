#include "C_UI_MENU.h"
#include <iostream>
using namespace std;

void C_UI_MENU::printStartMenu()
{
	cout << "1. ���ӽ���" << endl;
	cout << "2. ��������" << endl;
}

void C_UI_MENU::printJobMenu()
{
	cout << "1. ����" << endl;
	cout << "2. ������" << endl;
}

void C_UI_MENU::printExplanation()
{
	cout << endl;
	cout << "[���� ����]" << endl;
	cout << endl;
	cout << "9���� ���� ����Ͽ� ������ ������ ���� �¸��ϴ� �����Դϴ�." << endl;
	cout << endl;
	cout << "���� ������ ������ �����ϴ�." << endl;
	cout << endl;
	cout << "---------------------------------------" << endl;
	cout << "���� �� : ������ ������ ���Ͱ� �����մϴ�. �Ϲ� ������ ȹ���� �� �ֽ��ϴ�." << endl;
	cout << "����Ʈ ���� �� : ���� ����Ʈ ���Ͱ� �����մϴ�. ��� ������ ȹ���� �� �ֽ��ϴ�." << endl;
	cout << "??? �� : ???" << endl;
	cout << "���� �� : ������ ���� ���� �Ǵ� �Ϲ�/��� ������ ȹ���� �� �ֽ��ϴ�." << endl;
	cout << "��ں� �� : ��ȭ �Ǵ� �޽� �� �ϳ��� ������ �� �ֽ��ϴ�." << endl;
	cout << "---------------------------------------" << endl;
	cout << endl;
	cout << "������ ������ ȹ���Ͽ� ������ ����ġ����!" << endl;
}
