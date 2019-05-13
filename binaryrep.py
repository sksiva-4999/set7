import re
d=input()
if re.findall("[a-zA-z2-9]",d):
    print("no")
else:
    print("yes")
