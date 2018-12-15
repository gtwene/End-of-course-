/**
This is the administrator class which manages some specific aspects of the application
**/

#ifndef ADMIN_H
#define ADMIN_H
#include <iostream>
#include <string>

using namespace std;

class Admin
{

    // Data members of the administrator class
    public:

        string staff_name[30];
        string staff_id[30];
        string staff_course[2];
        string staff_email[30];
        string staff_address[30];
        int staff_num;
        int choice;


        // functions
        void add_staff(int staff_num);
        void edit_staff(string sf_id);
        void delete_staff(string sf_id);
        void show_staff(int staff_num);




    protected:

    private:
};

#endif // ADMIN_H
