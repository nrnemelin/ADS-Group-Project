# Group Project: Student ID Search

This project is a C++ simulation for the Algorithm and Data Structure (TFB 2023/TEB 1113) course.

It compares a **Baseline** method (unsorted vector) with an **Optimized** method (Binary Search Tree) for storing and searching university student records by ID.

- **Baseline Approach:** Uses an `std::vector`. New students are added to the end.
  - **Search:** A Linear Search is used, which checks every student one by one.
  - **Complexity:** O(n). This is very slow for a large database.

- **Optimized Approach:** Uses a **Binary Search Tree (BST)**. Students are stored in a sorted, tree-like structure.
  - **Search:** A Binary Search is used, which intelligently discards half the data at each step.
  - **Complexity:** O(log n) on average. This is extremely fast, even for millions of students.

## How to Compile and Run

This program is written in C++. You will need a C++ compiler like `g++`.

1.  **Clone the repository:**
    ```sh
    git clone [your-repo-link]
    cd [your-repo-directory]
    ```

2.  **Compile the program:**
    Open a terminal and run the following command to compile `main.cpp`. We use `-std=c++17` for `std::make_unique`.
    ```sh
    g++ main.cpp -o student_db -std=c++17
    ```

3.  **Run the program:**
    Execute the compiled file:
    ```sh
    ./student_db
    ```

4.  **Observe the Output:**
    The output will run both simulations. It will print the student found and, most importantly, show the **number of comparisons** each search took. This demonstrates the O(n) vs. O(log n) improvement.
