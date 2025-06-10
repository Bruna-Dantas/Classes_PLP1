# Nome do executável final
TARGET = programa

# Compilador e flags
CXX = g++
CXXFLAGS = -Wall -Wextra -std=c++11

# Arquivos fonte
SRCS = main.cpp Funcionario.cpp Desenvolvedor.cpp Gerente.cpp Estagiario.cpp

# Arquivos objeto (automaticamente convertidos de SRCS)
OBJS = $(SRCS:.cpp=.o)

# Regra padrão (build final)
all: $(TARGET)

# Linkagem final do executável
$(TARGET): $(OBJS)
	$(CXX) $(CXXFLAGS) -o $@ $^

# Como compilar cada .cpp em .o
%.o: %.cpp
	$(CXX) $(CXXFLAGS) -c $< -o $@

# Comando para limpar os arquivos de build
clean:
	rm -f *.o $(TARGET)
