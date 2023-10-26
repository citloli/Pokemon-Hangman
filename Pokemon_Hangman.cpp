// Program created by Citlalli Trejo Del Rio
// Homework 7/ Final game project
// 4/17/23
#include <iostream>
#include <stdlib.h>
#include <time.h>
#include <windows.h>

using namespace std;
void IntroScreen(); // function prototype
void CategoryScreen(); // function prototype
string CLS = "\033[2J\033[1;1H";
string Red = "\033[31;1m";
string Green = "\033[32;1m";
string Yellow = "\033[33;1m";
string Blue = "\033[34;1m";
string Purple = "\033[35;1m";
string Cyan = "\033[36;1m";
string White = "\033[37;1m";
string Default = "\033[0m"; // default gray color & reset background to black

int main ()
{
    srand(time(NULL));
    // step 1: intro screen
    IntroScreen();
    // step 1.2: Category screen, this was a big learning step, I'm not sure if it is the correct way
    CategoryScreen();
}
    void CategoryScreen()
 {
    int catergory;
    cout << "Pick a category! 1 or 2!" << endl;
    cout << "Pokemons (1), Trainers (2)" << endl;
    cin >> catergory;

    if (catergory==1)
    {

        // step 2: select phrase
        string Phrases[42] = {"sprigatito", "pikachu", "sylveon", "starmie", "jirachi", "shaymin", "zapdos", "medicham", "latias", "keldeo", "snorlax", "wobbuffet", "gengar", "chimchar", "swablu", "rayquaza", "octillery", "chinchou", "samurott", "lunatone", "lucario", "dragonite", "ninetales", "jolteon", "mewtwo", "cyndaquil", "ampharos", "abra", "ditto", "umbreon", "mudkip", "charizard", "lickitung", "piplup", "shinx", "manaphy", "sandshrew", "vulpix", "lapras", "cosmeom", "luvdisc", "mesprit"};
        string SecretPhrase = Phrases[rand()%42];
        // test try
        //cout << SecretPhrase << endl; // remove in final program
        // step 3: create guess phrase
        string GuessPhrase = SecretPhrase;
        for (int i=0; i<GuessPhrase.size(); i++)
        {
            if (GuessPhrase[i] != ' ')
                GuessPhrase[i] = '-';

        }
        cout << GuessPhrase << endl;
        // step 4: declare variables
        int BadGuesses = 0, Location; // BadGuesses = Health points
        string Letter, LettersRemaining = " a b c d e f g h i j k l m n o p q r s t u v w x y z";
        // step 5: game loop
        while (BadGuesses < 6 && GuessPhrase != SecretPhrase)
        {
            cout << CLS;
            // step 6: ASCII art
            if (BadGuesses == 0)
            {
                cout << Red <<"             `;,;.;,;.;.'               "<< Default<<"Category: Pokemons! \n" <<Red;
                cout <<"              ..:;:;::;:     \n" << Green;
                cout <<"        ..--''' '' ' ' '''--.     \n";
                cout <<"      /' .   .'        '.   .`\\     \n";
                cout <<"     | /    /            \\   '.|     \n";
                cout <<"     | |   :             :    :|     \n";
                cout <<"   .'| |   :             :    :|     \n";
                cout <<" ,: /\\ \\.._\\ __..===..__/_../ /`.     \n";
                cout <<"|'' |  :.|  `'          `'  |.'  ::.     \n";
                cout <<"|   |  ''|    :'';          | ,  `''\\     \n";
                cout <<"|.:  \\/  | /'-.`'   ':'.-'\\ |  \\,   |     \n";
                cout <<"| '  /  /  | / |...   | \\ |  |  |';'|     \n";
                cout <<" \\ _ |:.|  |_\\_|`.'   |_/_|  |.:| _ |     \n";
                cout <<"/,.,.|' \\__       . .      __/ '|.,.,\\     \n";
                cout <<"     | ':`.`----._____.---'.'   |     \n";
                cout <<"l42   \\   `:\"\"\"-------'\"\"' |   |     \n";
                cout <<"       ',-,-',             .'-=,=,     \n" << Default << endl;
                cout <<"      _ _ _ _ _ _ _,-.___     _     \n";
                cout <<"     |_ _         { {]_]_]   [_]     \n";
                cout <<"     |_ _ `-----.__\\ \\_]_]_    . `     \n";
                cout <<"     |   `-----.____} }]_]_]_   ,     \n";
                cout <<"     |_ _ _ _ _ _ _/ {_]_]_]_] , `     \n";
                cout <<"hjw                `-'     \n";
            }
            if (BadGuesses == 1)
            {
                cout <<Red <<"             `;,;.;,;.;.'             " << Default << "Category: Pokemons! \n" <<Red;
                cout <<"              ..:;:;::;:     \n" << Green;
                cout <<"        ..--''' '' ' ' '''--.     \n";
                cout <<"      /' .   .'        '.   .`\\     \n";
                cout <<"     | /    /            \\   '.|     \n";
                cout <<"     | |   :             :    :|     \n";
                cout <<"   .'| |   :             :    :|     \n";
                cout <<" ,: /\\ \\.._\\ __..===..__/_../ /`.     \n";
                cout <<"|'' |  :.|  `'          `'  |.'  ::.     \n";
                cout <<"|   |  ''|    :'';          | ,  `''\\     \n";
                cout <<"|.:  \\/  | /'-.`'   ':'.-'\\ |  \\,   |     \n";
                cout <<"| '  /  /  | / |...   | \\ |  |  |';'|     \n";
                cout <<" \\ _ |:.|  |_\\_|`.'   |_/_|  |.:| _ |     \n";
                cout <<"/,.,.|' \\__       . .      __/ '|.,.,\\     \n";
                cout <<"     | ':`.`----._____.---'.'   |     \n";
                cout <<"l42   \\   `:\"\"\"-------'\"\"' |   |     \n";
                cout <<"       ',-,-',             .'-=,=,     \n" << Default<< endl;
                cout <<"      _ _ _ _ _ _ _,-.___     _     \n";
                cout <<"     |_ _         { {]_]_]        \n";
                cout <<"     |_ _ `-----.__\\ \\_]_]_    . `     \n";
                cout <<"     |   `-----.____} }]_]_]_   ,     \n";
                cout <<"     |_ _ _ _ _ _ _/ {_]_]_]_] , `     \n";
                cout <<"hjw                `-'     \n";
            }
            if (BadGuesses == 2)
            {
                cout <<Red <<"             `;,;.;,;.;.'            " << Default<< "Category: Pokemons! \n" << Red;
                cout <<"              ..:;:;::;:     \n" << Green;
                cout <<"        ..--''' '' ' ' '''--.     \n";
                cout <<"      /' .   .'        '.   .`\\     \n";
                cout <<"     | /    /            \\   '.|     \n";
                cout <<"     | |   :             :    :|     \n";
                cout <<"   .'| |   :             :    :|     \n";
                cout <<" ,: /\\ \\.._\\ __..===..__/_../ /`.     \n";
                cout <<"|'' |  :.|  `'          `'  |.'  ::.     \n";
                cout <<"|   |  ''|    :'';          | ,  `''\\     \n";
                cout <<"|.:  \\/  | /'-.`'   ':'.-'\\ |  \\,   |     \n";
                cout <<"| '  /  /  | / |...   | \\ |  |  |';'|     \n";
                cout <<" \\ _ |:.|  |_\\_|`.'   |_/_|  |.:| _ |     \n";
                cout <<"/,.,.|' \\__       . .      __/ '|.,.,\\     \n";
                cout <<"     | ':`.`----._____.---'.'   |     \n";
                cout <<"l42   \\   `:\"\"\"-------'\"\"' |   |     \n";
                cout <<"       ',-,-',             .'-=,=,     \n" << Default << endl;
                cout <<"      _ _ _ _ _ _ _,-.___          \n";
                cout <<"     |_ _         { {]_]_]        \n";
                cout <<"     |_ _ `-----.__\\ \\_]    . `     \n";
                cout <<"     |   `-----.____} }]_]_]   ,     \n";
                cout <<"     |_ _ _ _ _ _ _/ {_]_]_] , `     \n";
                cout <<"hjw                `-'     \n";
            }
            if (BadGuesses == 3)
            {
                cout <<Red <<"             `;,;.;,;.;.'            " <<Default <<"Category: Pokemons! \n" << Red;
                cout <<"              ..:;:;::;:     \n" << Green;
                cout <<"        ..--''' '' ' ' '''--.     \n";
                cout <<"      /' .   .'        '.   .`\\     \n";
                cout <<"     | /    /            \\   '.|     \n";
                cout <<"     | |   :             :    :|     \n";
                cout <<"   .'| |   :             :    :|     \n";
                cout <<" ,: /\\ \\.._\\ __..===..__/_../ /`.     \n";
                cout <<"|'' |  :.|  `'          `'  |.'  ::.     \n";
                cout <<"|   |  ''|    :'';          | ,  `''\\     \n";
                cout <<"|.:  \\/  | /'-.`'   ':'.-'\\ |  \\,   |     \n";
                cout <<"| '  /  /  | / |...   | \\ |  |  |';'|     \n";
                cout <<" \\ _ |:.|  |_\\_|`.'   |_/_|  |.:| _ |     \n";
                cout <<"/,.,.|' \\__       . .      __/ '|.,.,\\     \n";
                cout <<"     | ':`.`----._____.---'.'   |     \n";
                cout <<"l42   \\   `:\"\"\"-------'\"\"' |   |     \n";
                cout <<"       ',-,-',             .'-=,=,     \n" << Default <<endl;
                cout <<"      _ _ _ _ _ _ _,-.__     \n";
                cout <<"     |_ _         { {]_]_]        \n";
                cout <<"     |_ _ `-----.__\\ \\_         \n";
                cout <<"     |   `-----.____} }]_]        \n";
                cout <<"     |_ _ _ _ _ _ _/ {_]_]      \n";
                cout <<"hjw                `-'     \n";
            }
            if (BadGuesses == 4)
            {
                cout <<Red <<"             `;,;.;,;.;.'            " << Default <<"Category: Pokemons! \n" << Red;
                cout <<"              ..:;:;::;:     \n" << Green;
                cout <<"        ..--''' '' ' ' '''--.     \n";
                cout <<"      /' .   .'        '.   .`\\     \n";
                cout <<"     | /    /            \\   '.|     \n";
                cout <<"     | |   :             :    :|     \n";
                cout <<"   .'| |   :             :    :|     \n";
                cout <<" ,: /\\ \\.._\\ __..===..__/_../ /`.     \n";
                cout <<"|'' |  :.|  `'          `'  |.'  ::.     \n";
                cout <<"|   |  ''|    :'';          | ,  `''\\     \n";
                cout <<"|.:  \\/  | /'-.`'   ':'.-'\\ |  \\,   |     \n";
                cout <<"| '  /  /  | / |...   | \\ |  |  |';'|     \n";
                cout <<" \\ _ |:.|  |_\\_|`.'   |_/_|  |.:| _ |     \n";
                cout <<"/,.,.|' \\__       . .      __/ '|.,.,\\     \n";
                cout <<"     | ':`.`----._____.---'.'   |     \n";
                cout <<"l42   \\   `:\"\"\"-------'\"\"' |   |     \n";
                cout <<"       ',-,-',             .'-=,=,     \n" << Default << endl;
                cout <<"      _ _ _ _ _ _ _,-._     \n";
                cout <<"     |_ _         { {]_]     \n";
                cout <<"     |_ _ `-----.__\\ \\         \n";
                cout <<"     |   `-----.____} }]        \n";
                cout <<"     |_ _ _ _ _ _ _/ {_]_]      \n";
                cout <<"hjw                `-'     \n";
            }
            if (BadGuesses == 5)
            {
                cout <<Red <<"             `;,;.;,;.;.'             " << Default<<"Category: Pokemons! \n"<< Red;
                cout <<"              ..:;:;::;:     \n" << Green;
                cout <<"        ..--''' '' ' ' '''--.     \n";
                cout <<"      /' .   .'        '.   .`\\     \n";
                cout <<"     | /    /            \\   '.|     \n";
                cout <<"     | |   :             :    :|     \n";
                cout <<"   .'| |   :             :    :|     \n";
                cout <<" ,: /\\ \\.._\\ __..===..__/_../ /`.     \n";
                cout <<"|'' |  :.|  `'          `'  |.'  ::.     \n";
                cout <<"|   |  ''|    :'';          | ,  `''\\     \n";
                cout <<"|.:  \\/  | /'-.`'   ':'.-'\\ |  \\,   |     \n";
                cout <<"| '  /  /  | / |...   | \\ |  |  |';'|     \n";
                cout <<" \\ _ |:.|  |_\\_|`.'   |_/_|  |.:| _ |     \n";
                cout <<"/,.,.|' \\__       . .      __/ '|.,.,\\     \n";
                cout <<"     | ':`.`----._____.---'.'   |     \n";
                cout <<"l42   \\   `:\"\"\"-------'\"\"' |   |     \n";
                cout <<"       ',-,-',             .'-=,=,     \n" << Default << endl;
                cout <<"      _ _ _ _ _ _ _,-.    \n";
                cout <<"     |_ _         { {]_     \n";
                cout <<"     |_ _ `-----.__\\ \\         \n";
                cout <<"     |   `-----.____} }]       \n";
                cout <<"     |_ _ _ _ _ _ _/ {      \n";
                cout <<"hjw                `-'     \n";
            }

            cout << "Health points= " << 60-BadGuesses*10 << endl;
            // step 7: display letters remaining
            cout << "Letters remaining: " << Cyan << LettersRemaining << Default << endl;
            // step 8: display GuessPhrase
            cout << "Phrase to guess:   " << GuessPhrase << endl;
            // step 9: ask user to enter a letter
            cout << "Enter a letter: ";
            cin >> Letter;
            int found = LettersRemaining.find(Letter, 0);
            if (found != -1)
                LettersRemaining.replace(found,1," ");
            // step 10: replace letter into GuessPhrase
            Location = SecretPhrase.find(Letter, 0);
            if (Location > SecretPhrase.size())
                BadGuesses++;
            else
                while (Location < SecretPhrase.size())
            {
                GuessPhrase.replace(Location, 1, Letter);
                Location = SecretPhrase.find(Letter, Location + 1);
            }
        cout << CLS;
        } // end game loop
        // step 11: - winning and losing screens
        if (GuessPhrase == SecretPhrase) // winner!
        {
            cout << " " << endl << endl;
            cout << " " << endl << endl << endl;
            cout << " " << endl << endl << endl;
            cout << Blue <<" _._ _ _ _     \n";
            cout <<"| _______ |     \n";
            cout <<"||,-----.||             "<< Red << "WINNER!!!!   \n" << Blue;
            cout <<"|||     |||             Gotta catch em all!  \n";
            cout <<"|||_____|||     \n";
            cout <<"|`-------'| hjw     \n";
            cout <<"| +     O | `97     \n";
            cout <<"|      O  |     \n";
            cout <<"| / /  ##,\"     \n";
            cout <<" `------\"     \n" << Default;

            cout <<"                   ,     \n";
            cout <<"               \\  :  /     \n";
            cout <<"            `. __/ \\__ .'     \n";
            cout <<"            _ _\\     /_ _     \n";
            cout <<"               /_   _\\     \n";
            cout <<"             .'  \\ /  `.     \n";
            cout <<"               /  :  \\    hjw     \n";
            cout <<"                  '     " << endl << endl;
        }
        else // loser!
        {
            cout << " " << endl << endl;
            cout <<" " << endl << endl << endl;
            cout << "lost \n";
            cout << ">.< \n";
            cout << Yellow <<"         _ _---_ _     \n";
            cout <<"      .--         --.     \n";
            cout <<"    ./   ()      .-. \\.       "<< Default<<"Better luck next time! \n" << Yellow
            ;
            cout <<"   /   o    .   (   )  \\     \n";
            cout <<"  / .            '-'    \\     \n";
            cout <<" | ()    .  O         .  |      \n";
            cout <<"|                         |     \n";
            cout <<"|    o           ()       |     \n";
            cout <<"|       .--.          O   |     \n";
            cout <<" | .   |    |            |     \n";
            cout <<"  \\    `.__.'    o   .  /      \n";
            cout <<"   \\                   /      \n";
            cout <<"    `\\  o    ()      /' JT/jgs      \n";
            cout <<"      `--___   ___--'     \n";
            cout <<"            ---     " << Default << endl << endl << endl;
        }
    cout <<  " ";
        }
    else
    {
        // step 2
        string Phrases[19] = {"ash", "dawn", "iris", "marnie", "cynthia", "serena", "adaman", "arlo", "bea", "irida", "leon", "mai", "rei", "gordie", "red", "nessa", "raihan", "allister", "piers"};
        string SecretPhrase = Phrases[rand()%19];
        string GuessPhrase = SecretPhrase;
        for (int i=0; i<GuessPhrase.size(); i++)
        {
            if (GuessPhrase[i] !=' ')
                GuessPhrase[i] = '-';
        }
        cout << GuessPhrase<< endl;
        int BadGuesses = 0, Location;
        string Letter, LettersRemaining = " a b c d e f g h i j k l m n o p q r s t u v w x y z";

        while (BadGuesses < 6 && GuessPhrase != SecretPhrase)
        {
                    cout << CLS;
            // step 6: ASCII art
                if (BadGuesses == 0)
                {
                    cout <<Yellow <<"       ;-.               ,     \n";
                    cout <<"        \\ '.           .'/     \n";
                    cout <<"         \\  \\ .---. .-' /     \n";
                    cout <<"          '. '     `\\_.'     \n";
                    cout <<"            |(),()  |     ,     \n";
                    cout <<"            (  __   /   .' \\     \n";
                    cout <<"           .''.___.'--,/\\_,|     \n";
                    cout <<"          {  /     \\   }   |     \n";
                    cout <<"           '.\\     /_.'    /     \n";
                    cout <<"            |'-.-',  `; _.'     \n";
                    cout <<"        jgs |  |  |   |`     \n";
                    cout <<"            `\"\"`\"\"`\"\"\"`     \n" << Default;
                    cout <<"      _ _ _ _ _ _ _,-.___     _     \n";
                    cout <<"     |_ _         { {]_]_]   [_]     \n";
                    cout <<"     |_ _ `-----.__\\ \\_]_]_    . `     \n";
                    cout <<"     |   `-----.____} }]_]_]_   ,     \n";
                    cout <<"     |_ _ _ _ _ _ _/ {_]_]_]_] , `     \n";
                    cout <<"hjw                `-'     \n";
                }
                if (BadGuesses == 1)
                {
                    cout <<Yellow <<"       ;-.               ,     \n";
                    cout <<"        \\ '.           .'/     \n";
                    cout <<"         \\  \\ .---. .-' /     \n";
                    cout <<"          '. '     `\\_.'     \n";
                    cout <<"            |(),()  |     ,     \n";
                    cout <<"            (  __   /   .' \\     \n";
                    cout <<"           .''.___.'--,/\\_,|     \n";
                    cout <<"          {  /     \\   }   |     \n";
                    cout <<"           '.\\     /_.'    /     \n";
                    cout <<"            |'-.-',  `; _.'     \n";
                    cout <<"        jgs |  |  |   |`     \n";
                    cout <<"            `\"\"`\"\"`\"\"\"`     \n" << Default;
                    cout <<"      _ _ _ _ _ _ _,-.___     _     \n";
                    cout <<"     |_ _         { {]_]_]        \n";
                    cout <<"     |_ _ `-----.__\\ \\_]_]_    . `     \n";
                    cout <<"     |   `-----.____} }]_]_]_   ,     \n";
                    cout <<"     |_ _ _ _ _ _ _/ {_]_]_]_] , `     \n";
                    cout <<"hjw                `-'     \n";
                }
                if (BadGuesses == 2)
                {
                    cout <<Yellow <<"       ;-.               ,     \n";
                    cout <<"        \\ '.           .'/     \n";
                    cout <<"         \\  \\ .---. .-' /     \n";
                    cout <<"          '. '     `\\_.'     \n";
                    cout <<"            |(),()  |     ,     \n";
                    cout <<"            (  __   /   .' \\     \n";
                    cout <<"           .''.___.'--,/\\_,|     \n";
                    cout <<"          {  /     \\   }   |     \n";
                    cout <<"           '.\\     /_.'    /     \n";
                    cout <<"            |'-.-',  `; _.'     \n";
                    cout <<"        jgs |  |  |   |`     \n";
                    cout <<"            `\"\"`\"\"`\"\"\"`     \n" << Default;
                    cout <<"      _ _ _ _ _ _ _,-.___     _     \n";
                    cout <<"     |_ _         { {]_]_]        \n";
                    cout <<"     |_ _ `-----.__\\ \\_]    . `     \n";
                    cout <<"     |   `-----.____} }]_]_]   ,     \n";
                    cout <<"     |_ _ _ _ _ _ _/ {_]_]_] , `     \n";
                    cout <<"hjw                `-'     \n";
                }
                if (BadGuesses == 3)
                {
                    cout <<Yellow <<"       ;-.               ,     \n";
                    cout <<"        \\ '.           .'/     \n";
                    cout <<"         \\  \\ .---. .-' /     \n";
                    cout <<"          '. '     `\\_.'     \n";
                    cout <<"            |(),()  |     ,     \n";
                    cout <<"            (  __   /   .' \\     \n";
                    cout <<"           .''.___.'--,/\\_,|     \n";
                    cout <<"          {  /     \\   }   |     \n";
                    cout <<"           '.\\     /_.'    /     \n";
                    cout <<"            |'-.-',  `; _.'     \n";
                    cout <<"        jgs |  |  |   |`     \n";
                    cout <<"            `\"\"`\"\"`\"\"\"`     \n" << Default;
                    cout <<"      _ _ _ _ _ _ _,-.___         \n";
                    cout <<"     |_ _         { {]_]_]        \n";
                    cout <<"     |_ _ `-----.__\\ \\_         \n";
                    cout <<"     |   `-----.____} }]_]        \n";
                    cout <<"     |_ _ _ _ _ _ _/ {_]_]      \n";
                    cout <<"hjw                `-'     \n";

                }
                if (BadGuesses == 4)
                {
                    cout <<Yellow <<"       ;-.               ,     \n";
                    cout <<"        \\ '.           .'/     \n";
                    cout <<"         \\  \\ .---. .-' /     \n";
                    cout <<"          '. '     `\\_.'     \n";
                    cout <<"            |(),()  |     ,     \n";
                    cout <<"            (  __   /   .' \\     \n";
                    cout <<"           .''.___.'--,/\\_,|     \n";
                    cout <<"          {  /     \\   }   |     \n";
                    cout <<"           '.\\     /_.'    /     \n";
                    cout <<"            |'-.-',  `; _.'     \n";
                    cout <<"        jgs |  |  |   |`     \n";
                    cout <<"            `\"\"`\"\"`\"\"\"`     \n" << Default;
                    cout <<"      _ _ _ _ _ _ _,-.__      \n";
                    cout <<"     |_ _         { {]_]     \n";
                    cout <<"     |_ _ `-----.__\\ \\         \n";
                    cout <<"     |   `-----.____} }]        \n";
                    cout <<"     |_ _ _ _ _ _ _/ {_]_]      \n";
                    cout <<"hjw                `-'     \n";
                }
                if (BadGuesses == 5)
                {
                    cout <<Yellow <<"       ;-.               ,     \n";
                    cout <<"        \\ '.           .'/     \n";
                    cout <<"         \\  \\ .---. .-' /     \n";
                    cout <<"          '. '     `\\_.'     \n";
                    cout <<"            |(),()  |     ,     \n";
                    cout <<"            (  __   /   .' \\     \n";
                    cout <<"           .''.___.'--,/\\_,|     \n";
                    cout <<"          {  /     \\   }   |     \n";
                    cout <<"           '.\\     /_.'    /     \n";
                    cout <<"            |'-.-',  `; _.'     \n";
                    cout <<"        jgs |  |  |   |`     \n";
                    cout <<"            `\"\"`\"\"`\"\"\"`     \n" << Default;
                    cout <<"      _ _ _ _ _ _ _,-._      \n";
                    cout <<"     |_ _         { {]_     \n";
                    cout <<"     |_ _ `-----.__\\ \\         \n";
                    cout <<"     |   `-----.____} }]       \n";
                    cout <<"     |_ _ _ _ _ _ _/ {      \n";
                    cout <<"hjw                `-'     \n";
                }

            cout << "Health points= " << 60-BadGuesses*10 << endl;
            // step 7: display letters remaining
            cout << "Letters remaining: " << Cyan << LettersRemaining << Default << endl;
            // step 8: display GuessPhrase
            cout << "Phrase to guess:   " << GuessPhrase << endl;
            // step 9: ask user to enter a letter
            cout << "Enter a letter: ";
            cin >> Letter;
            cout << " " << endl << endl;
            int found = LettersRemaining.find(Letter, 0);
            if (found != -1)
                LettersRemaining.replace(found,1," ");
            // step 10: replace letter into GuessPhrase
            Location = SecretPhrase.find(Letter, 0);
            if (Location > SecretPhrase.size())
                BadGuesses++;
            else
                while (Location < SecretPhrase.size())
            {
                GuessPhrase.replace(Location, 1, Letter);
                Location = SecretPhrase.find(Letter, Location + 1);
            }
        cout << CLS;
        } // end game loop
        // step 11: - winning and losing screens
        if (GuessPhrase == SecretPhrase) // winner!
        {
            cout << " " << endl << endl;
            cout <<" " << endl << endl << endl;
            cout <<" " << endl << endl << endl;
            cout <<Blue <<" _._ _ _ _     \n";
            cout <<"| _______ |     \n";
            cout <<"||,-----.||             "<< Red <<"WINNER!!!!   \n" << Blue;
            cout <<"|||     |||             Gotta catch em all!  \n";
            cout <<"|||_____|||     \n";
            cout <<"|`-------'| hjw     \n";
            cout <<"| +     O | `97     \n";
            cout <<"|      O  |     \n";
            cout <<"| / /  ##,\"     \n";
            cout <<" `------\"     \n";

            cout <<"                   ,     \n";
            cout <<"               \\  :  /     \n";
            cout <<"            `. __/ \\__ .'     \n";
            cout <<"            _ _\\     /_ _     \n";
            cout <<"               /_   _\\     \n";
            cout <<"             .'  \\ /  `.     \n";
            cout <<"               /  :  \\    hjw     \n";
            cout <<"                  '     " << endl << endl;
        }
        else // loser!
        {
            cout << " " << endl << endl;
            cout <<" " << endl << endl << endl;
            cout << "lost \n";
            cout << ">.< \n";
            cout << Yellow <<"        _ _---_ _     \n";
            cout <<"      .--         --.     \n";
            cout <<"    ./   ()      .-. \\.    "<< Default << "Better luck next time! \n" << Yellow;
            cout <<"   /   o    .   (   )  \\     \n";
            cout <<"  / .            '-'    \\     \n";
            cout <<" | ()    .  O         .  |      \n";
            cout <<"|                         |     \n";
            cout <<"|    o           ()       |     \n";
            cout <<"|       .--.          O   |     \n";
            cout <<" | .   |    |            |     \n";
            cout <<"  \\    `.__.'    o   .  /      \n";
            cout <<"   \\                   /      \n";
            cout <<"    `\\  o    ()      /' JT/jgs      \n";
            cout <<"      `--___   ___--'     \n";
            cout <<"            ---     " << Default << endl << endl << endl;
        }
        }

 }

