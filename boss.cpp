#include"boss.h"

Boss::Boss(int id, string name, int dId)
{
	this->m_ID = id;
	this->m_Name = name;
	this->m_DeptID = dId;
}

void Boss::showInfo() {
	cout << "ְ����ţ�" << this->m_ID
		<< "\tְ��������" << this->m_Name
		<< "\tְ����λ��" << getDeptName()
		<< "\t��λְ�𣺹���˾��������" << endl;
}

string Boss::getDeptName()
{
	return string("�ϰ�");  
}