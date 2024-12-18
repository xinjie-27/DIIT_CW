#include <iostream>
#include <string>
#include <iomanip>
#define underline "\033[4m"
#define non "\033[0m"
using namespace std;

// Initialization //
string name1,name2,name3,name4,name5,name6,name7,name8,name9,name10,name11,name12,name13,name14;
char unit;
int plan,item,amountf,amountc,amountm,number,vege1,vege2,vege3,vege4,vege5,vege6,vege7,vege8,vege9,vege10,vege11,vege12,vege13,vege14;
int totalSum,totalFarm,totalCompost,totalMicro,totalVege1,totalVege2,totalVege3,totalVege4,totalVege5,totalVege6,totalVege7,totalVege8,totalVege9,totalVege10,totalVege11,totalVege12,totalVege13,totalVege14;

// Microgreens Kit //
void micro(){
    cout<<underline << "\nMicrogreens Kit (RM 35)\n";
    cout<<non<<"Inclusive of:"<<endl;
    cout<<"|1| x2 types of microgreen seeds"<<endl;
    cout<<"|2| Peatmoss"<<endl;
    cout<<"|3| Gardening tool"<<endl;
    cout<<"|4| Grow Tray"<<endl;
    cout<<"|5| Grow Guide"<<endl;
    cout<<"--------------------------------------------------------------------"<<endl;
    cout<<"Amount that you want : ";
    cin>>amountm;
    cout<<"--------------------------------------------------------------------"<<endl;
    totalMicro=amountm*35;
    }

// Compost Kit //
void compost(){
    cout<<underline<<"\nCompost kit (RM 49)\n";
    cout<<non<<"Inclusive of:"<<endl;
    cout<<"|1| Compost bag"<<endl;
    cout<<"|2| 1 pack of bokashi powder"<<endl;
    cout<<"|3| 1 set of tools"<<endl;
    cout<<"--------------------------------------------------------------------"<<endl;
    cout<<"Amount that you want : ";
    cin>>amountc;
    cout<<"--------------------------------------------------------------------"<<endl;
    totalCompost=amountc*49;
    }

// Farm kit //
void farm(){
    cout<<underline<<"\nFarm kit (RM 19)\n";
    cout<<non<<"Inclusive of:"<<endl;
    cout<<"|1| 1 packet Pak Choy Seeds"<<endl;
    cout<<"|2| x2 netpot holder rings"<<endl;
    cout<<"|3| AB nutrients(1 bottle each)"<<endl;
    cout<<"|4| Clay pebbles"<<endl;
    cout<<"|5| Netpot"<<endl;
    cout<<"|6| x4 sponges"<<endl;
    cout<<"--------------------------------------------------------------------"<<endl;
    cout<<"Amount that you want : ";
    cin>>amountf;
    cout<<"--------------------------------------------------------------------"<<endl;
    totalFarm=amountf*19;
    }

