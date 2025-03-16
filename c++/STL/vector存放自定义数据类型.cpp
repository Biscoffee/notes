#include <iostream>
#include <vector>
#include <string>

using namespace std;

class Person{
    public:
        Person(string name,int age)
        {
            this->m_name=name;
            this->m_age=age;
        }
        string m_name;
        int m_age;
};

void test01()
{
    vector<Person>v;
    Person p1("张三",10);
    Person p2("李四",20);
    Person p3("王五",30); 
    v.push_back(Person("张三",10));
    v.push_back(Person("李四",20));
    v.push_back(Person("王五",30));
    for(vector<Person>::interator it = v.begin();it!=v.end();it++)
    {
        cout<<"姓名："<<(*it).m_name<<"年龄："<<(*it).m_age<<endl;
    }
    void test02()
    {
        vector<Person*>v;
        Person p1("张三",10);
        Person p2("李四",20);
        Person p3("王五",30);
        v.push_back(&p1);
        v.push_back(&p2);
        v.push_back(&p3);
        for(vector<Person*>::interator it = v.begin();it != v.end();it++)
        {
            Person * p = *it;
            cout<<"姓名："<<p->m_name<<"年龄："<<p->m_age<<endl; 
        }
    }
} 