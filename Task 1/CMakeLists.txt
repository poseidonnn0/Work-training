cmake_minimum_required(VERSION 3.15) 
set(PROJECT_NAME Task_1)        # имя проекта		 
project("${PROJECT_NAME}")


set(CMAKE_CXX_STANDARD 17)			 # устанавливаем 17 стандарт языка
set(CMAKE_CXX_EXTENSIONS OFF)
set(CMAKE_CXX_STANDARD_REQUIRED TRUE)


add_definitions(-DSFML_STATIC)		 # дефайны
include_directories("inc/")
include_directories("src/")

add_executable("${PROJECT_NAME}" Task_1.cpp
								inc/Employes.hpp
								src/Employes.cpp
								inc/Staff.hpp
								src/Staff.cpp
)

file(COPY "Employes.dat" DESTINATION "/") #Копируем файл с данными о сотрудниках