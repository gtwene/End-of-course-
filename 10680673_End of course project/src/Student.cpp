#include "Student.h"
#include <iostream>
#include <string>
#include <fstream>
#include <cstdlib>

using namespace std;


Student::Student()
{
    //ctor
}

void Student:: add_student(int student_number)
{


    for (int i=0;i < student_number; i++)
    {
        cout << "Name: ";
        cin >> student_name[i];
        cout << "Student ID: ";
        cin >> student_id[i];
        cout << "Course: ";
        cin >> student_course[i];
        cout << "Level: ";
        cin >> student_level[i];
        cout << "Email: ";
        cin >> student_email[i];
        cout << "Address: ";
        cin >> student_address[i];

    }
    cout << endl;
}

void Student::edit_student(string std_id)
{
    for (int i=0;i<student_number; i++)
    {
        if(std_id==student_id[i])
        {
            continue;
        }

        add_student(i);

    }
}

void Student::show_student(int num)
{
    for (int i=0; i<student_number; i++)
    {
        cout << "Name \t Id \t Course \t Level \t Email \t Address" << endl;
        cout << student_name[i] << "\t" << student_id[i] <<  "\t" << student_course[i] << "\t" << student_level[i] << "\t" <<student_email;
        cout << "\t" << student_address[i];
    }
    cout << endl;
}

void Student::delete_student(string std_id)

{


    for (int i=0; i<student_number; i++)
    {
        std_id=student_id[i];
       show_student(i);
       cout << "Do you want to delete this?" << endl;
       cout << "1.Yes" << endl;
       cout << "2.No" << endl;
       cout << ">: ";
       cin >> choice;

        switch(choice)
        {
        case 1:

            {
                student_name[i]="";
                student_id[i]="";
            }
            break;
        default:
            break;
        }

    }
}


void Student:: print_record()
{
    ofstream student;
    student.open("Mydatabase.txt",ios::app);

     student << "*************************************************************************************************" <<endl;

      student << " ID" << "  " << "Name " << "     " << "Course" << "      " << "Level " << "     " << "Email" << "       " << "Address " << "         "<< "Mark" << endl;


       for (int i=0; i <student_number;i++)
       {
           student << student_name[i]<< endl;
           student << student_id[i]<< endl;
           student << student_course[i]<< endl;
           student << student_level[i]<< endl;
           student << student_email[i]<< endl;
           student << student_address[i]<< endl;

        student <<  "************************************************************************************************" << endl;

       }
       student << endl;

       student <<  "************************************************************************************************" << endl;


}
