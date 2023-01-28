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
#include "GlobalFile.h"
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


};


#endif //MACHINE_ROOM_RESERVATION_MANAGER_H
