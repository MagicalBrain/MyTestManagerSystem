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

    /// @brief 设置问题的正确选项
    virtual void setAnswer(string answer) override;

    /// @brief 获取问题的正确选项
    virtual string getAnswer() override;

    /// @brief how many points you can get in this question.
    /// @brief 该提得到的分数
    virtual int yourScore() override;

    /// @brief 输入答案
    virtual bool writeyourAnswer() override;

    /// @brief 输出答案
    virtual bool readyourAnswer() override;

   
};


