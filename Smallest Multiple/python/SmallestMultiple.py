#filename	:	Smallest Multiple
#author		:	steaKK

def is_divisible_up_to(n,x) :
	check = 1
	for i in range (2,n) :
		if x%i!=0 :
			check = 0
	return check

def solve() :
	i = 2
	while not is_divisible_up_to(20,i) :
		print(i)
		i+=1
	return i


print(solve())
