
#include "Headphones.h"
#include <iostream>
void Headphones::set_name()
{
    cout<<"Введіть назву наушників: ";
    string NAME;
    cin>>NAME;
    name=NAME;
}
void Headphones::get_name()
{
    cout<<"Назва наушників: "<<name<<endl;
}
void Headphones::set_weight()
{
    cout<<"Введіть вагу наушників: ";
    float WEIGHT;
    cin>>WEIGHT;
    weight=WEIGHT;
}
void Headphones::get_weight()
{
    cout<<"Вага наушників: "<<weight<<" кг"<<endl;
}
void Headphones::set_TypeOfMaterial()
{
    cout<<"Введіть тип матеріалу наушників: ";
    string TYPE;
    cin>>TYPE;
    type_of_material=TYPE;
}
void Headphones::get_TypeOfMaterial()
{
    cout<<"Тип матеріала наушників: "<<type_of_material<<endl;
}
void Headphones::set_microphone()
{
    int LASER;
    cout<<"З мікрофоном чи без (1-з мікрофоном, 0-без лазера): ";
    cin>>LASER;
    if (LASER==1)
    {
        microphone=true;
    }
    else
    {
        microphone=false;
    }
}
void Headphones::get_microphone()
{
    if (microphone==true)
    {
        cout<<"Наушники з мікрофоном"<<endl;
    }
    else
    {
        cout<<"Наушники без мікрофоном"<<endl;
    }
}
void Headphones::info()
{
    cout<<"Назва наушників: "<<name
        <<"\nВага наушників: "<<weight<<" кг"
        <<"\nТип наушників наушників: "<<type_of_material
        <<"\nНаушники з мікрофоном: "<<microphone<<endl<<endl;
}

Headphones::Headphones(std::string &&NameOfKeyboard, float Weight, std::string &&TypeOfMaterial, bool MICROPHONE):
        name{NameOfKeyboard}, weight(Weight), type_of_material(TypeOfMaterial), microphone(MICROPHONE)
{
    cout<<"called constructor default"<<endl;
}

Headphones::Headphones(const Headphones&& other) noexcept: name(std::move(other.name)), weight(other.weight), type_of_material(std::move(other.type_of_material)), microphone(other.microphone) {

    cout << "move constructor was called"<<endl;
}

Headphones::~Headphones(){
    cout<<"called Headphones destructor"<<endl;
}
