//
// Created by Administrator on 2023/1/19.
//

#include <fstream>
#include "Student.h"

Student::Student() {

}

Student::Student(int id, string name, string pwd) {

    this->m_Id = id;
    this->m_Name = name;
    this->m_Pwd = pwd;

    ifstream ifs;
    ifs.open(COMPUTER_FILE, ios::in);

    ComputerRoom c;
    while (ifs >> c.m_ComId && ifs >> c.m_MaxNum) {
        vCom.push_back(c);
    }

    ifs.close();

}

void Student::operMenu() {
    cout << "��ӭѧ����" << this->m_Name << "��¼��" << endl;
    cout << "1������ԤԼ" << endl;
    cout << "2���鿴�ҵ�ԤԼ" << endl;
    cout << "3���鿴����ԤԼ" << endl;
    cout << "4��ȡ��ԤԼ" << endl;
    cout << "0��ע����¼" << endl;
    cout << "��ѡ�����Ĳ���" << endl;
}

void Student::applyOrder() {
    cout << "��������ʱ��Ϊ��һ������" << endl;
    cout << "����������ԤԼ��ʱ��" << endl;
    cout << "1����һ" << endl;
    cout << "2���ܶ�" << endl;
    cout << "3������" << endl;
    cout << "4������" << endl;
    cout << "5������" << endl;

    int date = 0;
    int interval = 0;
    int room = 0;

    while (true) {
        cin >> date;
        if (date >= 1 && date <= 5) {
            break;
        }
        cout << "������������������" << endl;


    }

    cout << "����������ԤԼʱ���" << endl;
    cout << "1������" << endl;
    cout << "2������" << endl;

    while (true) {
        cin >> interval;
        if (interval >= 1 && interval <=2) {
            break;
        }
        cout << "������������������" << endl;
    }

    cout << "��ѡ�������" << endl;
    cout << "1�Ż�������" << vCom[0].m_MaxNum << endl;
    cout << "2�Ż�������" << vCom[1].m_MaxNum << endl;
    cout << "3�Ż�������" << vCom[2].m_MaxNum << endl;

    while (true) {
        cin >> room;
        if (room >= 1 && room <= 3) {
            break;
        }
        cout << "������������������" << endl;
    }

    cout <<"ԤԼ�ɹ�������У�" << endl;

    ofstream ofs(ORDER_FILE, ios::app);

    ofs << "data:" << date << " ";
    ofs << "interval:" << interval << " ";
    ofs << "stuId:" << this->m_Id << " ";
    ofs << "stuName:" << this->m_Name << " ";
    ofs << "roomId:" << room << " ";
    ofs << "status:" << 1 << endl;

    ofs.close();

    system("pause");
    system("cls");

}

void Student::showMyOrder() {
    OrderFile of;

}

void Student::showAllOrder() {

}

void Student::cancelOrder() {

}
