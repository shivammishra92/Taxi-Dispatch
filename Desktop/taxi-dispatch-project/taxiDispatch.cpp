#include<iostream>
using namespace std;

int main()
{
   int n;
   cout<<"Enter the No of taxis in DATABASE:\n";
   cin>>n;
   int nWaiting=0,front=0;
   int Id[n];

   while(true)
   {
   char ch;
   cout<<"Enter the COMMAND:"<<endl;
   cin>>ch;

   if(ch=='d')
   {
      if(nWaiting==n)
      cout<<"QUEUE FULL"<<endl;
      else
      {
        int d;
        cout<<"Enter the driver id:"<<endl;
        cin>>d;
        Id[(front+nWaiting)%n]=d;
        nWaiting++;
      }
   }
   else if(ch=='c')
    {
     if(nWaiting==0)
     cout<<"TRY AGAIN LATER... , NO DRIVER FOUND!"<<endl;
     else
     {
      cout<<"Assigning the driver:"<<Id[front]<<endl;
      front=(front+1)%n;
      nWaiting--;
     }
   }
   else if(ch=='x')
   break;

   else
   cout<<"Invalid command!! "<<endl;
   }

return 0;
}

