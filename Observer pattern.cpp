
#include <iostream>  
#include <vector>  
#include <string>  
using namespace std;  
class teacher;

class student  
{  
public:  
    student(string strName, teacher* strSub)  
    {  
        name = strName;  
        sub = strSub;  
    }  
 void Update();  
  
private:  
    string name;  
    teacher* sub;  
};  
  
class teacher  
{  
  
public:  
    string action;  
    void Add(student ob) { observers.push_back(ob); }  
    void Remove(int addIndex)  
    {  
        if(addIndex >=0 && addIndex < observers.size())  
        observers.erase(observers.begin() + addIndex);  
    }  
    void Notify()  
    {  
        vector<student>::iterator it;  
        for (it=observers.begin(); it!=observers.end(); ++it)  
        {  
            (*it).Update();  
        }  
    }  
  
private:  
    vector<student> observers;  
};  
  
  
void student::Update()  
{  
    cout << name << " : " << sub->action << ", begin to study" << endl;  
}  
  
int main()  
{  
teacher* p = new teacher();  

    student* s1 = new student("teacher", p);  
    student* s2 = new student("student", p);  
  
    p->Add(*s1);  
    p->Add(*s2);  
  
    p->action = "The Principal is coming...";  
 
    p->Notify();  
  
    p->Remove(0);  
      
    p->Notify();  
  
	system("pause");
    return 0;  
  
}  
