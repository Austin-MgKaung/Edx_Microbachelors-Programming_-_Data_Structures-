#include<iostream>
#include <string>
using namespace std ;


class AbstractEmployee
{
   virtual void AskForPromotion() = 0;

};


class Employee :  AbstractEmployee{
private :
    string Company;
    int Age;
protected :
    string Name;
public:
    
    void setName (string name)
    {
        Name = name;
    }
    string getName()
    {
        return Name;
    }

    void setCompany(string company)
    {
        Company = company;
    }
    string getCompany()
    {
        return Company;
    }

    void setAge (int age)
    {
        if (age>= 18)
            Age = age;
    }

    int getAge()
    {
        return Age;
    }
    Employee(string name , string company ,int age)
    {
        Name =name;
        Company = company ;
        Age = age;

    }
    
    void IntroduceYourself()
    {
        cout<< "Name - "<<Name<<endl;
        cout<< "Company - "<<Company<<endl;
        cout<< "Age - "<<Age<<endl;

    }

    void AskForPromotion()
    {
        if (Age > 30)
            cout<<Name<<" got promoted!"<<endl;
        else
            cout<<Name<<" ,sorry dun get promoted!"<<endl;
    }

    virtual void Work()
    {
        cout<<Name<< " is checking email, task backlog ,performing something"<<endl;
    }
};

class Developer : public Employee {
    public:
        string FavProgrammingLanguage;
        Developer (string name , string company ,int age,string favProgrammingLanguage)
        :Employee(name,company,age)
        {
            FavProgrammingLanguage = favProgrammingLanguage;
        }
        void FixBug()
        {
            cout<< Name<<" fixed bug using "<<FavProgrammingLanguage<<endl;

        }
        void Work()
        {
            cout<<Name<< " is Writing "<<FavProgrammingLanguage<<" code"<<endl;
        }
};

class Teacher : public Employee{
public:
    string Subject;

    void prepareLesson()
    {
        cout<<Name<<" is preparing "<<Subject<< " Lesson "<<endl;
    }
    Teacher(string name , string company ,int age, string subject) : Employee(name,company,age)
    {
        Subject =subject;
    }
    void Work()
        {
            cout<<Name<< " is teaching "<<Subject<<" Subject"<<endl;
        }
};
int main ()
{
    Employee employee1 = Employee("Kaung","Google",22);
    employee1.IntroduceYourself();

    Employee employee2 =Employee("John" ,"Amazon",35);
    employee2.IntroduceYourself();

    employee1.setAge(15);
    cout<<employee1.getName()<<" is "<<employee1.getAge()<<" years old"<<endl;

    employee1.AskForPromotion();
    employee2.AskForPromotion();


    Developer d = Developer("Kaung","Austin Company",22,"C++") ;
    d.FixBug();
    d.FixBug();
    d.FixBug();
    d.AskForPromotion();

    Teacher T = Teacher("jack","Cool School",35,"history");
    T.prepareLesson();
    T.AskForPromotion();
    d.Work();
    T.Work();

    Employee * e1 = &d;
    Employee * e2 = &T;

    e1->Work();
    e2->Work();

    return 0 ;
}