#include <iostream>
#include <windows.h>
using namespace std;

class Knight {
private:
	double m_hp;
	double m_dmg;
	string m_name;
public:
	void set_hp(double hp) { m_hp = hp; }
	void set_dmg(double dmg) { m_dmg = dmg; }
	void set_name(string name) { m_name = name; }
	double get_hp() { return m_hp; }
	double get_dmg() { return m_dmg; }
	string get_name() { return m_name; }
	void  increace_dmg(){
		m_dmg *= 1.1;
	}
	void print() { 
		cout<< "ima ritsara " << m_name << endl; 
		cout << "hp ritsara " << m_hp << endl;
		cout << "dmg ritsara " << m_dmg << endl;
	}
	
};


class Mage {
	double m_hp;
	double m_dmg;
	string m_name;
public:
	void set_hp(double hp) { m_hp = hp; }
	void set_dmg(double dmg) { m_dmg = dmg; }
	void set_name(string name) { m_name = name; }
	double get_hp() { return m_hp; }
	double get_dmg() { return m_dmg; }
	string get_name() { return m_name; }
	void  increace_hp(double add_hp) {
		m_hp += add_hp;
	}
	void print() {
		cout << "ima maga " << m_name << endl;
		cout << "hp maga " << m_hp << endl;
		cout << "dmg maga " << m_dmg << endl;
	}
};

int main(){
	Knight k1;
	k1.set_name("oleg");
	k1.set_hp(500);
	k1.set_dmg(20);
	k1.print();
	Mage m1;
	m1.set_name("aboba");
	m1.set_hp(800);
	m1.set_dmg(10);
	m1.print();
	while (true) {
		cout << "ritsar biet maga ";
		m1.set_hp(m1.get_hp() - k1.get_dmg());
		m1.print();
		k1.increace_dmg();
		if (m1.get_hp() <= 0) {
			cout << "poslednya ataka maga... " << endl;
		}
		k1.set_hp(k1.get_hp() - m1.get_dmg());
		k1.print();
		m1.increace_hp(50);
		if (m1.get_hp() <= 0) {
			cout << "ritsar pobedil!";
			break;
		}
		if (k1.get_hp() <= 0) {
			cout << "mag pobedil!";
			break;
		}
		Sleep(3000);
		cout << endl;
	}
}