// Vegetables Subcription Start //
void vegeSubcribe(){    
    
    cout<<"\n>>> What kind of package type did you need? <<<"<<endl;
    cout<<"--------------------------------------------------------------------"<<endl;
    cout<<"Select [M]Monthly Growner or [A]Anuual growner : ";
    cin>>unit;
    cout<<"--------------------------------------------------------------------"<<endl;
    
    if (unit=='M'||unit=='m'){
        cout<<"\n>>> These are the plan <<<"<<endl;

        cout<<underline<<"\n|1| Monthly Growner 1-Leafy (RM 105):"<<endl;
        cout<<non<<"a)Min 0.75kg of Vegetables x4 weeks/month"<<endl;
        cout<<"b)Suitable for 2-3 pax households"<<endl;
        
        cout<<underline<<"\n|2| Monthly Growner 2-Leafy (RM 189):"<<endl;
        cout<<non<<"a)Min 1.5Kg of leafy vegetables x4 weeks/month"<<endl;
        cout<<"b)suitable for 4-6 pax households"<<endl;
        
        cout<<underline<<"\n|3| Monthly Growner 3-Leafy (RM 270):"<<endl;
        cout<<non<<"a)Min 2.2Kg of leafy vegetables x4 weeks/month"<<endl;
        cout<<"b)Suitable for 7-10 pax households"<<endl;
        
        cout<<underline<<"\n|4| Monthly Growner 1-Fruity (RM 120):"<<endl;
        cout<<non<<"a)Min 1.7Kg of fruity vegetables x4 weeks/month"<<endl;
        cout<<"b)Suitable for 4-6 pax households"<<endl;
        
        cout<<underline<<"\n|5| Monthly Growner 2-Fruity (RM 240):"<<endl;
        cout<<non<<"a)Min 3.4Kg of fruity vegetables x4 weeks/month"<<endl;
        cout<<"b)Suitable for 4-6 pax households"<<endl;
        cout<<"\n--------------------------------------------------------------------"<<endl;
        cout<<"Enter your plan number : ";
        cin>>plan;
        cout<<"--------------------------------------------------------------------"<<endl;
            switch(plan){
            case 1:
            cout<<underline<<"\nMonthly Growner 1-Leafy:"<<endl;
            cout<<non<<"Choose item:"<<endl;
            cout<<"|1| Salad lettuces"<<endl;
            cout<<"|2| Hearty Asian greens"<<endl;
            cout<<"|3| Salad & Asian Mix"<<endl;
            cout<<"--------------------------------------------------------------------"<<endl;
            cout<<"Select the item that you want : ";
            cin>>item;
            cout<<"--------------------------------------------------------------------"<<endl;
                
                switch(item){
                case 1:
                cout<<">>> You have selected Salad lettuces <<<"<<endl;
                cout<<"--------------------------------------------------------------------"<<endl;
                cout<<"Enter your amount : ";
                cin>>vege1;
                cout<<"--------------------------------------------------------------------"<<endl;
                totalVege1=vege1*105;
                name1="Monthly Growner 1-Leafy(Salad lettuces)";
                break;

                case 2:
                cout<<">>> You have selected Hearty Asian greens <<<"<<endl;
                cout<<"--------------------------------------------------------------------"<<endl;
                cout<<"Enter your amount : ";
                cin>>vege2;
                cout<<"--------------------------------------------------------------------"<<endl;
                totalVege2=vege2*105;
                name2="Monthly Growner 1-Leafy(Hearty Asian greens)";
                break;

                case 3:
                cout<<">>> You have selected Salad & Asian Mix <<<"<<endl;
                cout<<"--------------------------------------------------------------------"<<endl;
                cout<<"Enter your amount : ";
                cin>>vege3;
                cout<<"--------------------------------------------------------------------"<<endl;
                totalVege3=vege3*105;
                name3="Monthly Growner 1-Leafy(Salad & Asian Mix)";
                break;
                }
            break; 

            case 2:
            cout<<underline<<"\nMonthly Growner 2-Leafy"<<endl;
            cout<<non<<"Choose item:"<<endl;
            cout<<"|1| Salad lettuces"<<endl;
            cout<<"|2| Hearty Asian greens"<<endl;
            cout<<"|3| Salad & Asian Mix"<<endl;
            cout<<"--------------------------------------------------------------------"<<endl;
            cout<<"Select the item that you want : ";
            cin>>item;
            cout<<"--------------------------------------------------------------------"<<endl;
                switch(item){
                case 1:
                cout<<">>> You have selected Salad lettuces <<<"<<endl;
                cout<<"--------------------------------------------------------------------"<<endl;
                cout<<"Enter your amount : ";
                cin>>vege4;
                cout<<"--------------------------------------------------------------------"<<endl;
                totalVege4=vege4*189;
                name4="Monthly Growner 2-Leafy(Salad lettuces)";
                break;

                case 2:
                cout<<">>> You have selected Hearty Asian greens <<<"<<endl;
                cout<<"--------------------------------------------------------------------"<<endl;
                cout<<"Enter your amount : ";
                cin>>vege5;
                cout<<"--------------------------------------------------------------------"<<endl;
                totalVege5=vege5*189;
                name5="Monthly Growner 2-Leafy(Hearty Asian greens)";
                break;

                case 3:
                cout<<">>> You have selected Salad & Asian Mix <<<"<<endl;
                cout<<"--------------------------------------------------------------------"<<endl;
                cout<<"Enter your amount : ";
                cin>>vege6;
                cout<<"--------------------------------------------------------------------"<<endl;
                totalVege6=vege6*189;
                name6="Monthly Growner 2-Leafy(Salad & Asian Mix)";
                break;
                }
            break;

            case 3:
            cout<<underline<<"\nMonthly Growner 3-Leafy"<<endl;
            cout<<non<<"Choose item:"<<endl;
            cout<<"|1| Salad lettuces"<<endl;
            cout<<"|2| Hearty Asian greens"<<endl;
            cout<<"|3|Salad & Asian Mix"<<endl;
            cout<<"--------------------------------------------------------------------"<<endl;
            cout<<"Select the item that you want : ";
            cin>>item;
            cout<<"--------------------------------------------------------------------"<<endl;
                switch(item){
                case 1:
                cout<<">>> You have selected Salad lettuces <<<"<<endl;
                cout<<"--------------------------------------------------------------------"<<endl;
                cout<<"Enter your amount : ";
                cin>>vege7;
                cout<<"--------------------------------------------------------------------"<<endl;
                totalVege7=vege7*270;
                name7="Monthly Growner 3-Leafy(Salad lettuces)";
                break;

                case 2:
                cout<<">>> You have selected Hearty Asian greens <<<"<<endl;
                cout<<"--------------------------------------------------------------------"<<endl;
                cout<<"Enter your amount : ";
                cin>>vege8;
                cout<<"--------------------------------------------------------------------"<<endl;
                totalVege8=vege8*270;
                name8="Monthly Growner 3-Leafy(Hearty Asian greens)";
                break;

                case 3:
                cout<<">>> You have selected Salad & Asian Mix <<<"<<endl;
                cout<<"--------------------------------------------------------------------"<<endl;
                cout<<"Enter your amount : ";
                cin>>vege9;
                cout<<"--------------------------------------------------------------------"<<endl;
                totalVege9=vege9*270;
                name9="Monthly Growner 3-Leafy(Salad & Asian Mix)";
                break;
                }
            break;
            
            case 4:
            cout<<underline<<"\nMonthly Growner 1-Fruity"<<endl;
            cout<<non<<"This package includes a variety of:"<<endl;
            cout<<"|1| Red / Yellow capsicums"<<endl;
            cout<<"|2| Tomatoes / Cherry tomatoes "<<endl;
            cout<<"|3| Green / Red chillis"<<endl;
            cout<<"|4| English / Cocktail Cucumbers"<<endl;
            cout<<"--------------------------------------------------------------------"<<endl;
            cout<<"Enter your amount : ";
            cin>>vege10;
            cout<<"--------------------------------------------------------------------"<<endl;
            totalVege10=vege10*120;
            name10="Monthly Growner 1-Fruity";
            break;

            case 5:
            cout<<underline<<"\nMonthly Growner 2-Fruity"<<endl;
            cout<<non<<"This package includes a variety of:"<<endl;
            cout<<"|1| Red / Yellow capsicums"<<endl;
            cout<<"|2| Tomatoes / Cherry tomatoes "<<endl;
            cout<<"|3| Green / Red chillis"<<endl;
            cout<<"|4| English / Cocktail Cucumbers"<<endl;
            cout<<"--------------------------------------------------------------------"<<endl;
            cout<<"Enter your amount : ";
            cin>>vege11;
            cout<<"--------------------------------------------------------------------"<<endl;
            totalVege11=vege11*240;
            name11="Monthly Growner 2-Fruity";
            break;
            }
            
    }
              
    else if (unit=='A'||unit=='a'){
        cout<<underline<<"Annual Growner 1-Leafy (RM 1200):"<<endl;
        cout<<non<<"a)Min 0.75kg of leafy vegetables x4 weeks per month x12 months"<<endl;
        cout<<"b)Suitable for 2-3 pax households"<<endl;
        cout<<"Choose item:"<<endl;
        cout<<"|1| Salad lettuces"<<endl;
        cout<<"|2| Hearty Asian greens"<<endl;
        cout<<"|3| Salad & Asian Mix"<<endl;
        cout<<"--------------------------------------------------------------------"<<endl;
        cout<<"Select the item that you want : ";
        cin>>item;
        cout<<"--------------------------------------------------------------------"<<endl;
            switch(item){
            case 1:
            cout<<">>> You have selected Salad lettuces <<<"<<endl;
            cout<<"--------------------------------------------------------------------"<<endl;
            cout<<"Enter your amount : ";
            cin>>vege12;
            cout<<"--------------------------------------------------------------------"<<endl;
            totalVege12=vege12*1200;
            name12="Annual Growner 1-Leafy(Salad lettuces)";
            break;

            case 2:
            cout<<">>> You have selected Hearty Asian greens <<<"<<endl;
            cout<<"--------------------------------------------------------------------"<<endl;
            cout<<"Enter your amount : ";
            cin>>vege13;
            cout<<"--------------------------------------------------------------------"<<endl;
            totalVege13=vege13*1200;
            name13="Annual Growner 1-Leafy(Hearty Asian greens)";
            break;

            case 3:
            cout<<">>> You have selected Salad & Asian Mix <<<"<<endl;
            cout<<"--------------------------------------------------------------------"<<endl;
            cout<<"Enter your amount : ";
            cin>>vege14;
            cout<<"--------------------------------------------------------------------"<<endl;
            totalVege14=vege14*1200;
            name14="Annual Growner 1-Leafy(Salad & Asian Mix)";
            break;
            }
    }

}// Vegetables Subcription End //

