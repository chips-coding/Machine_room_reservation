//
// Created by Administrator on 2023/1/19.
//


#include "Manager.h"

Manager::Manager() {

}

Manager::Manager(string name, string pwd) {
    this->m_Name = name;
    this->m_Pwd = pwd;
}

void Manager::operMenu() {
    cout << "��ӭ����Ա��" << this->m_Name << "��¼��" << endl;
    cout << "1������˺�" << endl;
    cout << "2���鿴�˺�" << endl;
    cout << "3���鿴����" << endl;
    cout << "4�����ԤԼ" << endl;
    cout << "0��ע����¼" << endl;
    cout << "��ѡ�����Ĳ���" << endl;
}

void Manager::addPerson() {
    cout << "����������˺ŵ����ͣ�" << endl;
    cout << "1�����ѧ��" << endl;
    cout << "2�������ʦ" << endl;

    string fileName;
    string tip;
    ofstream ofs;

    int select = 0;
    cin >> select;

    if (select == 1) {
        fileName = STUDENT_FILE;
        tip = "������ѧ�ţ�";
    } else {
        fileName = TEACHER_FILE;
        tip = "������ְ����ţ�";
    }

    ofs.open(fileName, ios::out | ios::app);
    int id;
    string name;
    string pwd;
    cout << tip << endl;

    cin >> id;

    cout << "������������" << endl;
    cin >> name;

    cout << "���������룺" << endl;
    cin >> pwd;

    ofs << id << " " << name << " " << pwd << " " << endl;
    cout << "��ӳɹ�" << endl;

    system("pause");
    system("cls");

    ofs.close();
}

void Manager::showPerson() {

}

void Manager::showComputer() {

}

void Manager::cleanFile() {

}


