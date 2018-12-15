/**
This is a the Student class which helps us to create student objects.
The class contains functions and data members to help us process instances of this class
**/

#ifndef STUDENT_H
#define STUDENT_H
#include <iostream>
#include <string>

using namespace std;

class Student
{
    // Data members of the Student class
    public:
        Student();
        int choice;
         string student_name[500];   // Names of the student are stored in an array of size 500
        string student_id[500]; // student id of the students are stored in an array of size 500 like wise the other data data members below
        string student_course[500];
        string student_level[500];
        string student_email[500];
        string student_address[500];
        int student_number;

        // Functions to process the instances of this class

        void add_student(int num);  // function to add a student. This function does not return anything
        void delete_student(string std_id); // function to delete a student
        void edit_student(string std_id); // function to edit a student
        void show_student(int num); // function to display students
        void print_record(); // function to print out the records of students

    protected:

    private:

};

#endif // STUDENT_H
