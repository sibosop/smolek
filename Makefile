include $(SMOLEK_ROOT)/Makefile.common

all:
	@for d in $(CPP_DIRS); do cd $$d; $(MAKE) $@; done
	echo $@ done

tests: 
	cd test; $(MAKE)

clean:
	@for d in $(CPP_DIRS); do cd $$d; $(MAKE) $@; done
	echo $@ done	
