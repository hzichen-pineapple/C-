#pragma once//��ֹͷ�ļ��ظ�����
#include<iostream>//�������������
using namespace std;//ʹ�ñ�׼�����ռ�  ���������cout������������cin
#include"worker.h"
#include"employee.h"
#include"manager.h"
#include"boss.h"

#include<fstream>
#define FILENAME "empFile.txt"//���ú곣�����ļ�׼������

class WorkerManager {
public:
	//ͷ�ļ�ֻд����������дʵ��
	//���캯��
	WorkerManager();

	//չʾ�˵�
	void Show_Menu();
	
	//�˳�ϵͳ
	void exitSystem();

	//��¼�ļ��е���������
	int m_EmpNum;
	
	//Ա�������ָ��
	Worker** m_EmpArray;

	//���ְ��
	void Add_Emp();

	//�����ļ�
	void save();

	//�ж��ļ��Ƿ�Ϊ�յı�ʶ
	bool m_FileIsEmpty;

	//ͳ������
	int get_EmpNum();

	//��ʼ��Ա��
	void init_Emp();
	
	//��ʾԱ��
	void show_Emp();

	//ɾ��ְ��
	void Del_Emp();

	//����ְ������ж�ְ���Ƿ����,�����ڷ���ְ����������λ�ã������ڷ���-1
	int IsExist(int id);

	//�޸�ְ��
	void Mod_Emp();

	//����ְ��
	void Find_Emp();

	//����ְ��
	void Sort_Emp();

	//����ļ�
	void Clean_File();

	//��������
	~WorkerManager();
};
