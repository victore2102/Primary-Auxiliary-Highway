#include <iostream>
using namespace std;

int main ()
{
    // Variables
    int num, num2;
    string type, direction;



    // Highway number input
    cout << "Please enter the number of a highway (range 1-999): ";
    cin >> num;



    // Conditional statement if number does not fall within range, prompts to input once more
    if (num < 1 || num > 999)
    {
        cout << "Incorrect number. Please try again: ";
        cin >> num;
    }



    // Conditional statement if number inputed does not fit range once again, program terminates
    if (num < 1 || num > 999)
    {
        cout << "You are not paying attention. Please read the manual." << endl;
        cout << "Program exiting";
        return -1;
    }



    // Nested conditional statements set to see if highway is primary/auxilary and which direction they are going in. Also for auxilary, what highway they serve
    if (num <= 99)
    {
        type = "primary";
            if (num % 2 == 0)
            {
                direction = "east/west";
            }
            else
            {
                direction = "north/south";
            }
       cout << "I-" << num << " " << "is" << " " << type << "," << " " << "going" << " " << direction << ".";
    }
    else
    {
        type = "auxilary";
            if (num % 2 == 0)
            {
                direction = "east/west";
                num2 = num % 100;
            }
            else
            {
                direction = "north/south";
                num2 = num % 100;
            }
        cout << "I-" << num << " " << "is" << " " << type << "," << " " << "serving I-" << num2 << "," << " " << "going" << " " << direction << ".";
    }






    // Graceful Exit
    return 0;
}
