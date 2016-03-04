// copied from http://heim.ifi.uio.no/haakoh/avr/a
//const int font_count = 47;
const unsigned char PROGMEM myfont[47][5] = {
  {0, 0, 0, 0, 0}, // space!
  {0x3f, 0x48, 0x48, 0x48, 0x3f}, // A
  {0x7f, 0x49, 0x49, 0x49, 0x36},
  {0x3e, 0x41, 0x41, 0x41, 0x22},
  {0x7f, 0x41, 0x41, 0x22, 0x1c},
  {0x7f, 0x49, 0x49, 0x49, 0x41},
  {0x7f, 0x48, 0x48, 0x48, 0x40},
  {0x3e, 0x41, 0x49, 0x49, 0x2e},  // G
  {0x7f, 0x08, 0x08, 0x08, 0x7f},
  {0x00, 0x41, 0x7f, 0x41, 0x00},
  {0x06, 0x01, 0x01, 0x01, 0x7e},
  {0x7f, 0x08, 0x14, 0x22, 0x41},
  {0x7f, 0x01, 0x01, 0x01, 0x01},
  {0x7f, 0x20, 0x10, 0x20, 0x7f},
  {0x7f, 0x10, 0x08, 0x04, 0x7f},
  {0x3e, 0x41, 0x41, 0x41, 0x3e},
  {0x7f, 0x48, 0x48, 0x48, 0x30},  // P
  {0x3e, 0x41, 0x45, 0x42, 0x3d},
  {0x7f, 0x48, 0x4c, 0x4a, 0x31},
  {0x31, 0x49, 0x49, 0x49, 0x46},
  {0x40, 0x40, 0x7f, 0x40, 0x40},
  {0x7e, 0x01, 0x01, 0x01, 0x7e},
  {0x7c, 0x02, 0x01, 0x02, 0x7c},
  {0x7f, 0x02, 0x04, 0x02, 0x7f},
  {0x63, 0x14, 0x08, 0x14, 0x63},
  {0x60, 0x10, 0x0f, 0x10, 0x60},
  {0x43, 0x45, 0x49, 0x51, 0x61},  // Z
  
  {0x3e, 0x45, 0x49, 0x51, 0x3e},  // 0 (pretty)
  {0x00, 0x10, 0x20, 0x7f, 0x00},
  {0x47, 0x49, 0x49, 0x49, 0x31},
  {0x42, 0x49, 0x59, 0x69, 0x46},
  {0x08, 0x18, 0x28, 0x7f, 0x08},
  {0x71, 0x49, 0x49, 0x49, 0x46},
  {0x3e, 0x49, 0x49, 0x49, 0x06},
  {0x40, 0x47, 0x48, 0x50, 0x60},
  {0x36, 0x49, 0x49, 0x49, 0x36},
  {0x30, 0x49, 0x49, 0x49, 0x3e}, // 9
  
  {0x7f, 0x41, 0x41, 0x41, 0x7f},  // 0 (block)
  {0x00, 0x00, 0x00, 0x00, 0x7f},
  {0x4f, 0x49, 0x49, 0x49, 0x79},
  {0x49, 0x49, 0x49, 0x49, 0x7f},
  {0x78, 0x08, 0x08, 0x08, 0x7f},
  {0x79, 0x49, 0x49, 0x49, 0x4f},
  {0x7f, 0x49, 0x49, 0x49, 0x4f},
  {0x40, 0x40, 0x40, 0x40, 0x7f},
  {0x7f, 0x49, 0x49, 0x49, 0x7f},  // 8
  {0x79, 0x49, 0x49, 0x49, 0x7f}};
