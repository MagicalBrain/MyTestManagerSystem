#include "../include/questions.h"

/*
构造函数
*/
questions::questions(/* args */) {
    
}

/*
析构函数
*/
questions::~questions() {

}

int questions::getID() {
    return this->id;
}

int questions::getScore() {
    return this->score;
}

bool questions::getDescription() {
    if (this->description.empty())
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
    //注意：this->answer是strnig类型，而this->your_answer是vector<string>类型
    if (this->your_answer.empty())
        return 0;
    else if (this->answer == this->your_answer[0])
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

bool questions::readyourAnswer() {
    if (this->your_answer.empty())
        return false;
    for (auto i : this->your_answer) 
        cout << i << endl;
    return true;
}