/// Best To create class for 
#include<bits/stdc++.h>
using namespace std;


class person
{
    public:
    string name;
    int num_skill;

    vector<unordered_map<string,int>> skills;
    unordered_map<string,int> skill;
    

    person()
    {
        name = "bonny";
        num_skill = 0;
    }

    person(string selfname,int numskills)
    {

        name = selfname;
        num_skill = numskills;

    }

    void addSkils()
    {
        string skillName;
        int skillLevel;
        for(int i = 0; i < num_skill ; i++)
        {
            cin>>skillName>>skillLevel;
            skill[skillName] = skillLevel;
            skills.push_back(skill);
        }
    }

};

int main()
{

    person list[3];

    for(int i = 0;i < 3 ; i++)
    {
        list[i]  =  person("Hello",i);
    }
    list[1].addSkils();

}
