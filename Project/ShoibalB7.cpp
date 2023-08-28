#include<iostream>
using namespace std;
int  main()
{
    string A,B;
    int x;
    A="Ivan";
    B="Shoibal";
    cout<<A<<":"<< "Hey man ! How are you Shoibal ? "<<endl<<endl;
    cout<<B<<":"<<"Wow ! I am fine.What about you? Ivan"<<endl<<endl;
    cout<<A<<":"<<"I am doing good.I am seeing your post about your Friendship.Can you just tell me about your friendship?"<<endl<<endl;
    cout<<B<<":"<<"Sure,First of all friendship is very important to me.They are part of my life."<<endl<<endl;
    cout<<A<<":"<<"Lets start talk about your  friend"<<endl<<endl;
    cout<<B<<":"<<"What do you what to talk about"<<endl<<endl;
    cout<<"press 1 for college friend"<<endl;
    cout<<"press 2 for versity friend"<<endl;
    cin>>x;

    for(;;){


    if(x==1)
    {
        cout<<"College friend"<<endl;

        cout<<B<<":"<<"What do you want to know about college friend?"<<endl<<endl;
        cout<<"Choose 1 Normal Friend"<<endl;
        cout<<"Choose 2 Best Friend"<<endl;
        int y;
        cin>>y;
        if(y==1)
        {
            cout<<"This two of my normal friend"<<endl<<endl;
            cout<<"1=Arnob"<<endl;
            cout<<"2=Sudipto"<<endl<<endl;
            cout<<"They are my good friend"<<endl<<endl;
            cout<<"Thanks";

        }

        else if(y==2)
        {
           cout<<"This three of my best friend"<<endl;
           cout<<"1=Yakeen"<<endl;
           cout<<"2=Samir"<<endl;
           cout<<"3=Abir"<<endl<<endl;
           cout<<"Do you want to know about them?"<<endl<<endl;
           cout<<"Press  'Y' for yes "<<endl;
           cout<<"Press 'N' for no"<<endl;
           char p;
           cin>>p;
           if(p=='Y')
           {
               cout<<"About Yakeen"<<endl<<endl;
              cout<<"About Samir"<<endl<<endl;
               cout<<"About Abir"<<endl<<endl;
               cout<<A<<":"<<"All of them"<<endl<<endl;
               cout<<B<<":"<<"Okay"<<endl<<endl;
               cout<<"Dst,About Yakeen:He is a good,loyal,inteligent,good sense of humor,great personality.Means there are no error of him.i love him like a Brother."<<endl<<endl<<"About Samir:My 1st impression is he is a normal,innocent type of person but reality it change my mind."<<endl
               <<"he is clever good looking,sharp,loyal,good personality,free mind"<<endl<<endl<<"About Abir:he is a sweet fat guy.Straight forward,active,funny,good minded,caring"<<endl<<endl;
               cout<<A<<":"<<"Why this three is your best friend"<<endl<<endl;
               cout<<B<<":"<<"Cause Everyone of us has at least one best friend and luckily i got three.we have grown up in the same college.I like spending time with this three friend beacause we have common things"<<endl<<endl
               <<"Thats why we understand hobbies and dislike.The best thing is i like about sense of humor.This three people always has useful ways to make me laugh whenever i am sad or angry.I really treasure our friendship and hope that it will last forever."<<endl<<endl;
               cout<<B <<":" << " Do you have any best friends??" <<endl<<endl;
               char i;
              cout<<" (if yes press 'a' if no press 'b')"<<endl;
              cin>>i;
              if(i=='a')
              {
                  cout<< B<<":" << ": tell me about them...."<<endl<<endl;
                  cout<<A<<":"<<"Okay.First of all i have two best Friend one Apon other Anabil.This two of my very close to my heart.Both of are special to me.";break;
              }
              else if(i=='b')
              {
                  cout<<B<<":"<<"Okay";
              }


           }

           else if(p=='N')
           {
               cout<<"Its Okay";break;
           }



        }

    }

    else if(x==2)
    {

        cout<<"Versity friend"<<endl;
         cout<<B<<":"<<"What do you want to know about versity friend"<<endl<<endl;
        cout<<"Choose 1 Very Good  Friend"<<endl;
        cout<<"Choose 2 Best Friend"<<endl;
        int z;
        cin>>z;
        if(z==1)
        {
          cout<<"This four of my very good friend"<<endl;
            cout<<"1=Mohok"<<endl;
            cout<<"2=Rabbi"<<endl;
            cout<<"3=Mushy"<<endl;
            cout<<"4=Fardin"<<endl;
            cout<<"They are many good friend in class but this four are my very good friend"<<endl<<endl;
            cout<<"Thanks";
        }

        else if(z==2)
        {
           cout<<"This two of my best friend"<<endl;
           cout<<"1=Adnan"<<endl;
           cout<<"2=Samia"<<endl<<endl;
           cout<<"Do you want to know about them?"<<endl<<endl;
           cout<<"Press  'Y' for yes "<<endl;
           cout<<"Press 'N' for no"<<endl;
           char q;
           cin>>q;
           if(q=='Y')
           {
            cout<<"About Adnan"<<endl;
            cout<<"About Samia"<<endl<<endl;
            cout<<A<<":"<<"All of them"<<endl;
            cout<<B<<":"<<"Okay"<<endl<<endl;
            cout<<"Dst,About Adnan:He is a caring,loyal,intelligent,good sense of humor,great personality and responsible.Means there are no error of him.I love him like a Brother."<<endl<<endl<<"About Samia:She is a sweet,innocent, beautiful,loyal,good manners,free minded."<<endl<<endl;
               cout<<A<<":"<< "why they are your best friend??"<<endl<<endl;
               cout<<B<<":"<< "Because this two of my best friend is my university life happiness my every calmness every moment make beautiful"<<endl<<endl;
               cout<<B <<":" << " Do you have any best friends??" <<endl;
               char x;
               cout<<" (if yes press 'a' if no press 'b')"<<endl;
               cin>>x;
               if(x=='a')

               {
                cout<< B << ": tell me about them...."<<endl<<endl;
                cout<< A << ": Of course My versity life best friend is Madhurjho,Dipto,Rudra this three are my best friend this three friend is  a good,loyal,inteligent,good sense of humor,great personality.I like spending time with this three friend beacause we have common things.They are great human being. "; break;


               }

           }
           else if(q=='N')
           {
             cout<<"Its Okay";break;
           }

        }


    }


   }



cout<<endl<<endl;
cout<<A<<" :Whats the Meaning of Friendship to you"<<endl<<endl;
cout<<B<<":Friends are part of my life.My life are incomplete.Finding a true friend feels like a gift that keeps on giving, even when they are thousands of miles away. Through stressful classes, figuring out a career, and inevitable breakups, your best friends have been there. And yes, when you got those bangs you shouldn’t have tried in the first place, they consoled you."<<endl<<endl;
cout<<B<<":Whats the meaning of friendship to you Ivan?"<<endl<<endl;
cout<<A<<":This is the same feeling about meaning of friendship"<<endl<<endl;




 }
