// #include <TinyGPS++.h>

// // 创建 GPS 对象
// TinyGPSPlus gps;

// // 定义串口引脚
// #define GPS_RX_PIN 18
// #define GPS_TX_PIN 17

// // 创建硬件串口对象
// HardwareSerial mySerial(1); // 使用 UART1

// void setup() {
//   Serial.begin(115200); // 初始化串口监视器
//   mySerial.begin(38400, SERIAL_8N1, GPS_RX_PIN, GPS_TX_PIN); // 初始化硬件串口
//   Serial.println("GPS 模块正在初始化");
// }

// void loop() {
//   while (mySerial.available()) {
//     char c = mySerial.read(); // 从 GPS 模块读取字符
//     Serial.println(c);

//     gps.encode(c); // 解析 GPS 数据

//     // 如果有有效的 GPS 数据
//     if (gps.location.isUpdated()) {
//       Serial.print("Latitude: ");
//       Serial.print(gps.location.lat(), 6); // 输出纬度
//       Serial.print(" Longitude: ");
//       Serial.print(gps.location.lng(), 6); // 输出经度
//       Serial.println();
//     }
//   }

//   // 如果没有数据可用
//   if (!gps.location.isValid()) {
//     Serial.println("GPS 数据无效");
//   }

//   delay(1000); // 延时以避免过于频繁的输出
// }