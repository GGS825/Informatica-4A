/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
#include <cstdlib>
#include <ctime>
#include <unistd.h>
#include <stdio.h>

using namespace std;

int main()
{
    cout<<"Ciao!benvenuto al minigioco \n";
    cout<<"La regola:si generanno automaticamente 2 numeri casuali,e indovini il primo numero se sia maggiore o minore del secondo numero\n";
     
     
     srand(time(0));
     int a;
     a=rand()%50+1;
     int b;
     b=rand()%50+1;
    
    
    FILE* fp;
    fp=fopen("dati.txt","w");
    fprintf(fp,"%d\n",a);
    fprintf(fp,"%d\n",b);
    fclose(fp);
    
    int n;
    int m;
    do
{
   
    cout<<"1.Inizia a giocare\n";
    cout<<"2.Modalità cheat\n";
    cout<<"3.Uscire\n";
    cin>>n;
    switch(n)
    {
        case 1 :
        {  
                cout<<"1.maggiore\n";
                 cout<<"2.uguale\n";
                  cout<<"3.minore\n";
                   cin>>m;
              do{
                switch(m)
                {
                    case 1:
                    {
                        fp=fopen("dati.txt","w+");
                        fscanf(fp,"%d",a);
                        fscanf(fp,"%d",b);
                        if(a>b)
                        {
                         cout<<"Complimenti! Hai vinto!!!!!\n";
                         cout<<"----------------------------------------------------------------\n";
                        }
                        else
                        {
                          cout<<"Mi dispice,non hai vinto\n";
                          cout<<"----------------------------------------------------------------\n";
                        };
                        fprintf(fp,"%d\n",a);
                        fprintf(fp,"%d\n",b);
                        fclose(fp);
                      break;  
                    };
                    case 2:
                    {
                        fp=fopen("dati.txt","w+");
                        fscanf(fp,"%d",a);
                        fscanf(fp,"%d",b);
                        if(a==b)
                        {
                         cout<<"Complimenti! Hai vinto!!!!!\n";
                         cout<<"----------------------------------------------------------------\n";
                        }
                        else
                        {
                          cout<<"Mi dispice,non hai vinto\n";
                          cout<<"----------------------------------------------------------------\n";
                        };
                        fprintf(fp,"%d\n",a);
                        fprintf(fp,"%d\n",b);
                        fclose(fp);
                      break;  
                    };
                    case 3:
                    {
                        fp=fopen("dati.txt","w+");
                        fscanf(fp,"%d",a);
                        fscanf(fp,"%d",b);
                        if(a<b)
                        {
                         cout<<"Complimenti! Hai vinto!!!!!\n";
                         cout<<"----------------------------------------------------------------\n";
                        }
                        else
                        {
                          cout<<"Mi dispice,non hai vinto\n";
                          cout<<"----------------------------------------------------------------\n";
                        };
                        fprintf(fp,"%d\n",a);
                        fprintf(fp,"%d\n",b);
                        fclose(fp);
                      break;  
                    };
                    
                };
              }while((m!=1)&&(m!=2)&&(m!=3));
           break;   
        };
        case 2:
        {   
            fp=fopen("dati.txt","w+");
            fscanf(fp,"%d",a);
            fprintf(fp,"%d\n",a);
            fscanf(fp,"%d",b);
            fprintf(fp,"%d\n",b);
            cout<<"Il primo numero è:"<<a<<",il secondo numero è:"<<b<<"\n";
            cout<<"----------------------------------------------------------------\n";
            fclose(fp);
            break;
        };
        case 3:
        {   
            cout<<"Ciaociao!see u next time";
            break;
        };
        
        default:
        {
          cout<<"Rinserisci il numero da 1 a 3\n";
          cout<<"----------------------------------------------------------------\n";
          break;
        };
    };
}while(n!=3);    



    return 0;
}


