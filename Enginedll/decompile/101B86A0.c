/*
 * func-name: sub_101B86A0
 * func-address: 0x101b86a0
 * callers: none
 * callees: 0x10111b30, 0x101a26a0
 */

int __fastcall sub_101B86A0(int a1)
{
  char v2; // [esp+1h] [ebp-1h] BYREF

  v2 = HIBYTE(a1);
  sub_10111B30(&Precacher::m_mapActorGroupTMPs, &v2, (int)&v2);
  return atexit(sub_101B9430);
}
