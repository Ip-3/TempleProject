import QtQuick 2.14
import QtQuick 2.0
import QtQuick 2.2
import QtQml 2.0
import QtQml 2.15
import QtQuick.Window 2.14
import QtQuick 2.15
import Qt.labs.qmlmodels 1.0
import QtQuick.Layouts 1.15
import QtQuick.Controls
import QtQuick.Controls 2.0
import QtQuick.Controls 2.1
import QtQuick.Controls 2.2
import QtQuick.Controls 2.3
import QtQuick.Controls 2.4
import QtQuick.Controls 2.5
//import QtQuick.Controls 2.12
//import QtQuick.Controls 1.4 as Datepicker
import QtQml.Models 2.15
import QtQml.Models 2.2
import Qt.labs.platform 1.0
//import Qt.labs.calendar 1.0


Item {
    //        property Stringlist stringlistelements: propertyvar.sevalist
    id:item01
    //    Datepicker.Calendar {
    //        width: 200
    //        height:200
    //        id:dpcalendar
    //        visible: false
    //        z:10
    ////        minimumDate: new Date(2000, 0, 1)
    ////        maximumDate: new Date(2035, 0, 1)
    //    }
    property bool clickk :false
    property bool clickk2 :false
    property var locale: Qt.locale()
    property date currentDate: new Date()
    property string dateString
    Rectangle
    {
        id:mainRectangle
        width: root.width
        height: root.height
        Row
        {
            id:mainRow
            spacing: 20

            Rectangle{
                id:rowRectangle01
                width:root.width/4
                height: root.height
                color: "#ffffff"

                //                Rectangle
                //                {
                //                    id:dropdownRectangle
                //                    width:rowRectangle01.width-10
                //                    height: rowRectangle02.height-10
                //                    anchors.centerIn: parent
                //                    //                        anchors.left: root.left
                //                    color: "#efd3f9"
                //                    ComboBox {
                //                        id:sevatextdropdown
                //                        editable: true
                //                        width:dropdownRectangle.width

                //                        model: propertyvar.sevalist

                //                        onCurrentValueChanged:
                //                        {

                //                            propertyvar.datafromqml(sevatextdropdown.currentValue)
                //                            sevanameop.text = sevatextdropdown.currentValue
                //                        }
                //                    }
                //                    ComboBox {
                //                        id:sevatextdropdown2
                //                        editable: true
                //                        width:dropdownRectangle.width
                //                        anchors.top: sevatextdropdown.bottom
                //                        model: propertyvar.sevalistdatatoqml
                //                        onCurrentValueChanged:
                //                        {

                //                            //                            propertyvar.setSevalistdatatoqml(sevatextdropdown2.currentValue)
                //                            sevanameop.text = sevatextdropdown2.currentValue
                //                        }
                //                    }

                //                }
                //            }
                Rectangle
                {
                    id:dropdownRectangle
                    width:rowRectangle01.width-10
                    height: rowRectangle02.height-10
                    anchors.centerIn: parent
                    border.width: 2
                    border.color: "#ac39d1"
                    color: "#efd3f9"
                    Text{
                        id:svtp
                        text:"----------Select Seva Type----------"
                        anchors.top: parent.top
                        anchors.topMargin: 5
                        anchors.horizontalCenter: parent.horizontalCenter
                    }

                    ListView {
                        clip:true
                        id:sevatextdropdown
                        height: dropdownRectangle.height/2-80
                        width: dropdownRectangle.width
                        //                        interactive: true
                        model: propertyvar.sevalist.length
                        spacing:5
                        //                        y:dropdownRectangle.border.width
                        anchors.top:svtp.bottom
                        anchors.topMargin: 10
                        delegate:
                            Button{
                            id:abc
                            anchors.horizontalCenter: parent.horizontalCenter
                            property bool currentitemstatus;
                            currentitemstatus: ListView.isCurrentItem
                            width: dropdownRectangle.width-dropdownRectangle.border.width*2
                            height: 30
                            background: Rectangle{
                                anchors.fill: parent
                                color: (clickk) ?(currentitemstatus ? "#ff92f9" :"white"):"white"
                            }
                            Text{
                                id:txtvv
                                anchors.centerIn: parent
                                text: propertyvar.sevalist[index]
                            }
                            onClicked:
                            {
                                console.log("clickeddddddddddddddddddddddddddddddd");

                                clickk = true
                                console.log("************The data in txtvv.txt = ",txtvv.text);
                                console.log("The value of index is = ",index)
                                propertyvar.datafromqml(txtvv.text)
                                sevatextdropdown.currentIndex=index
                                sevanamelist.model=propertyvar.sevaValueNameList;
                            }
                        }
                    }
                    Text{
                        id:div
                        width:dropdownRectangle.width
                        clip: true
                        anchors.top: sevatextdropdown.bottom
                        text: "----------------------------------------------------------------"
                        font.pixelSize: 20
                    }

                    Text{
                        id:svnm
                        text:"----------Select Seva Name----------"
                        anchors.top: div.bottom
                        //                         anchors.topMargin:
                        anchors.horizontalCenter: parent.horizontalCenter
                    }
                    ListView {
                        id:sevanamelist
                        anchors.top: svnm.bottom
                        height: dropdownRectangle.height/2-20
                        width: dropdownRectangle.width
                        //                        interactive: true
                        spacing:5
                        clip:true
                        //                        anchors.top: sevatextdropdown.bottom
                        anchors.topMargin: 10
                        model: propertyvar.sevaValueNameList.length

                        delegate:
                            Button{
                            property bool currentitemstatus2;
                            currentitemstatus2: ListView.isCurrentItem
                            anchors.horizontalCenter: parent.horizontalCenter
                            width: dropdownRectangle.width-dropdownRectangle.border.width*2
                            height: 30
                            background: Rectangle{
                                anchors.fill: parent
                                color: (clickk) ?(currentitemstatus2 ? "#ff92f9" :"white"):"white"
                            }
                            Text{
                                id:txtvv2
                                anchors.centerIn: parent
                                text: propertyvar.sevaValueNameList[index]
                            }
                            onClicked:
                            {
                                clickk2 = true
                                sevanamelist.currentIndex=index
                                sevanameop.text = txtvv2.text
                            }
                        }
                    }
                }
            }
            Rectangle{
                id:rowRectangle02
                width:root.width/1.4
                height: root.height
                color: "#efd3f9"

                Column
                {
                    id:maincolumn
                    spacing: 20
                    Rectangle{
                        id:columnRect01
                        width: rowRectangle02.width
                        height: rowRectangle02.height/1.7
                        color: "cyan"

                        Row
                        {
                            id:columnrow01
                            Rectangle
                            {
                                id:columnrectrow01
                                width: rowRectangle02.width/2
                                height: columnRect01.height
                                color: "#f7e9fc"
                                Grid
                                {
                                    spacing: 5
                                    rows:8
                                    columns: 2
                                    anchors.centerIn: parent
                                    Rectangle
                                    {
                                        id:receiptrect01;width:columnrectrow01.width/2.2;height:columnrectrow01.height/9;color:"#e592f1"
                                        Text {
                                            id: receiptid
                                            text: "Receipt Number"
                                            anchors.verticalCenter:  parent.verticalCenter
                                            font.pointSize: 10
                                            font.family: "cursive"

                                        }
                                    }
                                    Rectangle
                                    {
                                        id:receiptrect02;width:columnrectrow01.width/2.2;height:columnrectrow01.height/9;color:"#FFFFFF"
                                        border.color : "#AC39D1"
                                        border.width :1
                                        TextInput {
                                            id: receiptop
                                            anchors.fill: parent
                                            clip: true
                                            text: ""
                                            font.pointSize: 10
                                            anchors.verticalCenter:  parent.verticalCenter
                                            font.family: "cursive"
                                        }

                                    }

                                    Rectangle
                                    {
                                        id:daterect01;width:columnrectrow01.width/2.2;height:columnrectrow01.height/9;color:"#e592f1"
                                        Text {
                                            id: dateid
                                            text: "Date"
                                            font.pointSize: 10
                                            font.family: "cursive"
                                            anchors.verticalCenter:  parent.verticalCenter

                                        }

                                    }
                                    Rectangle
                                    {
                                        id:daterect02;width:columnrectrow01.width/2.2;height:columnrectrow01.height/9;color:"#FFFFFF"
                                        border.color : "#AC39D1"
                                        border.width :1
                                        //                                        Rectangle
                                        //                                        {
                                        //                                            id:datepickerrect
                                        //                                            anchors.top: daterect02.bottom
                                        //                                            width: 200
                                        //                                            height: 200
                                        //                                            visible: false
                                        //                                            DatePicker{}
                                        //                                        }

                                        TextInput{
                                            id: dateop
                                            anchors.fill: parent
                                            text:dateString
                                            clip: true
                                            font.pointSize: 10
                                            anchors.verticalCenter:  parent.verticalCenter
                                            font.family: "cursive"
                                            QtObject {

                                                Component.onCompleted: {
                                                    dateString = currentDate.toLocaleDateString();
                                                    console.log((Date.fromLocaleDateString(dateString)))
                                                }
                                            }
                                        }
                                        //                                        Image {
                                        //                                            anchors.right: parent.right
                                        //                                            anchors.rightMargin: 10
                                        //                                            id: calendarImage
                                        //                                            source: "qrc:/calendar.png"
                                        //                                            height: daterect02.height-5
                                        //                                            width: 25
                                        //                                            MouseArea
                                        //                                            {
                                        //                                                anchors.fill: parent
                                        //                                                onClicked: {

                                        //                                                    //                                                    dpcalendar.visible = true
                                        //                                                }
                                        //                                                //                                                onPressedChanged:
                                        //                                                //                                                {
                                        //                                                //                                                    dpcalendar.visible= false
                                        //                                                //                                                }
                                        //                                            }
                                        //                                        }


                                    }
                                    Rectangle
                                    {
                                        id:sevanamerect01;width:columnrectrow01.width/2.2;height:columnrectrow01.height/9;color:"#e592f1"
                                        Text {
                                            id: sevanameip
                                            text: "Seva Name"
                                            font.pointSize: 10
                                            anchors.verticalCenter:  parent.verticalCenter
                                            font.family: "cursive"
                                        }
                                    }
                                    Rectangle
                                    {
                                        id:sevanamerect02;width:columnrectrow01.width/2.2;height:columnrectrow01.height/9;color:"#FFFFFF"
                                        border.color : "#AC39D1"
                                        border.width :1
                                        TextInput{
                                            id: sevanameop
                                            text:""
                                            clip: true
                                            font.pointSize: 10
                                            font.family: "cursive"
                                            anchors.verticalCenter:  parent.verticalCenter

                                        }
                                    }
                                    Rectangle
                                    {
                                        id:mobilerect01;width:columnrectrow01.width/2.2;height:columnrectrow01.height/9;color:"#e592f1"
                                        Text {
                                            id: mobileid
                                            text: "Mobile Number"
                                            font.pointSize: 10
                                            anchors.verticalCenter:  parent.verticalCenter
                                            font.family: "cursive"
                                        }
                                    }
                                    Rectangle
                                    {
                                        id:mobilerect02;width:columnrectrow01.width/2.2;height:columnrectrow01.height/9;color:"#FFFFFF"
                                        border.color : "#AC39D1"
                                        border.width :1
                                        TextInput {
                                            id: mobileop
                                            anchors.fill: parent
                                            clip: true
                                            text: propertyvar.phoneNumber
                                            font.pointSize: 10
                                            anchors.verticalCenter:  parent.verticalCenter
                                            font.family: "cursive"
                                        }
                                    }
                                    Rectangle
                                    {
                                        id:namerect01;width:columnrectrow01.width/2.2;height:columnrectrow01.height/9;color:"#e592f1"
                                        Text {
                                            id: nameid
                                            text: "Name"
                                            font.pointSize: 10
                                            font.family: "cursive"
                                            anchors.verticalCenter:  parent.verticalCenter

                                        }
                                    }
                                    Rectangle
                                    {
                                        id:namerect02;width:columnrectrow01.width/2.2;height:columnrectrow01.height/9;color:"#FFFFFF"
                                        border.color : "#AC39D1"
                                        border.width :1
                                        TextInput {
                                            id: nameop
                                            clip: true
                                            anchors.fill: parent
                                            text:propertyvar.userName
                                            font.pointSize: 10
                                            anchors.verticalCenter:  parent.verticalCenter
                                            font.family: "cursive"
                                        }
                                    }


                                    Rectangle
                                    {
                                        id:nakshatrarect01;width:columnrectrow01.width/2.2;height:columnrectrow01.height/9;color:"#e592f1"
                                        Text {
                                            id: nakshatraid
                                            text: "Nakshatra"
                                            anchors.verticalCenter:  parent.verticalCenter
                                            font.pointSize: 10
                                            font.family: "cursive"

                                        }
                                    }
                                    Rectangle
                                    {
                                        id:nakshatrarect02;width:columnrectrow01.width/2.2;height:columnrectrow01.height/9;color:"#FFFFFF"
                                        ComboBox {
                                            id:nakshatraop
                                            editable: true
                                            width:nakshatrarect02.width
                                            height:nakshatrarect02.height
                                            model: propertyvar.nakshatra

                                            //                                            model: ListModel {
                                            //                                                id: naksharamodel
                                            //                                                ListElement { text: "Mrugashira"
                                            //                                                }
                                            //                                                ListElement { text: "Swathi"
                                            //                                                }
                                            //                                                ListElement { text: "Astha"
                                            //                                                }
                                            //                                                //                            ListElement { text: propertyvar.Nakshatra
                                            //                                                //                            }
                                            //                                            }
                                            //                                            onAccepted: {
                                            //                                                if (find(currentText) === -1) {
                                            //                                                    naksharamodel.append({text: editText})
                                            //                                                    currentIndex = find(editText)
                                            //                                                }
                                            //                                            }

                                            //                                            onCurrentIndexChanged: console.debug(naksharamodel.get(currentIndex).text)
                                        }
                                    }
                                    Rectangle
                                    {
                                        id:gotrarect01;width:columnrectrow01.width/2.2;height:columnrectrow01.height/9;color:"#e592f1"
                                        Text {
                                            id: gotraid
                                            text: "Gothra"
                                            font.pointSize: 10
                                            font.family: "cursive"
                                            anchors.verticalCenter:  parent.verticalCenter

                                        }
                                    }
                                    Rectangle
                                    {
                                        id:gotrarect02;width:columnrectrow01.width/2.2;height:columnrectrow01.height/9;color:"#FFFFFF"
                                        anchors.rightMargin: 100
                                        ComboBox {
                                            id:gotraop
                                            editable: true
                                            width:gotrarect02.width
                                            height:gotrarect02.height
                                            model: propertyvar.gotra
                                            //                                            model: ListModel {
                                            //                                                id: gotramodel
                                            //                                                ListElement { text: "Vaisista"
                                            //                                                }
                                            //                                                ListElement { text: "Arthi"
                                            //                                                }
                                            //                                                ListElement { text: "Marichi"
                                            //                                                }
                                            //                                                //                            ListElement { text: propertyvar.Gotra
                                            //                                                //                            }
                                            //                                            }
                                            //                                            onAccepted: {
                                            //                                                if (find(currentText) === -1) {
                                            //                                                    naksharamodel.append({text: editText})
                                            //                                                    currentIndex = find(editText)
                                            //                                                }
                                            //                                            }

                                            //                                            onCurrentIndexChanged: console.debug(gotramodel.get(currentIndex).text)
                                        }

                                    }
                                    Rectangle
                                    {
                                        id:sevachargesrect01;width:columnrectrow01.width/2.2;height:columnrectrow01.height/9;color:"#e592f1"
                                        Text {
                                            id: sevachargesid
                                            text: "Seva Charges"
                                            font.pointSize: 10
                                            anchors.verticalCenter:  parent.verticalCenter
                                            font.family: "cursive"
                                        }
                                    }
                                    Rectangle
                                    {
                                        id:sevachargesrect02;width:columnrectrow01.width/2.2;height:columnrectrow01.height/9;color:"#FFFFFF"
                                        border.color : "#AC39D1"
                                        border.width :1
                                        TextInput {
                                            id: sevachargesop
                                            anchors.fill: parent
                                            text: ""
                                            clip: true
                                            font.pointSize: 10
                                            font.family: "cursive"
                                            anchors.verticalCenter:  parent.verticalCenter

                                        }
                                    }

                                }
                            }
                            Rectangle{
                                id:columnrectrow02
                                width: rowRectangle02.width/2
                                height: columnRect01.height
                                color: "#f7e9fc"

                                Grid
                                {
                                    spacing: 5
                                    rows:8
                                    columns: 2
                                    anchors.centerIn: parent
                                    Rectangle
                                    {
                                        id:extrarect01;width:columnrectrow02.width/2.2;height:columnrectrow02.height/9;color:"#e592f1"
                                        Text {
                                            id: extraid
                                            text: "Extra"
                                            font.pointSize: 10
                                            anchors.verticalCenter:  parent.verticalCenter
                                            font.family: "cursive"
                                        }
                                    }
                                    Rectangle
                                    {
                                        id:extrarect02;width:columnrectrow02.width/2.2;height:columnrectrow02.height/9;color:"#FFFFFF"
                                        border.color : "#AC39D1"
                                        border.width :1
                                        TextInput {
                                            id: extraop
                                            text: ""
                                            clip: true
                                            font.pointSize: 10
                                            font.family: "cursive"
                                            anchors.verticalCenter:  parent.verticalCenter

                                        }
                                    }
                                    Rectangle
                                    {
                                        id:rashirect01;width:columnrectrow02.width/2.2;height:columnrectrow02.height/9;color:"#e592f1"
                                        Text {
                                            id: rashiid
                                            text: "Rashi"
                                            font.pointSize: 10
                                            font.family: "cursive"
                                            anchors.verticalCenter:  parent.verticalCenter

                                        }

                                    }
                                    Rectangle
                                    {
                                        id:rashirect02;width:columnrectrow02.width/2.2;height:columnrectrow02.height/9;color:"#FFFFFF"
                                        ComboBox {
                                            id:rashiop
                                            editable: true
                                            width:nakshatrarect02.width
                                            height:nakshatrarect02.height
                                            model: propertyvar.rashi

                                            //                                            model: ListModel {
                                            //                                                id: naksharamodel
                                            //                                                ListElement { text: "Mrugashira"
                                            //                                                }
                                            //                                                ListElement { text: "Swathi"
                                            //                                                }
                                            //                                                ListElement { text: "Astha"
                                            //                                                }
                                            //                                                //                            ListElement { text: propertyvar.Nakshatra
                                            //                                                //                            }
                                            //                                            }
                                            //                                            onAccepted: {
                                            //                                                if (find(currentText) === -1) {
                                            //                                                    naksharamodel.append({text: editText})
                                            //                                                    currentIndex = find(editText)
                                            //                                                }
                                            //                                            }

                                            //                                            onCurrentIndexChanged: console.debug(naksharamodel.get(currentIndex).text)
                                        }
                                    }
                                    Rectangle
                                    {
                                        id:paymenttyperect01;width:columnrectrow02.width/2.2;height:columnrectrow02.height/9;color:"#e592f1"
                                        Text {
                                            id: paymenttypeid
                                            text: "Payment type"
                                            font.pointSize: 10
                                            font.family: "cursive"
                                            anchors.verticalCenter:  parent.verticalCenter

                                        }
                                    }
                                    Rectangle
                                    {
                                        id:paymenttyperect02;width:columnrectrow02.width/2.2;height:columnrectrow02.height/9;color:"#FFFFFF"
                                        ComboBox {
                                            id:paymenttypeop
                                            editable: true
                                            width:nakshatrarect02.width
                                            height:nakshatrarect02.height

                                            model: ListModel {
                                                id: paymenttypemodel
                                                ListElement { text: "Cash"
                                                }
                                                ListElement { text: "Net Banking"
                                                }
                                                //                                                ListElement { text: "Astha"
                                                //                                                }
                                                //                            ListElement { text: propertyvar.Nakshatra
                                                //                            }
                                            }
                                            onAccepted: {
                                                if (find(currentText) === -1) {
                                                    paymenttypemodel.append({text: editText})
                                                    currentIndex = find(editText)
                                                }
                                            }

                                            //                                            onCurrentIndexChanged: console.debug(paymenttypemodel.get(currentIndex).text)
                                        }
                                    }
                                    Rectangle
                                    {
                                        id:banklistrect01;width:columnrectrow02.width/2.2;height:columnrectrow02.height/9;color:"#e592f1"
                                        Text {
                                            id: banklistid
                                            text: "Bank List"
                                            anchors.verticalCenter:  parent.verticalCenter
                                            font.pointSize: 10
                                            font.family: "cursive"
                                        }
                                    }
                                    Rectangle
                                    {
                                        id:banklistrect02;width:columnrectrow02.width/2.2;height:columnrectrow02.height/9;color:"#FFFFFF"
                                        ComboBox {
                                            id:banklistop
                                            editable: true
                                            width:banklistrect02.width
                                            height:banklistrect02.height
                                            model:propertyvar.banklist
                                            //                                            model: ListModel {
                                            //                                                id: banklistmodel
                                            //                                                ListElement { text: "SBI"
                                            //                                                }
                                            //                                                ListElement { text: "Citi Bank"
                                            //                                                }
                                            //                                                ListElement { text: "HDFC Bank"
                                            //                                                }
                                            //                                                ListElement { text: "Axis"
                                            //                                                }
                                            //                                            }
                                            //                                            onAccepted: {
                                            //                                                if (find(currentText) === -1) {
                                            //                                                    naksharamodel.append({text: editText})
                                            //                                                    currentIndex = find(editText)
                                            //                                                }
                                            //                                            }
                                            //                                            onCurrentIndexChanged: console.debug(banklistmodel.get(currentIndex).text)
                                        }
                                    }
                                    Rectangle
                                    {
                                        id:sevadaterect01;width:columnrectrow02.width/2.2;height:columnrectrow02.height/9;color:"#e592f1"
                                        Text {
                                            id: sevadaterectid
                                            text: "Seva Date"
                                            font.pointSize: 10
                                            anchors.verticalCenter:  parent.verticalCenter
                                            font.family: "cursive"

                                        }
                                    }
                                    Rectangle
                                    {
                                        id:sevadaterect02;width:columnrectrow02.width/2.2;height:columnrectrow02.height/9;color:"#FFFFFF"
                                        border.color : "#AC39D1"
                                        border.width :1



                                        //                                            MonthGrid {
                                        //                                                month: Calendar.December
                                        //                                                minimumDate: new Date(2010, 0, 1)
                                        //                                                                                                maximumDate: new Date(2035, 0, 1)
                                        //                                                year: 2015
                                        //                                                locale: Qt.locale("en_US")
                                        //                                            }


                                        TextInput {
                                            id: sevadaterectop
                                            text:dateString
                                            clip: true
                                            anchors.fill: parent
                                            font.pointSize: 10
                                            anchors.verticalCenter:  parent.verticalCenter
                                            font.family: "cursive"



                                        }
                                        //                                        Image {
                                        //                                            anchors.right: parent.right
                                        //                                            anchors.rightMargin: 10
                                        //                                            id: calendarImage2
                                        //                                            source: "qrc:/calendar.png"
                                        //                                            height: daterect02.height-5
                                        //                                            width: 25
                                        //                                            MouseArea
                                        //                                            {
                                        //                                                id:datemousearea2
                                        //                                                anchors.fill: parent
                                        //                                                onClicked:  {
                                        //                                                    dpcalendar.visible = true
                                        //                                                    console.log("Pressed Mouse area")
                                        //                                                }
                                        //                                            }

                                        //                                        }
                                    }
                                    Rectangle
                                    {
                                        id:sevatimerect01;width:columnrectrow02.width/2.2;height:columnrectrow02.height/9;color:"#e592f1"
                                        Text {
                                            id: sevatimerid
                                            text: "Seva Time"
                                            font.pointSize: 10
                                            anchors.verticalCenter:  parent.verticalCenter
                                            font.family: "cursive"
                                        }
                                    }
                                    Rectangle
                                    {
                                        id:sevatimerect02;width:columnrectrow02.width/2.2;height:columnrectrow02.height/9;color:"#FFFFFF"
                                        border.color : "#AC39D1"
                                        border.width :1
                                        Text {
                                            id: sevatimeop
                                            text: { Qt.formatTime(new Date(), "hh:mm:ss")
                                            }
                                            font.pointSize: 10
                                            anchors.verticalCenter:  parent.verticalCenter
                                            font.family: "cursive"

                                        }
                                    }
                                    Rectangle
                                    {
                                        id:noterect01;width:columnrectrow02.width/2.2;height:columnrectrow02.height/9;color:"#e592f1"
                                        Text {
                                            id: noteid
                                            text: "Note"
                                            font.pointSize: 10
                                            font.family: "cursive"
                                            anchors.verticalCenter:  parent.verticalCenter

                                        }
                                    }
                                    Rectangle
                                    {
                                        id:noterect02;width:columnrectrow02.width/2.2;height:columnrectrow02.height/9;color:"#FFFFFF"
                                        border.color : "#AC39D1"
                                        border.width :1
                                        TextInput {
                                            id: noteop
                                            clip: true
                                            text: ""
                                            font.pointSize: 10
                                            anchors.fill: parent
                                            anchors.verticalCenter:  parent.verticalCenter
                                            font.family: "cursive"
                                        }
                                    }

                                    Rectangle
                                    {
                                        id:countrect01;width:columnrectrow02.width/2.2;height:columnrectrow02.height/9;color:"#e592f1"
                                        Text {
                                            id: countid
                                            text: "Count"
                                            font.pointSize: 10
                                            font.family: "cursive"
                                            anchors.verticalCenter:  parent.verticalCenter

                                        }
                                    }
                                    Rectangle
                                    {
                                        id:countrect02;width:columnrectrow02.width/2.2;height:columnrectrow02.height/9;color:"#FFFFFF"
                                        border.color : "#AC39D1"
                                        border.width :1
                                        TextInput {
                                            id: countop
                                            clip: true
                                            text: ""
                                            font.pointSize: 10
                                            anchors.fill: parent
                                            anchors.verticalCenter:  parent.verticalCenter
                                            font.family: "cursive"
                                        }
                                    }
                                }
                            }
                        }
                    }
                    Rectangle{
                        id:columnRect02
                        width: rowRectangle02.width
                        height: rowRectangle02.height/4.8
                        color: "#f7e9fc"

                        Rectangle
                        {
                            id:columnInRect
                            width: columnRect02.width-10
                            height: columnRect02.height-10
                            anchors.centerIn: parent
                            Row
                            {
                                spacing: 2

                                id:rowinRectangle
                                Rectangle{
                                    id:inRectangle01
                                    width: columnRect02.width/10
                                    height: columnRect02.height/8
                                    border.width : 1
                                    border.color: "#AC39D1"
                                    Text {
                                        id: serialno01
                                        text:"Serial No"
                                    }
                                }
                                Rectangle{
                                    id:inRectangle02
                                    width: columnRect02.width/4
                                    height: columnRect02.height/8
                                    border.width : 1
                                    border.color: "#AC39D1"
                                    Text {
                                        id: nameno01
                                        text:"Name of the Seva"
                                    }
                                }
                                Rectangle{
                                    id:inRectangle03
                                    width: columnRect02.width/10
                                    height: columnRect02.height/8
                                    border.width : 1
                                    border.color: "#AC39D1"
                                    Text {
                                        id: amountno01
                                        text:"Amount"
                                    }
                                }
                                Rectangle{
                                    id:inRectangle04
                                    width: columnRect02.width/6
                                    height: columnRect02.height/8
                                    border.width : 1
                                    border.color: "#AC39D1"
                                    Text {
                                        id: personno01
                                        text:"Person"
                                    }
                                }
                                Rectangle{
                                    id:inRectangle05
                                    width: columnRect02.width/4
                                    height: columnRect02.height/8
                                    border.width : 1
                                    border.color: "#AC39D1"
                                    Text {
                                        id: additionalamtno01
                                        text:"Additional amount"
                                    }
                                }
                                Rectangle{
                                    id:inRectangle06
                                    width: columnRect02.width/10
                                    height: columnRect02.height/8
                                    border.width : 1
                                    border.color: "#AC39D1"
                                    Text {
                                        id: totalno01
                                        text:"Total"
                                    }
                                }
                            }
                            //                            ScrollView {
                            //                                id:scrollviewid
                            //                                anchors.fill: parent
                            //                                //                                ScrollBar.vertical.policy: ScrollBar.AlwaysOn
                            //                                //                                ScrollBar.horizontal.policy: ScrollBar.AlwaysOn
                            //                                DelegateModel {
                            //                                    id: visualModel

                            //                                    model:
                            //                                        ListModel {
                            //                                        ListElement {
                            ////                                            SerialNo: receiptop.text
                            //                                            SerialNo: "1"
                            //                                        }
                            //                                        ListElement {
                            ////                                            Nameoftheseva: sevanameop.text
                            //                                             Nameoftheseva: "Seva"
                            //                                        }
                            //                                        ListElement {
                            ////                                            Amount:sevachargesop.text
                            //                                             Amount:"A"

                            //                                        }
                            //                                        ListElement {
                            ////                                            Person:personno01.text
                            //                                             Person:"11"
                            //                                        }
                            //                                        ListElement {
                            ////                                            Additionalamount:extraop.text
                            //                                            Additionalamount:"200"
                            //                                        }
                            //                                        ListElement {
                            ////                                            TotalNo:totalno01.text
                            //                                            TotalNo:"200"

                            //                                        }
                            //                                    }
                            //                                    delegate:
                            //                                        Row
                            //                                    {

                            //                                        spacing: 2
                            //                                        id:scrollviewrow
                            //                                        Rectangle{
                            //                                            id:scrollrect01
                            //                                            width: columnRect02.width/10
                            //                                            height: columnRect02.height/8
                            //                                            border.width : 1
                            //                                            border.color: "#AC39D1"
                            //                                            Text {
                            //                                                id: serialno
                            //                                                text:SerialNo
                            //                                            }
                            //                                        }
                            //                                        Rectangle{
                            //                                            id:scrollrect02
                            //                                            width: columnRect02.width/4
                            //                                            height: columnRect02.height/8
                            //                                            border.width : 1
                            //                                            border.color: "#AC39D1"
                            //                                            Text {
                            //                                                id: nameno
                            //                                                text:Nameoftheseva
                            //                                            }
                            //                                        }
                            //                                        Rectangle{
                            //                                            id:scrollrect03
                            //                                            width: columnRect02.width/10
                            //                                            height: columnRect02.height/8
                            //                                            border.width : 1
                            //                                            border.color: "#AC39D1"
                            //                                            Text {
                            //                                                id: amountno
                            //                                                text:Amount
                            //                                            }
                            //                                        }
                            //                                        Rectangle{
                            //                                            id:scrollrect04
                            //                                            width: columnRect02.width/6
                            //                                            height: columnRect02.height/8
                            //                                            border.width : 1
                            //                                            border.color: "#AC39D1"
                            //                                            Text {
                            //                                                id: personno
                            //                                                text:Person
                            //                                            }
                            //                                        }
                            //                                        Rectangle{
                            //                                            id:scrollrect05
                            //                                            width: columnRect02.width/4
                            //                                            height: columnRect02.height/8
                            //                                            border.width : 1
                            //                                            border.color: "#AC39D1"
                            //                                            Text {
                            //                                                id: additionalamtno
                            //                                                text:Additionalamount
                            //                                            }
                            //                                        }
                            //                                        Rectangle{
                            //                                            id:scrollrect06
                            //                                            width: columnRect02.width/10
                            //                                            height: columnRect02.height/8
                            //                                            border.width : 1
                            //                                            border.color: "#AC39D1"
                            //                                            Text {
                            //                                                id: totalno
                            //                                                text:TotalNo
                            //                                            }
                            //                                        }
                            //                                    }
                            //                                }

                            //                                ListView {
                            //                                    anchors.fill: parent
                            //                                    model: visualModel
                            //                                }
                            //                            }
                        }
                    }
                    Rectangle{
                        id:columnRect03
                        width: rowRectangle02.width
                        height: rowRectangle02.height/9
                        color: "#f7e9fc"
                        Row{
                            id:bottomrowrect
                            spacing: 10
                            anchors.centerIn: parent
                            //                            anchors.bottom: rectangle02.bottom
                            //                            anchors.bottomMargin: rectangle03.height/10
                            Button{
                                id:clearButton
                                width: columnRect03.width/13
                                height: columnRect03.height/2
                                text:"Clear"
                                palette.buttonText:"#a21eb5"
                                onClicked:
                                {
                                    //                                    receiptop.text("")
                                    //                                    dateop.text("")
                                    //                                    sevanameop.text("")
                                    //                                    mobileop.text("")
                                    //                                    nameop.text("")
                                    //                                    nakshatraop.text("")
                                    //                                    gotraop.text("")
                                    //                                    sevachargesop.text("")
                                    //                                    extraop.text("")
                                    //                                    rashiop.text("")
                                    //                                    bankop.text("")
                                    //                                    banklistop.text("")
                                    //                                    sevadaterectop.text("")
                                    //                                    sevatimeop.text("")
                                    //                                    noteop.text("")
                                    //                                    countop.text("")
                                    console.log("Onclicked Clear ::::",clearButton.text)
                                }
                            }
                            Button{
                                id:nextButton
                                width: columnRect03.width/13
                                height: columnRect03.height/2
                                text:"Next"
                                palette.buttonText:"#a21eb5"
                                onClicked:
                                {

                                    console.log("Onclicked Next::::",nextButton.text)
                                }
                            }
                            Button{
                                id:addmoreButton
                                width: columnRect03.width/10
                                height: columnRect03.height/2
                                text:"Add More"
                                palette.buttonText:"#a21eb5"
                                onClicked:
                                {
                                    console.log("Onclicked Add more::::",addmoreButton.text)
                                }
                            }
                            Button{
                                id:submitButtton
                                width: columnRect03.width/13
                                height: columnRect03.height/2
                                text:"Submit"
                                palette.buttonText:"#a21eb5"
                                onClicked:
                                {
                                    console.log("Onclicked Submit::::",submitButtton.text)
                                    propertyvar.userName = nameop.text
//                                    propertyvar.phoneNumber = mobileop.text
//                                    propertyvar.note = noteop.text
//                                    propertyvar.reciptNumber = receiptop.text
                                    propertyvar.sevalist = sevanameop.text
                                    //                                                                        propertyvar.nakshatra = nakshatraop.text;
                                    //                                                                        propertyvar.sevaPrice = sevachargesop.text;
//                                    propertyvar.sevaDate = sevadaterectop.text;
//                                    propertyvar.sevaTime = sevatimeop.text;
                                    //                                    QString date_string_on_db  "20/12/2015";
                                    //                                    QDate Date = QDate::fromString(date_string_on_db,"dd/MM/yyyy");
//                                    propertyvar.dateop = datees.text;
                                    //                                                                        propertyvar.gotra = gotraop.text;
                                    //                                                                        propertyvar.rashi = rashiop.text;
                                    //                                                                        propertyvar.banklist = banklistop.text;


                                    console.log("User Name",propertyvar.userName)
                                    console.log("Nakshatra ",propertyvar.nakshatra)
                                    console.log("Gotra",propertyvar.gotra)
                                    console.log("Date ",propertyvar.datees)
                                    console.log("Seva Date",propertyvar.sevaDate)
                                    console.log("Phone Number",propertyvar.phoneNumber)
                                    console.log("Note",propertyvar.note)

                                }
                            }
                            Button{
                                id:printButton
                                width: columnRect03.width/13
                                height: columnRect03.height/2
                                text:"Print"
                                palette.buttonText:"#a21eb5"
                                onClicked:
                                {

                                    console.log("Onclicled Print ::::",printButton.text)
                                }
                            }
                            Button{
                                id:alldataButton
                                width: columnRect03.width/10
                                height: columnRect03.height/2
                                text:"All Data"
                                palette.buttonText:"#a21eb5"
                                onClicked:
                                {

                                    console.log("Onclicked All Data ::::",alldataButton.text)
                                }
                            }
                            Button{
                                id:lasttransactionButton
                                width: columnRect03.width/6
                                height: columnRect03.height/2
                                text:"Last Transaction"
                                palette.buttonText:"#a21eb5"
                                onClicked:
                                {

                                    console.log("Onclicked Last Transaction ::::",lasttransactionButton.text)
                                }
                            }
                        }
                    }
                }
            }
        }
    }
}
//receiptop
//dateop
//sevanameop
//mobileop
//nameop
//nakshatraop
//gotraop
//sevachargesop
//extraop
//rashiop
//bankop
//banklistop
//sevadaterectop
//sevatimeop
//noteop
//countop
