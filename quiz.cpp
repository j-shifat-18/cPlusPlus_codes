#include <iostream>

int main()
{
    std::string questions[] = {"1. What is the holy book of Islam?",
                               "2. Who is considered the final prophet in Islam?",
                               "3. Which of the following is one of the Five Pillars of Islam?",
                               "4. What is the term for the daily prayers that Muslims are required to perform?",
                               "5. What is the Arabic term for the pilgrimage to Mecca that Muslims must undertake at least once in their lifetime if they are able?",
                               "6. During which month do Muslims fast from dawn until sunset?",
                               "7. What is the term for the charitable giving that Muslims are required to perform?",
                               "8. What is the first pillar of Islam, which involves the declaration of faith?",
                               "9. Which angel is said to have revealed the Quran to Prophet Muhammad?",
                               "10. What is the term for the community of Muslims worldwide?"};

    std::string options[][4] = {{"a) The Bible", "b) The Torah", "c) The Quran", "d) The Vedas"},
                                {"a) Prophet Adam", "b) Prophet Ibrahim", "c) Prophet Isa", "d) Prophet Muhammad"},
                                {"a) Zakat (charitable giving)", "b) Nirvana", "c) Karma", "d) Reincarnation"},
                                {"a) Hajj", "b) Salah", "c) Sawm", "d) Jihad"},
                                {"a) Umrah", "b) Hajj", "c) Zakat", "d) Salah"},
                                {"a) Shawwal", "b) Muharram", "c) Rajab", "d) Ramadan"},
                                {"a) Sawm", "b) Zakat", "c) Salah", "d) Hajj"},
                                {"a) Salah", "b) Sawm", "c) Shahada", "d) Hajj"},
                                {"a) Jibril (Gabriel)", "b) Mikail (Michael)", "c) Israfil (Raphael)", "d) Azrael"},
                                {"a) Ummah", "b) Jamaat", "c) Qibla", "d) Sunnah"}};

    char answerkey[] = {'C', 'D', 'A', 'B', 'B', 'D', 'B', 'C', 'A', 'A'};

    int size = sizeof(questions) / sizeof(questions[0]);
    char guess;
    int score = 0;

    for (int i = 0; i < size; i++)
    {
        std::cout << "**********************\n";
        std::cout << questions[i] << "\n";
        std::cout << "**********************\n";

        for (int j = 0; j < sizeof(options[i]) / sizeof(options[i][0]); j++)
        {
            std::cout << options[i][j] << "\n";
        }

        std::cin >> guess;
        guess = toupper(guess);

        if (guess == answerkey[i])
        {
            std::cout << "CORRECT.\n";
            score++;
        }
        else
        {
            std::cout << "INCORRECT.\nRight anwer:" << answerkey[i] << "\n";
        }
    }

    std::cout << "\n\n";
    std::cout << "**********************\n";
    std::cout << "*    RESULTS         *\n";
    std::cout << "**********************\n";
    std::cout << "Correct answer : " << score << "\n";
    std::cout << "# of QUESTIONS : " << size << "\n";
    std::cout << "SCORE : " << (score / (double)size) * 100 << " %";

    return 0;
}