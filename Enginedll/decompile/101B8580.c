/*
 * func-name: sub_101B8580
 * func-address: 0x101b8580
 * callers: none
 * callees: 0x10111930, 0x101a26a0
 */

int __fastcall sub_101B8580(int a1)
{
  char v2; // [esp+1h] [ebp-1h] BYREF

  v2 = HIBYTE(a1);
  sub_10111930(&Precacher::m_mapTextureTMPs, &v2, (int)&v2);
  return atexit(sub_101B92A0);
}
