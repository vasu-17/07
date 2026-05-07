FROM handsonsecurity/seed-server:apache-php

COPY bash_shellshock /bin/
COPY index.cgi source.txt copy_file.c copy_file readme.txt /usr/lib/cgi-bin/
COPY server_name.conf  /etc/apache2/sites-available
RUN apt-get update
RUN apt-get -y install python3
RUN apt-get -y install curl
RUN apt-get -y install gcc gdb
RUN apt-get -y install gcc-multilib
RUN  chmod 755 /bin/bash_shellshock \
     && chmod 755 /usr/lib/cgi-bin/*.cgi  \
     && chown root /usr/lib/cgi-bin/copy_file \
     && chmod 4755 /usr/lib/cgi-bin/copy_file \
     && chmod 644 /usr/lib/cgi-bin/copy_file.c \
     && chmod 666 /usr/lib/cgi-bin/readme.txt \
     && chmod 666 /usr/lib/cgi-bin/source.txt \
     && a2ensite server_name.conf  

CMD service apache2 start && tail -f /dev/null


