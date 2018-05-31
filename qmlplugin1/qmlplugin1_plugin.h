#pragma once

#include <QQmlExtensionPlugin>

class Qmlplugin1Plugin : public QQmlExtensionPlugin
{
    Q_OBJECT
    Q_PLUGIN_METADATA(IID QQmlExtensionInterface_iid)

public:
    Qmlplugin1Plugin(QObject *parent = nullptr);
    void registerTypes(const char *uri) override;
    void initializeEngine(QQmlEngine *engine, const char *uri) override;
};
