#include<iostream>
using namespace std;
int  main()
{
    string A,B;
    int x;
    A="Ivan";
    B="Shoibal";
    cout<<A<<":"<< "Hey man ! How are you? Shoibal "<<endl;
    cout<<B<<":"<<"Wow ! I am fine.What about you? Ivan"<<endl;
    cout<<A<<":"<<"I am doing good.I am seeing your post about your Friendship.Can you just tell me about your friendship?"<<endl;
    cout<<B<<":"<<"Sure,First of all friendship is very important to me.They are part of my life."<<endl;
    cout<<A<<":"<<"Lets start talk about your best friend";
    cout<<B<<":"<<"What do you what to talk about"<<endl;
    cout<<"press 1 for college friend"<<endl;
    cout<<"press 2 for versity friend"<<endl;
    cin>>x;
    if(x==1)
    {
        cout<<"College friend"<<endl;
        cout<<B<<":"<<"What do you want to know about college friend"<<endl;
        cout<<"Choose 1 Normal Friend"<<endl;
        cout<<"Choose 2 Best Friend"<<endl;
        int y;
        cin>>y;
        if(y==1)
        {
            cout<<B<<": This two of my normal friend"<<endl;
            cout<<"1=Arnob"<<endl;
            cout<<"2=Sudipto"<<endl;
            cout<<"They are my good friend"<<endl;
            cout<<"Thanks"<<endl;
            cout<<B <<":" << " Do you have any friends??" <<endl;
            int friends;
            cout<<" (if yes press 1 if no press 2)"<<endl;
            cin>>friends;
            if (friends ==1)
            {
                cout<< B << ": tell me about them...."<<endl;
                cout<< A << ": .................................................................................";
            }
            else if (friends==2)
            {
                cout<< B << ": oh it's ok";
            }

        }

        else if(y==2)
        {
           cout<<B <<": This three of my best friend"<<endl;
           cout<<"1=Yakeen"<<endl;
           cout<<"2=Samir"<<endl;
           cout<<"3=Abir"<<endl;
           cout<<B <<": Do you want to know about them?"<<endl;
           cout<<"Press  'Y' for yes "<<endl;
           cout<<"Press 'N' for no"<<endl;
           char p;
           cin>>p;
           if(p=='Y')
           {
               cout<<"About Yakeen"<<endl;
              cout<<"About Samir"<<endl;
               cout<<"About Abir"<<endl;
               cout<<A<<":"<<"All of them"<<endl;
               cout<<B<<":"<<"Okay"<<endl;
               cout<<"Dst,About Yakeen:He is a good,loyal,inteligent,good sense of humor,great personality.Means there are no error of him.i love him like a Brother."<<endl<<"About Samir:My 1st impression is he is a normal,innocent type of person but reality it change my mind."<<endl
               <<"he is clever good looking,sharp,loyal,good personality,free mind"<<endl<<"About Abir:he is a sweet fat guy.Straight forward,active,funny,good minded,caring";
               cout<<A<< "why they are your best friend??"<<endl;
               cout<<B<< "becz..........................."<<endl;
               cout<<B <<":" << " Do you have any best friends??" <<endl;
            int lol;
            cout<<" (if yes press 1 if no press 2)"<<endl;
            cin>>lol;
            if (lol ==1)
            {
                cout<< B << ": tell me about them...."<<endl;
                cout<< A << ": .................................................................................";
            }
            else if (lol==2)
            {
                cout<< B << ": oh it's ok";
            }



           }

           else if(p=='N')
           {
               cout<<"Its Okay";
           }


        }

    }

    else if(x==2)
    {
        cout<<"Versity friend"<<endl;
         cout<<B<<":"<<"What do you want to know about versity friend"<<endl;
        cout<<"Choose 1 Very Good  Friend"<<endl;
        cout<<"Choose 2 Best Friend"<<endl;
        int z;
        cin>>z;
        if(z==1)
        {
          cout<<"This four of my very good friend"<<endl;
            cout<<"1=Mohok"<<endl;
            cout<<"2=Rabbi"<<endl;
            cout<<"3=Labbo"<<endl;
            cout<<"4=Fardin"<<endl;
            cout<<"They are many good friend in class but this four are my very good friend"<<endl;
            cout<<"Thanks";
        }

        else if(z==2)
        {
           cout<<"This two of my best friend"<<endl;
           cout<<"1=Adnan"<<endl;
           cout<<"2=Samia"<<endl;
           cout<<"Do you want to know about them?"<<endl;
           cout<<"Press  'Y' for yes "<<endl;
           cout<<"Press 'N' for no"<<endl;
           char q;
           cin>>q;
           if(q=='Y')
           {
            cout<<"About Adnan"<<endl;
            cout<<"About Samia"<<endl;
            cout<<A<<":"<<"All of them"<<endl;
            cout<<B<<":"<<"Okay"<<endl;
            cout<<"Dst,About Adnan:He is a caring,loyal,inteligent,good sense of humor,great personality and responsible.Means there are no error of him.I love him like a Brother."<<endl<<"About Samia:She is a sweet,innocent, beautiful,loyal,good manners,free minded."<<endl;
           }
           else if(q=='N')
           {
             cout<<"Its Okay";
           }

        }

    }




}
