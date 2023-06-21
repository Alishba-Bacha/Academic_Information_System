//Academic Information System based on structures
#include<iostream>
using namespace std;

//struct for course detail
struct Course
{
    int ID, CreditHours, fee ;
    string CourseName, teacher;
    void PrintAll()
    {
        cout<<"Course ID "<< ID << endl;
        cout<<"Credit Hours: "<< CreditHours << endl;
        cout<<"Fee: "<< fee << endl;
        cout<<"CourseName : "<< CourseName << endl;
        cout<<"Instructor: "<< teacher <<endl;
    }
};

//A structure to controll all courses list
struct Course_list
{
    Course courses[5];
    int number_of_courses = 0;
    void PrintAll()
    {
        for(int i = 0; i <= number_of_courses ; i++)
        {
            cout<<"Course ID "<< courses[i].ID << endl;
            cout<<"Credit Hours: "<< courses[i].CreditHours << endl;
            cout<<"Fee: "<< courses[i].fee << endl;
            cout<<"CourseName : "<< courses[i].CourseName << endl;
            cout<<"Instructor: "<< courses[i].teacher <<endl;
        }
    }
    
    //Adding  new course
    void AddCourse()
    {
        int x;
        cout << "Enter index: "<< endl;
        cin >> x;
        if (x > 0 && x < 6)
        {
            cout<<"\nEnter Course Name: ";
            cin>>courses[x-1].CourseName;
            cout<< "Enter course ID: "<< endl;
            cin>> courses[x-1].ID;
            cout<< "Enter fee: "<< endl;
            cin>> courses[x-1].fee;
            cout<< "Enter credit hours: "<< endl;
            cin>> courses[x-1].CreditHours;
            cout<< "Enter Instructor name: "<< endl;
            cin>> courses[x-1].teacher;
            number_of_courses++;

        }
        else
        {
            cout<< "Invalid Input" << endl;

        }
    }
    // to show the added course
    void showCourse()
    {
        int c;
        cout<< "Enter index: "<< endl;
        cin>> c;
        if (c >= 0 && c <= 6)
        {
            cout<<"Course ID "<< courses[c-1].ID << endl;
            cout<<"Credit Hours: "<< courses[c-1].CreditHours << endl;
            cout<<"Fee: "<< courses[c-1].fee << endl;
            cout<<"CourseName : "<< courses[c-1].CourseName << endl;
            cout<<"Instructor: "<< courses[c-1].teacher <<endl;
        }
    }
    
    //Sorting ID's in Ascending order
    void sort_ASC()
    {
        int temp;

        for(int i = 0; i <= 5; i++)
        {
            for(int j = 0; j <= 5; j++)
            {
                if(courses[i].ID < courses[j].ID)
                {
                    temp = courses[i].ID;
                    courses[i].ID = courses[j].ID;
                    courses[j].ID = temp;
                }
            }
        }
        //Printing ID's in Ascending order
        for(int i = 0; i <=5; i++)
        {
            cout<< courses[i].ID;
        }
    }

    //Sorting ID's in descending order
    void sort_DES()
    {
        int temp;

        for(int i = 0; i <= 5; i++)
        {
            for(int j = 0; j <= 5; j++)
            {
                if(courses[i].ID > courses[j].ID)
                {
                    temp = courses[i].ID;
                    courses[i].ID = courses[j].ID;
                    courses[j].ID = temp;
                }
            }
        }
        //Printing ID's in Decending order
        for(int i = 0; i <=5; i++)
        {
            cout<< courses[i].ID;
        }
    }

    //Deleting courses in array
    void DeleteAll()
    {
        int z;
        cout<<"Enter course Id to delete:" << endl;
        cin>> z;

        for(int i = 0; i <= 5; i++)
        {
            if(z == courses[i].ID)
            {
                courses[i].ID = NULL;
                courses[i].CreditHours = NULL;
                courses[i].fee = NULL;
                courses[i].CourseName = " ";
                courses[i].teacher = " ";
            }
            else
            {
                continue;
            }
        }
    }
    
};

