//
// Created by Administrator on 2023/1/19.
//

#ifndef MACHINE_ROOM_RESERVATION_TEACHER_H
#define MACHINE_ROOM_RESERVATION_TEACHER_H
#include <iostream>
using namespace std;
#include "Identity.h"
#include <string>


class Teacher : public Identity {
public:

    //Ĭ�Ϲ���
    Teacher();

    //�в�
    Teacher(int empId, string name, string pwd);

    //�˵�ҳ��
    virtual void operMenu();


    //�鿴�ҵ�ԤԼ
    void showMyOrder();


    //���ԤԼ
    void validOrder();

    int m_EmpId; //��ʦ���
};


#endif //MACHINE_ROOM_RESERVATION_TEACHER_H
