/*
 * func-name: sub_100E3850
 * func-address: 0x100e3850
 * callers: 0x100031fc
 * callees: 0x10006401
 */

int __thiscall sub_100E3850(_DWORD *this, _DWORD *a2)
{
  int v2; // edx
  int v3; // eax
  int v4; // edi
  _DWORD *v5; // esi
  _DWORD *v6; // eax
  _DWORD v8[2]; // [esp+Ch] [ebp-10h] BYREF
  char v9[8]; // [esp+14h] [ebp-8h] BYREF

  v2 = this[1];
  v3 = *(_DWORD *)(v2 + 4);
  while ( !*(_BYTE *)(v3 + 21) )
  {
    if ( *(_DWORD *)(v3 + 12) >= *a2 )
    {
      v2 = v3;
      v3 = *(_DWORD *)v3;
    }
    else
    {
      v3 = *(_DWORD *)(v3 + 8);
    }
  }
  v4 = v2;
  v5 = this;
  if ( v2 == this[1] || *a2 < *(_DWORD *)(v2 + 12) )
  {
    v8[0] = *a2;
    v8[1] = 0;
    v6 = (_DWORD *)sub_10006401((int)v9, (int)this, v2, (int)v8);
    v5 = (_DWORD *)*v6;
    v4 = v6[1];
  }
  if ( !v5 )
    _invalid_parameter_noinfo();
  if ( v4 == v5[1] )
    _invalid_parameter_noinfo();
  return v4 + 16;
}
