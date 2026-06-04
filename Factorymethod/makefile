CXX = g++
CXXFLAGS = -Wall -std=c++11 -Iinclude

SRC = EmailNotificacao.cpp \
      SMSNotificacao.cpp \
      FabricaEmail.cpp \
      FabricaSMS.cpp \
      main.cpp

OBJ = $(SRC:.cpp=.o)

EXEC = notificacoes

all: $(EXEC)

$(EXEC): $(OBJ)
	$(CXX) $(OBJ) -o $(EXEC)

%.o: %.cpp
	$(CXX) $(CXXFLAGS) -c $< -o $@

clean:
	del /Q *.o src\*.o notificacoes.exe 2>nul