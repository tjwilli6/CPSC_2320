import math

#By default: epsilon = 1e-5
#This means that the two numbers are within 0.001% of each other
def is_equal(a,b,eps=1e-5):
    diff = math.fabs(a-b)
    rel_err1 = math.fabs(diff/a)
    rel_err2 = math.fabs(diff/b)
    if rel_err1 < eps and rel_err2 < eps:
        return True
    else:
        return False



a = 1/100
b = 5
print(is_equal(a,b))
    
