/*
 * func-name: sub_1009F850
 * func-address: 0x1009f850
 * callers: 0x1000ae2a
 * callees: none
 */

void __thiscall sub_1009F850(_DWORD *this, _DWORD *a2)
{
  struct Vector *v2; // eax
  ActorGroup *v3; // ecx

  v2 = (struct Vector *)(this + 11);
  v3 = (ActorGroup *)this[1];
  *(_DWORD *)v2 = *a2;
  *((_DWORD *)v2 + 1) = a2[1];
  *((_DWORD *)v2 + 2) = a2[2];
  ActorGroup::SetTransform(v3, v2, 0);
}
