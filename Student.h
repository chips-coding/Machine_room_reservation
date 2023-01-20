//
// Created by Administrator on 2023/1/19.
//

#ifndef MACHINE_ROOM_RESERVATION_STUDENT_H
#define MACHINE_ROOM_RESERVATION_STUDENT_H
#include <iostream>
#include "Identity.h"
using namespace std;

class Student : public Identity{
public:

    //Ĭ�Ϲ���
    Student();

    //�вι���
    Student(int id, string name, string pwd);

    //�˵�ҳ��
    virtual void operMenu();

    //����ԤԼ
    void applyOrder();

    //�鿴�ҵ�ԤԼ
    void showMyOrder();

    //�鿴����ԤԼ
    void showAllOrder();

    //ȡ��ԤԼ
    void cancelOrder();

    //ѧ��ѧ��
    int m_Id;

};


#endif //MACHINE_ROOM_RESERVATION_STUDENT_H
