

////An OOP to create a Library Management system////
//Madhav Gupta E212
//Om Mishra E216
//Yash Taneja E224


#include<iostream>
#include <string.h>
#include<stdlib.h>
using namespace std;
int c[10]={3,10,12,12,34,32,1,7,8};
string b;
class Book{
public:
    string a[10][4]={{"Alex","Alex_Luther","2000","1200"},{"Carnival","Rawi_Hage","1200","1800"},{"Rich_dad","Robert_kio","1300","1500"},{"PPS","Dhananjay_Joshi","2200","12000"},{"Calculus","Dr._Govind_rajput","1234","190"},{"Physics","Vivekanund_Bagal","1450","780"},{"EOB","Sugam_Shivhare","1350","780"},{"PE","Rehan_Ahmed","69","90"},{"EGD","Rakesh_chaudhri","1200","567"},{"BEEE","Me","6789","89"}};
    int i;
    string name;
    int SAP;
    void getBook(){
        cout<<"Enter the name of book:"<<endl;
        cin>>b;
        cout<<endl<<endl;
        Display();
}
    int Display(){
        for(int i=0;i<10;i++){
            if(a[i][0]==b){
                cout<<"Book found!!"<<endl<<endl;
                return 0;


            }}
            cout<<"Enter a valid name, no such book found"<<endl;

                    getBook();

    }
    void page(){
        for(i=0;i<10;i++){
        if(a[i][0]==b)
            cout<<"Number of pages in "<<b<<" is "<<a[i][2]<<endl;
        }
    }
    void price(){
        for(i=0;i<10;i++){
        if(a[i][0]==b)
            cout<<"Price of book "<<b<<" is "<<a[i][3]<<" rupees"<<endl;
        }}

    void author(){
        for(i=0;i<10;i++){
        if(a[i][0]==b)
            cout<<"Author of book "<<b<<" is "<<a[i][1]<<endl;
        }}
    void copies(){

    for(i=0;i<10;i++){
        if(a[i][0]==b)

            cout<<"copies of book "<<b<<" is "<<c[i]<<endl;

        }}
    void choice(){
        int ch,fc;
        cout<<endl<<endl;
        cout<<"enter 1 to issue the book"<<endl<<"enter 2 to return the book"<<endl<<endl;
        cin>>ch;
        switch(ch){
        case 1:
            for(i=0;i<10;i++){
                if(a[i][0]==b){
                    cout<<"book issued"<<endl;
                    c[i]=c[i]-1;

                    cout<<"copies remaining of book "<<b<<" is "<<c[i]<<endl<<endl;

        }}
        break;
        case 2:
            for(i=0;i<10;i++){
                if(a[i][0]==b){
                    cout<<"book returned"<<endl;
                    c[i]=c[i]+1;
                    cout<<"copies of book "<<b<<" is "<<c[i]<<endl<<endl;

        }}
        break;
        }
    }
};

int main(){
string name;
int SAP;
int sm1=1;
char smile=sm1;
cout<<endl<<"****************************************************************"<<endl;
cout<<"********************WELOCME TO NMIMS LIBRARY********************"<<endl;
cout<<"****************************************************************"<<endl<<endl;
cout<<"Enter Student Details (Name and Sap ID)"<<endl;
cin>>name>>SAP;
cout<<endl<<endl;
Book b;
while(3>1){

b.getBook();
b.author();
b.page();
b.price();
b.copies();
b.choice();
string flag;
cout<<"Press yes to continue and no to exit"<<endl;
cin>>flag;
if(flag=="yes"){
    system("CLS");
    cout<<endl<<"****************************************************************"<<endl;
    cout<<"********************WELOCME TO NMIMS LIBRARY********************"<<endl;
    cout<<"****************************************************************"<<endl<<endl;


}
if(flag=="no"){
    cout<<"THANK YOU!!!!"<<endl<<"Visit Again "<<smile<<smile<<endl;
    break;
}
}
return 0;
}
