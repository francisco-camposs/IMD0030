#makefile para executar os arquivos
#Nome do arquivo
project_name = ex

#Objetos .cpp
cpp_object = Codigos_exercicios.cpp Turma.cpp Aluno.cpp

#Objetos .o
o_objects = Codigos_exercicios.o  Turma.o Aluno.o

#Compilador
cc=g++

# Flags de compilação
cpp_flags = -O0         \
         	-Wall      \
         	-g      \
         	-std=c++11

all: $(project_name)

$(project_name): $(o_objects)
	$(cc) $(cpp_flags) $(o_objects) -o $(project_name)

Codigos_exercicios.o: Codigos_exercicios.cpp
	$(cc) $(cpp_flags) Codigos_exercicios.cpp -c

Turma.o: Turma.cpp
	$(cc) $(cpp_flags) Turma.cpp -c

Aluno.o: Aluno.cpp
	$(cc) $(cpp_flags) Aluno.cpp -c


clean:
	rm -rf *.o