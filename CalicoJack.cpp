/*
Simple program to calculate runs in
CalicoJack minigame in Stardew Valley

Won Choi - 2016
*/
#include <iostream>

using namespace std;

int main()
{
    int hand, dealer;
    char choice = 'n';

    do {
        //CONDITIONALS
        cout << "Enter your hand total: ";
        cin >> hand;

        while(hand < 0 && hand > 30){
            cout << "Try a valid total: ";
            cin >> hand;
        }

        cout << "Enter dealer's card: ";
        cin >> dealer;

        while(hand < 0 && hand > 9){
            cout << "Enter the real card: ";
            cin >> dealer;
        }

        //START OF MAIN LOOP

        if(hand < 12){
            cout << "Hit. 100% safe." << endl;
        }
        else if(hand == 13){
            cout << "Hit. 88.9% safe." << endl;
        }
        else if(hand == 14){
            cout << "Hit. 77.8% safe." << endl;
        }
        else if(hand == 15){
            cout << "Hit. 66.7% safe." << endl;
        }
        else if(hand == 16){
            if(dealer == 6){
                cout << "Stay. Not safe." << endl;
            }
            else
                cout << "Hit. 55.6% safe." << endl;
        }
        else if(hand == 17){
            if(dealer == 8 || dealer == 9){
                cout << "Hit. Gotta risk it." << endl;
            }
            else
                cout << "Stay. Not safe." << endl;
        }
        else if(hand >= 18){
            cout << "Stay. Not safe." << endl;
        }
        else
            cout << "CalicoJack!" << endl;

        cout << "Keep going? y/n: ";
        cin >> choice;

    } while(choice == 'y' || choice == 'Y');

    return 0;
}
