#include <iostream>
#include <string>
#include <vector>

class questions
{
private:
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
public:
    questions(/* args */);
    ~questions();

    int getID();

    int getScore();

    bool getDescription();

    bool getAnswer();

    bool getAnalysis();

    int setyourScore();

    bool writeyourAnswer();
};


