/*
 * func-name: sub_101B85B0
 * func-address: 0x101b85b0
 * callers: none
 * callees: 0x101119b0, 0x101a26a0
 */

int __fastcall sub_101B85B0(int a1)
{
  char v2; // [esp+1h] [ebp-1h] BYREF

  v2 = HIBYTE(a1);
  sub_101119B0(&Precacher::m_mapModelTMPs, &v2, (int)&v2);
  return atexit(sub_101B92F0);
}