void IntroScreen()
{
    cout <<Yellow <<"                                  ,'\\     \n";
    cout <<"    _.----.        _ _          ,'  _\\   _ _    _ _      _ _   \n";
    cout <<"_,-'       `.     |    |  /`.   \\,-'    |   \\  /   |   |    \\  |`.    \n";
    cout <<"\\      __    \\    '-.  | /   `.  ___    |    \\/    |   '-.   \\ |  |    \n";
    cout <<" \\.    \\ \\   |  __  |  |/    ,','_  `.  |          | __  |    \\|  |    \n";
    cout <<"   \\    \\/   /,' _`.|      ,' / / / /   |          ,' _`.|     |  |    \n";
    cout <<"    \\     ,-'/  /   \\    ,'   | \\/ / ,`.|         /  /   \\  |     |    \n";
    cout <<"     \\    \\ |   \\_/  |   `-.  \\    `'  /|  |    ||   \\_/  | |\\    |    \n";
    cout <<"      \\    \\ \\      /       `-.`.___,-' |  |\\  /| \\      /  | |   |    \n";
    cout <<"       \\    \\ `.__,'|  |`-._    `|      |__| \\/ |  `.__,'|  | |   |    \n";
    cout <<"        \\_.-'       |__|    `-._ |              '-.|     '-.| |   |    \n";
    cout <<"                                `'                            '-._|    \n" << Default;
    cout <<".         _  .          .          .    +     .          .          .      .   \n";
    cout <<"        .(_)          .            .            .            .       :   \n";
    cout <<"        .   .      .    .     .     .    .      .   .      . .  .  -+-        .   \n";
    cout <<"          .           .   .        .           .          /         :  .   \n";
    cout <<"    . .        .  .      /.   .      .    .     .     .  / .      . ' .   \n";
    cout <<"        .  +       .    /     .          .          .   /      .   \n";
    cout <<"       .            .  /         .            .        *   .         .     .   \n";
    cout <<"      .   .      .    *     .     .    .      .   .       .  .   \n";
    cout <<"          .           .           .           .           .         +  .   \n";
    cout <<"  . .        .  .       .   .      .    .     .     .    .      .   .   \n";
    cout <<"   \n";
    cout <<" .   +      .          ___/\_._/~~\_...__/\__.._._/~\        .         .   .   \n";
    cout <<"       .          _.--'                              `--./\          .   .   \n";
    cout <<"           /~~\/~\                                         `-/~\_            .   \n";
    cout <<" .      .-'                                                      `-/\_   \n";
    cout <<"  _/\.-'                                                          __/~\/\-.__   \n";
    cout <<".'                                                                           `.dp   \n";
    cout << "Press <Enter> to Begin\n";
    cin.ignore();
}


