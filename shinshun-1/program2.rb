count = 0
print "N="
n = gets.to_i
a = -1
for i in 2..n
	break if n == 1
	p = (n/i).to_i
	q = i*p
	r = n-q
	next if r != 0
	b = i;	count += 1;
	puts "双子素数" if b == a+2
	puts "#{i} #{a} #{b}"
	a = i
	n = p
	redo
end
