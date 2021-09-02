#include<iostream>
#include<fstream>
#include<sstream>
#include<string>
#include<stdlib.h>
#include<iomanip>
#include<math.h>
using namespace std;
string checkdepart(int z){
    switch (z){
        case 1: 
            return "Neurology";
            break;
        case 2:
            return "Pediatrics";
            break;
        case 3:
            return "Emergency";
            break;
        case 4:
            return "Phychiatric";
            break;
        case 5:
            return "E.N.T";
            break;

        default:
            return "Internal Medicine";

    }
}

void ClearScreen()
{
    int n;
    for (n = 0; n < 10; n++)
        printf( "\n\n\n\n\n\n\n\n\n\n" );
}

int showneuro(){

    cout<<"\n";
    //string line;
    ifstream a;

    a.open("doctors.txt");
    if(!a)
    {
        cout<<"no such file exist"<<endl;
        return 1;
    }

    string depart;
    int x,y,z,b,i=0;
    cout << setw(5) << "ID:" << setw(15) << "DEPARTMENT" << setw(15) << "NAME" << setw(15) <<"TIMINGS"<<endl << endl;


    while  (i!=4    )
    {

        a>>x;

        a.ignore();

        a>>y;
        depart=checkdepart(y);

        a.ignore();

        a >> z;

        a.ignore();

        a>>b;

        a.ignore();
        string line;
        getline(a,line,',');

        cout<<setw(4)<<x<<setw(15)<<depart<<setw(20)<<line<<setw(7)<<z<<"-"<<b<<endl;
        i++;

    }


    a.close();

}
int showpediatric(){
    cout<<"\n";
    //string line;
    ifstream a;

    a.open("doctors.txt");
    if(!a){
        cout<<"no such file exist"<<endl;
        return 1;
    }
    string discard;
    getline(a,discard,'$');
    // cout<<discard;
    string depart;
    int x,y,z,b,i=0;
    cout <<endl<<endl<<endl <<setw(5) << "ID:" << setw(15) << "DEPARTMENT" << setw(15) << "NAME" << setw(15) <<"TIMINGS"<<endl << endl;


    while  (i!=4    ){

        a>>x;

        a.ignore();

        a>>y;
        depart=checkdepart(y);

        a.ignore();

        a >> z;

        a.ignore();

        a>>b;

        a.ignore();
        string line;
        getline(a,line,',');

        cout<<setw(4)<<x<<setw(15)<<depart<<setw(20)<<line<<setw(7)<<z<<"-"<<b<<endl;
        i++;

    }


    a.close();
}
int showemergency(){
    cout<<"\n";
    //string line;
    ifstream a;

    a.open("doctors.txt");
    if(!a){
        cout<<"no such file exist"<<endl;
        return 1;
    }
    string discard;
    getline(a,discard,'&');
    // cout<<discard;
    string depart;
    int x,y,z,b,i=0;
    cout <<endl<<endl<<endl << setw(5) << "ID:" << setw(15) << "DEPARTMENT" << setw(15) << "NAME" << setw(15) <<"TIMINGS"<<endl << endl;


    while  (i!=4    ){

        a>>x;

        a.ignore();

        a>>y;
        depart=checkdepart(y);

        a.ignore();

        a >> z;

        a.ignore();

        a>>b;

        a.ignore();
        string line;
        getline(a,line,',');

        cout<<setw(4)<<x<<setw(15)<<depart<<setw(20)<<line<<setw(7)<<z<<"-"<<b<<endl;
        i++;

    }


    a.close();
}
int showphychiatric(){
    cout<<"\n";
    //string line;
    ifstream a;

    a.open("doctors.txt");
    if(!a){
        cout<<"no such file exist"<<endl;
        return 1;
    }
    string discard;
    getline(a,discard,'@');
    // cout<<discard;
    string depart;
    int x,y,z,b,i=0;
    cout <<endl<<endl<<endl <<setw(5) << "ID:" << setw(15) << "DEPARTMENT" << setw(15) << "NAME" << setw(15) <<"TIMINGS"<<endl << endl;

    while  (i!=4    ){

        a>>x;

        a.ignore();

        a>>y;
        depart=checkdepart(y);

        a.ignore();

        a >> z;

        a.ignore();

        a>>b;

        a.ignore();
        string line;
        getline(a,line,',');

        cout<<setw(4)<<x<<setw(17)<<depart<<setw(20)<<line<<setw(7)<<z<<"-"<<b<<endl;
        i++;

    }


    a.close();
}
int showent(){
    cout<<"\n";
    //string line;
    ifstream a;

    a.open("doctors.txt");
    if(!a){
        cout<<"no such file exist"<<endl;
        return 1;
    }
    string discard;
    getline(a,discard,'#');
    // cout<<discard;
    string depart;
    int x,y,z,b,i=0;
    cout <<endl<<endl<<endl <<setw(5) << "ID:" << setw(15) << "DEPARTMENT" << setw(15) << "NAME" << setw(15) <<"TIMINGS"<<endl << endl;

    while  (i!=4    ){

        a>>x;

        a.ignore();

        a>>y;
        depart=checkdepart(y);

        a.ignore();

        a >> z;

        a.ignore();

        a>>b;

        a.ignore();
        string line;
        getline(a,line,',');

        cout<<setw(4)<<x<<setw(15)<<depart<<setw(20)<<line<<setw(7)<<z<<"-"<<b<<endl;
        i++;

    }


    a.close();
}
int showinternalmed(){
    cout<<"\n";
    //string line;
    ifstream a;

    a.open("doctors.txt");
    if(!a){
        cout<<"no such file exist"<<endl;
        return 1;
    }
    string discard;
    getline(a,discard,'%');
    // cout<<discard;
    string depart;
    int x,y,z,b,i=0;
    cout <<endl<<endl<<endl <<setw(5) << "ID:" << setw(15) << "DEPARTMENT" << setw(18) << "NAME" << setw(15) <<"TIMINGS"<<endl << endl;

    while  (i!=4    ){

        a>>x;

        a.ignore();

        a>>y;
        depart=checkdepart(y);

        a.ignore();

        a >> z;

        a.ignore();

        a>>b;

        a.ignore();
        string line;
        getline(a,line,',');

        cout<<setw(4)<<x<<setw(20)<<depart<<setw(18)<<line<<setw(7)<<z<<"-"<<b<<endl;
        i++;

    }


    a.close();
}
bool checkavailibility(int id){
    fstream a ("appointment.txt");
    if (!a)
    {

        cout << "Can't open file" << endl;
        return 1;
    }

    int number;

    a >> number;

    while(!a.eof())
    {
        if (number == id)
        {
            return false;
        }
        a >> number;

    }
    return true;
    a.close();
}
void makeappointment(int d){
    bool check=false;
    while(!check){


        int id;
        cout<<"Enter your desired doctor's ID number:"<<endl;
        cin>>id;
        while(cin.fail())
        {
            cout<<"enter an integer from above choices"<<endl;
            cin.clear();
            cin.ignore(256,'\n');

            cin >> id;
        }
        switch(d){
            case 1:
                do {

                    if(id<=0 || id>4){
                        cout<<"enter valid doctor's id number (as shown above)"<<endl;
                    }
                    else
                        break;
                    cout<<"Enter your desired doctor's id number:";
                    cin>>id;
                } while (id<=0 || id>4);
                break;
            case 2:
                do {

                    if(id<=4 || id>8){
                        cout<<"enter valid doctor's id number (as shown above)"<<endl;
                    }
                    else
                        break;

                    cout<<"Enter your desired doctor's id number:";
                    cin>>id;
                } while (id<=4 || id>8);
                break;
            case 3:
                do {

                    if(id<=20 || id>24){
                        cout<<"enter valid doctor's id number (as shown above)"<<endl;
                    }
                    else
                        break;
                    cout<<"Enter your desired doctor's id number:";
                    cin>>id;
                } while (id<=20 || id>24);
                break;
            case 4:
                do {

                    if(id<=12 || id>16){
                        cout<<"enter valid doctor's id number (as shown above)"<<endl;
                    }
                    else
                        break;
                    cout<<"Enter your desired doctor's id number:";
                    cin>>id;
                } while (id<=12 || id>16);
                break;
            case 5:
                do {

                    if(id<=16 || id>20){
                        cout<<"enter valid doctor's id number (as shown above)"<<endl;
                    }
                    else
                        break;
                    cout<<"Enter your desired doctor's id number:";
                    cin>>id;
                } while (id<=16 || id>20);
                break;
            case 6:
                do {

                    if(id<=8 || id>12){
                        cout<<"enter valid doctor's id number (as shown above)"<<endl;
                    }
                    else
                        break;
                    cout<<"Enter your desired doctor's id number:";
                    cin>>id;
                } while (id<=8 || id>12);
                break;
            default:
                cout<<"enter valid input"<<endl;
        }

        bool found=checkavailibility(id);

        if(!found){
            cout<<"doctor unavailable"<<endl;

        }
        else{

            string data;

            ofstream a;
            a.open ("appointment.txt", std::ofstream::out | std::ofstream::app);



            a<<id<<endl;
            check=true;
            cout<<"\nAppointment successfully done....";
        }
        int set();

    }

}
int checkappointment(int id){

    ifstream a ("appointment.txt");
    if (!a)
    {

        cout << "Can't open file" << endl;
        return 1;
    }

    int number;
    bool found;
    a >> number;


    while(!a.eof())
    {
        if (number == id)
        {
            cout << "found\nplease proceed to the waiting area on your left\nyou'll shortly be guided to your Doctor" << endl;
            found=true;

        }
        a >> number;

    }
    if(!found){
        cout<<"not found\n";

    }
    a.close();
}



