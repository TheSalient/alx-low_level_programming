#!/usr/bin/python3

def is_pal(s):
	return int(str(s)[::-1]) == s

max_pal = 0
for i in range(999, 99, -1):
	for j in range(999, 99, -1):
		c = i * j
		if is_pal(c) and c > max_pal:
			max_pal = c

print(max_pal)