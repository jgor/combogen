<pre>
DESCRIPTION:
The Master Lock brand 40-digit dial combination lock can be decoded from its
64,000 possible combinations (40^3) down to 80 possible combinations. You can
mechanically find the last digit of the combination, which combogen uses to
calculate those 80 potential combinations. In order to find the last digit of
the correct combination, start the dial at 0 and pull out firmly on the
shackle, then begin rotating the dial and feeling for areas where the wheel
seems to stick. The wheel will stick at 12 different points around the dial and
move between approximately two digits at each of these sticking points. Record
the central number at each of these 12 sticking points. For example, if the
dial sticks at one point between 3 and 4, record the number 3.5. If the dial
sticks between 11.5 and 12.5, record 12. When all the numbers are recorded you
should have 7 half-digits (e.g. 3.5) and 5 whole digits (e.g. 12). Discard the
7 half-digits. Of the remaining numbers, 4 should share the same last digit
(e.g. 8, 18, 28, 38) and the fifth number should be unrelated (e.g. 12).
Discard the four related numbers and you are left with the last digit of the
correct combination. Plug this number into combogen to generate the 80 possible
combinations.


COMPILE:
Run "make" within the combogen directory to compile the program.
$ make


USAGE:
Run combogen from the command line. It will prompt for you to input the third
digit of the combination:

$ ./combogen
Last Digit: 10
Possible Combinations:
02-04-10  02-04-10  02-04-10  02-04-10  
02-04-10  02-04-10  02-04-10  02-04-10  
02-04-10  02-04-10  14-16-10  14-16-10  
14-16-10  14-16-10  14-16-10  14-16-10  
14-16-10  14-16-10  14-16-10  14-16-10  
18-20-10  18-20-10  18-20-10  18-20-10  
18-20-10  18-20-10  18-20-10  18-20-10  
18-20-10  18-20-10  22-24-10  22-24-10  
22-24-10  22-24-10  22-24-10  22-24-10  
22-24-10  22-24-10  22-24-10  22-24-10  
26-28-10  26-28-10  26-28-10  26-28-10  
26-28-10  26-28-10  26-28-10  26-28-10  
26-28-10  26-28-10  30-32-10  30-32-10  
30-32-10  30-32-10  30-32-10  30-32-10  
30-32-10  30-32-10  30-32-10  30-32-10  
34-36-10  34-36-10  34-36-10  34-36-10  
34-36-10  34-36-10  34-36-10  34-36-10  
34-36-10  34-36-10  38-00-10  38-00-10  
38-00-10  38-00-10  38-00-10  38-00-10  
38-00-10  38-00-10  38-00-10  38-00-10  


AUTHOR:
John Gordon <jgor@indiecom.org>
</pre>
