CC = g++

CFLAGS := $(CFLAGS) -g -Wall -fmessage-length=0 -std=c++11

OBJS =	Test.o \
	TestSmartPtr.o \
	TestTS.o

%.o: %.cpp
	$(CC) $(CFLAGS) -c $< -o $@
	
LIBS =
		
TARGETS=Test TestSmartPtr TestTS
		
all: $(OBJS) $(TARGETS)

Test: Test.o
	$(CXX) -o Test Test.o $(LIBS)

TestSmartPtr: TestSmartPtr.o
	$(CXX) -o TestSmartPtr TestSmartPtr.o $(LIBS)
#	$(CC) -o $@ $^ $(CFLAGS) $(LDFLAGS)
	
TestTS: TestTS.o
	$(CC) -o $@ $^ $(CFLAGS) $(LDFLAGS)

clean:
	rm -f $(OBJS) $(TARGETS)
