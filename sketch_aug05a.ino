#include <microLED.h>   // подключаем библу
microLED < 6, 3, -1, LED_WS2812, ORDER_GRB > strip;

byte mode;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  strip.setBrightness(255);
  strip.clear();
  strip.show();
  /*strip.set(0, mRGB(255, 0, 0));
  strip.set(1, mRGB(255, 255, 0));
  strip.set(2, mRGB(0, 255, 0));
  strip.set(3, mRGB(0, 255, 255));
  strip.set(4, mRGB(0, 0, 255));
  strip.set(5, mRGB(200, 0, 255));
  strip.show();*/
  mode = 1;
}

void BluetoothTick() {
  if (Serial.available()) {
    int val = Serial.parseInt();
    Serial.println(val);
    switch (val) {
      case 0: 
        mode = 0;
        break;
      case 1:
        mode = 1;
        break;
      case 2:
        mode = 1;
        break;
      case 3:
        mode = 2;
        break;
      case 4:
        mode = 3;
        break;
      case 5:
        mode = 4;
        break;
      case 6:
        mode = 5;
        break;
      case 7:
        mode = 6;
        break;
      case 8:
        mode = 7;
        break;
      case 9:
        mode = 8;
        break;
      case 10:
        mode = 9;
        break;
      case 11:
        mode = 10;
        break;
      case 12:
        mode = 11;
        break;
      case 13:
        mode = 12;
        break;
    }
  }
}

void mode1() {
  for (int i = 1; i < 6; i++) { //Круг пробегает красный
    strip.clear(); 
    strip.set(i, mRGB(255, 0, 0));
    strip.set(i - 1, mRGB(255, 0, 0));
    strip.show();
    BluetoothTick();
    delay(200);
  }
  for (int i = 1; i < 6; i++) { //Круг пробегает оранжевый
    strip.clear(); 
    strip.set(i, mRGB(255, 123, 0));
    strip.set(i - 1, mRGB(255, 123, 0));
    strip.show();
    BluetoothTick();
    delay(200);
  }
  for (int i = 1; i < 6; i++) { //Круг пробегает Жёлтый
    strip.clear(); 
    strip.set(i, mRGB(255, 255, 0));
    strip.set(i - 1, mRGB(255, 255, 0));
    strip.show();
    BluetoothTick();
    delay(200);
  }
  for (int i = 1; i < 6; i++) { //Круг пробегает зелёный
    strip.clear(); 
    strip.set(i, mRGB(0, 255, 0));
    strip.set(i - 1, mRGB(0, 255, 0));
    strip.show();
    BluetoothTick();
    delay(200);
  }
  for (int i = 1; i < 6; i++) { //Круг пробегает голубой
    strip.clear(); 
    strip.set(i, mRGB(0, 255, 255));
    strip.set(i - 1, mRGB(0, 255, 255));
    strip.show();
    BluetoothTick();
    delay(200);
  }
  for (int i = 1; i < 6; i++) { //Круг пробегает синий
    strip.clear(); 
    strip.set(i, mRGB(0, 0, 255));
    strip.set(i - 1, mRGB(0, 0, 255));
    strip.show();
    BluetoothTick();
    delay(200);
  }
  for (int i = 1; i < 6; i++) { //Круг пробегает фиолетовый
    strip.clear(); 
    strip.set(i, mRGB(190, 0, 255));
    strip.set(i - 1, mRGB(190, 0, 255));
    strip.show();
    BluetoothTick();
    delay(200);
  }
}

