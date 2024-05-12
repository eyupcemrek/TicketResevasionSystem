#ifndef TRAIN1_H
#define TRAIN1_H


#include <iostream>
#include <string>



using namespace std;







class train{
	
	
	private:
		string deperture_place;
		string destination;
		string deperture_time;
		string deperture_date;
		string user_name;
		
	public:
		
		
		explicit train(string _deperture_place="Ankara",string _destination="Istanbul", string _deperture_time="12:00",string _deperture_date="11/08/2023");
		~train();
		
		
		void set_user_name(string a);
		string get_user_name();		
		string get_deperture_place();
		string get_destination();
		string get_deperture_time();
		string get_deperture_date();
		void train_info();
};

#endif
