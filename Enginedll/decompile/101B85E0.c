/*
 * func-name: sub_101B85E0
 * func-address: 0x101b85e0
 * callers: none
 * callees: 0x100f74b0, 0x101a26a0
 */

int __fastcall sub_101B85E0(int a1)
{
  char v2; // [esp+1h] [ebp-1h] BYREF

  v2 = HIBYTE(a1);
  sub_100F74B0(&Precacher::m_mapAnimTMPs, &v2, (int)&v2);
  return atexit(sub_101B9340);
}
