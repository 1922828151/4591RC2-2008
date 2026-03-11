/*
 * func-name: sub_101B8700
 * func-address: 0x101b8700
 * callers: none
 * callees: 0x10111c30, 0x101a26a0
 */

int __fastcall sub_101B8700(int a1)
{
  char v2; // [esp+1h] [ebp-1h] BYREF

  v2 = HIBYTE(a1);
  sub_10111C30(&Precacher::m_mapErrorText, &v2, (int)&v2);
  return atexit(sub_101B94D0);
}
