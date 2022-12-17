#include<iostream>
#include<stdlib.h>
#include<ctype.h>
#include<conio.h>
using namespace std;

char a='1' , b='2' , c='3' , d='4' , e='5' , f='6' , g='7' , h='8' , i='9'; //declaring all the positional variables

int assign , checking[9] , z , count=1;

//creating a function to take input and check the winner condtion
class tictactoe{
    public:
   
   void input(int o){
        //getting input by player
    cout<<" "<<endl;
    cout<<"PLAYER "<<o<<" TURN: ";
    cin>>assign;
    cout<<" "<<endl;
        //checking input value is valid or not 
    if (assign>9||assign<0||isalpha(assign)==true){
                cout<<"ENTER VALID NUMBER: "<<endl;
                //if input is invalid then calling the input function again
                input(o);
            }
 
    }

void check_pos(int o){
        for(z;z<count;z++){
                
                //checking if a position entered by player is already taken or not
                if(checking[z]==assign){
                    
                    cout<<"POSITION ALREADY TAKEN, ENTER AGAIN: "<<endl;
                    
                    input(o);
                }
                
                else{

                    checking[z]=assign;//putting the input value into the array
                    count++;
                    break;
                }
                
    }    
    }

    void check_winner(){
    //checking winner condition for player 1
    if((a=='0' && b=='0' && c=='0')||(d=='0' && e=='0' && f=='0')||(g=='0' && h=='0' && i=='0')||(a=='0' && d=='0' && g=='0')||(b=='0' && e=='0' && h=='0')||(c=='0' && f=='0' && i=='0')||(a=='0' && e=='0' && i=='0')||(c=='0' && e=='0' && g=='0')){
                cout<<" "<<endl;
                cout<<"PLAYER 1 WINS"<<endl;  
                cout<<" "<<endl;
                getch();
                abort();
}

    //checking winner condition for player 2
    if((a=='X' && b=='X' && c=='X'||d=='X' && e=='X' && f=='X'||g=='X' && h=='X' && i=='X'||a=='X' && d=='X' && g=='X'||b=='X' && e=='X' && h=='X'||c=='X' && f=='X' && i=='X'||a=='X' && e=='X' && i=='X'||c=='X' && e=='X' && g=='X')){
                cout<<" "<<endl;
                cout<<"PLAYER 2 WINS"<<endl;
                cout<<" "<<endl;
                getch();
                abort();
            }
    
    //checking draw condition
    if(count==10){
        cout<<" "<<endl;
        cout<<"IT IS A TIE, NO ONE WINS"<<endl;
        cout<<" "<<endl;
        getch();
        abort();
    }

    }

    

//creating a function to define the tt.structure of the game
void structure(){
        cout<<a<<" |"<<b<<" |"<<c<<endl;
        cout<<"__|__|__"<<endl;
        cout<<d<<" |"<<e<<" |"<<f<<endl;
        cout<<"__|__|__"<<endl;
        cout<<g<<" |"<<h<<" |"<<i<<endl;
        };

void assign_pos2(int assign){
    //using switch statement to replace the values of positional variable by X in the structure for player 2
    switch(assign){
            case 1:
            a='X';
            structure();
            break;
           
            case 2:
            b='X';
            structure();
            break;
            
            case 3:
            c='X';
            structure();
            break;
            
            case 4:
            d='X';
            structure();
            break;
            
            case 5:
            e='X';
            structure();
            break;
            
            case 6:
            f='X';
            structure();
            break;
            
            case 7:
            g='X';
            structure();
            break;
            
            case 8:
            h='X';
           structure(); 
            break;
            
            case 9:
            i='X';
            structure();
            break;
            }
            
        }

void assign_pos1(int assign){
    //using switch statement to replace the values of positional variable by 0 in the tt.structure for player 1
            switch(assign){
            case 1:
            a='0';
            structure();
            break;
           
            case 2:
            b='0';
            structure();
            break;
            
            case 3:
            c='0';
            structure();
            break;
            
            case 4:
            d='0';
            structure();
            break;
            
            case 5:
            e='0';
            structure();
            break;
            
            case 6:
            f='0';
            structure();
            break;
           
            case 7:
            g='0';
            structure();
            break;
            
            case 8:
            h='0';
            structure();
            break;
           
            case 9:
            i='0';
            structure();
            break;
            
        }

}

};


int main(){

cout<<"            "<<"--------------------"<<endl;
cout<<"            "<<"| TIC TAC TOE GAME |"<<endl;
cout<<"            "<<"--------------------"<<endl;
cout<<"                                             "<<endl;
cout<<" "<<"* ENTER THE NUMBER WHERE YOU WANT TO DISPLAY X OR 0"<<endl;
cout<<"                                             "<<endl;
cout<<"                                             "<<endl;
cout<<"                PLAYER 1= 0               PLAYER 2= X"<<endl;
cout<<"                                             "<<endl;


tictactoe tt;

tt.structure();


while(count<=10){
        if(count%2==0){
            tt.check_winner();
            tt.input(2);
            tt.check_pos(2);           
            tt.assign_pos2(assign);
        }

        else{
            tt.check_winner();
            tt.input(1);
            tt.check_pos(1);
            tt.assign_pos1(assign);

            }

};



return 0;}
