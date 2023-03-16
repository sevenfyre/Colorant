#ifdef dobogusinclude
#include <spi4teensy3.h>
#endif
#include <SPI.h>

#include "hidcustom.h"

signed char delta[3] = {0, 0, 0};

void MouseRptParser::Parse(USBHID *hid, bool is_rpt_id, uint8_t len, uint8_t *buf)
{
  MYMOUSEINFO *pmi = (MYMOUSEINFO *)buf;

  if (CHECK_BIT(prevState.mouseInfo.buttons, MOUSE_LEFT) != CHECK_BIT(pmi->buttons, MOUSE_LEFT))
  {
    if (CHECK_BIT(pmi->buttons, MOUSE_LEFT))
      Mouse.press(MOUSE_LEFT);
    else
      Mouse.release(MOUSE_LEFT);
  }

  if (CHECK_BIT(prevState.mouseInfo.buttons, MOUSE_RIGHT) != CHECK_BIT(pmi->buttons, MOUSE_RIGHT))
  {
    if (CHECK_BIT(pmi->buttons, MOUSE_RIGHT))
      Mouse.press(MOUSE_RIGHT);
    else
      Mouse.release(MOUSE_RIGHT);
  }

  if (CHECK_BIT(prevState.mouseInfo.buttons, MOUSE_MIDDLE) != CHECK_BIT(pmi->buttons, MOUSE_MIDDLE))
  {
    if (CHECK_BIT(pmi->buttons, MOUSE_MIDDLE))
      Mouse.press(MOUSE_MIDDLE);
    else
      Mouse.release(MOUSE_MIDDLE);
  }

  if (CHECK_BIT(prevState.mouseInfo.buttons, MOUSE_PREV) != CHECK_BIT(pmi->buttons, MOUSE_PREV))
  {
    if (CHECK_BIT(pmi->buttons, MOUSE_PREV))
      Mouse.press(MOUSE_PREV);
    else
      Mouse.release(MOUSE_PREV);
  }

  if (CHECK_BIT(prevState.mouseInfo.buttons, MOUSE_NEXT) != CHECK_BIT(pmi->buttons, MOUSE_NEXT))
  {
    if (CHECK_BIT(pmi->buttons, MOUSE_NEXT))
      Mouse.press(MOUSE_NEXT);
    else
      Mouse.release(MOUSE_NEXT);
  }

  if (pmi->dX || pmi->dY)
    OnMouseMove(pmi);

  if (pmi->wheel)
    OnWheelMove(pmi);

  prevState.bInfo[0] = buf[0];
}

void MouseRptParser::OnMouseMove(MYMOUSEINFO *mi)
{
  delta[0] = mi->dX;
  delta[1] = mi->dY;
}

void MouseRptParser::OnWheelMove(MYMOUSEINFO *mi)
{
  delta[2] = mi->wheel;
}

#include <usbhub.h>

USB Usb;
USBHub Hub(&Usb);
HIDBoot<USB_HID_PROTOCOL_MOUSE> HidMouse(&Usb);

MouseRptParser Prs;

void setup()
{
  Serial.begin(115200);
  Serial.setTimeout(1);
  Usb.Init();
  HidMouse.SetReportParser(0, &Prs);
  Mouse.begin();
}

void loop()
{
  delta[0] = 0;
  delta[1] = 0;
  delta[2] = 0;
  Usb.Task();

  if (Serial.available() > 0)
  {
    char inChar = Serial.read();
    if (inChar == 'M')
      Serial.readBytes((char *)&delta, 2);
    else if (inChar == 'C')
      Mouse.click();
  }
  Mouse.move(delta[0], delta[1], delta[2]);
}