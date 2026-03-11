/*
 * func-name: sub_10007360
 * func-address: 0x10007360
 * callers: 0x10003bf0, 0x10003d80, 0x10010270, 0x100105c0, 0x10012e10, 0x10013040
 * callees: 0x10007250, 0x10008d90, 0x1000a500, 0x10029d92
 */

int __thiscall sub_10007360(_DWORD *this, int a2)
{
  int v3; // eax
  int v4; // esi
  void *v5; // esi
  int v7; // [esp+0h] [ebp-34h] BYREF
  _DWORD *v8; // [esp+10h] [ebp-24h]
  int v9; // [esp+18h] [ebp-1Ch]
  int v10; // [esp+20h] [ebp-14h]
  int *v11; // [esp+24h] [ebp-10h]
  int v12; // [esp+30h] [ebp-4h]

  v11 = &v7;
  v3 = this[1];
  if ( v3 )
    v4 = (this[2] - v3) >> 2;
  else
    v4 = 0;
  *(_DWORD *)(a2 + 4) = 0;
  *(_DWORD *)(a2 + 8) = 0;
  *(_DWORD *)(a2 + 12) = 0;
  if ( v4 && (unsigned __int8)sub_10008D90() )
  {
    v12 = 0;
    v10 = this[2];
    v9 = 0;
    if ( this[1] > (unsigned int)v10 )
      invalid_parameter_noinfo();
    v9 = (int)this;
    v5 = (void *)this[1];
    v8 = 0;
    if ( (unsigned int)v5 > this[2] )
      invalid_parameter_noinfo();
    v8 = this;
    *(_DWORD *)(a2 + 8) = sub_1000A500(*(void **)(a2 + 4), (int)this, v5, v9, v10);
    v12 = -1;
  }
  return a2;
}
