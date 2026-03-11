/*
 * func-name: sub_101B8250
 * func-address: 0x101b8250
 * callers: none
 * callees: 0x101a24ac, 0x101a26a0
 */

int sub_101B8250()
{
  CMLIMEEditBox::s_CompString = (LPCWSTR)operator new(0x200u);
  *CMLIMEEditBox::s_CompString = 0;
  dword_1123E210 = 256;
  dword_1123E214 = 0;
  byte_1123E21C = 1;
  dword_1123E220 = 0;
  dword_1123E218 = 0;
  return atexit(sub_101B8E40);
}
