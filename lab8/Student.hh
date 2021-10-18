#include <iostream>
#include <string>
#include <vector>

struct examInfo{
    std::string grade;
    int course_credits;
};

class Student{

public:
    

private:
    // Note:Do not add any other member variables and you must initialize all these.
    // Input
    int stu_id, cur_seme, total_cour_credits;
    char was_passed;
    std::vector<examInfo> exam_vec;

    // Output
    std::string result;
};
