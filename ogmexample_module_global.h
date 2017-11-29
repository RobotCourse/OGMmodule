#ifndef OGMEXAMPLE_MODULE_GLOBAL_H
#define OGMEXAMPLE_MODULE_GLOBAL_H

#include <QtCore/qglobal.h>

#if defined(OGMEXAMPLE_MODULE_LIBRARY)
#  define OGMEXAMPLE_MODULESHARED_EXPORT Q_DECL_EXPORT
#else
#  define OGMEXAMPLE_MODULESHARED_EXPORT Q_DECL_IMPORT
#endif

#endif // OGMEXAMPLE_MODULE_GLOBAL_H