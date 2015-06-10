include $(SMOLEK_ROOT)/Makefile.common




all: depend
	echo $@ done

depend:
	makedepend -- $(CFLAGS) -- $(ENGINE_SRCS)
	echo $@ done