/*
 * func-name: sub_101B81C0
 * func-address: 0x101b81c0
 * callers: none
 * callees: 0x101a24ac, 0x101a26a0
 */

int sub_101B81C0()
{
  CREIMEEditBox::s_CompString = (LPCWSTR)operator new(0x200u);
  *CREIMEEditBox::s_CompString = 0;
  dword_1123E22C = 256;
  dword_1123E230 = 0;
  byte_1123E238 = 1;
  dword_1123E23C = 0;
  dword_1123E234 = 0;
  return atexit(sub_101B8E80);
}
