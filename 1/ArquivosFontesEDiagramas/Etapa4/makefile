all: Testar
Testar: FigBase.o Retangulo.o Circulo.o Segmento.o TesteFiguras3.o
	g++ FigBase.o Retangulo.o Circulo.o Segmento.o TesteFiguras3.o -o Testar
TesteFiguras3.o: TesteFiguras3.cpp
	g++ -c TesteFiguras3.cpp
Segmento.o: Segmento.cpp Segmento.h
	g++ -c Segmento.cpp
Circulo.o: Circulo.cpp Circulo.h
	g++ -c Circulo.cpp
Retangulo.o: Retangulo.cpp Retangulo.h
	g++ -c Retangulo.cpp
FigBase.o: FigBase.cpp FigBase.h
	g++ -c FigBase.cpp
