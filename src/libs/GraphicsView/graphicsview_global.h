﻿#ifndef GRAPHICSVIEW_GLOBAL_H
#define GRAPHICSVIEW_GLOBAL_H

#include <QtCore/qglobal.h>

#if defined(GRAPHICSVIEW_LIBRARY)
#  define GRAPHICSVIEWSHARED_EXPORT Q_DECL_EXPORT
#else
#  define GRAPHICSVIEWSHARED_EXPORT Q_DECL_IMPORT
#endif

#endif // HTTPRESPONSEMANAGER_GLOBAL_H
