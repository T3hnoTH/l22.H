#pragma once
#include <iostream>
#include <string>
using namespace std;

class PC{
    string name;
    float freq;
    int RAM;
    bool DVD;
    float price;
public:
    PC(){
        name = "undefined";
        freq = 0;
        RAM = 0;
        DVD = false;
        price = 0;
    }
    PC(string name,float freq,int RAM,bool DVD,float price){
        this->name = name;
        this->freq = freq;
        this->RAM = RAM;
        this->DVD = DVD;
        this->price = price;
    }

    string getName() const{ return name;}
    float getFreq() const{ return freq;}
    int getRAM() const{ return RAM;}
    bool getDVD() const{ return DVD;}
    float getPrice() const{return price;}

    void setPrice(float price){
        if (price > 0){
            this->price = price;
        }
    }

    void showInfo() const{
        cout << "===========================\n";
        cout << "Name:      " << name << endl;
        cout << "Frequency: " << freq << endl;
        cout << "RAM:       " << RAM << endl;
        cout << "DVD:       " << DVD << endl;
        cout << "Price:     " << price << endl;
    }
};