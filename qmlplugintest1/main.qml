import QtQuick 2.10
import QtQuick.Window 2.10
import com.mycompany.qmlcomponents 1.0

Window {
    visible: true
    width: 640
    height: 480
    title: qsTr("Hello World")

    JButton {
        id: button1
        text: myName
    }

    MyItem {

    }
}
