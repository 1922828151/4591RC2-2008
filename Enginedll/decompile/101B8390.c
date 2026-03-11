/*
 * func-name: sub_101B8390
 * func-address: 0x101b8390
 * callers: none
 * callees: 0x100f8280, 0x101a26a0
 */

int __fastcall sub_101B8390(int a1)
{
  char v2; // [esp+1h] [ebp-1h] BYREF

  v2 = HIBYTE(a1);
  sub_100F8280(&AnimationSet::m_staticAnimations, &v2, (int)&v2);
  return atexit(sub_101B90B0);
}
