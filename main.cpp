#include <iostream>

using namespace std;

#include "GlobalFile.h"
#include "Identity.h"
#include "fstream"
#include "string"
#include "Student.h"
#include "Teacher.h"
#include "Manager.h"


void managerMenu(Identity *&manager) {
    while (1) {
        //����Ա�˵�
        manager->operMenu();

        Manager *man = (Manager*)manager;

        int select = 0;

        cin >> select;

        if (select == 1) { //����˺�
            cout << "����˺�" <<endl;
            man->addPerson();
        } else if (select == 2) { //�鿴�˺�
            cout << "�鿴�˺�" <<endl;
            man->showPerson();
        } else if (select == 3) { //�鿴����
            cout << "�鿴����" <<endl;
            man->showPerson();
        } else if (select == 4) { //���ԤԼ
            cout << "���ԤԼ" << endl;
            man->cleanFile();
        } else {
            delete manager;
            cout << "ע���ɹ�" << endl;
            system("pause");
            system("cls");
            return;
        }
    }
}

void LoginIn(string filename, int type) {
    Identity *person = nullptr;

    ifstream ifs; //���ļ�
    ifs.open(filename, ios::in);

    //�ļ�������ʱ
    if (!ifs.is_open()) {
        cout << "�ļ�������" <<endl;
        ifs.close();
        return;
    }

    int id = 0;
    string name;
    string pwd;


    if (type == 1) { //ѧ����¼
        cout << "���������ѧ��" << endl;
        cin >> id;
    } else if (type == 2) { //��ʦ��¼
        cout << "���������ְ����" <<endl;
        cin >> id;
    }

    cout << "�������û�����" << endl;
    cin >> name;

    cout << "���������룺" <<endl;
    cin >> pwd;

    if (type == 1) {
        //ѧ����¼��֤
        int fId;
        string fName;
        string fPwd;
        while (ifs >> fId && ifs >> fName && ifs >> fPwd) {
            if (id == fId && name == fName && pwd == fPwd) {
                cout << "ѧ����֤��¼�ɹ���" << endl;
                system("pause");
                system("cls");
                person = new Student(id, name, pwd);

                return;
            }

        }
    } else if (type == 2) {
        //��ʦ��¼��֤
        int fId;
        string fName;
        string fPwd;
        while (ifs >> fId && ifs >> fName && ifs >> fPwd) {
            if (id == fId && name == fName && pwd == fPwd) {
                cout << "��ʦ��֤��¼�ɹ���" << endl;
                system("pause");
                system("cls");
                person = new Teacher(id, name, pwd);



                return;
            }

        }
    } else if (type == 3) {
        //����Ա��¼��֤
        string fName;
        string fPwd;
        while (ifs >> fName && ifs >> fPwd) {
            if (name == fName && pwd == fPwd) {
                cout << "����Ա��֤��¼�ɹ���" << endl;
                system("pause");
                system("cls");
                person = new Manager(name, pwd);

                //�������Ա�Ӳ˵�����
                managerMenu(person);
                return;
            }

        }
    }

    cout << "��֤��¼ʧ�ܣ�" << endl;

    system("pause");
    system("cls");
    return;

}

void test01() {
    ofstream out("arrin.txt");
    if (out.is_open())
    {
        out << "This is a line.\n";
        out << "This is another line.\n";
        out.close();
    }


}
int main() {
    int select = 0;
    while (1) {
        cout << "============= ��ӭ��������ԤԼϵͳ =============" << endl;
        cout << "�������������" << endl;
        cout << "1��ѧ������" << endl;
        cout << "2����ʦ" << endl;
        cout << "3������Ա" << endl;
        cout << "0���˳�" << endl;
        cout << "����������ѡ��" << endl;

        cin >> select;

        switch (select) {
            case 1: //ѧ��
                LoginIn(STUDENT_FILE, 1);
                break;
            case 2: //��ʦ
                LoginIn(TEACHER_FILE, 2);
                break;
            case 3: //����Ա
                LoginIn(ADMIN_FILE, 3);
                break;
            case 0: //�˳�ϵͳ
                cout << "��ӭ�´�ʹ��" << endl;
                system("pause");
                return 0;
                break;
            default:
                cout << "��������������ѡ��" << endl;
                system("pause");
                system("cls");
                break;
        }
    }


}




