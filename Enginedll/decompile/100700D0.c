/*
 * func-name: sub_100700D0
 * func-address: 0x100700d0
 * callers: 0x10070b00
 * callees: 0x1006c300, 0x1006d860, 0x1006fa60, 0x100ce410, 0x101a2522
 */

int __thiscall sub_100700D0(int this, int a2)
{
  int v2; // eax
  unsigned int v4; // esi
  int v5; // eax
  char *v6; // eax
  bool v7; // cc
  char *v8; // esi
  _DWORD v10[4]; // [esp+0h] [ebp-24h] BYREF
  char *v11; // [esp+10h] [ebp-14h]
  _DWORD *v12; // [esp+14h] [ebp-10h]
  int v13; // [esp+20h] [ebp-4h]

  v2 = *(_DWORD *)(a2 + 4);
  v12 = v10;
  v10[3] = this;
  if ( v2 )
    v4 = (*(_DWORD *)(a2 + 8) - v2) / 36;
  else
    v4 = 0;
  *(_DWORD *)(this + 4) = 0;
  *(_DWORD *)(this + 8) = 0;
  *(_DWORD *)(this + 12) = 0;
  if ( v4 )
  {
    if ( v4 > 0x71C71C7 )
      sub_1006C300();
    v5 = sub_100CE410(v4);
    *(_DWORD *)(this + 4) = v5;
    *(_DWORD *)(this + 8) = v5;
    *(_DWORD *)(this + 12) = v5 + 36 * v4;
    v6 = *(char **)(a2 + 8);
    v7 = *(_DWORD *)(a2 + 4) <= (unsigned int)v6;
    v13 = 0;
    v11 = v6;
    if ( !v7 )
      invalid_parameter_noinfo();
    v8 = *(char **)(a2 + 4);
    if ( (unsigned int)v8 > *(_DWORD *)(a2 + 8) )
      invalid_parameter_noinfo();
    *(_DWORD *)(this + 8) = sub_1006D860(v8, v11, *(CREControl **)(this + 4));
  }
  return this;
}
