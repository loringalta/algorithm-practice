def fib(n):
	a, b = 0, 1
	sum = 0
	while b < n:
		a, b = b, a+b
		if b%2==0:
			sum +=  b
			print b,
	
	print 'sum', sum,
fib(100)