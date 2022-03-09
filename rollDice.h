
/********************************************************************************
Function:               rollDice()
Purpose:                Generate a random number in between 1-6
Function In Parameters: Void
Return Value:           Returns the Number variable which holds the generated number
********************************************************************************/

int rollDice(){
    int number;
    int min = 1,max = 6;

    srand(time(NULL));
    number = (rand() % (max-min+1)) + min;
    return number;
}