#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

void welcome();   // Function declarations
char get_section();
void sport();
void general();
void Go_continue();
void science();
void clear_Screen();
int main() {
    srand(time(0));  // Seed the random number generator once
    clear_Screen();// Clear screen before showing the welcome message

    char section = get_section();  // Call get_section() to get the user choice

    if (section == 'a') {
        clear_Screen();  // Clear screen before starting the sport question

        sport();  // Call sport() if the user chose 'a'
    }
    else if (section == 'b')
    {
        clear_Screen();  // Clear screen before starting the general question 

        general(); // Call general() if the user chose 'b'

    }
    else if (section == 'c')
    {
        clear_Screen();  // Clear screen before starting the science question

        science(); // Call science() if the user chose 'c'

    }


    Go_continue();  // Call Go_continue() to check if the user wants to continue

    return 0;
}
void clear_Screen()
{
    // Use 'cls' command for Windows
    system("cls");
}

void welcome() {
    cout << "                         *** Welcome to our game ***\n";
    cout << "                                * Brain Battle *\n";
    cout << "\nOk. The rules are easy: \n";
    cout << "      -First, for every correct answer you will get 100 points. \n";
    cout << "      -If your answer is incorrect, you get nothing. \n";
    cout << "                             **** Ok, let's start ****\n\n";

    cout << "- What type of questions do you want?\n";
    cout << "a. Sports. \nb. General questions. \nc.science ..........\n";
}

char get_section() {
    char section;
    welcome();  // Display the welcome message
    cin >> section;

    while (section != 'a' && section != 'b' && section != 'c') {
        cout << "Sorry, you must enter a valid option.\n";
        cin >> section;
    }

    return section;  // Return the user's choice
}

