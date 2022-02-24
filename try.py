import this
from unicodedata import name

class Contributor:
    name = ''
    skils = {}

    def __init__(self) -> None:
        pass
    
    def set_name(self, name):
        this.name = name
    
    def set_skills(self, skills):
        this.skills = skills

class Project:
    name = ''
    roles = {}
    deadline = 0
    profit = 0
    best_day = 0

    def __init__(self) -> None:
        pass

    def set_name(self, name):
        this.name = name
    
    def set_roles(self, roles):
        this.roles = roles
    
    def set_deadline(self, deadline):
        this.deadline = deadline
    
    def set_profit(self, profit):
        this.profit = profit
    
    def set_best_day(self, best_day):
        this.best_day = best_day

    def check_feasability(contributors):
        pass      



def convert_input(contributors):
    with open('a_an_example_dummy.txt') as f:
        lines = f.readlines()
    
    for line in lines:
        line = line.split('\n')[0]
    pass

def main():
    contributors = []
    projects = []
    convert_input(contributors, projects)

if __name__ == "__main__":
    main()