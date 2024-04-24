#include <iostream>
#include <fstream>
using namespace std;

/*int main(){
    string line;

    char data[100];
    ofstream myfile;
    myfile.open("test1.txt",ios::out);
    cout<<"Enter your name"<<endl;

    cout<<"enter your data\n";
    cin>>data;
    cin.ignore();
    myfile<<data<<endl;
    myfile.close();
    return 0;
}*/
int main(){
    string line;
    /*ofstream myfile;
    myfile.open("test.txt1");
    cout<<"enter your name\n";
    cin>>line;
    myfile<<line;*/
    ifstream myfile;
    myfile.open("text1");
    myfile>>line;
    cout<<line;

}