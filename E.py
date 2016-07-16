#!/usr/bin/python

def process_line(line):
  	if eval(line.replace('=','==')):
  		print 'Acertou miseravi'
  	else:
  		print 'Errou miseravi'

if __name__ == '__main__':
	n = input()
    process_line(n)