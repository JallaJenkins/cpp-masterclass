#ifndef SCORES_H
#define SCORES_H

#include <string>

class Scores {
  public:
    Scores() = delete;
    Scores(const std::string& course_name_param)
      : course_name(course_name_param){};
    ~Scores() = default;

    double& operator[](size_t index);
    const double& operator[](size_t index) const;

    void print_info() const; 

  private:
    std::string course_name;
    double m_scores[20]{};
};

#endif // SCORES_H