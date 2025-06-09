CXX := g++

libaudiofile.a: audiofile.o
	$(AR) rcs $@ $^

audiofile.o: audiofile.cpp audiofile.h aupvlist.h
	$(CXX) -std=gnu++11 -O2 -I. -c $< -o $@

clean:
	$(RM) audiofile.o libaudiofile.a

.PHONY: clean
