#ifndef GAMELIBRARY_H
#define GAMELIBRARY_H

#include <QDir>
#include <QDirIterator>
#include <QFile>
#include <QMessageBox>
#include <QObject>
#include <QVector>
#include <QtConcurrent>
#include "titleinfo.h"
#include "libraryentry.h"

class GameLibrary : public QObject {
  Q_OBJECT
 public:
  explicit GameLibrary(QObject* parent = nullptr);
  ~GameLibrary();

  void init(const QString& path, bool checked);
  void offline(bool checked);
  void process(QByteArray qbyteArray);
  bool load(QString filepath);
  bool save(QString filepath);

  QString baseDirectory;
  QVector<LibraryEntry*> library;
  QMap<QString, TitleInfo*> database;

  static GameLibrary* self;

 signals:
	 void changed(LibraryEntry*);
	 void addTitle(LibraryEntry*);
	 void log(QString msg, bool verbose);
	 void progress(quint32 min, quint32 max);

 public slots:
};

#endif  // GAMELIBRARY_H
