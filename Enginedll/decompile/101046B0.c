/*
 * func-name: sub_101046B0
 * func-address: 0x101046b0
 * callers: 0x1004df10, 0x1004e070
 * callees: 0x10001440, 0x1004d2e0, 0x100ee930, 0x10102270, 0x101025c0, 0x10103770, 0x10104470, 0x1017a0b0, 0x101a2500
 */

void __thiscall sub_101046B0(int *this, int a2)
{
  unsigned int v3; // edi
  int v4; // esi
  int v5; // ecx
  int v6; // esi
  int v7; // ecx
  int v8; // esi
  int v9; // esi
  int v10; // ecx
  int v11; // esi
  void *v12; // esi
  float v13[4]; // [esp+4h] [ebp-5Ch] BYREF
  float v14; // [esp+14h] [ebp-4Ch]
  float v15; // [esp+18h] [ebp-48h]
  float v16; // [esp+1Ch] [ebp-44h]
  float v17; // [esp+20h] [ebp-40h]
  float v18; // [esp+24h] [ebp-3Ch]
  float v19; // [esp+28h] [ebp-38h]
  _DWORD v20[4]; // [esp+2Ch] [ebp-34h] BYREF
  float v21; // [esp+3Ch] [ebp-24h]
  float v22; // [esp+40h] [ebp-20h]
  float v23; // [esp+44h] [ebp-1Ch]
  float v24; // [esp+48h] [ebp-18h]
  float v25; // [esp+4Ch] [ebp-14h]
  float v26; // [esp+50h] [ebp-10h]
  int v27; // [esp+5Ch] [ebp-4h]

  if ( byte_10282ED4 )
    return;
  sub_101025C0(a2);
  sub_10001440(v13);
  v17 = -1.0e10;
  v18 = -1.0e10;
  v3 = 0;
  v19 = -1.0e10;
  v27 = 0;
  v14 = 1.0e10;
  v15 = 1.0e10;
  v16 = 1.0e10;
  while ( 1 )
  {
    v4 = this[1];
    v5 = *(_DWORD *)(v4 + 3224);
    if ( !v5 || v3 >= (*(_DWORD *)(v4 + 3228) - v5) >> 2 )
      break;
    if ( !*(_BYTE *)(*(_DWORD *)(*(_DWORD *)(v4 + 3224) + 4 * v3) + 696) )
      goto LABEL_26;
    v6 = this[1];
    v7 = *(_DWORD *)(v6 + 3224);
    v8 = v6 + 3220;
    if ( !v7 || v3 >= (*(_DWORD *)(v8 + 8) - v7) >> 2 )
      invalid_parameter_noinfo();
    if ( *(_DWORD *)(*(_DWORD *)(*(_DWORD *)(v8 + 4) + 4 * v3) + 716) )
    {
      v9 = this[1];
      v10 = *(_DWORD *)(v9 + 3224);
      v11 = v9 + 3220;
      if ( !v10 || v3 >= (*(_DWORD *)(v11 + 8) - v10) >> 2 )
        invalid_parameter_noinfo();
      StaticModel::GetWorldBBox(*(_DWORD **)(*(_DWORD *)(*(_DWORD *)(v11 + 4) + 4 * v3) + 716), v20);
      if ( v24 > (double)v17 )
        v17 = v24;
      if ( v25 > (double)v18 )
        v18 = v25;
      if ( v26 > (double)v19 )
        v19 = v26;
      if ( v21 < (double)v14 )
        v14 = v21;
      if ( v22 < (double)v15 )
        v15 = v22;
      if ( v23 >= (double)v16 )
      {
        sub_1017A0B0(v20);
        goto LABEL_26;
      }
      v16 = v23;
      sub_1017A0B0(v20);
      ++v3;
    }
    else
    {
LABEL_26:
      ++v3;
    }
  }
  v12 = (void *)*this;
  if ( !*this || sub_1004D2E0(v13, (float *)*this) )
  {
    sub_10104470(this, a2);
  }
  else
  {
    sub_10102270((int)v12);
    operator delete(v12);
    *this = 0;
    sub_10103770(this);
  }
  v27 = -1;
  sub_1017A0B0(v13);
}
