#include<iostream>
#include<fstream>
using namespace std;

int main(){
    int t;
    string names[999];
    string numbers[999];
    string file;
    string req;
    int c=0;

    cout<<"how many contacts do you wanna add?"<<endl;
    cin>>t;
    
    for(int x=0; x<t ; x++){
    cout<<"enter the name of the "<<x+1<<" contact:"<<endl;
    cin>>names[x];

    cout<<"enter the number of the "<<x+1<<" contact:"<<endl;
    cin>>numbers[x];

}
    ofstream Contactslist;
    Contactslist.open("CL.txt");

    for (int x=0 ; x<t ; x++){
    Contactslist<<names[x]<<endl;
    Contactslist<<numbers[x]<<endl;
        }
    Contactslist.close();
    t=0;

    cout<<"How many contacts do you wanna see?"<<endl;
    cin>>t;
    for(int x=0 ; x<t ; x++){
        cout<<"enter the name or the number of the required contact:"<<endl;
        cin>>req;
        ifstream Contactslist;
        Contactslist.open("CL.txt");
        while (getline(Contactslist,file)){
            if(req==names[c]){
            cout<<numbers[c]<<endl;
            }
            else if(req==numbers[c]){
                cout<<names[c]<<endl;
            }
            c++;
        }
    c=0;
    }
    Contactslist.close();
    return 0;
}
    