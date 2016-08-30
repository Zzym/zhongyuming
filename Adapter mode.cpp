#include<iostream>  
using namespace std;  
    
class Target  //Ä¿±ê
{  
public:   
    virtual void Request(){};  
};  
   
class Adaptee  //Ô´
{  
public: 
    void SpecificRequest()  
    {  
        cout<<"yao  chu  fa"<<endl;  
    }  
}; 
 
class Adapter : public Adaptee, public Target  //ÊÊÅäÆ÷
{  
public:  
    void Request()  
    {     
        this->SpecificRequest();  
    }  
};  
  
  
int main()  
{  
    Target *t = new Adapter();  
    t->Request();  
    system("pause");
    return 0;  
}  