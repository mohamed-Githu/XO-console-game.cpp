#include <iostream>
#include <string>
using namespace std ;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
		
	string n[3][3]={"1","2","3","4","5","6","7","8","9"};
	
	for(int x=0; x<3 ; x++)
	{
		for(int y=0 ; y<3 ; y++ )
		{
			cout<< n [x] [y]  <<" ";
		}
		cout<<endl;
	}
	int f =0;
	for(int k=0; k<9 ; k++)
	{
		if(k%2==0)
		{
			cout << "Giocatore 1 : in quale posizione vuoi giocare " ;
		   string g;
		   cin>>g;
	system ("CLS");
	    for(int x=0; x<3 ; x++)
	    {
	    	
	     	for(int y=0 ; y<3 ; y++ )
		   {
	     		if(g==n[x][y])
	     		{
	     		    n[x][y]="x";
				}
				cout<<n[x][y] <<" " ;
				if (n[0][0]=="x" && n[0][1]=="x" && n[0][2]=="x")
                f=1;
                else if (n[1][0]=="x" && n[1][1]=="x" && n[1][2]=="x")
                f=1;
                else if (n[2][0]=="x" && n[2][1]=="x" && n[2][2]=="x")
                f=1;
                else if (n[0][0]=="x" && n[1][0]=="x" && n[2][0]=="x")
              	f=1;
                else if (n[0][1]=="x" && n[1][1]=="x" && n[2][1]=="x")
	            f=1;
	            else if (n[0][2]=="x" && n[1][2]=="x" && n[2][2]=="x")
	            f=1;
                else if (n[0][0]=="x" && n[1][1]=="x" && n[2][2]=="x")
                f=1;
                else if (n[2][0]=="x" && n[1][1]=="x" && n[0][2]=="x")
                f=1;
		   }
		   cout<<endl;
     	}
        }
        else
        {
            cout << "Giocatore 2 : in quale posizione vuoi giocare " ;
			string gg;
		    cin>>gg;
	        for(int x=0; x<3 ; x++)
	        {
	     	for(int y=0 ; y<3 ; y++ )
		   {
	     		if(gg==n[x][y])
	     		{
	     			n[x][y]="o";
	     			
				}
				cout<<n[x][y] << " " ;
				if (n[0][0]=="o" && n[0][1]=="o" && n[0][2]=="o")
                f=2;
                else if (n[1][0]=="o" && n[1][1]=="o" && n[1][2]=="o")
                f=2;
                else if (n[2][0]=="o" && n[2][1]=="o" && n[2][2]=="o")
                f=2;
                else if (n[0][0]=="o" && n[1][0]=="o" && n[2][0]=="o")
                f=2;
                else if (n[0][1]=="o" && n[1][1]=="o" && n[2][1]=="o")
                f=2;
                else if (n[0][2]=="o" && n[1][2]=="o" && n[2][2]=="o")
                f=2;
                else if (n[0][0]=="o" && n[1][1]=="o" && n[2][2]=="o")
                f=2;
                else if (n[2][0]=="o" && n[1][1]=="o" && n[0][2]=="o")
                f=2;
		   }
		   cout<<endl;
     	}
	}
	if(f==1)
	{
		cout << "Giocatore 1 ha vinto" ;
		break ;
	}
	else if ( f==2 )
	{
		cout << "Giocatore 2 ha vinto" ;
		break ;
	}
	}
	if ( f==0 )
	{
		cout << "Nessuno ha vinto" ;
	}
	
	return 0;
}
