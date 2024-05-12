#include <iostream>
#include <string>
#include "train1.h"
#include "TurkishAirlines.h"

using namespace std;



void welcome_page();
void main_menu();
void user_menu();
void admin_menu();
void plane_tickets();
void bus_tickets();
void train_tickets();
void turkish_airlines();	
void pegasus();
void anadolujet(); 
void metro();
void kamilkoc();
void ulusoy();
void pegasus_airlines();

int main()
{
	welcome_page();
	
	return 0;
}



void welcome_page()
{
	cout << "\n\n\n";
	cout << "   * * * * * * * * * * * * * * * * * \n";
	cout << "  *           welcome to            *\n";
	cout << "  *                                 *\n";
	cout << "  *           e-tickets             *\n";
	cout << "  *                                 *\n";
	cout << "   * * * * * * * * * * * * * * * * * \n";
	
	main_menu();
	
}



void main_menu()
{
	int choose;
	
	cout << "\n\n\n\n-------------------------------------\n";
	cout << "        1 - USER MENU                \n";
	cout << "-------------------------------------\n";
	cout << "        2 - ADMIN MENU               \n";
	cout << "-------------------------------------\n";
	cout << "        3 - EXIT                     \n";
	cout << "-------------------------------------\n";
	
	cout << " Enter your choice :   ";
	
	cin >> choose;
	
	if (choose == 1 ){
		user_menu();	
	}
	else if (choose == 2 ){
		admin_menu();
	}
	else if (choose == 3 ){
		cout << "  \n\nThanks for choosing us..."<<endl;
	}
	else{
		cout << "    Please enter the number correctly "<<endl;
		main_menu();
}
	
	
}


void user_menu()
{
	int choose;
	
	cout << "\n\n\n\n\nWhich travel option do you want to choose?\n ";
	cout << "-------------------------------------\n";
	cout << "        1 - PLANE TICKETS            \n";
	cout << "-------------------------------------\n";
	cout << "        2 - BUS TICKETS              \n";
	cout << "-------------------------------------\n";
	cout << "        3 - TRAIN TICKETS            \n";
	cout << "-------------------------------------\n";
	cout << "        4 - BACK TO MAIN MENU        \n";
	cout << "-------------------------------------\n";
	cout << "        5 - EXIT                     \n";
	cout << "-------------------------------------\n";
	
	cout << " Enter your choice :  ";
	
	cin >> choose;
	
	if (choose == 1 ){
		plane_tickets();	
	}
	else if (choose == 2 ){
		bus_tickets();
	}
	else if (choose == 3 ){
		train_tickets();
	}
	else if (choose == 4 ){
		main_menu();
	}
	else if (choose == 5){
		cout << "  \n\nThanks for choosing us..."<<endl;
	}
	else{
		cout << "    Please enter the number correctly "<<endl;
		user_menu();
	}
	
}

void plane_tickets(){
	
	int choose;
	
	cout << "\n\n\n\nWhich company do you want to choose?    \n";
	cout << "-------------------------------------\n";
	cout << "        1 - TURKISH AIRLINES         \n";
	cout << "-------------------------------------\n";
	cout << "        2 - PEGASUS                  \n";
	cout << "-------------------------------------\n";
	cout << "        3 - ANADOLUJET               \n";
	cout << "-------------------------------------\n";
	cout << "        4 - BACK TO PREVIOUS MENU    \n";
	cout << "-------------------------------------\n";
	cout << "        5 - EXIT                     \n";
	cout << "-------------------------------------\n";
	
	cout << "        Enter your choice :  ";
	
	cin >> choose;
	
	if (choose == 1 ){
		turkish_airlines();	
	}
	else if (choose == 2 ){
		pegasus_airlines();
	}
	else if (choose == 3 ){
		anadolujet();
	}
	else if (choose == 4 ){
		user_menu();
	}
	else if (choose == 5){
		cout << "  \n\nThanks for choosing us..."<<endl;
	}
	else{
		cout << "    Please enter the number correctly "<<endl;
		plane_tickets();
	}
	
}


void turkish_airlines(){
	
	int choose;
	TurkishAirlines thy;
	PersonalInfo pi;
	static int kisisayisi=thy.yolcu_sayisi;
	static int yersayisi=thy.bosKoltukSayisi();
	
	  // Toplam yolcu kapasitesi 300

/* 														
					Op overloading örneði
			
    TurkishAirlines yeniThy = thy - 50;  // 50 koltuk azalt
    int bosKoltuk3 = yeniThy.bosKoltukSayisi();
    cout << "Bos koltuk sayisi: " << bosKoltuk3 << std::endl;
*/
	cout << "\n\n\n\n-----Turkish Airlines Plane Information----- \n";
	cout << "Departure Place: Istanbul\n";
	cout << "Destination Place: Izmir\n";
	showInfo(thy);
	cout << "Empty Seats: "<<kisisayisi<<endl;
	cout << "\nIf you want to take a ticket write 1\n";
	cout << "\nIf you want to go to previous menu write 2\n";
	cout << "\nIf you want to EXIT write 3\n\n";

	cout << " Enter your choice :  ";
	
	cin >> choose;
	
	if (choose == 1 ){
		
		cout << "\n\nSelect flight time\n"<<endl;
		cout << "1- 21:00"<<endl;
		cout << "2- 22:00"<<endl;
		cout << "3- 23:00"<<endl;
		int time;
		cin >> time;
		
		
		if(time==1){
			thy.setTime("21:00");
		}
		else if(time==2){
			thy.setTime("22:00");
		}
		else if(time==3){
			thy.setTime("23:00");
		}
		else{
			cout << "You entered wrong number"<<endl;
			turkish_airlines();
		}
		
		cout << "\n Enter your name and surname :";
		cin.ignore();
		
    	string name;
   	 	getline(cin,name);
    	pi.setName(name);
   		yersayisi--;
    	kisisayisi--;
    
    
    	pi.NameAndHour(thy);

    	main_menu();
	}
	else if (choose == 2 ){
		plane_tickets();
	}
	else if (choose == 3 ){
		cout << "  \n\nThanks for choosing us..."<<endl;
	}
	
	

    main_menu();
}


