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

/*
 * ===================================================================
 * 1. BASELINE SOLUTION (Unsorted Vector)
 * ===================================================================
 */
class BaselineDatabase {
// ... (all the code for BaselineDatabase) ...
};

/*
 * ===================================================================
 * 2. OPTIMIZED SOLUTION (Binary Search Tree)
 * ===================================================================
 */
class OptimizedDatabase {
// ... (all the code for OptimizedDatabase, including the Node struct) ...
};

/*
 * -------------------------------------------------------------------
 * main()
 * -------------------------------------------------------------------
 */
int main() {
// ... (all the code from your main function) ...
}
