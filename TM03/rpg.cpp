#include <iostream>
using namespace std;

struct hero{
    string name = "Warrior";
    int hp = 150;
    int atk = 20;
    int def = 5;
    float skill1 = atk * 1.5;
    float skill2 = atk * 1.5 - def;
};

struct monster{
    string name = "Creep";
    int hp = 100;
    int atk = 10;
    int def = 0;
};

int main(){
    // Inisialisasi Creep
    monster creep;
    hero warrior;

    cout << "Hero attack: " << warrior.atk << endl;
    creep.hp = creep.hp - warrior.atk;
    cout << "Inflict damage to monster: HP " << creep.hp << endl;

    cout << "Monster attack: " << creep.atk << endl;
    warrior.hp = warrior.hp - creep.atk;
    cout << "Inflict damage to hero: HP " << warrior.hp << endl;
}