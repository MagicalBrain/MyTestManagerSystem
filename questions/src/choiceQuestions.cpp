#include "../include/choiceQuestions.h"

/*
构造函数
*/
choiceQuestions::choiceQuestions(/* args */) {
    this->id = 0;
    this->score = 0;
    this->choice_num = 0;
}

/*
析构函数
*/
choiceQuestions::~choiceQuestions() {

}

/*
设置正确选项
*/
void choiceQuestions::setAnswer(string answer) {
    this->answer = answer;
}

string choiceQuestions::getAnswer() {
    return this->answer;
}

/// @brief how many points you can get in this question.
int choiceQuestions::yourScore() {
    //注意：this->answer是strnig类型，而this->your_answer是vector<string>类型
    if (this->answer.empty() || this->your_answer.empty())
        return 0;
    else if (this->answer == this->your_answer[0])
        return this->score;
}

bool choiceQuestions::writeyourAnswer() {

}

void choiceQuestions::set_ChoiceNum(int num) {
    this->choice_num = num;
}

/// @brief get choice in this questions. 获取选项的。
int choiceQuestions::get_ChoiceNum() {
    return this->choice_num;
}

void choiceQuestions::setChoice() {
    vector<string> choice_;
    if (this->choice_num == 0) {
        int num;
        cin >> num;
        this->set_ChoiceNum(num);
    }
    else {
        string str;
        for (int i = 0; i < this->get_ChoiceNum(); i++)
        {
            cin >> str;
            choice_.push_back(str);
        }
        this->choice = choice_;
    }
}

bool choiceQuestions::setChoice(vector<string> choice_) {
    if (choice_.size() != this->get_ChoiceNum())
        return false;
    else {
        this->choice = choice_;
        return true;
    }
}