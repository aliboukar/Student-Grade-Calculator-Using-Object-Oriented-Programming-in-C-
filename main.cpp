#include <iostream>
using namespace std;


class Student {
protected:
    string name;
    int id;

public:
    Student(string n, int i) {
        name = n;
        id = i;
    }

    virtual double calculateGrade() {
        return 0;
    }

    void showInfo() {
        cout << "Name: " << name << endl;
        cout << "ID: " << id << endl;
    }
};


class UndergraduateStudent : public Student {
private:
    double exam;
    double coursework;

public:
    UndergraduateStudent(string n, int i, double e, double c)
        : Student(n, i) {
        exam = e;
        coursework = c;
    }

    double calculateGrade() {
        return exam * 0.6 + coursework * 0.4;
    }
};


class GraduateStudent : public Student {
private:
    double research;
    double presentation;

public:
    GraduateStudent(string n, int i, double r, double p)
        : Student(n, i) {
        research = r;
        presentation = p;
    }

    double calculateGrade() {
        return research * 0.7 + presentation * 0.3;
    }
};

int main() {
    int choice;
    string name;
    int id;

    cout << "Student Grade Calculator\n";
    cout << "1. Undergraduate Student\n";
    cout << "2. Graduate Student\n";
    cout << "Choose student type: ";
    cin >> choice;

    cout << "Enter name: ";
    cin >> name;

    cout << "Enter ID: ";
    cin >> id;

    if (choice == 1) {
        double exam, coursework;
        cout << "Enter exam grade: ";
        cin >> exam;
        cout << "Enter coursework grade: ";
        cin >> coursework;

        UndergraduateStudent student(name, id, exam, coursework);
        student.showInfo();
        cout << "Final Grade: " << student.calculateGrade() << endl;
    }
    else if (choice == 2) {
        double research, presentation;
        cout << "Enter research grade: ";
        cin >> research;
        cout << "Enter presentation grade: ";
        cin >> presentation;

        GraduateStudent student(name, id, research, presentation);
        student.showInfo();
        cout << "Final Grade: " << student.calculateGrade() << endl;
    }
    else {
        cout << "Invalid choice!" << endl;
    }

    return 0;
}

