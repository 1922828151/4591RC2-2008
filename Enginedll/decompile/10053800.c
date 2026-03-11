/*
 * func-name: sub_10053800
 * func-address: 0x10053800
 * callers: 0x10053bb0, 0x10054100, 0x10144670
 * callees: 0x10051d20, 0x100520a0, 0x10052bc0, 0x10052e60, 0x10052ef0, 0x100531e0, 0x100533c0, 0x100535b0, 0x101a2500
 */

int __thiscall sub_10053800(int this, int a2)
{
  int v3; // eax
  unsigned int v4; // ecx
  int v6; // ebx
  unsigned int v7; // eax
  int v8; // eax
  int v9; // eax
  unsigned int v10; // eax
  struct CollisionInfo *v11; // edi
  unsigned int v12; // eax

  if ( this == a2 )
    return this;
  v3 = *(_DWORD *)(a2 + 4);
  if ( !v3 || (v4 = (*(_DWORD *)(a2 + 8) - v3) / 104) == 0 )
  {
    sub_100535B0((int *)this);
    return this;
  }
  v6 = *(_DWORD *)(this + 4);
  if ( v6 )
    v7 = (*(_DWORD *)(this + 8) - v6) / 104;
  else
    v7 = 0;
  if ( v4 > v7 )
  {
    if ( v6 )
      v10 = (*(_DWORD *)(this + 12) - v6) / 104;
    else
      v10 = 0;
    if ( v4 <= v10 )
    {
      v11 = (struct CollisionInfo *)(*(_DWORD *)(a2 + 4) + 104 * sub_10051D20((_DWORD *)this));
      sub_10052E60(*(_DWORD *)(a2 + 4), (int)v11, v6);
      *(_DWORD *)(this + 8) = sub_100531E0(v11, *(struct CollisionInfo **)(a2 + 8), *(CollisionInfo **)(this + 8));
      return this;
    }
    if ( v6 )
    {
      sub_100533C0(v6, *(_DWORD *)(this + 8));
      operator delete(*(void **)(this + 4));
    }
    v12 = sub_10051D20((_DWORD *)a2);
    if ( sub_100520A0((_DWORD *)this, v12) )
      *(_DWORD *)(this + 8) = sub_100531E0(
                                *(struct CollisionInfo **)(a2 + 4),
                                *(struct CollisionInfo **)(a2 + 8),
                                *(CollisionInfo **)(this + 4));
    return this;
  }
  v8 = sub_10052BC0(*(_DWORD *)(a2 + 4), *(_DWORD *)(a2 + 8), v6);
  sub_10052EF0(v8, *(_DWORD *)(this + 8));
  v9 = *(_DWORD *)(a2 + 4);
  if ( v9 )
    *(_DWORD *)(this + 8) = *(_DWORD *)(this + 4) + 104 * ((*(_DWORD *)(a2 + 8) - v9) / 104);
  else
    *(_DWORD *)(this + 8) = *(_DWORD *)(this + 4);
  return this;
}
