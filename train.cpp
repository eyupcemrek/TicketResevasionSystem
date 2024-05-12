#include <iostream>
#include <string>
#include "train1.h"


using namespace std;







	train::train(string _deperture_place,string _destination, string _deperture_time,string _deperture_date){
	
		deperture_place = _deperture_place;
		destination = _destination;
		deperture_time =_deperture_time;	
		deperture_date = _deperture_date;
		}
		
		train::~train(){
			
		}
				
		void train::set_user_name(string a){
			user_name = a;
		}
		string train::get_user_name(){
			return user_name;
		}		
		string train::get_deperture_place(){
			return deperture_place;
		}
		string train::get_destination(){
			return destination;
		}
		string train::get_deperture_time(){
			return deperture_time;
		}
		string train::get_deperture_date(){
			return deperture_date;
		}
		
		
		
		
		
		void train::train_info(){
			cout << "              TRAIN INFO             \n";
			cout << "  Departure place : " << get_deperture_place() << endl; 
			cout << "  Destination     : " << get_destination() << endl;
			cout << "  Departure time  : " << get_deperture_time() << endl;
			cout << "  Departure date  : " << get_deperture_date() << endl;
			
		}