// Al Shaimaa Ashraf , sport
void sport() {
    int score = 0;  // Initialize score
    char choose;

    cout << "                         **** Welcome to sport questions ****\n";
    // The main game loop
    while (true) {
        int ran = rand() % 2 + 1;  // Randomly choose between 1 and 2

        // questions when ran = 1;
        if (ran == 1) {

            cout << "1- Which of the following footballers has the world record for the highest goal scorer for a single club?\n";
            cout << "a. Pele (Santos FC)\nb. Fernando Payrotes (Sporting CP)\nc. Gerd Muller (Bayern Munich)\nd. Lionel Messi (Barcelona FC)\n";
            cin >> choose;
            while (choose != 'a' && choose != 'b' && choose != 'c' && choose != 'd')
            {
                cout << "Invalid ,Please enter one of the available letters";
                cin >> choose;
            }
            clear_Screen();
            if (choose == 'd') {
                cout << "Correct!\n";
                score += 100;
                cout << "Your score now is " << score << endl;


            }

            else {
                cout << "\aSorry, your answer is incorrect.";
                cout << "\nThe correct answer is :  d. Lionel Messi (Barcelona FC)";
                cout << "\nYour final score is " << score << endl;
                break;
            }
            cout << endl << endl << endl;
            cout << "2- In what year was the International Football Federation (FIFA) founded?\n";
            cout << "a. 1904 \nb. 1923\nc. 1948 \nd. 1960\n";
            cin >> choose;
            while (choose != 'a' && choose != 'b' && choose != 'c' && choose != 'd')
            {
                cout << "Invalid ,Please enter one of the available letters";
                cin >> choose;
            }
            clear_Screen();
            if (choose == 'a') {
                cout << "Correct!\n";
                score += 100;
                cout << "Your score now is " << score << endl;

            }
            else {
                cout << "\aSorry, your answer is incorrect.";
                cout << "\nThe correct answer is :  a. 1904";
                cout << "\nYour final score is " << score << endl;
                break;
            }
            cout << endl << endl << endl;
            cout << "3- Who was the youngest player to score 10,000 points in the NBA?\n";
            cout << "a. LeBron James\nb. Michael Jordan\n";
            cout << "c. Magic Johnson\nd. Nikola Joki?\n";
            cin >> choose;
            while (choose != 'a' && choose != 'b' && choose != 'c' && choose != 'd')
            {
                cout << "Invalid ,Please enter one of the available letters";
                cin >> choose;
            }
            clear_Screen();
            if (choose == 'a') {
                cout << "Correct!\n";
                score += 100;
                cout << "Your score now is " << score << endl;

            }
            else {
                cout << "\aSorry, your answer is incorrect.";
                cout << "\nThe correct answer is :  a. LeBron James";
                cout << "\nYour final score is " << score << endl;
                break;
            }
            cout << endl << endl << endl;
            cout << "4- Which football player was named the best player of the 2018 World Cup?\n";
            cout << "a. Kylian Mbappé\nb. Antoine Griezmann\n";
            cout << "c. Luka Modric\nd. Ivan Rakitic\n";
            cin >> choose;
            while (choose != 'a' && choose != 'b' && choose != 'c' && choose != 'd')
            {
                cout << "Invalid ,Please enter one of the available letters";
                cin >> choose;
            }
            clear_Screen();
            if (choose == 'c') {
                cout << "Correct!\n";
                score += 100;
                cout << "Your score now is " << score << endl;

            }
            else {
                cout << "\aSorry, your answer is incorrect.";
                cout << "\nThe correct answer is :  c. Luka Modric";
                cout << "\nYour final score is " << score << endl;
                break;
            }
            cout << endl << endl << endl;
            cout << "5- Who won the 10th Italian Open title in 2021?\n";
            cout << "a. Novack Djokovic \nb. Rafael Nadal\n";
            cout << "c. Dominic Thiem \nd. Stefanos Tsitsipas\n";
            cin >> choose;
            while (choose != 'a' && choose != 'b' && choose != 'c' && choose != 'd')
            {
                cout << "Invalid ,Please enter one of the available letters";
                cin >> choose;
            }
            clear_Screen();
            if (choose == 'b') {
                cout << "Correct!\n";
                score += 100;
                cout << "Your score now is " << score << endl;

            }
            else {
                cout << "\aSorry, your answer is incorrect.";
                cout << "\nThe correct answer is :  b. Rafael Nadal";
                cout << "\nYour final score is " << score << endl;
                break;
            }
            cout << endl << endl << endl;
            cout << "6- What year is officially recognized as the beginning of the modern Olympic Games?\n";
            cout << "a. 1886 \nb. 1906\n";
            cout << "c. 1896 \nd. 1916\n";
            cin >> choose;
            while (choose != 'a' && choose != 'b' && choose != 'c' && choose != 'd')
            {
                cout << "Invalid ,Please enter one of the available letters";
                cin >> choose;
            }
            clear_Screen();
            if (choose == 'c') {
                cout << "Correct!\n";
                score += 100;
                cout << "Your score now is " << score << endl;

            }
            else {
                cout << "\aSorry, your answer is incorrect.";
                cout << "\nThe correct answer is :  c. 1896";
                cout << "\nYour final score is " << score << endl;
                break;
            }
            cout << endl << endl << endl;
            cout << "7- Who is the record holder for the number of goals scored at one World Football Championship?\n";
            cout << "a. Pele \nb. Miroslav Klose\n";
            cout << "c. Gerd Müller \nd. Just Fontaine\n";
            cin >> choose;
            while (choose != 'a' && choose != 'b' && choose != 'c' && choose != 'd')
            {
                cout << "Invalid ,Please enter one of the available letters";
                cin >> choose;
            }
            clear_Screen();
            if (choose == 'd') {
                cout << "Correct!\n";
                score += 100;
                cout << "Your score now is " << score << endl;

            }
            else {
                cout << "\aSorry, your answer is incorrect.";
                cout << "\nThe correct answer is :  d. Just Fontaine";
                cout << "\nYour final score is " << score << endl;
                break;
            }
            cout << endl << endl << endl;
            cout << "8- How many players are on a baseball team?\n";
            cout << "a. 9 players \nb. 7 players\n";
            cout << "c. 5 players \nd. 3 players\n";
            cin >> choose;
            while (choose != 'a' && choose != 'b' && choose != 'c' && choose != 'd')
            {
                cout << "Invalid ,Please enter one of the available letters";
                cin >> choose;
            }
            clear_Screen();
            if (choose == 'a') {
                cout << "Correct!\n";
                score += 100;


                cout << "Your score now is " << score << endl;
            }
            else {
                cout << "\aSorry, your answer is incorrect.";
                cout << "\nThe correct answer is :  a. 9 players";
                cout << "\nYour final score is " << score << endl;
                break;
            }
            cout << endl << endl << endl;
            cout << "9- Which team won the last World Hockey Championship?\n";
            cout << "a. Russia \nb. United States\n";
            cout << "c. Canada \nd. Finland\n";
            cin >> choose;
            while (choose != 'a' && choose != 'b' && choose != 'c' && choose != 'd')
            {
                cout << "Invalid ,Please enter one of the available letters";
                cin >> choose;
            }
            clear_Screen();
            if (choose == 'c') {
                cout << "Correct!\n";
                score += 100;
                cout << "Your score now is " << score << endl;

            }
            else {
                cout << "\aSorry, your answer is incorrect.";
                cout << "\nThe correct answer is :  c. Canada";
                cout << "\nYour final score is " << score << endl;

                break;
            }
            cout << endl << endl << endl;
            cout << "10- In what country is \" the Masters of Golf\" tournament held?\n";
            cout << "a. United Kingdom \nb. Australia\n";
            cout << "c. United States \nd. Germany\n";
            cin >> choose;
            while (choose != 'a' && choose != 'b' && choose != 'c' && choose != 'd')
            {
                cout << "Invalid ,Please enter one of the available letters";
                cin >> choose;
            }
            clear_Screen();
            if (choose == 'c') {
                cout << "Correct!\n";
                score += 100;
                cout << "Your score now is " << score << endl;
                cout << "Congratulations!!!!!!!!!!!!!!!!\n";
                break;
            }
            else {
                cout << "\aSorry, your answer is incorrect.";
                cout << "\nThe correct answer is :  c. United States\n";
                cout << "Your final score is " << score << endl;
                break;
            } // the end of ran = 1

            // Questions when ran = 2
            cout << endl << endl << endl;
        }
        else if (ran == 2) {

            cout << "1- In what country was boxer Muhammed Ali born?\n";
            cout << "a. United Kingdom \nb. Canada\n";
            cout << "c. United States \nd. Jamaica\n";
            cin >> choose;
            while (choose != 'a' && choose != 'b' && choose != 'c' && choose != 'd')
            {
                cout << "Invalid ,Please enter one of the available letters";
                cin >> choose;
            }
            clear_Screen();
            if (choose == 'c') {
                cout << "Correct!\n";
                score += 100;
                cout << "Your score now is " << score << endl;

            }
            else {
                cout << "\aSorry, your answer is incorrect.\n";
                cout << "The crrect answer is :  c. United States\n";
                cout << "Your final score is " << score << endl;
                break;
            }
            cout << endl << endl << endl;
            cout << "2- Who was the coach of the German national team at the 2014 World Cup?\n";
            cout << "a. Joaquin Lev \nb. Jose Mourinho\n";
            cout << "c. Luis Felipe Scolari \nd. Josep Guardiola\n";
            cin >> choose;
            while (choose != 'a' && choose != 'b' && choose != 'c' && choose != 'd')
            {
                cout << "Invalid ,Please enter one of the available letters";
                cin >> choose;
            }
            clear_Screen();

            if (choose == 'a') {
                cout << "Correct!\n";
                score += 100;
                cout << "Your score now is " << score << endl;

            }
            else {
                cout << "\aSorry, your answer is incorrect.";
                cout << "\nThe correct answer is :  a. Joaquin Lev";
                cout << "\nYour final score is " << score << endl;
                break;
            }
            cout << endl << endl << endl;
            cout << "3- What is the maximum number of players on the field at the same time in a volleyball team?\n";
            cout << "a. 6 \nb. 4\n";
            cout << "c. 7 \nd. 5\n";
            cin >> choose;
            while (choose != 'a' && choose != 'b' && choose != 'c' && choose != 'd')
            {
                cout << "Invalid ,Please enter one of the available letters";
                cin >> choose;
            }
            clear_Screen();
            if (choose == 'a') {
                cout << "Correct!\n";
                score += 100;
                cout << "Your score now is " << score << endl;

            }
            else {
                cout << "\aSorry, your answer is incorrect.";
                cout << "\nThe correct answer is :  a. 6";
                cout << "\nYour final score is " << score << endl;
                break;
            }
            cout << endl << endl << endl;
            cout << "4- Which country held the first official football match?\n";
            cout << "a. England \nb. Brazil\n";
            cout << "c. Germany \nd. Uruguay\n";
            cin >> choose;
            while (choose != 'a' && choose != 'b' && choose != 'c' && choose != 'd')
            {
                cout << "Invalid ,Please enter one of the available letters";
                cin >> choose;
            }
            clear_Screen();
            if (choose == 'd') {
                cout << "Correct!\n";
                score += 100;
                cout << "Your score now is " << score << endl;

            }
            else {
                cout << "\aSorry, your answer is incorrect.";
                cout << "\nThe correct answer is :  d. Uruguay";
                cout << "\nYour final score is " << score << endl;
                break;
            }
            cout << endl << endl << endl;
            cout << "5- What material is used for weights in most bicycle races?\n";
            cout << "a. Glass \nb. Lead\n";
            cout << "c. Aluminum \nd. Concrete\n";
            cin >> choose;
            while (choose != 'a' && choose != 'b' && choose != 'c' && choose != 'd')
            {
                cout << "Invalid ,Please enter one of the available letters";
                cin >> choose;
            }
            clear_Screen();
            if (choose == 'b')
            {
                cout << "Correct!\n";
                score += 100;
                cout << "Your score now is " << score << endl;
            }
            else {
                cout << "\aSorry, your answer is incorrect.";
                cout << "\nThe correct answer is :  b. Lead";
                cout << "\nYour final score is " << score << endl;
                break;
            }
            cout << endl << endl << endl;
            cout << "6- Which football player was recognized as the best player in the world according to FIFA in 2020?\n";
            cout << "a. Lionel Messi \nb. Cristiano Ronaldo\n";
            cout << "c. Neymar \nd. Kylian Mbappé\n";
            cin >> choose;
            while (choose != 'a' && choose != 'b' && choose != 'c' && choose != 'd')
            {
                cout << "Invalid ,Please enter one of the available letters";
                cin >> choose;
            }
            clear_Screen();
            if (choose == 'a') {
                cout << "Correct!\n";
                score += 100;
                cout << "Your score now is " << score << endl;

            }
            else {

                cout << "\aSorry, your answer is incorrect.";
                cout << "\nThe correct answer is :  a. Lionel Messi";
                cout << "\nYour final score is " << score << endl;
                break;
            }
            cout << endl << endl << endl;
            cout << "7- What is the only sport to be played on the moon?\n";
            cout << "a. basketball \nb. American football\n";
            cout << "c. golf \nd. football\n";
            cin >> choose;
            while (choose != 'a' && choose != 'b' && choose != 'c' && choose != 'd')
            {
                cout << "Invalid ,Please enter one of the available letters";
                cin >> choose;
            }
            clear_Screen();
            if (choose == 'c') {
                cout << "Correct!\n";
                score += 100;
                cout << "Your score now is " << score << endl;

            }
            else {
                cout << "\aSorry, your answer is incorrect.";
                cout << "\nThe correct answer is :  c. golf";
                cout << "\nYour final score is " << score << endl;
                break;
            }
            cout << endl << endl << endl;
            cout << "8- Which football club became famous as \“Right Side\” in the 1970s?\n";
            cout << "a. Liverpool \nb. Everton\n";
            cout << "c. Manchester United \nd. Manchester City\n";
            cin >> choose;
            while (choose != 'a' && choose != 'b' && choose != 'c' && choose != 'd')
            {
                cout << "Invalid ,Please enter one of the available letters";
                cin >> choose;
            }
            clear_Screen();
            if (choose == 'a') {
                cout << "Correct!\n";
                score += 100;
                cout << "Your score now is " << score << endl;

            }
            else {
                cout << "\aSorry, your answer is incorrect.";
                cout << "\nThe correct answer is :  a. Liverpool";
                cout << "\nYour final score is " << score << endl;
                break;
            }
            cout << endl << endl << endl;
            cout << "9- Where will the 2028 Summer Olympics be held?\n";
            cout << "a. Tokyo \nb. Los Angeles\n";
            cout << "c. Moscow \nd. Beijing\n";
            cin >> choose;
            while (choose != 'a' && choose != 'b' && choose != 'c' && choose != 'd')
            {
                cout << "Invalid ,Please enter one of the available letters";
                cin >> choose;
            }
            clear_Screen();
            if (choose == 'b') {
                cout << "Correct!\n";
                score += 100;
                cout << "Your score now is " << score << endl;

            }
            else {
                cout << "\aSorry, your answer is incorrect.";
                cout << "\nThe correct answer is :  b. Los Angeles";
                cout << "\nYour final score is " << score << endl;
                break;
            }
            cout << endl << endl << endl;
            cout << "10- In what year were women allowed to compete in the modern Olympic games and in what sports?\n";
            cout << "a. 1800 \nb. 1950\n";
            cout << "c. 1945 \nd. 1900\n";
            cin >> choose;
            while (choose != 'a' && choose != 'b' && choose != 'c' && choose != 'd')
            {
                cout << "Invalid ,Please enter one of the available letters";
                cin >> choose;
            }
            clear_Screen();
            if (choose == 'd') {
                cout << "Correct!\n";
                score += 100;
                cout << "Your score now is " << score << endl;
                cout << "Congratulations!!!!!!!!!!!!!!\n";
                break;
            }
            else {
                cout << "\aSorry, your answer is incorrect.\n";
                cout << "The correct answer is :  d. 1900\n";
                cout << "Your final score is " << score << endl;
                break; // end of the while loop ======> the loop of questions about sports
            }
            // The end of ran = 2
            cout << endl << endl << endl;
        }
    }
}
// Amany Mahmoud , general questions .
void general() {
    int score = 0;
    char choose;
    // Start of the quiz game
    cout << "                         **** Welcome to general questions ****\n";

    // Main game loop
    while (true) {
        int ran = rand() % 2 + 1;

        if (ran == 1) {
            // Questions for ran == 1

            cout << "1- Which planet is known as the Red Planet?\n";
            cout << "a. Venus \nb. Mars \nc. Jupiter\nd. Saturn\n";

            cin >> choose;
            while (choose != 'a' && choose != 'b' && choose != 'c' && choose != 'd')
            {
                cout << "Invalid ,Please enter one of the available letters";
                cin >> choose;
            }
            clear_Screen();
            if (choose == 'b')
            {
                cout << "Correct!\n";
                score += 100;
                cout << "Your score now is " << score << endl;

            }
            else
            {
                cout << "\aSorry, your answer is incorrect.\n";
                cout << "The correct answer is :  b. Mars" << endl;
                cout << "Your final score is " << score << endl;
                break;
            }
            cout << endl << endl << endl;
            cout << "2- What is the capital city of France?\n";
            cout << "a. Paris \nb. London \nc. Rome \nd. Berlin\n";

            cin >> choose;
            while (choose != 'a' && choose != 'b' && choose != 'c' && choose != 'd')
            {
                cout << "Invalid ,Please enter one of the available letters";
                cin >> choose;
            }
            clear_Screen();
            if (choose == 'a') {
                cout << "Correct!\n";
                score += 100;
                cout << "Your score now is " << score << endl;

            }
            else {
                cout << "\aSorry, your answer is incorrect.\n";
                cout << "The correct answer is :  a. Paris" << endl;
                cout << "Your final score is " << score << endl;
                break;
            }
            cout << endl << endl << endl;
            cout << "3- In which year did the Titanic sink?\n";
            cout << "a. 1912 \nb. 1911 \nc. 1913 \nd. 1914\n";
            cin >> choose;
            while (choose != 'a' && choose != 'b' && choose != 'c' && choose != 'd')
            {
                cout << "Invalid ,Please enter one of the available letters";
                cin >> choose;
            }
            if (choose == 'a') {
                cout << "Correct!\n";
                score += 100;
                cout << "Your score now is " << score << endl;
                clear_Screen();
            }
            else {
                cout << "\aSorry, your answer is incorrect.\n";
                cout << "The correct answer is : a. 1912" << endl;
                cout << "Your final score is " << score << endl;
                break;
            }
            cout << endl << endl << endl;
            cout << "4- Who wrote the play Romeo and Juliet?\n";
            cout << "a. George Bernard Shaw \nb. William Shakespeare  \nc. Charles Dickens \nd. Jane Austen \n";
            cin >> choose;
            while (choose != 'a' && choose != 'b' && choose != 'c' && choose != 'd')
            {
                cout << "Invalid ,Please enter one of the available letters";
                cin >> choose;
            }
            clear_Screen();
            if (choose == 'b') {
                cout << "Correct!\n";
                score += 100;
                cout << "Your score now is " << score << endl;

            }
            else {
                cout << "\aSorry, your answer is incorrect.\n";
                cout << "The correct answer is : b. William Shakespeare " << endl;
                cout << "Your final score is " << score << endl;
                break;
            }
            cout << endl << endl << endl;
            cout << "5- What is the chemical symbol for gold? \n";
            cout << "a. Hg \nb. Ag \nc. Fe \nd. Au \n";
            cin >> choose;
            while (choose != 'a' && choose != 'b' && choose != 'c' && choose != 'd')
            {
                cout << "Invalid ,Please enter one of the available letters";
                cin >> choose;
            }
            clear_Screen();
            if (choose == 'd') {
                cout << "Correct!\n";
                score += 100;
                cout << "Your score now is " << score << endl;

            }
            else {
                cout << "\aSorry, your answer is incorrect.\n";
                cout << "The correct answer is :  d. Au " << endl;
                cout << "Your final score is " << score << endl;
                break;
            }
            cout << endl << endl << endl;
            cout << "6- Which element has the atomic number 1?\n";
            cout << "a. Helium \nb. Hydrogen \nc. Lithium \nd. Beryllium \n ";
            cin >> choose;
            while (choose != 'a' && choose != 'b' && choose != 'c' && choose != 'd')
            {
                cout << "Invalid ,Please enter one of the available letters";
                cin >> choose;
            }
            clear_Screen();
            if (choose == 'b') {
                cout << "Correct!\n";
                score += 100;
                cout << "Your score now is " << score << endl;

            }
            else {
                cout << "\aSorry, your answer is incorrect.\n";
                cout << "The correct answer is :  b. Hydrogen" << endl;
                cout << "Your final score is " << score << endl;
                break;
            }
            cout << endl << endl << endl;
            cout << "7- Which country is known as the Land of the Rising Sun?\n";
            cout << "a. China \nb. Japan \nc. South Korea \nd. Thailand \n ";
            cin >> choose;
            while (choose != 'a' && choose != 'b' && choose != 'c' && choose != 'd')
            {
                cout << "Invalid ,Please enter one of the available letters";
                cin >> choose;
            }
            clear_Screen();
            if (choose == 'b') {
                cout << "Correct!\n";
                score += 100;
                cout << "Your score now is " << score << endl;

            }
            else {
                cout << "\aSorry, your answer is incorrect.\n";
                cout << "The correct answer is :  b. Japan" << endl;
                cout << "Your final score is " << score << endl;
                break;
            }
            cout << endl << endl << endl;
            cout << "8- What is the largest mammal in the world?\n";
            cout << "a. African Elephant \nb. Blue Whale \nc. Giraffe \nd. Hippopotamus\n";
            cin >> choose;
            while (choose != 'a' && choose != 'b' && choose != 'c' && choose != 'd')
            {
                cout << "Invalid ,Please enter one of the available letters";
                cin >> choose;
            }
            clear_Screen();
            if (choose == 'b') {
                cout << "Correct!\n";
                score += 100;
                cout << "Your score now is " << score << endl;

            }
            else {
                cout << "\aSorry, your answer is incorrect.\n";
                cout << "The correct answer is :  b. Blue Whale" << endl;
                cout << "Your final score is " << score << endl;
                break;
            }
            cout << endl << endl << endl;
            cout << "9- In which movie would you find the character named Jack Dawson?\n";
            cout << "a. Titanic \nb. Avatar\nc. The Revenant \nd. Inception \n ";
            cin >> choose;
            while (choose != 'a' && choose != 'b' && choose != 'c' && choose != 'd')
            {
                cout << "Invalid ,Please enter one of the available letters";
                cin >> choose;
            }
            clear_Screen();
            if (choose == 'a') {
                cout << "Correct!\n";
                score += 100;
                cout << "Your score now is " << score << endl;

            }
            else {
                cout << "\aSorry, your answer is incorrect.\n";
                cout << "The correct answer is :  a. Titanic" << endl;
                cout << "Your final score is " << score << endl;
                break;
            }
            cout << endl << endl << endl;
            cout << " 10- What is the hardest natural substance on Earth?\n";
            cout << "a. Gold \nb. Diamond \nc. Iron \nd. Platinumn \n ";
            cin >> choose;
            while (choose != 'a' && choose != 'b' && choose != 'c' && choose != 'd')
            {
                cout << "Invalid ,Please enter one of the available letters";
                cin >> choose;
            }
            clear_Screen();
            if (choose == 'b') {
                cout << "Correct!\n";
                score += 100;
                cout << "Your score now is " << score << endl;
                cout << "Congratulations!!!!!!!!!!\n";
                break;
            }
            else {
                cout << "\aSorry, your answer is incorrect.\n";
                cout << "The correct answer is :  b. Diamond" << endl;
                cout << "Your final score is " << score << endl;
                break;
            }
            cout << endl << endl << endl;
        }
        else if (ran == 2) {
            // Questions for ran == 2

            cout << "1- Which planet is closest to the Sun?\n";
            cout << "a. Venus \n. Earth \nc. Mercury \nd. Mars\n";
            cin >> choose;
            while (choose != 'a' && choose != 'b' && choose != 'c' && choose != 'd')
            {
                cout << "Invalid ,Please enter one of the available letters";
                cin >> choose;
            }
            clear_Screen();
            if (choose == 'c') {
                cout << "Correct!\n";
                score += 100;
                cout << "Your score now is " << score << endl;

            }
            else {
                cout << "\aSorry, your answer is incorrect.\n";
                cout << "The correct answer is :  c. Mercury " << endl;
                cout << "Your final score is " << score << endl;
                break;
            }
            cout << endl << endl << endl;
            cout << "2- What is the smallest prime number?\n";
            cout << "a. 0 \nb. 1 \nc. 2 \nd. 3\n";
            cin >> choose;
            while (choose != 'a' && choose != 'b' && choose != 'c' && choose != 'd')
            {
                cout << "Invalid ,Please enter one of the available letters";
                cin >> choose;
            }
            clear_Screen();
            if (choose == 'c') {
                cout << "Correct!\n";
                score += 100;
                cout << "Your score now is " << score << endl;

            }
            else {
                cout << "\aSorry, your answer is incorrect.\n";
                cout << "The correct answer is :  c. 2 " << endl;
                cout << "Your final score is " << score << endl;
                break;
            }
            cout << endl << endl << endl;
            cout << "3- Which famous artist painted the Mona Lisa?\n";
            cout << "a. Vincent van Gogh \nb. Pablo Picasso \nc. Leonardo da Vinci \nd. Claude Monet \n";
            cin >> choose;
            while (choose != 'a' && choose != 'b' && choose != 'c' && choose != 'd')
            {
                cout << "Invalid ,Please enter one of the available letters";
                cin >> choose;
            }
            clear_Screen();
            if (choose == 'c') {
                cout << "Correct!\n";
                score += 100;
                cout << "Your score now is " << score << endl;

            }
            else {
                cout << "\aSorry, your answer is incorrect.\n";
                cout << "The correct answer is :  c. Leonardo da Vinci " << endl;
                cout << "Your final score is " << score << endl;
                break;
            }
            cout << endl << endl << endl;
            cout << "4- What is the name of the river that flows through Egypt?\n";
            cout << "a. Amazon \nb. Nile \nc. Yangtze \nd. Mississippi \n";
            cin >> choose;
            while (choose != 'a' && choose != 'b' && choose != 'c' && choose != 'd')
            {
                cout << "Invalid ,Please enter one of the available letters";
                cin >> choose;
            }
            clear_Screen();
            if (choose == 'b') {
                cout << "Correct!\n";
                score += 100;
                cout << "Your score now is " << score << endl;

            }
            else {
                cout << "\aSorry, your answer is incorrect.\n";
                cout << "The correct answer is :  b. Nile " << endl;
                cout << "Your final score is " << score << endl;
                break;
            }
            cout << endl << endl << endl;
            cout << "5- In which city is the Statue of Liberty located?\n";
            cout << "a. New York City \nb. Los Angeles \nc. San Francisco \nd. Washington D.C\n ";
            cin >> choose;
            while (choose != 'a' && choose != 'b' && choose != 'c' && choose != 'd')
            {
                cout << "Invalid ,Please enter one of the available letters";
                cin >> choose;
            }
            clear_Screen();
            if (choose == 'a') {
                cout << "Correct!\n";
                score += 100;
                cout << "Your score now is " << score << endl;

            }
            else {
                cout << "\aSorry, your answer is incorrect.\n";
                cout << "The correct answer is :  a. New York City " << endl;
                cout << "Your final score is " << score << endl;

                break;

            }
            cout << endl << endl << endl;
            cout << "6- Who is the author of the Harry Potter series?\n";
            cout << "a. J.K. Rowling \nb. J.R.R. Tolkien \nc. C.S. Lewis \nd. Suzanne Collins\n";
            cin >> choose;
            while (choose != 'a' && choose != 'b' && choose != 'c' && choose != 'd')
            {
                cout << "Invalid ,Please enter one of the available letters";
                cin >> choose;
            }
            clear_Screen();
            if (choose == 'a') {
                cout << "Correct!\n";
                score += 100;
                cout << "Your score now is " << score << endl;

            }
            else {
                cout << "\aSorry, your answer is incorrect.\n";
                cout << "The correct answer is :  a. J.K. Rowling " << endl;
                cout << "Your final score is " << score << endl;
                break;
            }
            cout << endl << endl << endl;
            cout << "7- What is the main ingredient in guacamole?\n";
            cout << "a. Tomato \nb. Avocado \nc. Onion\nd. Pepper\n";
            cin >> choose;
            while (choose != 'a' && choose != 'b' && choose != 'c' && choose != 'd')
            {
                cout << "Invalid ,Please enter one of the available letters";
                cin >> choose;
            }
            clear_Screen();
            if (choose == 'b') {
                cout << "Correct!\n";
                score += 100;
                cout << "Your score now is " << score << endl;

            }
            else {
                cout << "\aSorry, your answer is incorrect.\n";
                cout << "The correct answer is :  b. Avocado" << endl;
                cout << "Your final score is " << score << endl;
                break;
            }
            cout << endl << endl << endl;
            cout << "8- What type of animal is the largest species of shark? \n";
            cout << "a. Great White Shark \nb. Hammerhead Shark \nc. Whale Shark \nd. Tiger Shark \n";
            cin >> choose;
            while (choose != 'a' && choose != 'b' && choose != 'c' && choose != 'd')
            {
                cout << "Invalid ,Please enter one of the available letters";
                cin >> choose;
            }
            clear_Screen();
            if (choose == 'a') {
                cout << "Correct!\n";
                score += 100;
                cout << "Your score now is " << score << endl;

            }
            else {
                cout << "\aSorry, your answer is incorrect.\n";
                cout << "The correct answer is :  a. Great White Shark " << endl;
                cout << "Your final score is " << score << endl;
                break;
            }
            cout << endl << endl << endl;
            cout << "9- Which continent is known as the Dark Continent?\n";
            cout << "a. Asia \nb. Africa \nc. Europe \nd. Australia\n";
            cin >> choose;
            while (choose != 'a' && choose != 'b' && choose != 'c' && choose != 'd')
            {
                cout << "Invalid ,Please enter one of the available letters";
                cin >> choose;
            }
            clear_Screen();
            if (choose == 'b') {
                cout << "Correct!\n";
                score += 100;
                cout << "Your score now is " << score << endl;

            }
            else {
                cout << "\aSorry, your answer is incorrect.\n";
                cout << "The correct answer is :  b. Africa" << endl;
                cout << "Your final score is " << score << endl;
                break;
            }
            cout << endl << endl << endl;
            cout << "10. When did World War II start?\n";
            cout << "a. 1877 \nb. 1923 \nc. 1945 \nd. 1939 \n ";
            cin >> choose;
            while (choose != 'a' && choose != 'b' && choose != 'c' && choose != 'd')
            {
                cout << "Invalid ,Please enter one of the available letters";
                cin >> choose;
            }
            clear_Screen();
            if (choose == 'd') {
                cout << "Correct!\n";
                score += 100;
                cout << "Your score now is " << score << endl;
                cout << "Congratulations!!!!!!!!!!\n";
            }
            else {
                cout << "\aSorry, your answer is incorrect.\n";
                cout << "The correct answer is :  d. 1939" << endl;
                cout << "Your final score is " << score << endl;
            }

            break; // Exit the while loop after questions for ran == 1
            cout << endl << endl << endl;
        } // End of if (ran == 2)


    } // End of while loop


}
// Dina Abou Eloyoun (science question)
void science() {
    int score = 0;
    char choose;



    // Start of the quiz game
    cout << "                         **** Welcome to science question ****\n";


    // Main game loop
    while (true) {
        int ran = rand() % 2 + 1;

        if (ran == 1) {
            // Questions for ran == 1

            cout << "1. Who gave the Theory of Relativity?\n";
            cout << "a. Isaac Newton\n";
            cout << "b. Archimedes\n";
            cout << "c. Albert Einstein\n";
            cout << "d. Galileo Galilei\n";
            cin >> choose;
            while (choose != 'a' && choose != 'b' && choose != 'c' && choose != 'd')
            {
                cout << "Invalid ,Please enter one of the available letters";
                cin >> choose;
            }
            clear_Screen();
            if (choose == 'c') {
                cout << "Correct!\n";
                score += 100;
                cout << "Your score now is " << score << endl;

            }
            else {
                cout << "\aSorry, your answer is incorrect.\n";
                cout << "The correct answer is :  c. Albert Einstein\n";
                cout << "Your final score is " << score << endl;
                break;
            }
            cout << endl << endl << endl;
            cout << "2. Which one of the following has ohm as its unit?\n";
            cout << "a. Resistivity\n";
            cout << "b. Conductivity\n";
            cout << "c. Conductance\n";
            cout << "d. Inductive Reactance\n";
            cin >> choose;
            while (choose != 'a' && choose != 'b' && choose != 'c' && choose != 'd')
            {
                cout << "Invalid ,Please enter one of the available letters";
                cin >> choose;
            }
            clear_Screen();
            if (choose == 'd') {
                cout << "Correct!\n";
                score += 100;
                cout << "Your score now is " << score << endl;

            }
            else {
                cout << "\aSorry, your answer is incorrect.\n";
                cout << "The correct answer is :  d. Inductive Reactance\n";
                cout << "Your final score is " << score << endl;
                break;
            }
            cout << endl << endl << endl;
            cout << "3. What kind of energy is stored in the spring of a watch?\n";
            cout << "a. Kinetic\n";
            cout << "b. Potential\n";
            cout << "c. Heat\n";
            cout << "d. Chemical\n";
            cin >> choose;
            while (choose != 'a' && choose != 'b' && choose != 'c' && choose != 'd')
            {
                cout << "Invalid ,Please enter one of the available letters";
                cin >> choose;
            }
            clear_Screen();
            if (choose == 'b') {
                cout << "Correct!\n";
                score += 100;
                cout << "Your score now is " << score << endl;

            }
            else {
                cout << "\aSorry, your answer is incorrect.\n";
                cout << "The correct answer is :  b. Potential\n";
                cout << "Your final score is " << score << endl;
                break;
            }
            cout << endl << endl << endl;
            cout << "4. Which of the following is the most active chemically?\n";
            cout << "a. Chlorine\n";
            cout << "b. Fluorine\n";
            cout << "c. Lithium\n";
            cout << "d. Iodine\n";
            cin >> choose;
            while (choose != 'a' && choose != 'b' && choose != 'c' && choose != 'd')
            {
                cout << "Invalid ,Please enter one of the available letters";
                cin >> choose;
            }
            clear_Screen();
            if (choose == 'b') {
                cout << "Correct!\n";
                score += 100;
                cout << "Your score now is " << score << endl;

            }
            else {
                cout << "\aSorry, your answer is incorrect.\n";
                cout << "The correct answer is :  b. Fluorine\n";
                cout << "Your final score is " << score << endl;
                break;
            }
            cout << endl << endl << endl;
            cout << "5. Which among the following is a Noble Gas?\n";
            cout << "a. Nitrogen\n";
            cout << "b. Hydrogen\n";
            cout << "c. Oxygen\n";
            cout << "d. Helium\n";
            cin >> choose;
            while (choose != 'a' && choose != 'b' && choose != 'c' && choose != 'd')
            {
                cout << "Invalid ,Please enter one of the available letters";
                cin >> choose;
            }
            clear_Screen();
            if (choose == 'd') {
                cout << "Correct!\n";
                score += 100;
                cout << "Your score now is " << score << endl;

            }
            else {
                cout << "\aSorry, your answer is incorrect.\n";
                cout << "The correct answer is :  d. Helium\n";
                cout << "Your final score is " << score << endl;
                break;
            }
            cout << endl << endl << endl;
            cout << "6. Which among the following enzyme plays an important role in adding the building blocks to the primer in a sequence determined by the DNA template?\n";
            cout << "a. Helicase\n";
            cout << "b. Primase\n";
            cout << "c. Polymerase\n";
            cout << "d. Diastase\n";
            cin >> choose;
            while (choose != 'a' && choose != 'b' && choose != 'c' && choose != 'd')
            {
                cout << "Invalid ,Please enter one of the available letters";
                cin >> choose;
            }
            clear_Screen();
            if (choose == 'c') {
                cout << "Correct!\n";
                score += 100;
                cout << "Your score now is " << score << endl;

            }
            else {
                cout << "\aSorry, your answer is incorrect.\n";
                cout << "The correct answer is :  c. Polymerase\n";
                cout << "Your final score is " << score << endl;
                break;
            }
            cout << endl << endl << endl;
            cout << "7. Which of the following plant growth hormone was recognized by Japanese scientists?\n";
            cout << "a. Auxin\n";
            cout << "b. Gibberellins\n";
            cout << "c. Abscisic acid\n";
            cout << "d. Cytokinin\n";
            cin >> choose;
            while (choose != 'a' && choose != 'b' && choose != 'c' && choose != 'd')
            {
                cout << "Invalid ,Please enter one of the available letters";
                cin >> choose;
            }
            clear_Screen();
            if (choose == 'b') {
                cout << "Correct!\n";
                score += 100;
                cout << "Your score now is " << score << endl;

            }
            else {
                cout << "\aSorry, your answer is incorrect.\n";
                cout << "The correct answer is :  b. Gibberellins\n";
                cout << "Your final score is " << score << endl;
                break;
            }
            cout << endl << endl << endl;
            cout << "8. What is the product of the mass of the body and its velocity called as?\n";
            cout << "a. Force\n";
            cout << "b. Linear Momentum\n";
            cout << "c. Energy\n";
            cout << "d. Power\n";
            cin >> choose;
            while (choose != 'a' && choose != 'b' && choose != 'c' && choose != 'd')
            {
                cout << "Invalid ,Please enter one of the available letters";
                cin >> choose;
            }
            clear_Screen();
            if (choose == 'b') {
                cout << "Correct!\n";
                score += 100;
                cout << "Your score now is " << score << endl;

            }
            else {
                cout << "\aSorry, your answer is incorrect.\n";
                cout << "The correct answer is :  b. Linear Momentum\n";
                cout << "Your final score is " << score << endl;
                break;
            }
            cout << endl << endl << endl;
            cout << "9. An orbital velocity of a satellite does not depend on which of the following?\n";
            cout << "a. Radius of the planet\n";
            cout << "b. Mass of the planet\n";
            cout << "c. Radius of orbit\n";
            cout << "d. Mass of the satellite\n";
            cin >> choose;
            while (choose != 'a' && choose != 'b' && choose != 'c' && choose != 'd')
            {
                cout << "Invalid ,Please enter one of the available letters";
                cin >> choose;
            }
            clear_Screen();
            if (choose == 'd') {
                cout << "Correct!\n";
                score += 100;
                cout << "Your score now is " << score << endl;

            }
            else {
                cout << "\aSorry, your answer is incorrect.\n";
                cout << "The correct answer is :  d. Mass of the satellite\n";
                cout << "Your final score is " << score << endl;
                break;
            }
            cout << endl << endl << endl;
            cout << "10. The nutritional supplements Spirulina, Chorella and the Vitamin-C supplement, Dunaliella are actually:\n";
            cout << "a. Algae\n";
            cout << "b. Lichens\n";
            cout << "c. Probiotics\n";
            cout << "d. Bryophytes\n";
            cin >> choose;
            while (choose != 'a' && choose != 'b' && choose != 'c' && choose != 'd')
            {
                cout << "Invalid ,Please enter one of the available letters";
                cin >> choose;
            }
            clear_Screen();
            if (choose == 'a') {
                cout << "Correct!\n";
                score += 100;
                cout << "Your score now is " << score << endl;
                cout << "Congratulations!!!!!!!!!!\n";
                break;
            }
            else {
                cout << "\aSorry, your answer is incorrect.\n";
                cout << "The correct answer is :  a. Algae\n";
                cout << "Your final score is " << score << endl;
                break;
            }
            cout << endl << endl << endl;
        }
        else if (ran == 2) {
            // Questions for ran == 2

            cout << "1. In comparison to the gravitational force the Earth exerts on the Moon, the gravitational force the Moon exerts on the Earth ________?\n";
            cout << "a. will be greater\n";
            cout << "b. will be lesser\n";
            cout << "c. will be the same\n";
            cout << "d. None of the above\n";
            cin >> choose;
            while (choose != 'a' && choose != 'b' && choose != 'c' && choose != 'd')
            {
                cout << "Invalid ,Please enter one of the available letters";
                cin >> choose;
            }
            clear_Screen();
            if (choose == 'c') {
                cout << "Correct!\n";
                score += 100;
                cout << "Your score now is " << score << endl;

            }
            else {
                cout << "\aSorry, your answer is incorrect.\n";
                cout << "The correct answer is :  c. will be the same\n";
                cout << "Your final score is " << score << endl;
                break;

            }
            cout << endl << endl << endl;
            cout << "2. Which is the most abundant greenhouse gas present in the atmosphere?\n";
            cout << "a. Carbon dioxide\n";
            cout << "b. Methane\n";
            cout << "c. Water vapour\n";
            cout << "d. Nitrous oxide\n";
            cin >> choose;
            while (choose != 'a' && choose != 'b' && choose != 'c' && choose != 'd')
            {
                cout << "Invalid ,Please enter one of the available letters";
                cin >> choose;
            }
            clear_Screen();
            if (choose == 'c') {
                cout << "Correct!\n";
                score += 100;
                cout << "Your score now is " << score << endl;

            }
            else {
                cout << "\aSorry, your answer is incorrect.\n";
                cout << "The correct answer is :  c. Water vapour\n";
                cout << "Your final score is " << score << endl;
                break;

            }
            cout << endl << endl << endl;
            cout << "3. Which of the following plant growth hormones was recognized by Japanese scientists?\n";
            cout << "a. Auxin\n";
            cout << "b. Gibberellins\n";
            cout << "c. Abscisic acid\n";
            cout << "d. Cytokinin\n";
            cin >> choose;
            while (choose != 'a' && choose != 'b' && choose != 'c' && choose != 'd')
            {
                cout << "Invalid ,Please enter one of the available letters";
                cin >> choose;
            }
            clear_Screen();
            if (choose == 'd') {
                cout << "Correct!\n";
                score += 100;
                cout << "Your score now is " << score << endl;

            }
            else {
                cout << "\aSorry, your answer is incorrect.\n";
                cout << "The correct answer is :  d. Cytokinin\n";
                cout << "Your final score is " << score << endl;
                break;

            }
            cout << endl << endl << endl;
            cout << "4. What is the average life of red blood cells in our body?\n";
            cout << "a. 30-40 days\n";
            cout << "b. 70-80 days\n";
            cout << "c. 100-120 days\n";
            cout << "d. 160-180 days\n";
            cin >> choose;
            while (choose != 'a' && choose != 'b' && choose != 'c' && choose != 'd')
            {
                cout << "Invalid ,Please enter one of the available letters";
                cin >> choose;
            }
            clear_Screen();
            if (choose == 'c') {
                cout << "Correct!\n";
                score += 100;
                cout << "Your score now is " << score << endl;

            }
            else {
                cout << "\aSorry, your answer is incorrect.\n";
                cout << "The correct answer is :  c. 100-120 days\n";
                cout << "Your final score is " << score << endl;
                break;
            }
            cout << endl << endl << endl;
            cout << "5. Which of the following is the most inclusive category of classification among the others?\n";
            cout << "a. Order\n";
            cout << "b. Class\n";
            cout << "c. Phylum\n";
            cout << "d. Family\n";
            cin >> choose;
            while (choose != 'a' && choose != 'b' && choose != 'c' && choose != 'd')
            {
                cout << "Invalid ,Please enter one of the available letters";
                cin >> choose;
            }
            clear_Screen();
            if (choose == 'c') {
                cout << "Correct!\n";
                score += 100;
                cout << "Your score now is " << score << endl;

            }
            else {
                cout << "\aSorry, your answer is incorrect.\n";
                cout << "The correct answer is :  c. Phylum\n";
                cout << "Your final score is " << score << endl;
                break;
            }
            cout << endl << endl << endl;
            cout << "6. What is the ratio of change in configuration to the original configuration called?\n";
            cout << "a. Strain\n";
            cout << "b. Stress\n";
            cout << "c. Elasticity\n";
            cout << "d. Rebound\n";
            cin >> choose;
            while (choose != 'a' && choose != 'b' && choose != 'c' && choose != 'd')
            {
                cout << "Invalid ,Please enter one of the available letters";
                cin >> choose;
            }
            clear_Screen();
            if (choose == 'a') {
                cout << "Correct!\n";
                score += 100;
                cout << "Your score now is " << score << endl;

            }
            else {
                cout << "\aSorry, your answer is incorrect.\n";
                cout << "The correct answer is :  a. Strain\n";
                cout << "Your final score is " << score << endl;
                break;
            }
            cout << endl << endl << endl;
            cout << "7. RATIONS Trail, which was seen in the news, is associated with which disease?\n";
            cout << "a. Cancer\n";
            cout << "b. Tuberculosis\n";
            cout << "c. COVID-19\n";
            cout << "d. Diabetes\n";
            cin >> choose;
            while (choose != 'a' && choose != 'b' && choose != 'c' && choose != 'd')
            {
                cout << "Invalid ,Please enter one of the available letters";
                cin >> choose;
            }
            clear_Screen();
            if (choose == 'b') {
                cout << "Correct!\n";
                score += 100;
                cout << "Your score now is " << score << endl;

            }
            else {
                cout << "\aSorry, your answer is incorrect.\n";
                cout << "The correct answer is :  b. Tuberculosis\n";
                cout << "Your final score is " << score << endl;
                break;
            }
            cout << endl << endl << endl;
            cout << "8. Which two countries jointly launched the GRACE twin satellites?\n";
            cout << "a. USA and Germany\n";
            cout << "b. USA and Japan\n";
            cout << "c. UAE and Israel\n";
            cout << "d. India and Singapore\n";
            cin >> choose;
            while (choose != 'a' && choose != 'b' && choose != 'c' && choose != 'd')
            {
                cout << "Invalid ,Please enter one of the available letters";
                cin >> choose;
            }
            clear_Screen();
            if (choose == 'a') {
                cout << "Correct!\n";
                score += 100;
                cout << "Your score now is " << score << endl;

            }
            else {
                cout << "\aSorry, your answer is incorrect.\n";
                cout << "The correct answer is :  a. USA and Germany\n";
                cout << "Your final score is " << score << endl;
                break;
            }
            cout << endl << endl << endl;
            cout << "9. Which among the following is the objective of Methyl tert-butyl ether (MTBE) mixing with petroleum?\n";
            cout << "a. Raise Octane Number\n";
            cout << "b. Antioxidant Stabilizer\n";
            cout << "c. Lead Scavenger\n";
            cout << "d. Fuel Dye\n";
            cin >> choose;
            while (choose != 'a' && choose != 'b' && choose != 'c' && choose != 'd')
            {
                cout << "Invalid ,Please enter one of the available letters";
                cin >> choose;
            }
            clear_Screen();
            if (choose == 'a') {
                cout << "Correct!\n";
                score += 100;
                cout << "Your score now is " << score << endl;

            }
            else {
                cout << "\aSorry, your answer is incorrect.\n";
                cout << "The correct answer is :  a. Raise Octane Number\n";
                cout << "Your final score is " << score << endl;
                break;
            }
            cout << endl << endl << endl;
            cout << "10. Which of these is NOT a compound of carbon?\n";
            cout << "a. Acetic acid\n";
            cout << "b. Chloroform\n";
            cout << "c. Caustic Soda\n";
            cout << "d. Methane\n";
            cin >> choose;
            while (choose != 'a' && choose != 'b' && choose != 'c' && choose != 'd')
            {
                cout << "Invalid ,Please enter one of the available letters";
                cin >> choose;
            }
            clear_Screen();
            if (choose == 'c') {
                cout << "Correct!\n";
                score += 100;
                cout << "Your score now is " << score << endl;
                cout << "Congratulations!!!!!!!!!!\n";

            }
            else {
                cout << "\aSorry, your answer is incorrect.\n";
                cout << "The correct answer is :  c. Caustic Soda\n";
                cout << "Your final score is " << score << endl;
            }

            break; // Exit the while loop after questions for ran == 1
            cout << endl << endl << endl;
        } // End of if (ran == 2)


    } // End of while loop


}
void Go_continue() {
    string to_continue;

    cout << "- Do you want to start a new game?\n       - YES   - NO\n";
    cin >> to_continue;

    while (to_continue != "YES" && to_continue != "yes" && to_continue != "NO" && to_continue != "no") {
        cout << "Please enter YES or NO.\n";
        cin >> to_continue;
    }

    if (to_continue == "YES" || to_continue == "yes") {
        main();  // Restart the main function to allow a new game
    }
    else {
        cout << "                         Thanks, we hope you had fun.\n";
    }
}