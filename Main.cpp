#include <iostream>
#include <cstdlib>

using namespace std;

int Player;
int Cpu;

int main()
{

    Player = 0;
    Cpu = 0;
    cout << "Rock Paper Scissors shoot!", cout << "Which do you choose?" << endl;
    cout << "1) Rock" << endl;
    cout << "2) Paper" << endl;
    cout << "3) Scissors" << endl;
    cin >> Player;

    if (Player == 1)
    {
        cout << "You choose Rock" << endl;
    }
    else if (Player == 2)
    {
        cout << "You choose Papper" << endl;
    }
    else
    {

        cout << " You choose Scissors" << endl;
    }

    Cpu = rand() % 3 + 1;
    if (Cpu == 1)
    {
        cout << "Cpu choose Rock" << endl;
    }
    else if (Cpu == 2)
    {
        cout << "Cpu choose Papper" << endl;
    }
    else
    {

        cout << " Cpu choose Scissors" << endl;
    }

    if (Player == Cpu)
    {
        cout << "It's a tie" << endl;
    }
    else if (Player == 1)
    {
        if (Cpu == 2)
        {
            cout << "You Lose  " << endl;
        }
        if (Cpu == 3)
        {
            cout << "You Win" << endl;
        }
    }
    else if (Player == 2)
    {
        if (Cpu == 1)
        {
            cout << "you win" << endl;
        }
        if (Cpu == 3)
        {
            cout << "You Lose" << endl;
        }
    }
    else if (Player == 3)
    {
        if (Cpu == 1)
        {
            cout << "You Lose" << endl;
        }
        if (Cpu == 2)
        {
            cout << "You win!" << endl;
        }
    }

    return 0;
}
