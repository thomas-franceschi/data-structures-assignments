MEASURE=	common/measure
BRANCH?=	$(shell git rev-parse --abbrev-ref HEAD)

all:

$(MEASURE):	$(MEASURE).c
	@make -s -C common

test:		$(MEASURE)
<<<<<<< HEAD
	@[ -f challenge01/solution.cpp ] && (echo "Testing challenge01"; cd challenge01; make -s test)
<<<<<<< HEAD
	#@[ -f challenge02/solution.cpp ] && (echo "Testing challenge02"; cd challenge02; make -s test)
=======
	@[ "$(BRANCH)" = "master" ] \
	    || (echo "$(BRANCH)" | grep -q reading) \
	    || { [ -f "$(BRANCH)/solution.cpp" ] && (echo "Testing $(BRANCH)" && cd $(BRANCH) && make -s test) }
>>>>>>> c273a84f706d03363a26d7d0b4ed9faf3b9f4954
=======
	@[ -f challenge02/solution.cpp ] && (echo "Testing challenge02"; cd challenge02; make -s test)
>>>>>>> 124131bc3954d3b692afa024a631b4188073b3a7
