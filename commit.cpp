#include <iostream>
#include <string>
#include <vector>
#include <memory>

/*
 * -------------------------------------------------------------------
 * DATA STRUCTURE: Student
 * -------------------------------------------------------------------
 */
struct Student {
    int id;
    std::string name;
    double marks;

    Student(int i, std::string n, double m) : id(i), name(n), marks(m) {}

    void print() const {
        std::cout << "  ID:    " << id << "\n"
                  << "  Name:  " << name << "\n"
                  << "  Marks: " << marks << std::endl;
    }
};
