count = 0;
print "N="
n = gets.to_i
for i in 2..n
	break if n == 1
	p = (n/i).to_i; count+=1;
	q = i*p
	r = n-q
	next if r != 0
	puts i
	n = p
	redo
end
puts count