void pegasus_airlines(){
	
	int choose;
	Pegasus pegasus(250,120);
	PersonalInfo pi;
	static int kisisayisi=pegasus.yolcu_sayisi;
	static int yersayisi=pegasus.bosKoltukSayisi();
	  // Toplam yolcu kapasitesi 300

/* 														
					Op overloading örneði
			
    TurkishAirlines yeniThy = thy - 50;  // 50 koltuk azalt
    int bosKoltuk3 = yeniThy.bosKoltukSayisi();
    cout << "Bos koltuk sayisi: " << bosKoltuk3 << std::endl;
*/
	cout << "\n\n\n\n-----Pegasus Airlines Plane Information----- \n";
	cout << "Departure Place: New york\n";
	cout << "Destination Place: Adana\n";
	showInfo(pegasus);
	cout << "Empty Seats: "<<kisisayisi<<endl;
	cout << "\nIf you want to take a ticket write 1\n";
	cout << "\nIf you want to go to previous menu write 2\n";
	cout << "\nIf you want to EXIT write 3\n\n";

	cout << " Enter your choice :  ";
	
	cin >> choose; 
	
	
	if (choose == 1 ){
		
		cout << "\n\nSelect flight time\n "<<endl;
		cout << "1- 13:00"<<endl;
		cout << "2- 15:00"<<endl;
		cout << "3- 17:00"<<endl;
		int time;
		cin >> time;
		
		
		if(time==1){
			pegasus.setTime("13:00");
		}
		else if(time==2){
			pegasus.setTime("15:00");
		}
		else if(time==3){
			pegasus.setTime("17:00");
		}
		else{
			cout << "You entered wrong number"<<endl;
			pegasus_airlines();
		}
		
		cout << "\n Enter your name and surname :";
		cin.ignore();
		
    	string name;
   	 	getline(cin,name);
    	pi.setName(name);
    	yersayisi--;
    	kisisayisi--;
    	
    
    	pi.NameAndHour(pegasus);

    	main_menu();
	}
	else if (choose == 2 ){
		plane_tickets();
	}
	else if (choose == 3 ){
		cout << "  \n\nThanks for choosing us..."<<endl;
	}
	
    main_menu();
}
	

void showInfo(TurkishAirlines thy){			//friend
	cout << "Total Capacity: "<< thy.yolcu_kapasitesi<<endl;
}

void showInfo(Pegasus pegasus){			//friend
	cout << "Total Capacity: "<< pegasus.yolcu_kapasitesi<<endl;
}



void pegasus(){
}



void anadolujet(){
}



void bus_tickets(){
	
	int choose;
	
	cout << "\n\n\n\nWhich company do you want to choose?    \n";
	cout << "-------------------------------------\n";
	cout << "        1 - METRO                    \n";
	cout << "-------------------------------------\n";
	cout << "        2 - KAMILKOC                 \n";
	cout << "-------------------------------------\n";
	cout << "        3 - ULUSOY                   \n";
	cout << "-------------------------------------\n";
	cout << "        4 - BACK TO PREVIOUS MENU    \n";
	cout << "-------------------------------------\n";
	cout << "        5 - EXIT                     \n";
	cout << "-------------------------------------\n";
	
	cout << "        Enter your choice :  ";
	
	cin >> choose;
	
	if (choose == 1 ){
		metro();	
	}
	else if (choose == 2 ){
		kamilkoc();
	}
	else if (choose == 3 ){
		ulusoy();
	}
	else if (choose == 4 ){
		user_menu();
	}
	else if (choose == 5){
		cout << "  \n\nThanks for choosing us..."<<endl;
	}
	else{
		cout << "    Please enter the number correctly "<<endl;
		bus_tickets();
	}
	
}

void metro(){





}




void kamilkoc(){
	
	
	
	
	
	
	
	
}




void ulusoy(){
	
	
	
	
}





void train_tickets(){
	
	int choose;
	
	string name;
	train t;
	
	cout << "\n\n\n\nOur trains only serve between Istanbul and Ankara \n";
	cout << "-------------------------------------\n";
	t.train_info();
	cout << "-------------------------------------\n";
	cout << "\nIf you want to take a ticket write 1\n";
	cout << "\nIf you want to go to previous menu write 2\n";
	cout << "\nIf you want to EXIT write 3\n\n";
	
	cout << " Enter your choice :  ";
	
	cin >> choose;
	
	if (choose == 1 ){
		cin.ignore();
		cout << "\n Enter your name and surname :";
		getline(cin,name);
		t.set_user_name(name);
		cout << "\n\nYour ticket has been created" << endl;
		cout << "-------------------------------------\n";	
		t.train_info();
		cout << "  Your name       : " << t.get_user_name() << endl;
		main_menu();
	}
	else if (choose == 2 ){
		user_menu();
	}
	else if (choose == 3 ){
		cout << "  \n\nThanks for choosing us..."<<endl;
	}
}







void admin_menu(){
	
}






















