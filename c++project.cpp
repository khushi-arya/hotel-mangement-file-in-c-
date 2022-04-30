#include<iostream>
using namespace std;
int main(){
    int quant;
    int choice;
    int Qr=0,Qp=0,Qb=0,Qn=0,Qs=0,Qc=0;
    int Sr=0,Sp=0,Sb=0,Sn=0,Ss=0,Sc=0;
    int Tr=0,Tp=0,Tb=0,Tn=0,Ts=0,Tc=0;
     
    cout<<"\n\tQunatity of item we have: ";
    cout<<"\nRooms available:  ";
    cin>>Qr;
    cout<<"\nQunatity of pasta: ";
    cin>>Qp;
    cout<<"\nQuantity of burger: ";
    cin>>Qb;
    cout<<"\nQuantity of noodles: ";
    cin>>Qn;
    cout<<"\nQuantity of shake: ";
    cin>>Qs;
    cout<<"\nQuantity of chicken: ";
    cin>>Qc;
    
    cout<<"\n\t\t Please select from the menu: ";
    cout<<"\n\n 1)Rooms";
    cout<<"\n\n 2)pasta";
    cout<<"\n\n 3)burger";
    cout<<"\n\n 4)noodles";
    cout<<"\n\n 5)sheke";
    cout<<"\n\n 6)chicken";
    cout<<"\n\n 7)info regarding sales and collection";
     cout<<"\n8)exit";

     cout<<"\nplease enter your choice";
     cin>>choice;
     
      switch(choice){
          case 1:
             cout<<"\n\nenter the rooms u want:  ";
             cin>>quant;
             if(Qr-Sr>=quant){
              Sr=Sr+quant;
              Tr=Tr+quant*1200;
              cout<<"\n\n\t\t"<<quant<<"room/roomsalloted";
          }
          else{
              cout<<"\n\tonly"<<Qr-Sr<<"room remaning";
              break;
          }
          case 2:
              cout<<"\n\nenter the pasta plate u want:  ";
              cin>>quant;
              if(Qp-Sp>=quant){
              Sp=Sp+quant;
              Tp=Tp+quant*120;
              cout<<"\n\n\t\t"<<quant<<"pasta alloted";
          }
          else{
              cout<<"\n\tonly"<<Qp-Sp<<"pasta remaning";
              break;
          }
          case 3:
             cout<<"\n\nenter the burger u want:  ";
             cin>>quant;
             if(Qb-Sb>=quant){
              Sb=Sb+quant;
              Tb=Tb+quant*1200;
              cout<<"\n\n\t\t"<<quant<<"burger alloted";
          }
          else{
              cout<<"\n\tonly"<<Qb-Sb<<"room remaning";
              break;
          }
          case 4:
          cout<<"\n\nenter the noodles u want:  ";
          cin>>quant;
          if(Qn-Sn>=quant){
              Sn=Sn+quant;
              Tn=Tn+quant*1200;
              cout<<"\n\n\t\t"<<quant<<" noodles alloted";
          }
          else{
              cout<<"\n\tonly"<<Qn-Sn<<"noodles remaning";
              break;
          }
        case 5:
          cout<<"\n\nenter the shake u want:  ";
          cin>>quant;
          if(Qs-Ss>=quant){
              Ss=Ss+quant;
              Tr=Tr+quant*1200;
              cout<<"\n\n\t\t"<<quant<<"shake alloted";
          }
          else{
              cout<<"\n\tonly"<<Qs-Ss<<"shake remaning";
              break;
          }
        case 6:
          cout<<"\n\nenter the chicken u want:  ";
          cin>>quant;
          if(Qc-Sc>=quant){
              Sr=Sr+quant;
              Tr=Tr+quant*1200;
              cout<<"\n\n\t\t"<<quant<<" chicken alloted";
          }
          else{
              cout<<"\n\tonly"<<Qc-Sc<<"chicken remaning";
              break;
          }
          case 7:
          cout<<"\n\tdetali of sales and collection";
          cout<<"\nnum of rooms we had : "<<Qr;
          cout<<"\nnum of room we gave for rent: "<<Sr;
          cout<<"\n\nremaning rooms: "<<Qr-Sr;
          cout<<"\n total rooms collection for the day: "<<Tr;
          
          //pasta 
          cout<<"\nnum of pasta we had : "<<Qp;
          cout<<"\nnum of pasta we gave for rent: "<<Sp;
          cout<<"\n\nremaning pasta: "<<Qp-Sp;
          cout<<"\n total pasta collection for the day: "<<Tp;
          //burger detail

          
          cout<<"\nnum of burger we had : "<<Qb;
          cout<<"\nnum of burger we gave for rent: "<<Sb;
          cout<<"\n\nremaning burger: "<<Qb-Sb;
          cout<<"\n total burger collection for the day: "<<Tb;
          //noodless
          
          cout<<"\nnum of noodles we had : "<<Qn;
          cout<<"\nnum of noodles we gave for rent: "<<Sn;
          cout<<"\n\nremaning noodles: "<<Qn-Sn;
          cout<<"\n total noodles collection for the day: "<<Tn;          
         //shake
          cout<<"\nnum of shake we had : "<<Qs;
          cout<<"\nnum of shake we gave for rent: "<<Ss;
          cout<<"\n\nremaning shake: "<<Qs-Ss;
          cout<<"\n total shake collection for the day: "<<Ts;
          //chicken
          
          cout<<"\nnum of chicken we had : "<<Qc;
          cout<<"\nnum of chicken we gave for rent: "<<Sc;
          cout<<"\n\nremaning chicken: "<<Qc-Sc;
          cout<<"\n total chicken collection for the day: "<<Tc;
          
          case 8:
          exit;
          default:
          cout<<"\nplease select the num mentioned above";

      }
     //goto m;
     return 0;
}














