#include "Keyboard.h"
#include <iostream>

void Keyboard::set_name()
{
    cout<<"Enter the name of keyoard: ";
    string NAME;
    cin>>NAME;
    name=NAME;
}
void Keyboard::get_name() const
{
    cout<<"Nam eof Keyboard: "<<name<<endl;
}
void Keyboard::set_TypeOfMaterial()
{
    cout<<"Enter Material of keyboard: ";
    string TYPE;
    cin>>TYPE;
    type_of_material=TYPE;
}
void Keyboard::get_TypeOfMaterial() const
{
    cout<<"Material of Keyboard: "<<type_of_material<<endl;
}
void Keyboard::set_weight()
{
    cout<<"Enter the weight: ";
    float WEIGHT;
    cin>>WEIGHT;
    weight=WEIGHT;
}
void Keyboard::get_weight() const
{
    cout<<"Weight of the Keyboard: "<<weight<<" kg"<<endl;
}
void Keyboard::info() const
{
    cout<<"Name of Keyboard: "<<name
        <<"\nWeight of Keyboard: "<<weight<<" kg"
        <<"\nMaterial of Keyboard: "<<type_of_material<<endl<<endl;

}

Keyboard::Keyboard()
{
    name = "None";
    weight = 0;
    type_of_material = "None";
}
Keyboard::Keyboard(std::string &&name)
{
    this->name= name;
    this->weight =0;
    this->type_of_material ="None";
}
Keyboard::Keyboard(std::string &&name, float weight)
{
    this->name= name;
    this->weight= weight;
    this->type_of_material;
}
Keyboard::Keyboard(std::string &&name, float weight, std::string &&type_of_material)
{
    this->name = name;
    this->weight = weight;
    this->type_of_material = type_of_material;
}
Keyboard::Keyboard(const Keyboard& other) {
    name = other.name;
    weight = other.weight;
    type_of_material = other.type_of_material;
    cout << "constructor copy enabled" << endl;

}

Keyboard::~Keyboard()
{
    cout<<"called Keyboard destructor"<<endl;
}