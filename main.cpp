#include <iostream>
#include <fstream>


using namespace std;


void loadfile();
void createfile();
void displayfile();
void countfile();
void copyfile();


int main()
{
    int choice;
    cout<<"hello ya user ya 7bebe XD what do you want to do today?"<<endl;
    cout<<"in case you want to load an existing file press 1: "<<endl;
    cout<<"in case you want to create a file press 2: "<<endl;
    cout<<"in case you want to display the contents of file press 3: "<<endl;
    cout<<"in case you want to count the words and characters of file press 4: "<<endl;
    cout<<"in case you want to copy an existing file into another file press 5: "<<endl;
    cin>>choice;

    if (choice==1)
    {
        loadfile();
    }
    if (choice==2)
    {
        createfile();
    }
    if (choice==3)
    {
        displayfile();
    }

    if (choice==4)
    {
        countfile();
    }

    if (choice==5)
    {
        copyfile();
    }



    return 0;
}


void loadfile()
{
    ifstream datafile;
    char name[81];
    cout<<"enter file name . N.B don't forget to add .txt at the end of it: ";
    cin.ignore();
    cin.getline(name,81);
    datafile.open(name);
    if (datafile.fail())
    {
        cout<<"error opening file";
    }
    else
    {
        cout<<"file opened";
    }

}

void createfile()
{

    ofstream outfile;
    char name[81];
    cout<<"enter file name . N.B don't forget to add .txt at the end of it: ";
    cin.ignore();
    cin.getline(name,81);
    outfile.open(name);

}

void displayfile()
{
    string data;
    ifstream datafile;
    datafile.open("mira.txt");

    while (! datafile.fail() && !datafile.eof())
    {

        datafile>>data;
        cout<<data<<endl;
    }

}

void countfile(){
cout<<"-> word count is: ";
ifstream infile ("mira.txt");
string line;
int counter=0;

while (!infile.eof()){

    getline(infile,line);
    counter++;

}
cout<< counter<<endl;

cout<<"-> char count is : ";


}


void copyfile(){

string data;
    ifstream datafile;

    string name;
    cout<<"enter file name . N.B don't forget to add .txt at the end of it: ";
    cin.ignore();
    getline(cin,name);
    datafile.open(name.c_str());
    datafile.seekg(0,ios::end);
    long len = datafile.tellg();


    char arr[len];

    datafile.seekg(0);
    datafile.read(arr,len);
    ofstream outfile;

    string name2 ;
    cout<<"enter file name . N.B don't forget to add .txt at the end of it: ";
    getline(cin,name2);
    outfile.open(name2.c_str());
    outfile<<arr;

outfile.close();
datafile.close();



}
