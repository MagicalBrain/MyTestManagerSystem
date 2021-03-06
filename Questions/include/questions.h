#pragma once
#include <iostream>
#include <string>
#include <vector>

using namespace std;
using std::string;
using std::vector;

class questions
{
private:
    
public:
    /// @brief the number of this question.
    int id;
    /// @brief the full score of this question.
    int score;
    /// @brief the description of this question.
    vector<string> description;
    /// @brief the answer of this question.
    string answer;
    /// @brief the description of this question.
    vector<string> analysis;

    /// @brief the score you can get.
    int your_score;
    /// @brief the answer you write down on your paper.
    vector<string> your_answer;

    questions(/* args */);
    virtual ~questions();

    //因为题号id和题目分值score都是一样的设置和修改，所以不用写成虚函数
    void setID(int id);
    /// @brief get the number of this question.
    int getID();

    /// @brief set the full score of this question.
    void setScore(int score);

    /// @brief get the full score of this question.
    int getScore();

    /// @brief set the Descriptions of this question.
    void setDescription();
    /// @brief set the Descriptions of this question.
    void setDescription(vector<string> description);

    /// @brief get the descriptions of this question.
    bool getDescription();

    /// @brief set the analysis of this question.
    void setAnalysis(vector<string> analysis);

    /// @brief get the analysis of this question.
    bool getAnalysis();

    /// @brief set the answer of this question.
    virtual void setAnswer(string answer) = 0;

    /// @brief get the answer of this question.
    virtual string getAnswer() = 0;

    /// @brief how many points you can get in this question. 算分的。
    virtual int yourScore() = 0;

    /// @brief write down your answer. 读入答案和过程的（如果有过程的话）
    virtual bool writeyourAnswer() = 0;

    /// @brief read your answer. 读取答案和过程的（如果有过程的话）
    virtual bool readyourAnswer() = 0;
};


