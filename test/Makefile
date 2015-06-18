include $(SMOLEK_ROOT)/Makefile.common

TEST_SRCS=pa_devs.cpp pa_sine.cpp pa_maxsines.cpp
TEST_OBJS=$(TEST_SRCS:.cpp=.o)

TESTS=pa_devs pa_sine
all: depend $(TESTS)
	for t in $(TESTS); do ./$$t ; done
	echo $@ done

%.o : %.cpp
	$(CXX) $(CXXFLAGS) -c $<

pa_devs: pa_devs.o
		$(CC) $^ $(LDFLAGS) -o $@ 

pa_sine: pa_sine.o
	$(CC) $^ $(LDFLAGS) -o $@

pa_maxsines: pa_maxsines.o
	$(CC) $^ $(LDFLAGS) -o $@

clean:
	$(RM) $(TESTS) $(TEST_OBJS)

depend:
	makedepend -- $(CXXFLAGS) -- $(TEST_SRCS)
	echo $@ done





# DO NOT DELETE

pa_devs.o: /usr/include/stdio.h /usr/include/sys/cdefs.h
pa_devs.o: /usr/include/sys/_symbol_aliasing.h
pa_devs.o: /usr/include/sys/_posix_availability.h /usr/include/Availability.h
pa_devs.o: /usr/include/AvailabilityInternal.h /usr/include/_types.h
pa_devs.o: /usr/include/sys/_types.h /usr/include/machine/_types.h
pa_devs.o: /usr/include/i386/_types.h
pa_devs.o: /usr/include/sys/_pthread/_pthread_types.h
pa_devs.o: /usr/include/sys/_types/_va_list.h
pa_devs.o: /usr/include/sys/_types/_size_t.h /usr/include/sys/_types/_null.h
pa_devs.o: /usr/include/sys/stdio.h /usr/include/sys/_types/_off_t.h
pa_devs.o: /usr/include/sys/_types/_ssize_t.h /usr/include/secure/_stdio.h
pa_devs.o: /usr/include/secure/_common.h /usr/include/math.h
pa_devs.o: /usr/local/include/portaudio.h
pa_sine.o: /usr/include/stdio.h /usr/include/sys/cdefs.h
pa_sine.o: /usr/include/sys/_symbol_aliasing.h
pa_sine.o: /usr/include/sys/_posix_availability.h /usr/include/Availability.h
pa_sine.o: /usr/include/AvailabilityInternal.h /usr/include/_types.h
pa_sine.o: /usr/include/sys/_types.h /usr/include/machine/_types.h
pa_sine.o: /usr/include/i386/_types.h
pa_sine.o: /usr/include/sys/_pthread/_pthread_types.h
pa_sine.o: /usr/include/sys/_types/_va_list.h
pa_sine.o: /usr/include/sys/_types/_size_t.h /usr/include/sys/_types/_null.h
pa_sine.o: /usr/include/sys/stdio.h /usr/include/sys/_types/_off_t.h
pa_sine.o: /usr/include/sys/_types/_ssize_t.h /usr/include/secure/_stdio.h
pa_sine.o: /usr/include/secure/_common.h /usr/include/math.h
pa_sine.o: /usr/local/include/portaudio.h
pa_maxsines.o: /usr/include/stdio.h /usr/include/sys/cdefs.h
pa_maxsines.o: /usr/include/sys/_symbol_aliasing.h
pa_maxsines.o: /usr/include/sys/_posix_availability.h
pa_maxsines.o: /usr/include/Availability.h
pa_maxsines.o: /usr/include/AvailabilityInternal.h /usr/include/_types.h
pa_maxsines.o: /usr/include/sys/_types.h /usr/include/machine/_types.h
pa_maxsines.o: /usr/include/i386/_types.h
pa_maxsines.o: /usr/include/sys/_pthread/_pthread_types.h
pa_maxsines.o: /usr/include/sys/_types/_va_list.h
pa_maxsines.o: /usr/include/sys/_types/_size_t.h
pa_maxsines.o: /usr/include/sys/_types/_null.h /usr/include/sys/stdio.h
pa_maxsines.o: /usr/include/sys/_types/_off_t.h
pa_maxsines.o: /usr/include/sys/_types/_ssize_t.h
pa_maxsines.o: /usr/include/secure/_stdio.h /usr/include/secure/_common.h
pa_maxsines.o: /usr/include/math.h /usr/local/include/portaudio.h
