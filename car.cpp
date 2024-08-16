#include <iostream>
#include <string>

using namespace std;
class veh
{
private:
    int model;
    string color;
    string made;
    int cc;
    int fuel_type;
    int type;                 //for presonal = 1, for commercial = 2
    int weight;
    int eme;
public:
    veh();
    //overloading of constructor
    veh(int , string , string , int , int , int ,int);
    void setv();
    void getv();
    void printv();
    float EL();
};
      //calling constructor function
veh::veh(int model = 1999 , string color = "White" , string made="Toyata" , int cc=660 , int fuel_tytpe=4 ,int type =1 , int weight =1000)
{
    model = model;
    color = color;
    made = made;
    cc=cc;
    fuel_type=fuel_type;
    type = type;
    weight = weight;

}
void veh::setv()
{
    cout<<"Enter The year of the  model"<<endl;
    cin>>model;
    cout<<"Enter the color"<<endl;
    cin>>color;
    cout<<"Enter the name of the model"<<endl;
    cin>>made;
    cout<<"Enter the cc"<<endl;
    cin>>cc;
    cout<<"For Electric Car Press 1, For hybrid Car Press 2, For CNG Press 3, For Petrol Press 4, For Diesel Press 5" << endl;
    cout<<"Enter the fuel type of a vehicle " <<endl;
    cin>>fuel_type;
    cout<<"Enter the type"<<endl;
    cout<<"For Personal types Press 1, For Public or Commercial Press 2" << endl;
    cin>>type;
    cout<<"Enter the weight(in pounds)" <<endl;
    cin>>weight;


}
void veh::getv()
{
    cout<<model;
    cout<<color;
    cout<<made;
    cout<<cc;
    cout<<fuel_type;
    cout<<type;
    cout<<weight;
    cout<<eme;
}
float veh::EL()
{
    eme=(weight*type*cc*fuel_type)/model;
    return eme;

}
void veh::printv()
{
    cout<<"\nModel = "<<model;
    cout<<"\nColor = "<<color;
    cout<<"\nMade = "<<made;
    cout<<"\ncc = "<<cc;
    cout<<"\nFuel Type = "<<fuel_type;
    cout<<"\nType = "<<type;
    cout<<"\nWeight = "<<weight;
    cout<<"\neme = "<<eme<<endl;
}
void setmodel(int model=1999)
{
    cout<<"Enter the model no. "<<endl;
    cin>>model;

}
int getmodel(int model)
{
    return model;
}

int main()
{
int choice;
char repeat_process;
do
{
 veh cd (2022);//carry vehicle;
        veh car(2022 );
        veh hiace(2022);
        veh bus(2022);
        veh audie(2022);
        cout << "Press 1 to enter the details of carry vehicle " << endl;
        cout << "Press 2 to enter the details of a car vehicle " << endl;
        cout << "Press 3 to enter the details of a hiace vehicle " << endl;
        cout << "Press 4 to enter the details of a bus vehicle" << endl;
        cout << "Press 5 to enter the details of an Audi vehicle " << endl;
        

        cin >> (choice);

        switch (choice)
        {
        	case 1:
        cout << "Enter the details of a carry vehicle " << endl;

        break;

        case 2:
        cout<<"Enter the details of a car vehicle" <<endl;

		break;

		case 3:
	    cout<<"Enter the details of a hiace vehicle "<<endl;

        break;

        case 4:
         cout<<"Enter the details of a bus vehicle "<<endl;

        break;

        case 5:
         cout<<"Enter the details of an Audi vehicle "<<endl;

        break;
    }
         cd.setv();
        cd.EL();
        cout<<"Properties of an Audi vehicle is "<<endl;

        cd.printv();
    cout << "Do you want to repeat the process?? (Press y/Y for Yes or N/n for No) " << endl;
	cin >> repeat_process;

}

    while((repeat_process == 'y' || repeat_process == 'Y') && (repeat_process != 'n' || repeat_process != 'N'));


        return 0;

}

