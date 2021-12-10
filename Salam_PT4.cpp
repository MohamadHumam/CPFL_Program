#include <iostream>
#include <fstream>
#include <string>

using namespace std;

void promptandwait();
void startGame();
void scores(int score);
void deletescore(int score);
int score = 0;

int main()
{

    int ch, wait = 0, temp;
    
    do
    {

        system("cls");
        cout << " << -Math Problem Game- >>" << endl;
        cout << " 3 Questions " << endl;
        cout << " [1] Start " << endl;
        cout << " [2] Show Scores" << endl;
        cout << " [3] Delete Data" << endl;
        cout << " [0] Exit" << endl;
        cout << " Select an option : ";
        cin >> ch;

        switch(ch)
        {
            case 1:
            {
                startGame();
                promptandwait();
                break;
            }
            case 2:
            {
                scores(score);
                promptandwait();
                break;
            }
            case 3:
            {
                deletescore(score);
                promptandwait();
                break;
            }
            case 0:
            {
                cout << " Thank you for Playing!";
                return 0;
                break;
            }
            default:
            {
                cout << "invalid input.";
                promptandwait();
                break;
            }
        }

    }while(wait == 0);
}

void promptandwait()
{

    cin.ignore();
    cout << "\nPress Enter Continue...";
    cin.get();

}

void startGame()
{

    string name;
    cout << " Enter Player name: ";
    cin >> name;

    string list[15]{
  " [A] 30 ", " [B] 25", " [C] 53", " [D] 31",
  " [A] 1.5 ", " [B] 10.5", " [C] 6", " [D] 420 ",
  " [A] 0.5 ", " [B] -0.5", " [C] No Answer", " [D] 1"};
   char ans;
   int score = 0;

   cout << " What is 10+20? " << endl;
   cout << list[0] << endl;
   cout << list[1] << endl;
   cout << list[2] << endl;
   cout << list[3] << endl;
   cout << " Your Answer is?  ";
   cin >> ans;

   if(ans == 'A' || ans == 'a')
   {
       cout << " Correct " << endl;
       score ++;
   }

   else{
       cout << " Incorrect Answer!!! " << endl;
   }

   cout << " What is (10+5)/10? " << endl;
   cout << list[6] << endl;
   cout << list[5] << endl;
   cout << list[7] << endl;
   cout << list[8] << endl;
   cout << " Your Answer is? ";
   cin >> ans;

   if(ans == 'A' || ans == 'a')
   {
       cout << " Correct " << endl;
       score ++;
   }

   else{
       cout << " Wrong Answer!!! " << endl;
   }
   cout << " Last Question " << endl;
   cout << " What is 30/-60? " << endl;
   cout << list[9] << endl;
   cout << list[10] << endl;
   cout << list[11] << endl;
   cout << list[12] << endl;
   cout << " Your Answer is? ";
   cin >> ans;

   if(ans == 'B' || ans == 'b')
   {
       cout << " Correct " << endl;
       score ++;
   }

   else{
       cout << " Wrong Answer!!! " << endl;
   

   }

    ofstream File;
    File.open("Scores.txt", ios:: app);
   
    File <<  name << "  " << "Score: " <<score << endl;

    File.close();

}

void scores(int score)
{
   
    string data;

    ifstream ReadFile("Scores.txt");

    while (getline (ReadFile, data)) 
    {
        cout << data << endl;
    }

    ReadFile.close();

}


void deletescore(int score)
{

    fstream Clear;

    Clear.open("Scores.txt", ios::out | ios::trunc); 
    cout << "Saved Score has been Erased!" << endl;

}