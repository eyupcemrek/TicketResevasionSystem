#include "TurkishAirlines.h"
#include <string>








TurkishAirlines::TurkishAirlines(int _yolcu_kapasitesi,int _yolcu_sayisi,string _time){
	yolcu_kapasitesi = _yolcu_kapasitesi;
	yolcu_sayisi = _yolcu_sayisi;
	time = _time;
}

TurkishAirlines::~TurkishAirlines(){
	
}


TurkishAirlines::TurkishAirlines(int kapasite) {
    yolcu_kapasitesi = kapasite;
    yolcu_sayisi = 0;
}

void TurkishAirlines::yolcuEkle(int yolcuSayisi) {
    yolcu_sayisi += yolcuSayisi;
}

void TurkishAirlines::yolcuCikar(int yolcuSayisi) {
    yolcu_sayisi -= yolcuSayisi;
    if (yolcu_sayisi < 0) {
        yolcu_sayisi = 0;
    }
}

int TurkishAirlines::bosKoltukSayisi() const {
    return yolcu_kapasitesi - yolcu_sayisi;
}


TurkishAirlines operator-(int koltukSayisi, const TurkishAirlines& thy) {
    TurkishAirlines yeni(thy);
    yeni.yolcu_sayisi = koltukSayisi - thy.yolcu_sayisi;
    if (yeni.yolcu_sayisi < 0) {
        yeni.yolcu_sayisi = 0;
    }
    return yeni;
}

void TurkishAirlines::setTime(string _time)
{
	time = _time;
}

void TurkishAirlines::setYolcuKapasitesi(int _yolcu_kapasitesi){
	yolcu_kapasitesi = _yolcu_kapasitesi;
}

int TurkishAirlines::getYolcuKapasitesi(){
	return yolcu_kapasitesi;
}


string TurkishAirlines::getTime() {
	return time;
}






Pegasus::Pegasus(int _yolcu_kapasitesi,int _yolcu_sayisi,string _time){
	yolcu_kapasitesi = _yolcu_kapasitesi;
	yolcu_sayisi = _yolcu_sayisi;
	time = _time;
}

Pegasus::~Pegasus(){
	
}


Pegasus::Pegasus(int kapasite) {
    yolcu_kapasitesi = kapasite;
    yolcu_sayisi = 0;
}

void Pegasus::yolcuEkle(int yolcuSayisi) {
    yolcu_sayisi += yolcuSayisi;
}

void Pegasus::yolcuCikar() {
    yolcu_sayisi--;
    if (yolcu_sayisi < 0) {
        yolcu_sayisi = 0;
    }
}

int Pegasus::bosKoltukSayisi() const {
    return yolcu_kapasitesi - yolcu_sayisi;
}



Pegasus operator-(int koltukSayisi, const Pegasus& pegasus) {
    Pegasus yeni(pegasus);
    yeni.yolcu_sayisi = koltukSayisi - pegasus.yolcu_sayisi;
    if (yeni.yolcu_sayisi < 0) {
        yeni.yolcu_sayisi = 0;
    }
    return yeni;
}

void Pegasus::setTime(string _time)
{
	time = _time;
}

string Pegasus::getTime() {
	return time;
}







void PersonalInfo::NameAndHour(TurkishAirlines thy){
	cout<<" \n\n!!!!!!Turkish Airlines ticket for "<<thy.getTime()<<" has been created for "<<name<<endl;
}

void PersonalInfo::NameAndHour(Pegasus pegasus){
	cout<<" \n\n!!!!!!Pegasus Airlines ticket for "<<pegasus.getTime()<<" has been created for "<<name<<endl;
	
}


void PersonalInfo::setName(string _name){
	name=_name;
}

string PersonalInfo::getName() const{
	return name;
}















