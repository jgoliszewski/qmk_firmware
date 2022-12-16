#ifdef OLED_ENABLE
static const char PROGMEM logo_clean[512] = {
    0x00, 0x00, 0xf0, 0x00, 0x00, 0x00, 0xf0, 0x00, 0xc0, 0x00, 0x00, 0x00, 0xc0, 0x00, 0x00, 0x80, 
    0x80, 0x00, 0xf0, 0x00, 0x40, 0x40, 0x40, 0xc0, 0x40, 0x00, 0xd0, 0x00, 0x00, 0x40, 0x40, 0x40, 
    0x80, 0x00, 0xf0, 0x00, 0x00, 0x00, 0x00, 0x00, 0xf0, 0x90, 0x90, 0x10, 0x10, 0x00, 0xf0, 0x00, 
    0x00, 0x00, 0x80, 0x40, 0x40, 0x40, 0x80, 0x00, 0xf0, 0x00, 0x80, 0x40, 0x00, 0x20, 0xf0, 0x20, 
    0x00, 0x00, 0xc0, 0x80, 0x40, 0x40, 0x80, 0x00, 0xc0, 0x00, 0x00, 0x00, 0xc0, 0x00, 0x80, 0x40, 
    0x40, 0x40, 0x80, 0x00, 0x40, 0x40, 0x40, 0xc0, 0x40, 0x00, 0xc0, 0x40, 0x40, 0x40, 0x80, 0x00, 
    0xc0, 0x00, 0x00, 0x00, 0xc0, 0x00, 0x00, 0x00, 0xfc, 0xfc, 0x0c, 0x0c, 0x0c, 0xcc, 0xcc, 0xcc, 
    0xcc, 0xcc, 0xcc, 0xdc, 0xd8, 0xd8, 0x18, 0x18, 0x18, 0x18, 0x18, 0x18, 0xf8, 0xf8, 0x00, 0x00, 
    0x00, 0x00, 0x07, 0x02, 0x01, 0x02, 0x07, 0x00, 0x09, 0x0a, 0x0a, 0x0a, 0x07, 0x00, 0x03, 0x04, 
    0x04, 0x05, 0x07, 0x00, 0x04, 0x06, 0x05, 0x04, 0x04, 0x00, 0x07, 0x00, 0x02, 0x05, 0x05, 0x05, 
    0x07, 0x00, 0x03, 0x04, 0x04, 0x00, 0x00, 0x00, 0x07, 0x04, 0x04, 0x04, 0x04, 0x00, 0x03, 0x04, 
    0x04, 0x00, 0x03, 0x05, 0x05, 0x05, 0x05, 0x00, 0x07, 0x01, 0x02, 0x04, 0x00, 0x00, 0x03, 0x04, 
    0x04, 0x00, 0x07, 0x00, 0x00, 0x00, 0x00, 0x00, 0x09, 0x0a, 0x0a, 0x0a, 0x07, 0x00, 0x03, 0x04, 
    0x04, 0x04, 0x02, 0x00, 0x04, 0x06, 0x05, 0x04, 0x04, 0x00, 0x07, 0x00, 0x00, 0x00, 0x07, 0x00, 
    0x09, 0x0a, 0x0a, 0x0a, 0x07, 0x00, 0x00, 0xff, 0xff, 0x00, 0xfe, 0xfe, 0xfe, 0x71, 0x71, 0x71, 
    0x71, 0x71, 0x71, 0x71, 0x71, 0x71, 0x7e, 0x7e, 0x7e, 0x00, 0x00, 0xff, 0xff, 0x00, 0x00, 0x00, 
    0x00, 0x00, 0x00, 0x00, 0x80, 0x00, 0x00, 0x00, 0xfc, 0x00, 0x80, 0x50, 0x50, 0x50, 0xe0, 0x00, 
    0xfc, 0x40, 0xa0, 0x10, 0x00, 0xf0, 0x00, 0x00, 0x00, 0xf0, 0x00, 0xfc, 0x20, 0x10, 0x10, 0xe0, 
    0x00, 0x00, 0x00, 0xf8, 0x04, 0x04, 0x14, 0xf4, 0x00, 0xe0, 0x10, 0x10, 0x10, 0xe0, 0x00, 0xfc, 
    0x00, 0x00, 0x00, 0xe8, 0x00, 0x20, 0x50, 0x50, 0x50, 0x90, 0x00, 0x10, 0x90, 0x50, 0x30, 0x10, 
    0x00, 0xe0, 0x50, 0x50, 0x50, 0x50, 0x60, 0x00, 0xf0, 0x00, 0x00, 0xc0, 0x00, 0xf0, 0x00, 0x20, 
    0x50, 0x50, 0x50, 0x50, 0x90, 0x00, 0xfc, 0x40, 0xa0, 0x10, 0x00, 0xf4, 0x00, 0x00, 0x00, 0x00, 
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xfe, 0xff, 0xc1, 0xc0, 0xc3, 0xc3, 0xc3, 0xdc, 0xdc, 0xdc, 
    0xdc, 0x1c, 0x1c, 0x1c, 0x1c, 0x1c, 0x1c, 0x1c, 0x1c, 0x00, 0xfc, 0xff, 0x03, 0x00, 0x00, 0x00, 
    0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x01, 0x01, 0x00, 0x00, 0x00, 0x01, 0x01, 0x01, 0x01, 0x00, 
    0x01, 0x00, 0x00, 0x01, 0x00, 0x00, 0x01, 0x01, 0x01, 0x01, 0x00, 0x01, 0x01, 0x01, 0x01, 0x00, 
    0x00, 0x00, 0x00, 0x00, 0x01, 0x01, 0x01, 0x00, 0x00, 0x00, 0x01, 0x01, 0x01, 0x00, 0x00, 0x00, 
    0x01, 0x01, 0x00, 0x01, 0x00, 0x01, 0x01, 0x01, 0x01, 0x00, 0x00, 0x01, 0x01, 0x01, 0x01, 0x01, 
    0x00, 0x00, 0x01, 0x01, 0x01, 0x01, 0x01, 0x00, 0x00, 0x01, 0x01, 0x01, 0x01, 0x01, 0x00, 0x01, 
    0x01, 0x01, 0x01, 0x01, 0x00, 0x00, 0x01, 0x00, 0x00, 0x01, 0x00, 0x01, 0x00, 0x00, 0x00, 0x00, 
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x02, 0x02, 0x06, 0x06, 0x0e, 0x0e, 0x1f, 
    0x1b, 0x30, 0x30, 0x60, 0x60, 0x30, 0x30, 0x18, 0x18, 0x0e, 0x0f, 0x07, 0x06, 0x02, 0x02, 0x00
};

void jgol_logo_clean(void)
{
    oled_write_raw_P(logo_clean, 512);
}

bool oled_task_user(void) {
  oled_set_brightness(0);
  jgol_logo_clean();
  return false;
}
#endif