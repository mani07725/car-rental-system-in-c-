#include <iostream>
#include <fstream>   // it is used for reading text files
#include <unistd.h>  // its sleep function is used
#include <iomanip> // its setw is used in show rent
using namespace std;
class customer
{
	public:
	string customername;
    string carmodel;
    string carnumber;
    char data;

};
class rent : public customer
{
	public:
	int days=0,rentalfee=0;
	void data()
	{
		system("CLS");


	cout << "\t\t\t\tPlease Enter your Name: ";
  getline(cin, customername);
    cout<<endl;
    do
    {
        cout <<"\t\t\t\tPlease Select any one of the available cars just by typing its alphabet from A to E: "<<endl;
        cout<<"\t\t\t\tEnter 'A' Toyota Grande 2021 1.8"<<endl;
        cout<<"\t\t\t\tEnter 'B' for Tesla model 3"<<endl;
        cout<<"\t\t\t\tEnter 'C' for Ford 2017"<<endl;
        cout<< "\t\t\t\tEnter 'D'  for Mercedes-Benz A Class"<<endl;
        cout<< "\t\t\t\tEnter 'E' Honda Civic 2020 1.8"<<endl;
        cout<<endl;
        cout<<"\t\t\t\tChoose a Car from the above options: ";
        cin >>carmodel;
        cout<<endl;
 cout<<"--------------------------------------------------------------------------"<<endl;
 if(carmodel=="A" )
 {
 	system("CLS");

		cout<<"You have chosen Toyota Grande 2021 1.8 "<<endl;
		 fstream first("A.txt"); // Declaring  variable of type fstream
         string str;
         while(getline(first, str)) {   // here we have used a while loop inorder to access each and every line of the text file and display it on the console
         cout<< str<<endl;    // here we have used the getline function in the while condition because if we dont use ot here the while loop is ganna print the first line of the text file infinite times and to avoid that we used the function as the condition t says that when the getline function has stored the first line in the srting variable display the line then store the second line in the string variable and display the second line and do so till the last line
}
first.close();  // to close the text file
sleep(2);
  }
  if(carmodel=="B")
  {
  	system("CLS");

		cout<<"You have chosen Tesla model 3"<<endl;
		 fstream second("B.txt");
		 string str;
         while(getline(second, str)) {
         cout<< str <<endl;

     }
     second.close();
     sleep(2);
 }
 if(carmodel=="C")
 {
 	system("CLS");
	     cout<<"You have chosen Ford 2017" << endl;
		 fstream third("C.txt");
        string str;
         while(getline(third, str)) {
         cout<< str<<endl;
     }
     third.close();
     sleep(2);
}
 if(carmodel=="D")
 {
 	system("CLS");

		cout<<"You have chosen Mercedes-Benz A Class "<<endl;
		 fstream  fourth("D.txt");
         string str;
         while(getline(fourth, str)){
            cout<< str<<endl;
         }
fourth.close();
sleep(2);
  }
   if(carmodel=="E")
 {
 	system("CLS");

		cout<<"You have chosen Honda Civic 2020 1.8 "<<endl;
		 fstream fifth("E.txt");

         string str;
         while(getline(fifth, str)){
                cout<< str<<endl;
}
fifth.close();
sleep(2);
  }
if(carmodel !="A" && carmodel !="B" &&  carmodel !="C" && carmodel !="D" && carmodel !="E" )

      cout<<"Invaild Car Model. Please try again!"<<endl;
        }
while(carmodel !="A" && carmodel !="B" &&  carmodel !="C" && carmodel !="D" && carmodel !="E"  );
    cout<<"--------------------------------------------------------------------------"<<endl;
    cout << "Please provide following information: "<<endl;
	//getting data from user related to rental service
    cout<<"Please select a Car No. : ";
    cin >> carnumber;
    cout<<"Number of days you wish to rent the car : ";
    cin >> days;
    cout<<endl;
	}
	void calculate()
	{
		sleep(1);
		system ("CLS");
		cout<<"Calculating rent. Please wait......"<<endl;
		sleep(2);
		if(carmodel == "A"||carmodel=="a")
        rentalfee=days*1000;
        if(carmodel == "B" ||carmodel=="b")
        rentalfee=days*8000;
        if(carmodel == "C" ||carmodel=="c")
        rentalfee=days*12000;
        if(carmodel == "D" ||carmodel=="d")
        rentalfee=days*20000;
        if(carmodel == "E" ||carmodel=="e")
        rentalfee=days*5000;
    }
void showrent()
    {
    cout << "\n\t\t                       Car Rental - Customer Invoice                  "<<endl;
    cout << "\t\t	///////////////////////////////////////////////////////////"<<endl;
    cout << "\t\t	| Invoice No. :"<<"------------------|"<<setw(10)<<"#Cnb81353"<<" |"<<endl;  // setting the field with to 10 spaces
    cout << "\t\t	| Customer Name:"<<"-----------------|"<<setw(10)<<customername<<" |"<<endl; // and why we have used is to arrange all the console outputs in a single column to make it look good and more appropriate
    cout << "\t\t	| Car Model :"<<"--------------------|"<<setw(10)<<carmodel<<" |"<<endl;
    cout << "\t\t	| Car No. :"<<"----------------------|"<<setw(10)<<carnumber<<" |"<<endl;
    cout << "\t\t	| Number of days :"<<"---------------|"<<setw(10)<<days<<" |"<<endl;
    cout << "\t\t	| Your Rental Amount is :"<<"--------|"<<setw(10)<<rentalfee<<" |"<<endl;
    cout << "\t\t	| Caution Money :"<<"----------------|"<<setw(10)<<"0"<<" |"<<endl;
    cout << "\t\t	| Advanced :"<<"---------------------|"<<setw(10)<<"0"<<" |"<<endl;
    cout << "\t\t	 ________________________________________________________"<<endl;
    cout <<"\n";
    cout << "\t\t	| Total Rental Amount is :"<<"-------|"<<setw(10)<<rentalfee<<" |"<<endl;
    cout << "\t\t	 ________________________________________________________"<<endl;
    cout << "\t\t	 # This is a computer generated invoce and it does not"<<endl;
    cout << "\t\t	 require an authorised signture #"<<endl;
    cout <<" "<<endl;
    cout << "\t\t	///////////////////////////////////////////////////////////"<<endl;
    cout << "\t\t	You are advised to pay up the amount before due date."<<endl;
    cout << "\t\t	Otherwise penelty fee will be applied"<<endl;
    cout << "\t\t	///////////////////////////////////////////////////////////"<<endl;
    int f;
    system("PAUSE");

    system ("CLS");

     fstream thank("thanks.txt");


 string str;
 while(getline(thank, str)){
        cout<< str<<endl;
  }
  thank.close();
	}
};
class welcome //welcome class
{
	public:
	int welcum()
	{
 fstream wel("welcome.txt"); //displaying welcome ASCII image text on output screen fn1353

  if(!wel) {
    cout << "Cannot open input file.\n";
  }
  string str;
  while(getline(wel, str)){

    cout<<str<<endl;
  }
  wel.close();
  sleep(1);
  cout<<"\nStarting the program please wait....."<<endl;
  sleep(1);
  cout<<"\nloading up files....."<<endl;
  sleep(1);
  system ("CLS");
}

};
int main()
{
    system ("color  E2");
welcome obj1;
obj1.welcum();
rent obj2;
obj2.data();
obj2.calculate();
obj2.showrent();

return 0;
}


