# include <iostream>
#include <ctime>
#include <cstdlib>

using namespace std;
int main()
{   
    srand(time(0));
    int daysUntilExpiration=rand()%12;
    cout<<daysUntilExpiration<<"\n\n"<<endl;
    if(daysUntilExpiration<=10&&daysUntilExpiration>5){
        cout<<"Your subscription will expire soon.\n Renew now!"<<endl;
    }
    else if(daysUntilExpiration<=5&&daysUntilExpiration>1){
        cout<<"Your subscription will expire in "<<daysUntilExpiration<<"days,\n renew now and save 10%!"<<endl;
    }
    else if(daysUntilExpiration==1){
        cout<<"Renew now and save 20%!"<<endl;
    }
    else if(daysUntilExpiration==0){
        cout<<"Your subscription have expired"<<endl;
    }
    else{
        cout<<"You have an active subscription"<<endl;
    }
}