// Menu Looping //
void whole(){
    cout<<underline<<"\nPlease Select the Product"<<endl;
    cout<<non<<"|1| Vegetable Subscription"<<endl;
    cout<<"|2| Farm kit"<<endl;
    cout<<"|3| Compost kit"<<endl;
    cout<<"|4| Microgreens kit"<<endl;
    cout<<"|5| Checkout"<<endl;
    cout<<"--------------------------------------------------------------------"<<endl;
    cout<<"Choose the product : ";
    cin>>number;
    cout<<"--------------------------------------------------------------------"<<endl;
    switch(number){
    case 1:{
        vegeSubcribe();
        whole();
        break;
    }
    case 2:{
        farm();
        whole();
        break;
    }
    case 3:{
        compost();
        whole();
        break;
    }
    case 4:{
        micro();
        whole();
        break;
    }
    case 5:{
        totalSum=totalFarm+totalCompost+totalMicro+totalVege1+totalVege2+totalVege3+totalVege4+totalVege5+totalVege6+totalVege7+totalVege8+totalVege9+totalVege10+totalVege11+totalVege12+totalVege13+totalVege14;
        cout<<"*****************************Receipt********************************"<<endl;
        cout<<""<<endl;
        cout<<right<<setw(9)<<underline<<">>> Item Purchased <<<"<<non<<setw(28)<<underline<<"Qty"<<endl;
        if(vege1>0){
        cout<<non<<setw(5)<<" "<<left<<setw(16)<<name1<<setw(5)<<" "<<setw(4)<<"×"<<right<<setw(2)<<vege1<<endl;}
        if(vege2>0){
        cout<<non<<setw(5)<<" "<<left<<setw(16)<<name2<<setw(5)<<" "<<setw(4)<<"×"<<right<<setw(2)<<vege2<<endl;}
        if(vege3>0){
        cout<<non<<setw(5)<<" "<<left<<setw(16)<<name3<<setw(5)<<" "<<setw(4)<<"×"<<right<<setw(2)<<vege3<<endl;}
        if(vege4>0){
        cout<<non<<setw(5)<<" "<<left<<setw(16)<<name4<<setw(5)<<" "<<setw(4)<<"×"<<right<<setw(2)<<vege4<<endl;}
        if(vege5>0){
        cout<<non<<setw(5)<<" "<<left<<setw(16)<<name5<<setw(5)<<" "<<setw(4)<<"×"<<right<<setw(2)<<vege5<<endl;}
        if(vege6>0){
        cout<<non<<setw(5)<<" "<<left<<setw(16)<<name6<<setw(5)<<" "<<setw(4)<<"×"<<right<<setw(2)<<vege6<<endl;}
        if(vege7>0){
        cout<<non<<setw(5)<<" "<<left<<setw(16)<<name7<<setw(5)<<" "<<setw(4)<<"×"<<right<<setw(2)<<vege7<<endl;}
        if(vege8>0){
        cout<<non<<setw(5)<<" "<<left<<setw(16)<<name8<<setw(5)<<" "<<setw(4)<<"×"<<right<<setw(2)<<vege8<<endl;}
        if(vege9>0){
        cout<<non<<setw(5)<<" "<<left<<setw(16)<<name9<<setw(5)<<" "<<setw(4)<<"×"<<right<<setw(2)<<vege9<<endl;}
        if(vege10>0){
        cout<<non<<setw(5)<<" "<<left<<setw(16)<<name10<<setw(5)<<" "<<setw(4)<<"×"<<right<<setw(2)<<vege10<<endl;}
        if(vege11>0){
        cout<<non<<setw(5)<<" "<<left<<setw(16)<<name11<<setw(5)<<" "<<setw(4)<<"×"<<right<<setw(2)<<vege11<<endl;}
        if(vege12>0){
        cout<<non<<setw(5)<<" "<<left<<setw(16)<<name12<<setw(5)<<" "<<setw(4)<<"×"<<right<<setw(2)<<vege12<<endl;}
        if(vege13>0){
        cout<<non<<setw(5)<<" "<<left<<setw(16)<<name13<<setw(5)<<" "<<setw(4)<<"×"<<right<<setw(2)<<vege13<<endl;}
        if(vege14>0){
        cout<<non<<setw(5)<<" "<<left<<setw(16)<<name14<<setw(5)<<" "<<setw(4)<<"×"<<right<<setw(2)<<vege14<<endl;}
        
        
        
        //cout<<non<<setw(5)<<" "<<left<<setw(16)<<name<<setw(5)<<" "<<setw(4)<<"×"<<right<<setw(2)<<amountvege<<endl;
        cout<<right<<setw(13)<<"Farm kit"<<setw(37)<<"×"<<setw(4)<<amountf<<endl;
        cout<<right<<setw(16)<<"Compost kit"<<setw(34)<<"×"<<setw(4)<<amountc<<endl;
        cout<<right<<setw(9)<<underline<<"Microgreens kit"<<setw(30)<<"×"<<setw(4)<<amountm<<setw(9)<<" "<<endl;
        cout<<right<<non<<setw(9)<<underline<<"Total : "<<setw(45)<<"RM "<<totalSum<<endl;
        cout<<non<<"\n"<<right<<setw(42)<<">>> Thank you! <<<"<<endl;
        cout<<right<<setw(42)<<"Please come again"<<endl;
        break;
    }
    }
}

