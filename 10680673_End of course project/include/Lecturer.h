/**
Lecturer class whose instances are the staff members in the school
**/
#ifndef LECTURER_H
#define LECTURER_H
#include <iostream>
#include <string>

#include "Student.h"

using namespace std;


class Lecturer
{

    // Data members
    public:
        string myst_course[5];
        double mark[5];
        string student_course[5];
        int student_num;


        // Functions
        void student_mark(int course_num);
        void assign_course(string student_id,int student_numbe);


    protected:

    private:
            Student show_students;

};

#endif // LECTURER_H
