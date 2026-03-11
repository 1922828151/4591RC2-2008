/*
 * func-name: sub_101B8610
 * func-address: 0x101b8610
 * callers: none
 * callees: 0x10111a30, 0x101a26a0
 */

int __fastcall sub_101B8610(int a1)
{
  char v2; // [esp+1h] [ebp-1h] BYREF

  v2 = HIBYTE(a1);
  sub_10111A30(&Precacher::m_mapSoundTMPs, &v2, (int)&v2);
  return atexit(sub_101B9390);
}
