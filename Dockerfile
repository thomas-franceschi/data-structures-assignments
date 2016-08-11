FROM	    ubuntu
MAINTAINER  Charles Shinaver

RUN	    apt-get update -y
RUN	    apt-get install -y g++ valgrind python-dev libboost-all-dev make