class Person
{
protected:
    int id;
    string name;
    char gender;
    long long phone_num;

public:
    void set()
    {
        cin.ignore();
        cout<<"\n\n\t\t--------------------\n";
        cout<<"\t\tEnter Name:";
        getline(cin,name);

        cout<<"\n\t\tEnter Gender(M/F):";

        cin>>gender;
        bool check=false;

        while(check==false){


            if(gender!='M'&&gender!='m'&&gender!='F'&&gender!='f')
            {


                try
                {
                    throw &gender;
                }
                catch (char *gender)
                {
                    cout<<"enter valid input:"<<endl;
                    cin>>*gender;
                    if(*gender=='M'||*gender=='m'||*gender=='F'||*gender=='f'){
                        check=true;
                    }
                }
            }
            else{
                check=true;
            }
        }
        cout<<"\n\t\tEnter phone number:";
        cin.ignore();
        cin>>phone_num;
        while(cin.fail()) {
            cout<<"Phone number should be in integer form,please!";
            cin.clear();
            cin.ignore(256,'\n');

            cin >> phone_num;
        }


    }

    string getname()
    {
        return name;
    }
    int getid()
    {
        return id;
    }
    char getgender()
    {
        return gender;

    }

    long getphone()
    {
        return phone_num;
    }
};
class Doctor:public Person
{
private:
    string specialization;
public:
    void setspcialization(string sp){
        specialization=sp;
    }
    string getspecialization(){
        return specialization;
    }
    void checkPatient(){
        cout<<"Patient checked.";
    }
    void prescribeMedicine(){
        cout<<"Medicine prescription sent to pharmacy."<<endl;
    }
    void generateReport(){
        cout<<"reports will be available to collect after 10 days from the check-up date."<<endl;
    }
};
class Patient:public Person
{
    int choice;
public:
    int set()
    {

        Person::set();
        //system("CLS");
        ClearScreen();
        cout<<"\n\t\t\t\tChoose Department:"<<endl;
        cout<<"\n\t\t\t\t1)Neurology \n\t\t\t\t2)Pediatric \n\t\t\t\t3)Internal Medicine \n\t\t\t\t4)Phychiatric \n\t\t\t\t5)E.N.T \n\t\t\t\t6)Emergency \n\n\n\t\t\tYour Choice:";
        cin>>choice;
        while(cin.fail()) {
            cout<<"enter an integer from above choices";
            cin.clear();
            cin.ignore(256,'\n');

            cin >> choice;
        }
        bool check=false;

        while(!check){
            if(choice>=1&&choice<=6){
                check=true;
            }
            else{
                try
                {
                    throw &choice;
                }
                catch(int *choice)
                {
                    cout<<"enter valid input:"<<endl;
                    cin>>*choice;
                    while(cin.fail()) {
                        cout<<"enter an integer from above choices";
                        cin.clear();
                        cin.ignore(256,'\n');

                        cin >> *choice;
                    }
                }
            }
        }
        switch(choice)
        {
            case 1:

                showneuro();
                break;
            case 2:

                showpediatric();
                break;
            case 3:

                showinternalmed();
                break;
            case 4:

                showphychiatric();
                break;

            case 5:
                showent();
                break;

            case 6:
                showemergency();
                break;

            default:
                cout<<"\nDepartment not present:\n";
        }
        return choice;
    }
};
class Receptionist:public Person
{
    bool available=false;
    char ans;
    int id=90;
public:
    Receptionist(){

    }
    Receptionist(int d){
        cout<<"Do you have an appointment(Y/N)?"<<endl;
        cin>>ans;
        bool check=false;
//acception handling
        while(check==false){


            if(ans!='Y'&&ans!='y'&&ans!='N'&&ans!='n')
            {


                try
                {
                    throw &ans;
                }
                catch (char *ans)
                {
                    cout<<"enter valid input:"<<endl;
                    cin>>*ans;
                    if(*ans=='Y'||*ans=='y'||*ans=='N'||*ans=='n'){
                        check=true;
                    }
                }
            }
            else{
                check=true;
            }
        }
        char choice;
        switch(ans)
        {

            case 'n':
            case 'N':

                cout<<"do you want to make an appointment?(M) OR Walk in?(W)";

                cin>>choice;
                check=false;
//acception handling
                while(check==false){


                    if(choice!='M'&&choice!='m'&&choice!='W'&&choice!='w')
                    {


                        try
                        {
                            throw &choice;
                        }
                        catch (char *choice)
                        {
                            cout<<"enter valid input:"<<endl;
                            cin>>*choice;
                            if(*choice=='M'||*choice=='m'||*choice=='W'||*choice=='w'){
                                check=true;
                            }
                        }
                    }
                    else{
                        check=true;
                    }
                }
                if(choice=='M'||choice=='m'){
                    makeappointment(d);
                }
                else if(choice=='W'||choice=='w'){
                    while(!available){

                        switch(d){
                            case 1:
                                do {
                                    cout<<"Enter your desired doctor's id number:";
                                    cin>>id;
                                    while(cin.fail())
                                    {
                                        cout<<"cenrtainly you made a typo!"<<endl;
                                        cin.clear();
                                        cin.ignore(256,'\n');

                                        cin >> id;
                                    }
                                    if(id<=0 || id>4){
                                        cout<<"enter valid doctor's id number (as shown above)"<<endl;
                                    }
                                } while (id<=0 || id>4);
                                break;
                            case 2:
                                do {
                                    cout<<"Enter your desired doctor's id number:";
                                    cin>>id;
                                    while(cin.fail())
                                    {
                                        cout<<"certainly you made a typo!"<<endl;
                                        cin.clear();
                                        cin.ignore(256,'\n');

                                        cin >> id;
                                    }
                                    if(id<=4 || id>8){
                                        cout<<"enter valid doctor's id number (as shown above)"<<endl;
                                    }
                                } while (id<=4 || id>8);
                                break;
                            case 3:
                                do {
                                    cout<<"Enter your desired doctor's id number:";
                                    cin>>id;
                                    while(cin.fail())
                                    {
                                        cout<<"certainly you made a typo!"<<endl;
                                        cin.clear();
                                        cin.ignore(256,'\n');

                                        cin >> id;
                                    }
                                    if(id<=20 || id>24){
                                        cout<<"enter valid doctor's id number (as shown above)"<<endl;
                                    }
                                } while (id<=20 || id>24);
                                break;
                            case 4:
                                do {
                                    cout<<"Enter your desired doctor's id number:";
                                    cin>>id;
                                    while(cin.fail())
                                    {
                                        cout<<"cenrtainly you made a typo!"<<endl;
                                        cin.clear();
                                        cin.ignore(256,'\n');

                                        cin >> id;
                                    }
                                    if(id<=12 || id>16){
                                        cout<<"enter valid doctor's id number (as shown above)"<<endl;
                                    }
                                } while (id<=12 || id>16);
                                break;
                            case 5:
                                do
                                {
                                    cout<<"Enter your desired doctor's id number:";
                                    cin>>id;
                                    while(cin.fail())
                                    {
                                        cout<<"certainly you made a typo!"<<endl;
                                        cin.clear();
                                        cin.ignore(256,'\n');

                                        cin >> id;
                                    }
                                    if(id<=16 || id>20){
                                        cout<<"enter valid doctor's id number (as shown above)"<<endl;
                                    }
                                } while (id<=16 || id>20);
                                break;
                            case 6:
                                do {
                                    cout<<"Enter your desired doctor's id number:";
                                    cin>>id;
                                    while(cin.fail())
                                    {
                                        cout<<"cenrtainly you made a typo!"<<endl;
                                        cin.clear();
                                        cin.ignore(256,'\n');

                                        cin >> id;
                                    }
                                    if(id<=8 || id>12){
                                        cout<<"enter valid doctor's id number (as shown above)"<<endl;
                                    }
                                } while (id<=8 || id>12);
                                break;
                            default:
                                cout<<"enter valid input"<<endl;
                        }

                        available=checkavailibility(id);
                        if (!available){
                            cout<<"not available at this time"<<endl;
                        }
                        else {
                            cout<<"doctor available"<<endl;
                        }
                    }

                }
                else
                    cout<<"enter valid input";

                break;

            case 'y':
            case 'Y':

                int id;

                cout<<"enter your assigned doctor's ID number:";
                cin>>id;
                while(cin.fail()) {
                    cout<<"certainly you made a typo!"<<endl;
                    cin.clear();
                    cin.ignore(256,'\n');
                    cin >> id;
                }
                checkappointment(id);
                break;
            default:
                cout<<"";
        }
    }
};
class Building
{
private:
    int    No_of_Rooms;
public:

