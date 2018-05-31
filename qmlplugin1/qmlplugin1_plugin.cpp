#include "qmlplugin1_plugin.h"
#include "myitem.h"
#include <qqml.h>

#include <QDebug>

Qmlplugin1Plugin::Qmlplugin1Plugin(QObject *parent)
    : QQmlExtensionPlugin(parent)
{
    Q_INIT_RESOURCE(resource);
}

void Qmlplugin1Plugin::registerTypes(const char *uri)
{
    // @uri com.mycompany.qmlcomponents
    qmlRegisterType<MyItem>(uri, 1, 0, "MyItem");

    qmlRegisterType(QUrl("qrc:/qml/JButton.qml"), uri, 1, 0, "JButton");

    qDebug() << "helloworld";
}

void Qmlplugin1Plugin::initializeEngine(QQmlEngine *engine, const char *uri)
{
    QQmlExtensionPlugin::initializeEngine(engine, uri);

    //
}

