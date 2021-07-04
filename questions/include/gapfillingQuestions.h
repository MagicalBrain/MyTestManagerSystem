#include "questions.h"

/// @brief 填空题
class gapfillingQuestions : public questions
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
    gapfillingQuestions(/* args */);
    ~gapfillingQuestions();

    virtual void setID(int id) override;
    /// @brief get the number of this question.
    virtual int getID() override;

    virtual void setScore(int score) override;
    /// @brief get the full score of this question.
    virtual int getScore() override;

    virtual void setDescription(vector<string> description) override;
    virtual bool getDescription() override;

    virtual void setAnswer(string answer) override;
    virtual string getAnswer() override;

    virtual void setAnalysis(vector<string> analysis) override;
    virtual bool getAnalysis() override;

    /// @brief how many points you can get in this question.
    virtual int yourScore() override;

    virtual bool writeyourAnswer() override;
};


