TARGET = programa

CXX = g++
CXXFLAGS = -Wall -Wextra -std=c++11

SRCS = main.cpp Funcionario.cpp Desenvolvedor.cpp Gerente.cpp Estagiario.cpp

OBJS = $(SRCS:.cpp=.o)

all: $(TARGET)

$(TARGET): $(OBJS)
	$(CXX) $(CXXFLAGS) -o $@ $^

%.o: %.cpp
	$(CXX) $(CXXFLAGS) -c $< -o $@

clean:
	rm -f *.o $(TARGET)