void mode2() {
  strip.clear();
  for(int i=0;i<=255;i++) { //Вкл зелёный
    strip.set(0, mRGB(255, i, 0));
    strip.set(1, mRGB(255, i, 0));
    strip.set(2, mRGB(255, i, 0));
    strip.set(3, mRGB(255, i, 0));
    strip.set(4, mRGB(255, i, 0));
    strip.set(5, mRGB(255, i, 0));
    strip.show();
    BluetoothTick();
    delay(5); // ставим задержку для эффекта
  }
  for(int i=255;i>=0;i--) { //Выкл красный
    strip.set(0, mRGB(i, 255, 0));
    strip.set(1, mRGB(i, 255, 0));
    strip.set(2, mRGB(i, 255, 0));
    strip.set(3, mRGB(i, 255, 0));
    strip.set(4, mRGB(i, 255, 0));
    strip.set(5, mRGB(i, 255, 0));
    strip.show();
    BluetoothTick();
    delay(5); // ставим задержку для эффекта
  }
  for(int i=0;i<=255;i++) { //Вкл синий
    strip.set(0, mRGB(0, 255, i));
    strip.set(1, mRGB(0, 255, i));
    strip.set(2, mRGB(0, 255, i));
    strip.set(3, mRGB(0, 255, i));
    strip.set(4, mRGB(0, 255, i));
    strip.set(5, mRGB(0, 255, i));
    strip.show();
    BluetoothTick();
    delay(5); // ставим задержку для эффекта
  }
  for(int i=255;i>=0;i--) { //Выкл зелёный
    strip.set(0, mRGB(0, i, 255));
    strip.set(1, mRGB(0, i, 255));
    strip.set(2, mRGB(0, i, 255));
    strip.set(3, mRGB(0, i, 255));
    strip.set(4, mRGB(0, i, 255));
    strip.set(5, mRGB(0, i, 255));
    strip.show();
    BluetoothTick();
    delay(5); // ставим задержку для эффекта
  }
  for(int i=0;i<=255;i++) { //Вкл красный
    strip.set(0, mRGB(i, 0, 255));
    strip.set(1, mRGB(i, 0, 255));
    strip.set(2, mRGB(i, 0, 255));
    strip.set(3, mRGB(i, 0, 255));
    strip.set(4, mRGB(i, 0, 255));
    strip.set(5, mRGB(i, 0, 255));
    strip.show();
    BluetoothTick();
    delay(5); // ставим задержку для эффекта
  }
  for(int i=255;i>=0;i--) { //Выкл синий
    strip.set(0, mRGB(255, 0, i));
    strip.set(1, mRGB(255, 0, i));
    strip.set(2, mRGB(255, 0, i));
    strip.set(3, mRGB(255, 0, i));
    strip.set(4, mRGB(255, 0, i));
    strip.set(5, mRGB(255, 0, i));
    strip.show();
    BluetoothTick();
    delay(5); // ставим задержку для эффекта
  }
}

void mode3() {
  for(int i=255;i>=190;i--) {
    strip.set(0, mRGB(i, i, i));
    strip.set(1, mRGB(i, i, i));
    strip.set(2, mRGB(i, i, i));
    strip.set(3, mRGB(i, i, i));
    strip.set(4, mRGB(i, i, i));
    strip.set(5, mRGB(i, i, i));
    strip.show();
    BluetoothTick();
    delay(20); // ставим задержку для эффекта
  }
  for(int i=190;i<=255;i++) {
    strip.set(0, mRGB(i, i, i));
    strip.set(1, mRGB(i, i, i));
    strip.set(2, mRGB(i, i, i));
    strip.set(3, mRGB(i, i, i));
    strip.set(4, mRGB(i, i, i));
    strip.set(5, mRGB(i, i, i));
    strip.show();
    BluetoothTick();
    delay(20); // ставим задержку для эффекта
  }
}

void mode4() {
  for(int i=0;i<=255;i++) {
    strip.set(0, mRGB(i, i, i));
    strip.set(1, mRGB(i, i, i));
    strip.set(2, mRGB(i, i, i));
    strip.set(3, mRGB(i, i, i));
    strip.set(4, mRGB(i, i, i));
    strip.set(5, mRGB(i, i, i));
    strip.show();
    BluetoothTick();
    delay(5); // ставим задержку для эффекта
  }

 //плавное затухание светодиода
 // начальное значение на Pin6 i=255, если i>=255, то вычитаем от i единицу
  for(int i=255;i>=0;i--) {
    strip.set(0, mRGB(i, i, i));
    strip.set(1, mRGB(i, i, i));
    strip.set(2, mRGB(i, i, i));
    strip.set(3, mRGB(i, i, i));
    strip.set(4, mRGB(i, i, i));
    strip.set(5, mRGB(i, i, i));
    strip.show();
    BluetoothTick();
    delay(5); // ставим задержку для эффекта
  }
}

