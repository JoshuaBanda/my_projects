# include <iostream>
#include <ctime>
#include <cstdlib>

using namespace std;
int main()
{   
    srand(time(0));
    int daysUntilExpiration=rand()%12;
    cout<<daysUntilExpiration<<"\n\n"<<endl;

    string out="";
    switch (daysUntilExpiration){
        case 0:cout<<"Your subscription have expired"<<endl;
        case 1:cout<<"Your subscription will expire in "<<daysUntilExpiration<<"days,\n renew now and save 10%!"<<endl;break;
        case 2:cout<<"Your subscription will expire in "<<daysUntilExpiration<<"days,\n renew now and save 10%!"<<endl;break;
        case 3:cout<<"Your subscription will expire in "<<daysUntilExpiration<<"days,\n renew now and save 10%!"<<endl;break;
        case 4:cout<<"Your subscription will expire in "<<daysUntilExpiration<<"days,\n renew now and save 10%!"<<endl;break;
        case 5:cout<<"Your subscription will expire in "<<daysUntilExpiration<<"days,\n renew now and save 10%!"<<endl;break;
        
        case 6:cout<<"Your subscription will expire in "<<daysUntilExpiration<<"days,\n renew now and save 10%!"<<endl;break;
        case 7:cout<<"Your subscription will expire in "<<daysUntilExpiration<<"days,\n renew now and save 10%!"<<endl;break;
        case 8:cout<<"Your subscription will expire in "<<daysUntilExpiration<<"days,\n renew now and save 10%!"<<endl;break;
        case 9:cout<<"Your subscription will expire in "<<daysUntilExpiration<<"days,\n renew now and save 10%!"<<endl;break;
        case 10:cout<<"Your subscription will expire in "<<daysUntilExpiration<<"days,\n renew now and save 10%!"<<endl;break;

        default: cout<<"You have an active subscription"<<endl;
    }
}