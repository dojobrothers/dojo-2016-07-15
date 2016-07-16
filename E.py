#!/usr/bin/python
for _ in xrange(input()):
	print 'Acertou' if eval(raw_input().replace('=','==')) else 'Errou', 'Miseravi!'
