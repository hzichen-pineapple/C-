#pragma once
#include<iostream>
using namespace std;
#include<string>

//职工抽象基类
class Worker
{
public:
	//显示个人信息  【虚函数】
	virtual void showInfo() = 0;
	//获取岗位名称
	virtual string getDeptName() = 0;

	int m_ID;//职工编号
	string m_Name;//职工姓名
	int m_DeptID;//职工所在部门名称编号
};
