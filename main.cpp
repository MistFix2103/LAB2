import student_1bib21056.Lab2.Variant16.Task1;
import student_1bib21056.Lab2.Variant16.Task2;
import student_1bib21056.Lab2.Variant16.Task3;
import student_1bib21056.Lab2.Variant16.Task4;
import student_1bib21056.Lab2.Variant16.Task5;
#include <iostream>
using namespace std;

int main() {
    setlocale(LC_ALL, "Russian");
    int taskNumber, functionNumber;
    double x;

    while (true) {
        cout << "�������� ����� ������� (1-5, 0 ��� ������): ";
        cin >> taskNumber;
        if (taskNumber == 0) {
            break;
        }

        cout << "�������� ����� ������� (1-4): ";
        cin >> functionNumber;

        cout << "������� �������� x: ";
        cin >> x;

        switch (taskNumber) {
        case 1:
            switch (functionNumber) {
            case 1:
                cout << "���������: " << RBPO::Lab2::Variant16::Task1::f1(x) << endl;
                break;
            case 2:
                cout << "���������: " << RBPO::Lab2::Variant16::Task1::f2(x) << endl;
                break;
            case 3:
                cout << "���������: " << RBPO::Lab2::Variant16::Task1::f3(x) << endl;
                break;
            case 4:
                cout << "���������: " << RBPO::Lab2::Variant16::Task1::f4(x) << endl;
                break;
            default:
                cout << "�������� ����� �������.\n";
            }
            break;

        case 2:
            switch (functionNumber) {
            case 1:
                cout << "���������: " << RBPO::Lab2::Variant16::Task2::f1(x) << endl;
                break;
            case 2:
                cout << "���������: " << RBPO::Lab2::Variant16::Task2::f2(x) << endl;
                break;
            case 3:
                cout << "���������: " << RBPO::Lab2::Variant16::Task2::f3(x) << endl;
                break;
            case 4:
                cout << "���������: " << RBPO::Lab2::Variant16::Task2::f4(x) << endl;
                break;
            default:
                cout << "�������� ����� �������.\n";
            }
            break;

        case 3:
            switch (functionNumber) {
            case 1:
                cout << "���������: " << RBPO::Lab2::Variant16::Task3::f1(x) << endl;
                break;
            case 2:
                cout << "���������: " << RBPO::Lab2::Variant16::Task3::f2(x) << endl;
                break;
            case 3:
                cout << "���������: " << RBPO::Lab2::Variant16::Task3::f3(x) << endl;
                break;
            case 4:
                cout << "���������: " << RBPO::Lab2::Variant16::Task3::f4(x) << endl;
                break;
            default:
                cout << "�������� ����� �������.\n";
            }
            break;

        case 4:
            switch (functionNumber) {
            case 1:
                cout << "���������: " << RBPO::Lab2::Variant16::Task4::f1(x) << endl;
                break;
            case 2:
                cout << "���������: " << RBPO::Lab2::Variant16::Task4::f2(x) << endl;
                break;
            case 3:
                cout << "���������: " << RBPO::Lab2::Variant16::Task4::f3(x) << endl;
                break;
            case 4:
                cout << "���������: " << RBPO::Lab2::Variant16::Task4::f4(x) << endl;
                break;
            default:
                cout << "�������� ����� �������.\n";
            }
            break;

        case 5:
            switch (functionNumber) {
            case 1:
                cout << "���������: " << RBPO::Lab2::Variant16::Task5::f1(x) << endl;
                break;
            case 2:
                cout << "���������: " << RBPO::Lab2::Variant16::Task5::f2(x) << endl;
                break;
            case 3:
                cout << "���������: " << RBPO::Lab2::Variant16::Task5::f3(x) << endl;
                break;
            case 4:
                cout << "���������: " << RBPO::Lab2::Variant16::Task5::f4(x) << endl;
                break;
            default:
                cout << "�������� ����� �������.\n";
            }
            break;

        default:
            cout << "�������� ����� �������.\n";
        }
    }
    system("pause");
}
