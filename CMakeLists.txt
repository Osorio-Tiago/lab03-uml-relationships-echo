cmake_minimum_required(VERSION 3.14)
project(basic-00-example)

set(CMAKE_CXX_STANDARD 17)
add_executable(sample Paciente.cpp Paciente.h PlanAlimentos.cpp PlanAlimentos.h PacienteSano.cpp PacienteSano.h PacienteDiabetico.cpp PacienteDiabetico.h PlanAlimentos.cpp PlanAlimentos.h Alimento.cpp Alimento.h)