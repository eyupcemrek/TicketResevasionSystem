#ifndef TURKISHAIRLINES_H
#define TURKISHAIRLINES_H

#include <iostream>
#include <string>

using namespace std;

class TurkishAirlines {
private:
    int yolcu_kapasitesi;
    int yolcu_sayisi;
    string time;

public:
	TurkishAirlines(int _yolcu_kapasitesi=300,int _yolcu_sayisi=0,string _time="21:00");  //constructor
	TurkishAirlines(int kapasite);  
	~TurkishAirlines();                                                                     //destructor                                            
    
	void yolcuEkle(int yolcuSayisi);
    void yolcuCikar(int yolcuSayisi);
    int bosKoltukSayisi() const;
    void setTime(string _time);
    string getTime() ;
    void setYolcuKapasitesi(int _yolcu_kapasitesi);
    int getYolcuKapasitesi();

    TurkishAirlines operator-(int koltukSayisi) const;
    friend TurkishAirlines operator-(int koltukSayisi, const TurkishAirlines& thy);
    friend void showInfo(TurkishAirlines thy);
    friend void turkish_airlines();
};








class Pegasus {
private:
    int yolcu_kapasitesi;
    int yolcu_sayisi;
    string time;

public:
	Pegasus(int _yolcu_kapasitesi=250,int _yolcu_sayisi=120,string _time="13:00");
	Pegasus(int kapasite);
	~Pegasus();
    
    void yolcuEkle(int yolcuSayisi);
    void yolcuCikar();
    int bosKoltukSayisi() const;
    void setTime(string _time);
    string getTime() ;

    Pegasus operator-(int koltukSayisi) const;
    friend Pegasus operator-(int koltukSayisi, const Pegasus& thy);
    friend void showInfo(Pegasus pegasus);
    friend void pegasus_airlines();
};











class PersonalInfo {
	private:
		string name;
		TurkishAirlines thy;
		Pegasus pegasus;
	
	public:
		void setName(string _name);
		string getName() const;
		void NameAndHour(TurkishAirlines thy);
		void NameAndHour(Pegasus pegasus);
};

#endif

