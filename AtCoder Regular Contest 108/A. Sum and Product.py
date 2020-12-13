import math
a, b = map(int, input().split())
d = a * a - 4 * b
root = math.sqrt(d)
if int(root) * int(root) == d:
  print("Yes")
else:
  print("No")