 void updatedoctor(){
        fstream fin;
        fin.open("doctors.txt",fstream::in);

        stringstream sstr;

        string x;
        string o;
        string temp;
        cin.ignore();
        cout<<"Enter the name of Doctor which you want to replace:"<<endl;

        getline(cin,x);

        cout<<"Enter the name of new doctor:";
        getline(cin,o);


        int comma=0;
        while(! fin.eof() ) {
            getline(fin, temp, '\n');
            if (temp.find(x) != std::string::npos) {
                for (int i=0; i<temp.length(); i++) {
                    sstr<<temp[i];
                    if (temp[i] == ',') {
                        comma++;
                    }
                    if (comma==4) {
                        break;
                    }
                }
                sstr<<o<<",";
                if (temp[temp.length()-1] != ',') {
                    sstr<<temp[temp.length()-1];
                }
                sstr<<endl;
                //cout<<o<<","<<endl;

            } else {
                sstr << temp << endl;
                //cout<<temp<<endl;
            }
        }

        fin.close();

        fstream fout;
        fin.open("doctors.txt", fstream::out | fstream::trunc);
        fin << sstr.str();
        //cout<< sstr.str();
    }


    bool checkpass(string pass){
        string password="pass";//operator overloadig cAN BE DONE.
        if(password==pass){
            return true;
        }
        else
            return false;
    }
};

