#pragma once
#include<iostream>
using namespace std;
#include<string>

//ְ���������
class Worker
{
public:
	//��ʾ������Ϣ  ���麯����
	virtual void showInfo() = 0;
	//��ȡ��λ����
	virtual string getDeptName() = 0;

	int m_ID;//ְ�����
	string m_Name;//ְ������
	int m_DeptID;//ְ�����ڲ������Ʊ��
};