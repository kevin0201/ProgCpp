TEMPLATE = app
TARGET = BibliographieQt
QT += core \
    gui
HEADERS += ajoutsousmenu.h \
    dialogsuppression.h \
    dialogajouterreference.h \
    supprimerreference.h \
    ajoutouvrage.h \
    ajoutjournal.h \
    bibliographieqt.h
SOURCES += ajoutsousmenu.cpp \
    dialogsuppression.cpp \
    dialogajouterreference.cpp \
    supprimerreference.cpp \
    ajoutouvrage.cpp \
    ajoutjournal.cpp \
    main.cpp \
    bibliographieqt.cpp
FORMS += ajoutsousmenu.ui \
    dialogsuppression.ui \
    dialogajouterreference.ui \
    supprimerreference.ui \
    ajoutouvrage.ui \
    ajoutjournal.ui \
    bibliographieqt.ui
RESOURCES += 
LIBS += "../source/Debug/libsource.a"
INCLUDEPATH += "../source/."
