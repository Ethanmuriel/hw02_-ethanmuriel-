CXX = g++
# CXX = clang++

CXXFLAGS= -Wall -Wno-uninitialized

BINARIES=distanceBetweenTest initCoordinateTest coordinatesApproxEqualTest boxesApproxEqualTest \
	initBoxTest areaOfBoxTest coordinateToStringTest

COMMON_OBJECTS=tddFuncs.o utility.o shapeFuncs.o

all: ${BINARIES}

tests: ${BINARIES}
	./distanceBetweenTest
	./initCoordinateTest
	./coordinatesApproxEqualTest
	./boxesApproxEqualTest
	./initBoxTest
	./areaOfBoxTest
	./coordinateToStringTest


distanceBetweenTest: distanceBetweenTest.o $(COMMON_OBJECTS)
	$(CXX) $(CXXFLAGS) $(LDFLAGS) $^ -o $@

initCoordinateTest: initCoordinateTest.o $(COMMON_OBJECTS)
	$(CXX) $(CXXFLAGS) $(LDFLAGS) $^ -o $@

coordinatesApproxEqualTest: coordinatesApproxEqualTest.o $(COMMON_OBJECTS)
	$(CXX) $(CXXFLAGS) $(LDFLAGS) $^ -o $@


boxesApproxEqualTest: boxesApproxEqualTest.o $(COMMON_OBJECTS)
	$(CXX) $(CXXFLAGS) $(LDFLAGS) $^ -o $@

areaOfBoxTest: areaOfBoxTest.o $(COMMON_OBJECTS)
	$(CXX) $(CXXFLAGS) $(LDFLAGS) $^ -o $@

initBoxTest: initBoxTest.o $(COMMON_OBJECTS)
	$(CXX) $(CXXFLAGS) $(LDFLAGS) $^ -o $@

coordinateToStringTest: coordinateToStringTest.o $(COMMON_OBJECTS)
	$(CXX) $(CXXFLAGS) $(LDFLAGS) $^ -o $@

clean:
	/bin/rm -f ${BINARIES} *.o
