import QtQuick 2.14
import QtQuick.Window 2.14

Window {
    id:root
    width: screen.width
    height: screen.height
    visible: true
    visibility: "Maximized"
    title: qsTr("Temple Project")
    SevaBookingUI{}

}
