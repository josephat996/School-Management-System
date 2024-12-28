
// SchoolManagementSystem.cpp
#include <iostream>
#include <vector>
#include <string>
using namespace std;

// Class for Teacher
class Teacher {
public:
    string name;
    string subject;
    int id;

    Teacher(string n, string s, int i) : name(n), subject(s), id(i) {}

    void displayInfo() {
        cout << "Teacher ID: " << id << ", Name: " << name << ", Subject: " << subject << endl;
    }
};

// Class for Student
class Student {
public:
    string name;
    int id;
    int grade;

    Student(string n, int i, int g) : name(n), id(i), grade(g) {}

    void displayInfo() {
        cout << "Student ID: " << id << ", Name: " << name << ", Grade: " << grade << endl;
    }
};

// Class for SchoolClass
class SchoolClass {
public:
    string className;
    vector<Teacher> teachers;
    vector<Student> students;

    SchoolClass(string name) : className(name) {}

    void addTeacher(Teacher t) {
        teachers.push_back(t);
    }

    void addStudent(Student s) {
        students.push_back(s);
    }

    void displayClassInfo() {
        cout << "Class: " << className << endl;
        cout << "Teachers:" << endl;
        for (Teacher t : teachers) {
            t.displayInfo();
        }
        cout << "Students:" << endl;
        for (Student s : students) {
            s.displayInfo();
        }
    }
};

int main() {
    // Create some teachers
    Teacher t1("Alice Johnson", "Math", 101);
    Teacher t2("Bob Smith", "History", 102);

    // Create some students
    Student s1("John Doe", 201, 10);
    Student s2("Jane Roe", 202, 9);

    // Create a class
    SchoolClass class10A("10A");

    // Add teachers and students to the class
    class10A.addTeacher(t1);
    class10A.addTeacher(t2);
    class10A.addStudent(s1);
    class10A.addStudent(s2);

    // Display class information
    class10A.displayClassInfo();

    return 0;
}