void mode5() {
  for(int i=0;i<=255;i++) {
    strip.set(0, mRGB(i, 0, 0));
    strip.set(1, mRGB(i, 0, 0));
    strip.set(2, mRGB(i, 0, 0));
    strip.set(3, mRGB(i, 0, 0));
    strip.set(4, mRGB(i, 0, 0));
    strip.set(5, mRGB(i, 0, 0));
    strip.show();
    BluetoothTick();
    delay(5); // ставим задержку для эффекта
  }

 //плавное затухание светодиода
 // начальное значение на Pin6 i=255, если i>=255, то вычитаем от i единицу
  for(int i=255;i>=0;i--) {
    strip.set(0, mRGB(i, 0, 0));
    strip.set(1, mRGB(i, 0, 0));
    strip.set(2, mRGB(i, 0, 0));
    strip.set(3, mRGB(i, 0, 0));
    strip.set(4, mRGB(i, 0, 0));
    strip.set(5, mRGB(i, 0, 0));
    strip.show();
    BluetoothTick();
    delay(5); // ставим задержку для эффекта
  }
  for(int i=0;i<=255;i++) {
    strip.set(0, mRGB(i, i, 0));
    strip.set(1, mRGB(i, i, 0));
    strip.set(2, mRGB(i, i, 0));
    strip.set(3, mRGB(i, i, 0));
    strip.set(4, mRGB(i, i, 0));
    strip.set(5, mRGB(i, i, 0));
    strip.show();
    BluetoothTick();
    delay(5); // ставим задержку для эффекта
  }

 //плавное затухание светодиода
 // начальное значение на Pin6 i=255, если i>=255, то вычитаем от i единицу
  for(int i=255;i>=0;i--) {
    strip.set(0, mRGB(i, i, 0));
    strip.set(1, mRGB(i, i, 0));
    strip.set(2, mRGB(i, i, 0));
    strip.set(3, mRGB(i, i, 0));
    strip.set(4, mRGB(i, i, 0));
    strip.set(5, mRGB(i, i, 0));
    strip.show();
    BluetoothTick();
    delay(5); // ставим задержку для эффекта
  }
  for(int i=0;i<=255;i++) { // Плавное хажигание
    strip.set(0, mRGB(0, i, 0));
    strip.set(1, mRGB(0, i, 0));
    strip.set(2, mRGB(0, i, 0));
    strip.set(3, mRGB(0, i, 0));
    strip.set(4, mRGB(0, i, 0));
    strip.set(5, mRGB(0, i, 0));
    strip.show();
    BluetoothTick();
    delay(5); // ставим задержку для эффекта
  }

 //плавное затухание светодиода
 // начальное значение на Pin6 i=255, если i>=255, то вычитаем от i единицу
  for(int i=255;i>=0;i--) {
    strip.set(0, mRGB(0, i, 0));
    strip.set(1, mRGB(0, i, 0));
    strip.set(2, mRGB(0, i, 0));
    strip.set(3, mRGB(0, i, 0));
    strip.set(4, mRGB(0, i, 0));
    strip.set(5, mRGB(0, i, 0));
    strip.show();
    BluetoothTick();
    delay(5); // ставим задержку для эффекта
  }
  for(int i=0;i<=255;i++) { // Плавное хажигание
    strip.set(0, mRGB(0, i, i));
    strip.set(1, mRGB(0, i, i));
    strip.set(2, mRGB(0, i, i));
    strip.set(3, mRGB(0, i, i));
    strip.set(4, mRGB(0, i, i));
    strip.set(5, mRGB(0, i, i));
    strip.show();
    BluetoothTick();
    delay(5); // ставим задержку для эффекта
  }

 //плавное затухание светодиода
 // начальное значение на Pin6 i=255, если i>=255, то вычитаем от i единицу
  for(int i=255;i>=0;i--) {
    strip.set(0, mRGB(0, i, i));
    strip.set(1, mRGB(0, i, i));
    strip.set(2, mRGB(0, i, i));
    strip.set(3, mRGB(0, i, i));
    strip.set(4, mRGB(0, i, i));
    strip.set(5, mRGB(0, i, i));
    strip.show();
    BluetoothTick();
    delay(5); // ставим задержку для эффекта
  }
  for(int i=0;i<=255;i++) { // Плавное хажигание
    strip.set(0, mRGB(0, 0, i));
    strip.set(1, mRGB(0, 0, i));
    strip.set(2, mRGB(0, 0, i));
    strip.set(3, mRGB(0, 0, i));
    strip.set(4, mRGB(0, 0, i));
    strip.set(5, mRGB(0, 0, i));
    strip.show();
    BluetoothTick();
    delay(5); // ставим задержку для эффекта
  }

 //плавное затухание светодиода
 // начальное значение на Pin6 i=255, если i>=255, то вычитаем от i единицу
  for(int i=255;i>=0;i--) {
    strip.set(0, mRGB(0, 0, i));
    strip.set(1, mRGB(0, 0, i));
    strip.set(2, mRGB(0, 0, i));
    strip.set(3, mRGB(0, 0, i));
    strip.set(4, mRGB(0, 0, i));
    strip.set(5, mRGB(0, 0, i));
    strip.show();
    BluetoothTick();
    delay(5); // ставим задержку для эффекта
  }
  for(int i=0;i<=255;i++) { // Плавное хажигание
    strip.set(0, mRGB(i, 0, i));
    strip.set(1, mRGB(i, 0, i));
    strip.set(2, mRGB(i, 0, i));
    strip.set(3, mRGB(i, 0, i));
    strip.set(4, mRGB(i, 0, i));
    strip.set(5, mRGB(i, 0, i));
    strip.show();
    BluetoothTick();
    delay(5); // ставим задержку для эффекта
  }

 //плавное затухание светодиода
 // начальное значение на Pin6 i=255, если i>=255, то вычитаем от i единицу
  for(int i=255;i>=0;i--) {
    strip.set(0, mRGB(i, 0, i));
    strip.set(1, mRGB(i, 0, i));
    strip.set(2, mRGB(i, 0, i));
    strip.set(3, mRGB(i, 0, i));
    strip.set(4, mRGB(i, 0, i));
    strip.set(5, mRGB(i, 0, i));
    strip.show();
    BluetoothTick();
    delay(5); // ставим задержку для эффекта
  }
}

