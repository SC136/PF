#include <iostream>

using namespace std;

const int LEN = 25;

class Person {
    char name[LEN];
    int age;
public:
    void readperson() {
        cout << "Enter Name of the Person : ";
        cin >> name;
        cout << "Enter Age : ";
        cin >> age;
    }
    
    void displayperson() {
        cout << "Name: " << name << "\n";
        cout << "Age: " << age << "\n";
    }
};

class Student : public Person {
    int rollno;
    float average;
public:
    void readstudent() {
        readperson();
        cout << "Enter Roll number : ";
        cin >> rollno;
        cout << "Enter Average Marks : ";
        cin >> average;
    }
    
    void disp_rollno() {
        cout << "Roll Number : " << rollno << "\n";
    }
    
    float getaverage() {
        return average;
    }
};

class GradStudent : public Student {
    char subject[LEN];
    char working;
public:
    void readit() {
        readstudent();
        cout << "Enter Main Subject : ";
        cin >> subject;
        cout << "Working ?(Y/N) : ";
        cin >> working;
    }
    
    void displaysubject() {
        cout << "Subject : ";
        cout.write(subject, LEN);
        cout << "\n";
    }
    
    char workstatus() {
        return working;
    }
};

int main() {
    const int size = 5;
    GradStudent grad[size];
    int year, num_working = 0, non_working = 0, div1 = 0, total = 0;
    float topscore = 0, score, number, wperc, nwperc;
    
    cout << "Enter Year : ";
    cin >> year;
    
    for(int i = 0; i < size; i++) {
        cout << "Enter Details for Graduate " << (i + 1) << "\n";
        grad[i].readit();
        total++;
        
        if((grad[i].workstatus() == 'y') || (grad[i].workstatus() == 'Y'))
            num_working++;
        else
            non_working++;
            
        score = grad[i].getaverage();
        if(score > topscore) {
            topscore = score;
            number = i;
        }
        
        if(score >= 60.0)
            div1++;
    }
    
    int i = number;
    cout << "\n\t Report for the Year" << year << "\n";
    cout << "\t----------------------------------------\n";
    cout << "Number of Working Graduates : " << num_working << "\n";
    cout << "Number of non working Graduates : " << non_working << "\n";
    cout << "\n\tDetails of the Top Scorer:\n";
    grad[i].displayperson();
    grad[i].displaysubject();
    cout << "Average Marks : " << grad[i].getaverage() << "\n";
    
    nwperc = ((float)non_working/(float)total) * 100;
    wperc = ((float)div1/(float)total) * 100;
    
    cout << nwperc << "% of the graduates this " << "year are non_working and " 
         << wperc << "% are first divisioners\n";
    return 0;
}
