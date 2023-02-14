/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>

using namespace std;

int main()
{    
    FILE* fp;                 //Scrittura
    fp=fopen("file","w+");
    char str[255]="abcdefghijkl";
    fputs(str,fp);
    fclose(fp);
   
    int n=0;                  //lettura 
    char str2[2];
    fp=fopen("file","r+");
    while(!feof(fp))
    {
    fgets(str2,6,fp);
    n=n+1;
    cout<<n<<":"<<str2<<"\n";
    };
   
    fclose(fp);
    
    
     

    return 0;
}