void mode6() {
  for(int i=255;i>=190;i--) {
      strip.set(0, mRGB(i, 0, 0));
      strip.set(1, mRGB(i, 0, 0));
      strip.set(2, mRGB(i, 0, 0));
      strip.set(3, mRGB(i, 0, 0));
      strip.set(4, mRGB(i, 0, 0));
      strip.set(5, mRGB(i, 0, 0));
      strip.show();
      BluetoothTick();
      delay(20); // ставим задержку для эффекта
    }
    for(int i=190;i<=255;i++) {
      strip.set(0, mRGB(i, 0, 0));
      strip.set(1, mRGB(i, 0, 0));
      strip.set(2, mRGB(i, 0, 0));
      strip.set(3, mRGB(i, 0, 0));
      strip.set(4, mRGB(i, 0, 0));
      strip.set(5, mRGB(i, 0, 0));
      strip.show();
      BluetoothTick();
      delay(20); // ставим задержку для эффекта
    }
}
void mode7() {
  for(int i=255;i>=190;i--) {
    strip.set(0, mRGB(i, i, 0));
    strip.set(1, mRGB(i, i, 0));
    strip.set(2, mRGB(i, i, 0));
    strip.set(3, mRGB(i, i, 0));
    strip.set(4, mRGB(i, i, 0));
    strip.set(5, mRGB(i, i, 0));
    strip.show();
    BluetoothTick();
    delay(20); // ставим задержку для эффекта
  }
  for(int i=190;i<=255;i++) {
    strip.set(0, mRGB(i, i, 0));
    strip.set(1, mRGB(i, i, 0));
    strip.set(2, mRGB(i, i, 0));
    strip.set(3, mRGB(i, i, 0));
    strip.set(4, mRGB(i, i, 0));
    strip.set(5, mRGB(i, i, 0));
    strip.show();
    BluetoothTick();
    delay(20); // ставим задержку для эффекта
  }
}

void mode8() {
  for(int i=255;i>=190;i--) {
    strip.set(0, mRGB(i, i, 0));
    strip.set(1, mRGB(i, i, 0));
    strip.set(2, mRGB(i, i, 0));
    strip.set(3, mRGB(i, i, 0));
    strip.set(4, mRGB(i, i, 0));
    strip.set(5, mRGB(i, i, 0));
    strip.show();
    BluetoothTick();
    delay(20); // ставим задержку для эффекта
  }
  for(int i=190;i<=255;i++) {
    strip.set(0, mRGB(i, i, 0));
    strip.set(1, mRGB(i, i, 0));
    strip.set(2, mRGB(i, i, 0));
    strip.set(3, mRGB(i, i, 0));
    strip.set(4, mRGB(i, i, 0));
    strip.set(5, mRGB(i, i, 0));
    strip.show();
    BluetoothTick();
    delay(20); // ставим задержку для эффекта
  }
}

