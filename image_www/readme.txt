Wazzup, Daisy!  I've got some bad news.  The CSO won't
let me give you a higher level of access, so you'll
be stuck using www-data for development.  I know this
was a big pain point because you can't edit the CGI
files for the website.  So, I used Meta AI to help me
write a program that will copy the content of source.txt
into index.cgi.  I didn't really understand what it was
having me write it, but I would trust Mark Zuckerberg 
with both my personal information and my life.  So, it
should be good.  

Your www-data is allowed to edit source.txt, so you can write
your updates there, run ./copy_file in this directory and it will update index.cgi for you! 

Just don't tell the CSO...

P.S. I kept getting an error about 'ld' missing when I
tried compiling.  Stack Overflow said I needed to add
the location of 'ld' to my PATH variable.  I don't know
what that means but my nephew typed 

export PATH=$PATH:/usr/bin/ld 

and it worked.  
