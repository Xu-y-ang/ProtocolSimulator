﻿#ifndef HTTPRESPONSEMANAGER_GLOBAL_H
#define HTTPRESPONSEMANAGER_GLOBAL_H

#include <QtCore/qglobal.h>

#if defined(HTTPRESPONSEMANAGER_LIBRARY)
#  define HTTPRESPONSEMANAGERSHARED_EXPORT Q_DECL_EXPORT
#else
#  define HTTPRESPONSEMANAGERSHARED_EXPORT Q_DECL_IMPORT
#endif

#endif // HTTPRESPONSEMANAGER_GLOBAL_H