void mode9() {
  for(int i=255;i>=190;i--) {
    strip.set(0, mRGB(0, i, 0));
    strip.set(1, mRGB(0, i, 0));
    strip.set(2, mRGB(0, i, 0));
    strip.set(3, mRGB(0, i, 0));
    strip.set(4, mRGB(0, i, 0));
    strip.set(5, mRGB(0, i, 0));
    strip.show();
    BluetoothTick();
    delay(20); // ставим задержку для эффекта
  }
  for(int i=190;i<=255;i++) {
    strip.set(0, mRGB(0, i, 0));
    strip.set(1, mRGB(0, i, 0));
    strip.set(2, mRGB(0, i, 0));
    strip.set(3, mRGB(0, i, 0));
    strip.set(4, mRGB(0, i, 0));
    strip.set(5, mRGB(0, i, 0));
    strip.show();
    BluetoothTick();
    delay(20); // ставим задержку для эффекта
  }
}

void mode10() {
  for(int i=255;i>=190;i--) {
    strip.set(0, mRGB(0, i, i));
    strip.set(1, mRGB(0, i, i));
    strip.set(2, mRGB(0, i, i));
    strip.set(3, mRGB(0, i, i));
    strip.set(4, mRGB(0, i, i));
    strip.set(5, mRGB(0, i, i));
    strip.show();
    BluetoothTick();
    delay(20); // ставим задержку для эффекта
  }
  for(int i=190;i<=255;i++) {
    strip.set(0, mRGB(0, i, i));
    strip.set(1, mRGB(0, i, i));
    strip.set(2, mRGB(0, i, i));
    strip.set(3, mRGB(0, i, i));
    strip.set(4, mRGB(0, i, i));
    strip.set(5, mRGB(0, i, i));
    strip.show();
    BluetoothTick();
    delay(20); // ставим задержку для эффекта
  }
}

void mode11() {
  for(int i=255;i>=190;i--) {
    strip.set(0, mRGB(0, 0, i));
    strip.set(1, mRGB(0, 0, i));
    strip.set(2, mRGB(0, 0, i));
    strip.set(3, mRGB(0, 0, i));
    strip.set(4, mRGB(0, 0, i));
    strip.set(5, mRGB(0, 0, i));
    strip.show();
    BluetoothTick();
    delay(20); // ставим задержку для эффекта
  }
  for(int i=190;i<=255;i++) {
    strip.set(0, mRGB(0, 0, i));
    strip.set(1, mRGB(0, 0, i));
    strip.set(2, mRGB(0, 0, i));
    strip.set(3, mRGB(0, 0, i));
    strip.set(4, mRGB(0, 0, i));
    strip.set(5, mRGB(0, 0, i));
    strip.show();
    BluetoothTick();
    delay(20); // ставим задержку для эффекта
  }
}

void mode12() {
  for(int i=255;i>=190;i--) {
    strip.set(0, mRGB(i, 0, i));
    strip.set(1, mRGB(i, 0, i));
    strip.set(2, mRGB(i, 0, i));
    strip.set(3, mRGB(i, 0, i));
    strip.set(4, mRGB(i, 0, i));
    strip.set(5, mRGB(i, 0, i));
    strip.show();
    BluetoothTick();
    delay(20); // ставим задержку для эффекта
  }
  for(int i=190;i<=255;i++) {
    strip.set(0, mRGB(i, 0, i));
    strip.set(1, mRGB(i, 0, i));
    strip.set(2, mRGB(i, 0, i));
    strip.set(3, mRGB(i, 0, i));
    strip.set(4, mRGB(i, 0, i));
    strip.set(5, mRGB(i, 0, i));
    strip.show();
    BluetoothTick();
    delay(20); // ставим задержку для эффекта
  }
}

void loop() {
  switch (mode) {
    case 0: BluetoothTick();
      break;
    case 1: mode1();
      break;
    case 2: mode2();
      break;
    case 3: mode3();
      break;
    case 4: mode4();
      break;
    case 5: mode5();
      break;
    case 6: mode6();
      break;
    case 7: mode7();
      break;
    case 8: mode8();
      break;
    case 9: mode9();
      break;
    case 10: mode10();
      break;
    case 11: mode11();
      break;
    case 12: mode12();
      break;
  }

}
