/*
 * func-name: ?WriteArmorInfo@DamageUnit@GameClient@@UAE_NAAVBinStream@@@Z_0
 * func-address: 0x10158350
 * callers: 0x10004fca
 * callees: 0x10013327, 0x1001a89d
 */

bool __thiscall GameClient::DamageUnit::WriteArmorInfo(GameClient::DamageUnit *this, struct BinStream *a2)
{
  _DWORD *v2; // ebp
  unsigned int v3; // esi
  unsigned int v4; // edi
  int v6; // eax
  int v7; // edx
  int v8; // edi
  int v9; // ecx
  unsigned int v10; // eax
  int v11; // ecx
  int v12; // ecx
  double v13; // st7
  int v14; // ecx
  double v15; // st7
  int v16; // ecx
  double v17; // st7
  bool result; // al
  _DWORD v19[5]; // [esp+10h] [ebp-14h] BYREF
  struct BinStream *v20; // [esp+28h] [ebp+4h]

  v2 = (_DWORD *)((char *)this + 4);
  v3 = *((_DWORD *)this + 3);
  if ( *((_DWORD *)this + 2) > v3 )
    _invalid_parameter_noinfo();
  v4 = v2[1];
  if ( v4 > v2[2] )
    _invalid_parameter_noinfo();
  if ( v4 != v3 )
    v2[2] = sub_10013327(v3, v2[2], v4);
  v6 = *((_DWORD *)a2 + 3);
  v7 = 0;
  if ( (unsigned int)(v6 + 4) <= *((_DWORD *)a2 + 2) )
  {
    v7 = *(_DWORD *)(v6 + *((_DWORD *)a2 + 1));
    *((_DWORD *)a2 + 3) = v6 + 4;
  }
  if ( v7 <= 0 )
    return 1;
  v20 = (struct BinStream *)v7;
  v8 = v7;
  do
  {
    v9 = *((_DWORD *)a2 + 3);
    v10 = *((_DWORD *)a2 + 2);
    if ( v9 + 4 <= v10 )
    {
      v8 = *(_DWORD *)(v9 + *((_DWORD *)a2 + 1));
      *((_DWORD *)a2 + 3) = v9 + 4;
    }
    v11 = *((_DWORD *)a2 + 3);
    v19[0] = v8;
    if ( v11 + 4 <= v10 )
    {
      v19[1] = *(_DWORD *)(v11 + *((_DWORD *)a2 + 1));
      *((_DWORD *)a2 + 3) = v11 + 4;
    }
    v12 = *((_DWORD *)a2 + 3);
    if ( v12 + 4 <= v10 )
    {
      v13 = *(float *)(v12 + *((_DWORD *)a2 + 1));
      *((_DWORD *)a2 + 3) = v12 + 4;
      *(float *)&v19[2] = v13;
    }
    v14 = *((_DWORD *)a2 + 3);
    if ( v14 + 4 <= v10 )
    {
      v15 = *(float *)(v14 + *((_DWORD *)a2 + 1));
      *((_DWORD *)a2 + 3) = v14 + 4;
      *(float *)&v19[3] = v15;
    }
    v16 = *((_DWORD *)a2 + 3);
    if ( v16 + 4 <= v10 )
    {
      v17 = *(float *)(v16 + *((_DWORD *)a2 + 1));
      *((_DWORD *)a2 + 3) = v16 + 4;
      *(float *)&v19[4] = v17;
    }
    sub_1001A89D(v2, v19);
    result = 1;
    v20 = (struct BinStream *)((char *)v20 - 1);
  }
  while ( v20 );
  return result;
}
