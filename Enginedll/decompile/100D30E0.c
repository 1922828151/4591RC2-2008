/*
 * func-name: sub_100D30E0
 * func-address: 0x100d30e0
 * callers: 0x100d4ef0
 * callees: 0x100ce150, 0x100ce410, 0x100cfc80, 0x100d26d0, 0x101a2522
 */

_DWORD *__thiscall sub_100D30E0(_DWORD *this, int a2)
{
  int v2; // eax
  unsigned int v4; // esi
  char *v5; // eax
  _DWORD *v6; // eax
  bool v7; // cc
  _DWORD *v8; // esi
  _DWORD v10[4]; // [esp+0h] [ebp-24h] BYREF
  _DWORD *v11; // [esp+10h] [ebp-14h]
  _DWORD *v12; // [esp+14h] [ebp-10h]
  int v13; // [esp+20h] [ebp-4h]

  v2 = *(_DWORD *)(a2 + 4);
  v12 = v10;
  v10[3] = this;
  if ( v2 )
    v4 = (*(_DWORD *)(a2 + 8) - v2) / 36;
  else
    v4 = 0;
  this[1] = 0;
  this[2] = 0;
  this[3] = 0;
  if ( v4 )
  {
    if ( v4 > 0x71C71C7 )
      sub_100CE150();
    v5 = (char *)sub_100CE410(v4);
    this[1] = v5;
    this[2] = v5;
    this[3] = &v5[36 * v4];
    v6 = *(_DWORD **)(a2 + 8);
    v7 = *(_DWORD *)(a2 + 4) <= (unsigned int)v6;
    v13 = 0;
    v11 = v6;
    if ( !v7 )
      invalid_parameter_noinfo();
    v8 = *(_DWORD **)(a2 + 4);
    if ( (unsigned int)v8 > *(_DWORD *)(a2 + 8) )
      invalid_parameter_noinfo();
    this[2] = sub_100CFC80(v8, v11, (_DWORD *)this[1]);
  }
  return this;
}
