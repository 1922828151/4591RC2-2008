/*
 * func-name: sub_10134AB0
 * func-address: 0x10134ab0
 * callers: 0x10133ce0
 * callees: 0x1010fea0, 0x1012b0d0, 0x1012b150, 0x1012b390, 0x101a2522
 */

int __thiscall sub_10134AB0(int this, int a2)
{
  int v2; // eax
  unsigned int v4; // esi
  char *v5; // eax
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
    v4 = (*(_DWORD *)(a2 + 8) - v2) / 176;
  else
    v4 = 0;
  *(_DWORD *)(this + 4) = 0;
  *(_DWORD *)(this + 8) = 0;
  *(_DWORD *)(this + 12) = 0;
  if ( v4 )
  {
    if ( v4 > 0x1745D17 )
      sub_1012B0D0();
    v5 = (char *)sub_1012B150(v4);
    *(_DWORD *)(this + 4) = v5;
    *(_DWORD *)(this + 8) = v5;
    *(_DWORD *)(this + 12) = &v5[176 * v4];
    v6 = *(char **)(a2 + 8);
    v7 = *(_DWORD *)(a2 + 4) <= (unsigned int)v6;
    v13 = 0;
    v11 = v6;
    if ( !v7 )
      invalid_parameter_noinfo();
    v8 = *(char **)(a2 + 4);
    if ( (unsigned int)v8 > *(_DWORD *)(a2 + 8) )
      invalid_parameter_noinfo();
    *(_DWORD *)(this + 8) = sub_1012B390(v8, v11, *(char **)(this + 4));
  }
  return this;
}
