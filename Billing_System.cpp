#include<iostream>
#include<string>

using namespace std;

int main()
{

    string name;
    int cash,order,bill;
    int pizza=250,biryani=180,eggroll=100,popcorn=300,chickenchilli=120;
    cout<<"Welcome to the Royal REstaurant,Patna"<<endl;
    cout<<"Enter Customer name:";
    getline(cin,name);
    cout<<"Enter customer pocket money(to check eligible or not):";
    cin>>cash;

    string orderstatus=(cash>=300)? "You are eligible" : "Sorry, You are not eligible.";
       {

         cout<<orderstatus<<endl;
    
      
         if(cash>=300)
          {
             
             cout<<"Menu:"<<endl;           
             cout<<"1.Pizza(250) 2.Biryani(180) 3.Eggroll(100) 4.Popcorn(300) 5.Chickenchilli(120)"<<endl;
             cout<<"Enter customer order number:";
             cin>>order;
            switch(order)
              {
                 case 1:
                 bill=250;
                 cout<<"********************Bill********************"<<endl<<endl;
                 cout<<"your ordered item :Pizza "<<endl;
                  cout<<"Total Bill:"<<bill<<" Remaining money:"<<cash-bill<<endl;
                  cout<<"Thank you ! Have a Nice Day."<<endl<<endl;
                  cout<<"********************Bill********************"<<endl;
                  break;
                  case 2:
                 bill=180;
                 cout<<"********************Bill********************"<<endl<<endl;
                 cout<<"your ordered item :Biryani "<<endl;
                  cout<<"Total Bill:"<<bill<<" Remaining money:"<<cash-bill<<endl;
                  cout<<"Thank you ! Have a Nice Day."<<endl<<endl;
                  cout<<"********************Bill********************"<<endl;
                  break;
                  case 3:
                 bill=100;
                 cout<<"********************Bill********************"<<endl<<endl;
                 cout<<"your ordered item :Eggroll "<<endl;
                  cout<<"Total Bill:"<<bill<<" Remaining money:"<<cash-bill<<endl;
                  cout<<"Thank you ! Have a Nice Day."<<endl<<endl;
                  cout<<"********************Bill********************"<<endl;
                  break;
                  case 4:
                 bill=300;
                 cout<<"********************Bill********************"<<endl<<endl;
                 cout<<"your ordered item :Popcorn "<<endl;
                  cout<<"Total Bill:"<<bill<<" Remaining money:"<<cash-bill<<endl;
                  cout<<"Thank you ! Have a Nice Day."<<endl<<endl;
                  cout<<"********************Bill********************"<<endl;
                  break;
                  case 5:
                  bill=120;
                  cout<<"********************Bill********************"<<endl<<endl;
                  cout<<"your ordered item :Chickenchilli "<<endl;
                  cout<<"Total Bill:"<<bill<<" Remaining money:"<<cash-bill<<endl;
                  cout<<"Thank you ! Have a Nice Day."<<endl<<endl;
                  cout<<"********************Bill********************"<<endl;
                  break;

                default:
                 cout<<"invalid choice.";
                    break;
               }
           }
            else
             {

             } 
             
         
       }
       


    
    return 0;
}