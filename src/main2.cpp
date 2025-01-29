// #include <TinyGPS++.h>
// #include <SoftwareSerial.h>

// // 创建 GPS 对象
// TinyGPSPlus gps;

// // 创建软件串口对象，设置 RX 和 TX 引脚
// SoftwareSerial ss(18, 17); // RX, TX

// void setup() {
//   Serial.begin(115200); // 初始化串口监视器
//   ss.begin(38400); // 初始化软件串口
//   Serial.println("GPS 模块正在初始化");
//   Serial.println(ss.available());

// }

// void loop() {
//   // 读取 GPS 数据
//   while (ss.available() > 0) {
//   // Serial.println(ss.available());

    
//   // Serial.println("串口可用");
//   Serial.println(ss.read());

//     gps.encode(ss.read());
    
//     // 如果有有效的 GPS 数据
//     if (gps.location.isUpdated()) {
//       Serial.print("Latitude: ");
//       Serial.print(gps.location.lat(), 6); // 输出纬度，保留 6 位小数
//       Serial.print(" Longitude: ");
//       Serial.print(gps.location.lng(), 6); // 输出经度，保留 6 位小数
//       Serial.print(" Altitude: ");
//       Serial.print(gps.altitude.meters()); // 输出高度，单位为米
//       Serial.println(" m");

//       Serial.print("Speed: ");
//       Serial.print(gps.speed.kmph()); // 输出速度，单位为公里每小时
//       Serial.println(" km/h");

//       Serial.print("Date: ");
//       Serial.print(gps.date.day());
//       Serial.print("/");
//       Serial.print(gps.date.month());
//       Serial.print("/");
//       Serial.println(gps.date.year());

//       Serial.print("Time: ");
//       Serial.print(gps.time.hour());
//       Serial.print(":");
//       Serial.print(gps.time.minute());
//       Serial.print(":");
//       Serial.println(gps.time.second());
//     }
//   }
// }