/*
 * func-name: sub_1009B1F0
 * func-address: 0x1009b1f0
 * callers: none
 * callees: 0x10050b80, 0x101a2534
 */

Actor *__stdcall sub_1009B1F0(struct World *a1)
{
  Actor *v1; // eax

  v1 = (Actor *)operator new(0x41Cu);
  if ( v1 )
    return Actor::Actor(v1, a1);
  else
    return 0;
}