//Structure for student details
struct Student
{
    int ID,rollNo;
    string StDName;
    void printAll()
    {
        cout<< "Student ID: "<< ID << endl;
        cout<< "Student Name: "<< StDName << endl;
        cout<< "Student Roll no: "<< rollNo << endl;

    }
};

//Structure for management of student detail
struct Student_List
{
    Student std[5];
    int number_of_students = 0;

    //Print function to show details of a student
    void printAll()
    {
        int x;
        cout<< "Enter student ID to check his/her details: "<< endl;
        cin>> x;
        for(int i = 0; i <= number_of_students ; i++)
        {
            if(x == std[i].ID)
            {
                cout<< "Student ID: "<< std[i].ID << endl;
                cout<< "Student Name: "<< std[i].StDName << endl;
                cout<< "Student Roll no: "<< std[i].rollNo << endl;
            }
        }
    }

    //Function to add a student
    void AddStudent()
    {
        int z;
        cout<< " Enter index: "<< endl;
        cin>> z;
        if(z >= 0 && z <=6)
        {
            cout<< "Enter Student ID: " << endl;
            cin>> std[z-1].ID;
            cout<< "Enter Student Name: " << endl;
            cin>> std[z-1].StDName;
            cout<< "Enter Roll Number: " << endl;
            cin>> std[z-1].rollNo;
            number_of_students++;
        }
        else
        {
            cout<< "INvalid Input" << endl;
        }
    }

    //Function to show details of added student
    void ShowStd()
    {
        int a;
        cout<<"Enter index: "<< endl;
        cin>> a;
        if(a >= 0 && a <= 6)
        {
            cout<< "Student ID: "<< std[a-1].ID <<endl;
            cout<< " Student Name: "<< std[a-1].ID <<endl;
            cout<< "Student Roll no: "<< std[a-1].rollNo << endl;
        }
        else
        {
            cout<<"Invalid Input" << endl;
        }
    }

    //Function to delete data of a student
    void DeleteStd()
    {
        int s;
        cout<< "Enter ID: " << endl;
        cin>> s;
        for(int i = 0; i <= std->ID; i++)
        {
            if(s == std->ID)
            {
                std[i].ID = NULL;
                std[i].StDName = " ";
                std[i].rollNo = NULL;
            }
        }
    }
};

int main()
{
    system("cls");
    int x;
    char choice;
    Course_list c1;
    Student_List s1;
    do
    {
        //Menu
        cout<< "-----Welcome--------" << endl;
        cout<< "1: Add New Student. " << endl;
        cout<< "2: Delete Existing Student." << endl;
        cout<< "3: Show All Students." << endl;
        cout<< "4: Add New Course." <<endl;
        cout<< "5: Delete Existing course." << endl;
        cout<< "6: Show particular Course."<< endl;
        cout<< "7: Show All courses." << endl;
        cout<< "8: Sort Courses in Ascending order." <<endl;
        cout<< "9: Sort Courses in Ascending order." <<endl;
        cout<< "10: Exit." <<endl;
        cout<<"Enter Your choice: " << endl;
        cin>> x;
        switch(x)
        {
            case 1:
            {
                s1.AddStudent();
                break;
            }

            case 2:
            {
                s1.DeleteStd();
                break;
            }

            case 3:
            {
                s1.printAll();
                break;
            }

            case 4:
            {
                c1.AddCourse();
                break;
            }

            case 5:
            {
                c1.DeleteAll();
                break;
            }

            case 6:
            {
                c1.showCourse();
                break;
            }

            case 7:
            {
                c1.PrintAll();
                break;
            }

            case 8:
            {
                c1.sort_ASC();
                break;
            }

            case 9:
            {
                c1.sort_DES();
                break;
            }

            case 10:
            {
                break;
            }

            default:
            {
                cout<<"Invalid Input" <<endl;
            }
        }
    }while( x != 10);

    cout<<"THANK YOU!" << endl;
    
}