// Name: Carlos Huizar, Israel Andrade, Thalia Villalobos, Diego Medina
// Date: 9 Oct 2015 
// 
#include<iostream>
#include<string>
#include<cassert>
using namespace std;

char menu();
double climbing();
double scuba();
double skyDive();
double spelunk();
double diegoDiscount();

int main()
{



}
char menu()
{
    char package;
    
    cout << "Press enter after your response. " << endl << endl
         << "The High Adventure Travel agency offers four vacation packages for thrill-seekers customers. " << endl
         << "The rates and options vary for each package. You've been asked to write a program to calculate" << endl
         << "and itemize the charges for each package, which are described below." << endl << endl
         
         
         << "Enter 'A' for 'Devil's Courthouse Adventure Weekend:" << endl
         << "An action packed three day weekend spent camping, rock climbing, and rappelling" << endl
         << "at Devil’s Courthouse, North Carolina. This getaway is for novices and experts alike." << endl
         << "Climbing instructors are available to beginners at an optional low price. " << endl
         << "Camping equipment rental is also available." << endl << endl
         
         << "Rate: " << endl
	     << "Base Charge: \t $350 per person" << endl
	     << "Climbing Instruction: \t $100 per person" << endl
	     << "Equipment Rental: \t $40/day per person" << endl << endl
	     
	     
	     << "Enter 'B' for Scuba Bahama:" << endl
	     << "A week long cruise to the Bahamas with three days of scuba diving. " << endl
	     << "Those with prior experience may dive right in, while beginners should choose" << endl
	     << "to take optional, but very affordable lessons." << endl

         << "Rate:" << endl
	     << "Base Charge: \t $1000 per person" << endl
	     << "Scuba Instruction: \t $100 per person" << endl << endl
	     
	     
	     << "Enter 'C' for Sky Dive Colorado:" << endl
	     << "Four thrilling days with expert sky diving instructors" << endl
	     << "in Colorado Springs CO. For lodging, you may choose either the Wilderness Lodge" << endl
	     << "or the Luxury Inn. (Instruction is included for all members of the party)." << endl
	     
         << "Rate:" << endl
	     << "Base Charge: \t $700 per person" << endl
	     << "Lodging at Wilderness Lodge: \t $65/day per person" << endl
	     << "Lodging at Luxury Inn: \t $120/day per person" << endl << endl
	     
         << "Enter 'D' for Barron Cliff Spelunk:" << endl
         << "Eight days spent hiking and exploring caves in the Barron Cliff Wilderness Area," << endl
         << "Tennessee. Camping equipment rental is available." << endl

         << "Rate:" << endl
	     << "Base Charge: \t $700 per person" << endl
	     << "Equipment Rental: \t $40/day per person" << endl << endl

         << "Note: A 10% discount is provided on the base charges of any package" << endl
         << "for a party of five or more." << endl << endl;
         
         do
         {
            cout << "Enter A,B,C or D for your adventure package of choice: ";
            cin >> package;
            
            package = toupper(package);
         
         }while ( (package >= 65) && (package <= 90) );

    return package;


}
double climbing()
{




}
double scuba()
{




}
double skyDive()
{
    int people, lodge = 0, inn = 0;
    double charge;
    
    cout << endl << "How many people are attending?" << endl;
    cin >> people;
    cout << "How many guest will be Lodging at Wilderness Lodge for the four days? " << endl;
    cin >> lodge;
    cout << "How many guest will be Lodging at Luxury Inn?" << endl;
    cin >> inn;
    
    if( people >= 5)
    {
        charge = (700.00 * people) * diegoDiscount();
        charge = charge + (65.00 * lodge) + (120.00 * inn);
        return charge;
    }
    else
    {
        charge = (700.00 * people) + (65.00 * lodge) + (120.00 * inn);
        return charge;
    }


}
double spelunk()
{




}
double diegoDiscount()
{




}