int main(void){
    cout<<setw(30)<<"\t\t\t-------------------";
    cout<<setw(30)<<"\n\t\t\t\tHOSPITAL MANAGEMENT(PRACTO)"<<endl;
    cout<<setw(30)<<"\t\t\t-------------------"<<endl;
    int ans;
    bool check=false;
    cout<<"\t\tPRESS 1 : To View Doctors Present in our hospital"<<endl;
    cout<<"\n\t\tPRESS 2 : To Go To Appointment Section"<<endl;
    cout<<"\t\t-----------------------------";
    cout<<"\n\t\tAdministration Login"<<endl;
    cout<<"\t\tPRESS 3 : To Update Doctor";
    //cout<<"\t\tPRESS 4 : To exit";
    cout<<"\n\t\t-----------------------------";
    cout<<"\n\n\t\t\t\tInput:";
    cin>>ans;
    while(cin.fail()) {
        cout<<"enter an integer from above choices"<<endl;
        cin.clear();
        cin.ignore(256,'\n');

        cin >> ans;
    }
    while(!check){
        if(ans>=1&&ans<=3){
            check=true;
        }
        else{
            try
            {
                throw &ans;
            }
            catch(int *ans)
            {
                cout<<"enter valid input:"<<endl;
                cin>>*ans;
                while(cin.fail()) {
                    cout<<"enter an integer from above choices"<<endl;
                    cin.clear();
                    cin.ignore(256,'\n');

                    cin >> *ans;
                }
            }

        }
    }
    int pass,d;

    switch (ans){
        case 1:
            //system("CLS");
            ClearScreen();
            //Sleep(6000);
            showneuro();
            showpediatric();
            showemergency();
            showphychiatric();
            showent();
            showinternalmed();

            break;

        case 2:
        {
            Patient pa;
            d=pa.set();
        }
            {
                Receptionist re(d);
            }
            break;
        case 3:
        {
            Building b;
            string pass;
            bool check=false;
            while(check!=true){

                cout<<"\n\t\t\t\tEnter pass key:";
                cin>>pass;
                check=b.checkpass(pass);
                if(check==true){
                    cout<<"\n\n\t\t\t\tAccess granted"<<endl;
                    b.updatedoctor();
                }

                else
                    cout<<"\n\n\t\t\t\tAccess denied"<<endl;
            }}
            break;
        default:
            cout<<"enter valid input"<<endl;

    }
    //system("pause");
    cin.get();
}

