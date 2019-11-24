include ../Makeinclude

OPT_FLAGS				= -O0
CPPFLAGS					= $(OPT_FLAGS) $(STANDARD_FLAGS) \
								$(WARN_AS_ERRORS_FLAGS) $(DEBUG_FLAGS)

VPATH = src

INCLUDES = -Iinclude

SRC = Source.cpp

OBJS := $(SRCS:%.cpp=%.o)

BIN_DIR := bin
LIB_DIR := -Llib

LIBS =	-lgtest \
			-lgtest_main \
			-lstdc++ \
			-lpthread
.PHONY all:
all: Source.o

.cpp.o:
	$(CXX) $(CPPFLAGS) $(INCLUDES) $< -o $@ $(LIB_DIR) $(LIBS)


.PHONY: clean
clean:
	rm -rf *.o