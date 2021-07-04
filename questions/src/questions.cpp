#include "questions.h"

int questions::getID() {
    return this->id;
}

int questions::getScore() {
    return this->score;
}

bool questions::getDescription() {
    if (this->analysis.empty())
        return false;
    for (auto i : this->description)
        cout << i << endl;
    return true;
}

string questions::getAnswer() {
    return this->answer;
}

bool questions::getAnalysis() {
    if (this->analysis.empty())
        return false;
    for (auto i : this->analysis)
        cout << i << endl;
    return true;
}

int questions::yourScore() {
    if (this->your_answer.empty())
        return 0;
    else if ( this->answer == this->your_answer)
        return this->score;
}

bool questions::writeyourAnswer() {
    string str;
    vector<string> ans;
    while (cin >> str)
        if (!str.empty())
            ans.push_back(str);
    
    if (ans.empty())
        return false;
    this->your_answer = ans;
    return true;
}
