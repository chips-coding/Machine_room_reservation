//
// Created by Administrator on 2023/1/19.
//

#ifndef MACHINE_ROOM_RESERVATION_IDENTITY_H
#define MACHINE_ROOM_RESERVATION_IDENTITY_H
#include "iostream"
using namespace std;

class Identity {
public:

    //�����˵������麯��
    virtual void operMenu() = 0;

    string m_Name; //�û���
    string m_Pwd; //����
};


#endif //MACHINE_ROOM_RESERVATION_IDENTITY_H

