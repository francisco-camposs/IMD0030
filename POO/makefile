# Meu Primeiro make file
# Nome do projeto
project_name=ex

# Arquivos .cpp
cpp_archives= *.cpp

# Arquivos .h
h_archives= aluno.h

# Arquivos .o
o_archives = main.o aluno.o

# Compilador
cc=g++

# flags/ etiquetas para o Compilador
CC_FLAGS=-O0         \
         -Wall      \
         -g      \
         -std=c++11

all: $(project_name)

$(project_name): $(o_archives)
	$(cc) $(CC_FLAGS) $(o_archives) -o $(project_name)

main.o: main.cpp
	$(cc) $(CC_FLAGS) main.cpp -c

aluno.o: aluno.cpp
	$(cc) $(CC_FLAGS) aluno.cpp -c


clean:
	rm -rf *.o