######################################################################
# Automatically generated by qmake (3.1) Wed Nov 21 16:07:06 2018
######################################################################

TEMPLATE = app
TARGET = Proyecto
QT += core gui widgets
INCLUDEPATH += include
LIBS += -L"lib" -lcassandra
CONFIG += console

# The following define makes your compiler warn you if you use any
# feature of Qt which has been marked as deprecated (the exact warnings
# depend on your compiler). Please consult the documentation of the
# deprecated API in order to know how to port your code away from it.
DEFINES += QT_DEPRECATED_WARNINGS

# You can also make your code fail to compile if you use deprecated APIs.
# In order to do so, uncomment the following line.
# You can also select to disable deprecated APIs only up to a certain version of Qt.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

# Input
HEADERS += adminalumno.h \
           adminclase.h \
           adminempleado.h \
           adminlicencia.h \
           adminprofesor.h \
           Alumno.h \
           Categoria.h \
           Clase.h \
           ClasePractica.h \
           ClaseTeorica.h \
           Database.h \
           Empleado.h \
           Instancia.h \
           mainwindow.h \
           Pago.h \
           Profesor.h \
           PruebaPractica.h \
           PruebaTeorica.h \
           TipoLicencia.h \
           Vehiculo.h
FORMS += adminalumno.ui \
         adminclase.ui \
         adminempleado.ui \
         adminlicencia.ui \
         adminprofesor.ui \
         mainwindow.ui
SOURCES += adminalumno.cpp \
           adminclase.cpp \
           adminempleado.cpp \
           adminlicencia.cpp \
           adminprofesor.cpp \
           Alumno.cpp \
           Categoria.cpp \
           Clase.cpp \
           ClasePractica.cpp \
           ClaseTeorica.cpp \
           Database.cpp \
           Empleado.cpp \
           Instancia.cpp \
           main.cpp \
           mainwindow.cpp \
           Pago.cpp \
           Profesor.cpp \
           PruebaPractica.cpp \
           PruebaTeorica.cpp \
           TipoLicencia.cpp \
           Vehiculo.cpp
