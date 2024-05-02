#include<iostream>
#include<string.h>
using namespace std;

class Hero
{
private:
int health;

public:
char *name;
char level;
static int TimeToComplete;
//Default constructor
Hero()
{
cout<<"Default Constructor"<<endl;
name=new char[100];
}

//parameterised Constrcutor
Hero(int health)
{
    cout<<"This->"<<this<<endl;
    this->health=health;
}

Hero(int health,char level)
{
    this->health=health;
    this->level=level;
}

//Copy Constructor
Hero (Hero& temp)
{
    char *ch=new char[strlen(temp.name)+1];
    strcpy(ch,temp.name);
    this->name=ch;


    cout<<"Copy Constructor"<<endl;
    this->health=temp.health;
    this->level=temp.level;
}
void print()
{
     cout<<"Name= "<<this->name<<endl;   
    cout<<"Health= "<<this->health<<endl;
    cout<<"Level= "<<this->level<<endl;
}

//getter and setter
int gethealth()
{
    return health;
} 
int getlevel()
{
    return level;
}

void sethealth(int h)
{
    health=h;
}
void setlevel(char ch)
{
    level=ch;
}

void setName(char name[])
{
 strcpy(this->name,name);
}
//static function
static int s()
{
    return TimeToComplete;
}

//Destructor
~Hero()
{
    cout<<"Destructor is called"<<endl;
}
};

int Hero::TimeToComplete=5;

//getter and setter
// int main()
// {
//     Hero ramesh;
//    cout<<"Health of ramesh:"<<ramesh.gethealth()<<endl;
//    ramesh.sethealth(200);
//     cout<<"Health of ramesh:"<<ramesh.gethealth()<<endl;
   
//     ramesh.level='A';
//     cout<<"level of ramesh:"<<ramesh.level;
   
// }


// int main()
// {
//     //static allocation
//     Hero a;
//     a.sethealth(70);
//     a.setlevel('B');
//     cout<<"Health:"<<a.gethealth()<<endl;
//      cout<<"Level:"<<a.getlevel()<<endl;

//      //dynamic allocation

//      Hero *b=new Hero;
//       b->sethealth(80);
//     b->setlevel('B');
//     cout<<"Health:"<<b->gethealth()<<endl;
//      cout<<"Level:"<<b->getlevel()<<endl;

// }


//parametrised constructor
// int main()
// {
//     //object created statically
//     Hero ramesh(19);
// cout<<"Ramesh address= "<<&ramesh<<endl;
//     //object created dynamically
//     Hero *h=new Hero;
// }

//Shallow copy and deep copy
// int main()
// {
// //    Hero ramesh(70,'B');
// //    ramesh.print();

// // // Copy consructor
// //    Hero suresh(ramesh);
// //    suresh.print();

// //Shallow copy
// Hero ramesh1;
// ramesh1.sethealth(80);
// ramesh1.setlevel('D');
// char name[7]="Babbar";
// ramesh1.setName(name);
// ramesh1.print();


// //use default copy constructor
// Hero ramesh2(ramesh1);
// ramesh2.print();

// ramesh1.name[0]='G';
// ramesh1.print();

// ramesh2.print();


// }


//destuctor

// int main()
// {
//     //static allocation
//     Hero a;
   
//    //dynamic allocation

//     Hero *b=new Hero();
//     delete b;

// }

//Static Keyword
int main()
{
cout<<Hero::TimeToComplete<<endl;
cout<<Hero::s()<<endl;
}