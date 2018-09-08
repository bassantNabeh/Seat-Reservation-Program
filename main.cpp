

#include <iostream>
#include <cstdlib>
using namespace std;
char first_class [20],second_class [40],third_class [50];
int money_of_first=50, money_of_second=15,money_of_third=10,num_reservation_class1, num_of_reservation_of_class2,num_of_reservation_of_class3;
int i,num_ch1,num_ch2,num_ch3,num_oper,MONEY=0,num_cancel1,num_cancel2,num_cancel3,y,x,a,b;
void draw_sets ( int j)
{
    if (j==1)
    {
        for (int i=0; i<20; i++)
        {
            cout<<i + 1<<"."<<first_class[i]<<"\t\t";
            if ((i+1)%5==0)
                cout <<endl;
        }
    }
    else if (j==2)
    {
        for (int i=0; i<40; i++)
        {
            cout<<i+1<<"."<<second_class[i]<<"\t"<<"\t";
            if ((i+1)%5==0)
                cout <<endl;
        }
    }
    else if (j==3)
    {
        for (int i=0; i<50; i++)
        {
            cout<<i+1<<"."<<third_class[i]<<"\t"<<"\t";
            if ((i+1)%5==0)
                cout <<endl;
        }
    }
}
void operation()
{
    cout<<"\t\t choose the operation you want \n\n";
    cout<<"\t\t\t  --------------------\n";
    cout<<"\t\t\t  | 1) reservation   |\n";
    cout<<"\t\t\t  | 2) Cancellation  |\n";
    cout<<"\t\t\t  | 3) reset program |\n";
    cout<<"\t\t\t  | 4) exit program  |\n";
    cout<<"\t\t\t  --------------------\n";
}
void tybe_of_class( )
{
    cout<<" enter number of class \n\n\n";
    cout<<"\t\t\t  -----------------------\n";
    cout<<"\t\t\t  | 1) the first class  |\n";
    cout<<"\t\t\t  | 2) the second class |\n";
    cout<<"\t\t\t  | 3) the third class  |\n";
    cout<<"\t\t\t  -----------------------\n";
}
void error()
{
    cout<<"\tYour choice is wrong. please enter the right number again \n\n";
}
int  compare(int q,int w)
{
    while (q>w)
    {
        error();
        cin>>q;
        return q;
    }
}
int money (int x,int y)
{
    if (y==1)
        return x;
    else
        return x+money(x,y-1);
}
void reversatin_class1(int num_reservation_class1)
{
    int *chairs;
    while (num_reservation_class1>20||num_reservation_class1<1)
    {
        error();
        cin>>num_reservation_class1;
    }
    chairs = new int [num_reservation_class1];
    for(int x=0; x<num_reservation_class1; x++)
    {
        system("cls");
        draw_sets(1);
        num_ch1=num_reservation_class1;
        cout<<"\t\t Enter the ID of your chairs:\n\n";
one:
        cin>>chairs[x];
        while(first_class[chairs[x]-1]=='x')
        {
            system("cls");
            draw_sets(1);
            error();
            goto one;
        }

        while(chairs[x]<1||chairs[x]>20)
        {
            system("cls");
            draw_sets(1);
            error();
            goto one;
        }


        first_class[chairs[x]-1]='x';
        system("cls");
        draw_sets(1);
    }
}
void reversatin_class2(int num_of_reservation_of_class2)
{
    int *chairs;
    while (num_of_reservation_of_class2>40||num_of_reservation_of_class2<1)
    {
        error();
        cin>>num_of_reservation_of_class2;
    }
    chairs = new int [num_of_reservation_of_class2];
    for(int x=0; x<num_of_reservation_of_class2; x++)
    {
        system("cls");
        draw_sets(2);
        cout<<"\t\t Enter the ID of your chairs:\n\n";
        num_ch2=num_of_reservation_of_class2;
two:
        cin>>chairs[x];
        while(second_class[chairs[x]-1]=='x')
        {
            system("cls");
            draw_sets(2);
            error();
            goto two;
        }
        while(chairs[x]<1||chairs[x]>40)
        {
            system("cls");
            draw_sets(2);
            error();
            goto two;
        }
        second_class[chairs[x]-1]='x';
        system("cls");
        draw_sets(2);
    }
}
void reversatin_class3(int num_of_reservation_of_class3)
{
    int *chairs;
    while (num_of_reservation_of_class3>50||num_of_reservation_of_class3<1)
    {
        error();
        cin>>num_of_reservation_of_class3;
    }
    chairs = new int [num_of_reservation_of_class3];
    for(int x=0; x<num_of_reservation_of_class3; x++)
    {
        system("cls");
        draw_sets(3);
        cout<<"\t\t Enter the ID of your chairs:\n\n";
        num_ch3=num_of_reservation_of_class3;
three:
        cin>>chairs[x];
        while(third_class[chairs[x]-1]=='x')
        {
            system("cls");
            draw_sets(3);
            error();
            goto three;
        }
        while(chairs[x]<1||chairs[x]>50)
        {
            system("cls");
            draw_sets(3);
            error();
            goto three;
        }
        third_class[chairs[x]-1]='x';
        system("cls");
        draw_sets(3);
    }
}
void cancellation_class1(int num_ch_can_1)
{
    int *cancel;
    while (num_ch_can_1>20||num_ch_can_1<1)
    {
        error();
        cin>>num_ch_can_1;
    }
    a=compare(num_ch_can_1,num_reservation_class1);
    num_cancel1=a;
    cancel = new int [a];
    for(int i=0; i<a; i++)
    {
        system("cls");
        draw_sets(1);
        cout<<"\t\t Enter the ID of your chairs you want to cancel:\n\n";
        cin>>cancel[i];
        while(true)
        {
            if (first_class[cancel[i]-1]=='x')
            {
                first_class[cancel[i]-1]='o';
                system("cls");
                draw_sets(1);
                break;
            }
            else
            {
                system("cls");
                draw_sets(1);
                error();
                cin>>cancel[i];
            }
        }
    }
}
void cancellation_class2(int num_ch_can_2)
{
    int *cancel;
    while (num_ch_can_2>40||num_ch_can_2<1)
    {
        error();
        cin>>num_ch_can_2;
    }
    b=compare(num_ch_can_2,num_of_reservation_of_class2);
    num_cancel2=b;
    cancel = new int [b];
    for(int i=0; i<b; i++)
    {
        system("cls");
        draw_sets(2);
        cout<<"\t\t Enter the ID of your chairs you want to cancel:\n\n";
        cin>>cancel[i];
        while(true)
        {
            if (second_class[cancel[i]-1]=='x')
            {
                second_class[cancel[i]-1]='o';
                system("cls");
                draw_sets(2);
                break;
            }
            else
            {
                system("cls");
                draw_sets(2);
                error();
                cin>>cancel[i];
            }
        }
    }
}
void cancellation_class3(int num_ch_can_3)
{
    int *cancel;
    while (num_ch_can_3>50||num_ch_can_3<1)
    {
        error();
        cin>>num_ch_can_3;
    }
    x=compare(num_ch_can_3,num_of_reservation_of_class3);
    num_cancel3=x;
    cancel = new int [x];
    for(int i=0; i<x; i++)
    {
        system("cls");
        draw_sets(3);
        cout<<"\t\t Enter the ID of your chairs you want to cancel:\n\n";
        cin>>cancel[i];
        while(true)
        {
            if (third_class[cancel[i]-1]=='x')
            {
                third_class[cancel[i]-1]='o';
                system("cls");
                draw_sets(3);
                break;
            }
            else
            {
                system("cls");
                draw_sets(3);
                error();
                cin>>cancel[i];
            }
        }
    }
}
int reset ()
{
    for (int i=0; i<20; i++)
    {
        first_class[i]='o';
    }
    for (int i=0; i<40; i++)
    {
        second_class[i]='o';
    }
    for (int i=0; i<50; i++)
    {
        third_class[i]='o';
    }
    int x=0;
    return x;
}
void pay (int x)
{
    cout<<"\n\n\t\tyou have to pay "<<x<<" $ \n\n\n";
}
int main()
{
    for (int i=0; i<20; i++)
    {
        first_class[i]='o';
    }
    for (int i=0; i<40; i++)
    {
        second_class[i]='o';
    }
    for (int i=0; i<50; i++)
    {
        third_class[i]='o';
    }
rechoose:
    operation();
    cin>>num_oper;
    while(num_oper<1||num_oper>4)
    {
        error();
        cin>>num_oper;
    }
    switch (num_oper)
    {
    case 1:
        system("cls");
        tybe_of_class();
        cin>>i;
        while(i<1||i>3)
        {
            error();
            cin>>i;
        }
        system("cls");
        draw_sets(i);
        cout<<"\t\t Enter number of chairs you want to reserve:\n\n";
        switch (i)
        {
        case 1:
            cin>> num_ch1;
            reversatin_class1(num_ch1);
            MONEY+=money(money_of_first,num_ch1);
            pay(MONEY);
            break;
        case 2:
            cin>> num_ch2;
            reversatin_class2(num_ch2);
            MONEY+=money(money_of_second,num_ch2);
            pay(MONEY);
            break;
        case 3:
            cin>> num_ch3;
            reversatin_class3(num_ch3);
            MONEY+=money(money_of_third,num_ch3);
            pay(MONEY);
            break;
        }
        goto rechoose;
        break;
    case 2:
        system("cls");
        tybe_of_class();
        cin>>y;
        while(y<1||y>3)
        {
            system("cls");
            error();
            cin>>i;
        }
        system("cls");
        draw_sets(y);
        switch (y)
        {
        case 1:
            cout<<"\t\t Enter number of chairs you want to cancel:\n\n";
            cin>>num_cancel1;
            compare(num_cancel1,num_ch1);
            system("cls");
            cancellation_class1(num_cancel1);
            MONEY-=money(money_of_first,num_cancel1);
            pay(MONEY);
            break;
        case 2:
            cout<<"\t\t Enter number of chairs you want to cancel:\n\n";
            cin>>num_cancel2;
            compare(num_cancel1,num_ch2);
            system("cls");
            cancellation_class2(num_cancel2);
            MONEY-=money(money_of_second,num_cancel2);
            pay(MONEY);
            break;
        case 3:
            cout<<"\t\t Enter number of chairs you want to cancel:\n\n";
            cin>>num_cancel3;
            compare(num_cancel1,num_ch3);
            system("cls");
            cancellation_class3(num_cancel3);
            MONEY-=money(money_of_third,num_cancel3);
            pay(MONEY);
            break;
        }
        goto rechoose;
        break;
    case 3:
        reset();
        MONEY=0;
        goto rechoose;
        break;
    case 4:
        system("cls");
        cout<<"\n\n\t\tthanks for using our program.....^_^\n";
        return 0;
    }
}
