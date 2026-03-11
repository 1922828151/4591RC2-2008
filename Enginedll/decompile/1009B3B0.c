/*
 * func-name: sub_1009B3B0
 * func-address: 0x1009b3b0
 * callers: none
 * callees: 0x100544f0, 0x101a2534
 */

ActorInstancer *__stdcall sub_1009B3B0(struct World *a1)
{
  ActorInstancer *v1; // eax

  v1 = (ActorInstancer *)operator new(0x458u);
  if ( v1 )
    return ActorInstancer::ActorInstancer(v1, a1);
  else
    return 0;
}
