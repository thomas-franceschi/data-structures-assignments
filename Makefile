MEASURE=	common/measure
BRANCH=		$(shell git branch --no-color 2> /dev/null | sed -e '/^[^*]/d' -e 's/* \(.*\)/\1/')

all:

$(MEASURE):	$(MEASURE).c
	@make -s -C common

test:		$(MEASURE)
	@[ "$(BRANCH)" = "master" ] \
	    || (echo "$(BRANCH)" | grep -q reading) \
	    || { [ -f "$(BRANCH)/solution.cpp" ] && (echo "Testing $(BRANCH)" && cd $(BRANCH) && make -s test) }
