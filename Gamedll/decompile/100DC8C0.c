/*
 * func-name: sub_100DC8C0
 * func-address: 0x100dc8c0
 * callers: 0x100179c2
 * callees: 0x10017869, 0x102c9d98
 */

AnimationModal *__stdcall sub_100DC8C0(struct World *a1)
{
  AnimationModal *v1; // eax

  v1 = (AnimationModal *)operator new(0x584u);
  if ( v1 )
    return AnimationModal::AnimationModal(v1, a1);
  else
    return 0;
}
