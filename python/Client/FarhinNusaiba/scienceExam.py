class Exam:
    def __init__(self,marks):
        self.marks = marks
        self.time = 60
    def examSyllabus(self):
        return "Maths , English"
    def examParts(self):
        return "Part 1 - Maths\nPart 2 - English\n"

class ScienceExam(object):
    def __init__(self,marks, time, *subjects):
        self.marks = marks
        self.time = time
        self.parts = len(subjects) + 2
        self.subjects = ["Maths" , "English"]+list(subjects)
  

    def __str__(self):
        return f'Marks: {self.marks} Time: {self.time} minutes \n Number of Parts: {self.parts}'

    def examSyllabus(self):
        return "Maths , English, "+ ', '.join(self.subjects) 

    def examParts(self):
        res = []
        for i, j in zip(range(1, len(self.subjects)), self.subjects) :
            sub_text = f'Part {i} - {j}'
            res.append(sub_text)
        return '\n'.join(res)

engineering =ScienceExam(100,90,"Physics","HigherMaths")
print(engineering)
print('----------------------------------')
print(engineering.examSyllabus())
print(engineering.examParts())
print('==================================')

architecture = ScienceExam(100,120,"Physics","HigherMaths",
"Drawing") 
print(architecture)
print('----------------------------------')
print(architecture.examSyllabus())
print(architecture.examParts())