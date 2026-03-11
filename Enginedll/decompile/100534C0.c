/*
 * func-name: sub_100534C0
 * func-address: 0x100534c0
 * callers: 0x10053750
 * callees: 0x10051d70, 0x10052c10, 0x100533e0, 0x100995f0, 0x101a2522
 */

int __thiscall sub_100534C0(int this, int a2)
{
  int v2; // eax
  unsigned int v4; // esi
  int v5; // eax
  unsigned int v6; // eax
  bool v7; // cc
  struct CollisionInfo *v8; // esi
  _DWORD v10[4]; // [esp+0h] [ebp-24h] BYREF
  int v11; // [esp+10h] [ebp-14h]
  _DWORD *v12; // [esp+14h] [ebp-10h]
  int v13; // [esp+20h] [ebp-4h]

  v2 = *(_DWORD *)(a2 + 4);
  v12 = v10;
  v10[3] = this;
  if ( v2 )
    v4 = (*(_DWORD *)(a2 + 8) - v2) / 104;
  else
    v4 = 0;
  *(_DWORD *)(this + 4) = 0;
  *(_DWORD *)(this + 8) = 0;
  *(_DWORD *)(this + 12) = 0;
  if ( v4 )
  {
    if ( v4 > 0x2762762 )
      sub_10051D70();
    v5 = sub_100995F0(v4);
    *(_DWORD *)(this + 4) = v5;
    *(_DWORD *)(this + 8) = v5;
    *(_DWORD *)(this + 12) = v5 + 104 * v4;
    v6 = *(_DWORD *)(a2 + 8);
    v7 = *(_DWORD *)(a2 + 4) <= v6;
    v13 = 0;
    v11 = v6;
    if ( !v7 )
      invalid_parameter_noinfo();
    v8 = *(struct CollisionInfo **)(a2 + 4);
    if ( (unsigned int)v8 > *(_DWORD *)(a2 + 8) )
      invalid_parameter_noinfo();
    *(_DWORD *)(this + 8) = sub_10052C10(v8, (struct CollisionInfo *)v11, *(CollisionInfo **)(this + 4));
  }
  return this;
}