int main(){
    cout<<"Welcome to Sunway Xfarms ^-^ "<<endl;
    cout<<underline<<">>> Please Select the Product <<<"<<endl;
    cout<<non<<"|1| Vegetable Subscription"<<endl;
    cout<<"|2| Farm Kit"<<endl;
    cout<<"|3| Compost Kit"<<endl;
    cout<<"|4| Microgreens Kit"<<endl;
    cout<<"|5| Checkout"<<endl;
    cout<<"--------------------------------------------------------------------"<<endl;
    cout<<"Choose the product : ";
    cin>>number;
    cout<<"--------------------------------------------------------------------"<<endl;
    switch(number){
    case 1:{
        vegeSubcribe();
        whole();
        break;
    }
    case 2:{
        farm();
        whole();
        break;
    }
    case 3:{
        compost();
        whole();
        break;
    }
    case 4:{
        micro();
        whole();
        break;
    }
    case 5:{
        totalSum=totalFarm+totalCompost+totalMicro+totalVege1+totalVege2+totalVege3+totalVege4+totalVege5+totalVege6+totalVege7+totalVege8+totalVege9+totalVege10+totalVege11+totalVege12+totalVege13+totalVege14;
        cout<<"******************************Receipt*******************************"<<endl;
        cout<<""<<endl;
        cout<<right<<setw(12)<<underline<<">>> Item Purchased <<<"<<non<<setw(21)<<underline<<"Qty"<<endl;
        cout<<right<<non<<setw(30)<<"Vegetables subcription"<<setw(15)<<"×"<<setw(5)<<"0"<<endl;
        cout<<right<<setw(16)<<"Farm kit"<<setw(29)<<"×"<<setw(5)<<amountf<<endl;
        cout<<right<<setw(19)<<"Compost kit"<<setw(26)<<"×"<<setw(5)<<amountc<<endl;
        cout<<right<<setw(12)<<underline<<"Microgreens kit"<<setw(22)<<"×"<<setw(5)<<amountm<<setw(7)<<" "<<endl;
        cout<<right<<non<<setw(12)<<underline<<"Total : "<<setw(38)<<"RM "<<totalSum<<setw(1)<<" "<<endl;
        cout<<non<<"\n"<<right<<setw(41)<<">>> Thank you! <<<"<<endl;
        cout<<right<<setw(41)<<"Please come again"<<endl;
        break;
    }
    }
}


