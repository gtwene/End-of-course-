#include "Admin.h"
#include "Student.h"

#include <iostream>
#include <string>

using namespace std;



void Admin:: add_staff(int staff_num)
{
    for (int i=0; i<staff_num; i++)
    {
        cout << "Name: ";
        cin >> staff_name[i];
        cout << "ID: ";
        cin >> staff_id[i];
        cout << "Course: ";
        cin >> staff_course[i];
        cout << "Email: ";
        cin >> staff_email[i];
        cout << "Address: ";
        cin >> staff_address[i];
    }
    cout << endl;
}

void Admin:: edit_staff(string sf_id)
{
    for (int i=0;i<staff_num;i++)
    {
        sf_id=staff_id[i];

        if(sf_id==staff_id[i])
        {
            continue;
        }

        add_staff(i);
    }
}

void Admin:: show_staff(int staff_num)
{
        for (int i=0;i<staff_num;i++)
        {
            cout << "Staff_name \t Id \t Course \t Level \t Email \t Address" << endl;
        cout << staff_name[i] << "\t" << staff_id[i] <<  "\t" << staff_course[i] << "\t" << "\t" <<staff_email[i];
        cout << "\t" << staff_address[i];
        }

        cout << endl;


}



void Admin::delete_staff(string sf_id)

{


    for (int i=0; i<staff_num; i++)
    {
        sf_id=staff_id[i];
       show_staff(i);
       cout << "Do you want to delete this?" << endl;
       cout << "1.Yes" << endl;
       cout << "2.No" << endl;
       cout << ">: ";
       cin >> choice;

        switch(choice)
        {
        case 1:

            {
                staff_name[i]="";
                staff_id[i]="";
            }
            break;
        default:
            break;
        }

    }
}
