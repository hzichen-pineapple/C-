#pragma once//防止头文件重复包含
#include<iostream>//包含输入输出流
using namespace std;//使用标准命名空间  输出流对象cout，输入流对象cin
#include"worker.h"
#include"employee.h"
#include"manager.h"
#include"boss.h"

#include<fstream>
#define FILENAME "empFile.txt"//利用宏常量把文件准备出来

class WorkerManager {
public:
	//头文件只写函数声明不写实现
	//构造函数
	WorkerManager();

	//展示菜单
	void Show_Menu();
	
	//退出系统
	void exitSystem();

	//记录文件中的人数个数
	int m_EmpNum;
	
	//员工数组的指针
	Worker** m_EmpArray;

	//添加职工
	void Add_Emp();

	//保存文件
	void save();

	//判断文件是否为空的标识
	bool m_FileIsEmpty;

	//统计人数
	int get_EmpNum();

	//初始化员工
	void init_Emp();
	
	//显示员工
	void show_Emp();

	//删除职工
	void Del_Emp();

	//按照职工编号判断职工是否存在,若存在返回职工在数组中位置，不存在返回-1
	int IsExist(int id);

	//修改职工
	void Mod_Emp();

	//查找职工
	void Find_Emp();

	//排序职工
	void Sort_Emp();

	//清空文件
	void Clean_File();

	//析构函数
	~WorkerManager();
};
