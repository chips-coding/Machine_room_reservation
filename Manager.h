//
// Created by Administrator on 2023/1/19.
//

#ifndef MACHINE_ROOM_RESERVATION_MANAGER_H
#define MACHINE_ROOM_RESERVATION_MANAGER_H

#include <iostream>

using namespace std;

#include "Identity.h"
#include <string>
#include <fstream>
#include <vector>
#include "GlobalFile.h"
#include "Student.h"
#include "Teacher.h"
#include "algorithm"
#include "ComputerRoom.h"

class Manager : public Identity {
public:

    //Ĭ�Ϲ���
    Manager();

    //�вι���
    Manager(string name, string pwd);

    //ѡ��˵�
    virtual void operMenu();

    //����˺�
    void addPerson();

    //�鿴�˺�
    void showPerson();

    //�鿴������Ϣ
    void showComputer();

    //���ԤԼ��¼
    void cleanFile();

    //��ʼ������
    void initVector();

    //ѧ������
    vector<Student> vStu;

    //��ʦ����
    vector<Teacher> vTea;

    //ȥ��
    bool checkRepeat(int id, int type);

    //��������
    vector<ComputerRoom> vCom;

    void clearFile();
};


#endif //MACHINE_ROOM_RESERVATION_MANAGER_H
