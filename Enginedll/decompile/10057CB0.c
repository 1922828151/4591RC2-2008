/*
 * func-name: sub_10057CB0
 * func-address: 0x10057cb0
 * callers: 0x100553c0, 0x10057cb0
 * callees: 0x10057cb0
 */

void __thiscall sub_10057CB0(_DWORD *this)
{
  unsigned int i; // esi
  int v3; // ecx
  unsigned int v4; // ebp
  int v5; // ecx
  void (__cdecl *v6)(); // ebx
  int v7; // ecx
  _DWORD *v8; // esi
  unsigned int v9; // eax
  int v10; // ecx
  _DWORD *v11; // esi
  unsigned int v12; // ebx
  unsigned int v13; // eax
  unsigned int v14; // ebx
  int v15; // eax
  unsigned int v16; // ebp
  unsigned int v17; // ecx
  int v18; // ecx
  _DWORD *v19; // esi
  unsigned int v20; // eax
  int v21; // edx
  _DWORD *v22; // esi
  unsigned int v23; // ebp
  unsigned int v24; // eax
  unsigned int v25; // ebx
  int v26; // eax
  unsigned int v27; // ebp
  unsigned int v28; // ecx
  int v29; // edx
  int v30; // ecx
  unsigned int j; // esi
  int v32; // ecx
  unsigned int v33; // [esp+10h] [ebp-Ch]
  unsigned int v34; // [esp+14h] [ebp-8h]

  for ( i = 0; ; ++i )
  {
    v3 = this[7];
    v34 = i;
    if ( !v3 || i >= (this[8] - v3) >> 2 )
      break;
    v4 = 0;
    v33 = 0;
    while ( 1 )
    {
      v5 = this[7];
      if ( v5 && i < (this[8] - v5) >> 2 )
      {
        v6 = invalid_parameter_noinfo;
      }
      else
      {
        v6 = invalid_parameter_noinfo;
        invalid_parameter_noinfo();
      }
      v7 = this[7];
      if ( v4 >= *(_DWORD *)(*(_DWORD *)(v7 + 4 * i) + 252) )
        break;
      if ( !v7 || i >= (this[8] - v7) >> 2 )
        v6();
      v8 = *(_DWORD **)(this[7] + 4 * i);
      v9 = v8[62];
      v10 = v8[63];
      v11 = v8 + 59;
      v12 = v9;
      if ( v9 > v9 + v10 )
        invalid_parameter_noinfo();
      v13 = v11[3];
      v14 = v4 + v12;
      if ( v14 > v13 + v11[4] || v14 < v13 )
        invalid_parameter_noinfo();
      v15 = v14 & 3;
      v16 = v14 >> 2;
      if ( v14 >= v11[4] + v11[3] )
      {
        invalid_parameter_noinfo();
        v15 = v14 & 3;
      }
      v17 = v11[2];
      if ( v17 <= v16 )
        v16 -= v17;
      *(_DWORD *)(*(_DWORD *)(*(_DWORD *)(v11[1] + 4 * v16) + 4 * v15) + 256) = 0;
      v18 = this[7];
      if ( !v18 || v34 >= (this[8] - v18) >> 2 )
        invalid_parameter_noinfo();
      v19 = *(_DWORD **)(this[7] + 4 * v34);
      v20 = v19[62];
      v21 = v19[63];
      v22 = v19 + 59;
      v23 = v20;
      if ( v20 > v20 + v21 )
        invalid_parameter_noinfo();
      v24 = v22[3];
      v25 = v33 + v23;
      if ( v33 + v23 > v24 + v22[4] || v25 < v24 )
        invalid_parameter_noinfo();
      v26 = v25 & 3;
      v27 = v25 >> 2;
      if ( v25 >= v22[4] + v22[3] )
      {
        invalid_parameter_noinfo();
        v26 = v25 & 3;
      }
      v28 = v22[2];
      if ( v28 <= v27 )
        v27 -= v28;
      v29 = *(_DWORD *)(*(_DWORD *)(v22[1] + 4 * v27) + 4 * v26);
      ++v33;
      i = v34;
      v4 = v33;
      *(_DWORD *)(v29 + 260) = 0;
    }
    if ( !v7 || i >= (this[8] - v7) >> 2 )
      v6();
    *(_DWORD *)(*(_DWORD *)(this[7] + 4 * i) + 256) = 0;
    v30 = this[7];
    if ( !v30 || i >= (this[8] - v30) >> 2 )
      v6();
    *(_DWORD *)(*(_DWORD *)(this[7] + 4 * i) + 260) = 0;
  }
  for ( j = 0; ; ++j )
  {
    v32 = this[3];
    if ( !v32 || j >= (this[4] - v32) >> 2 )
      break;
    sub_10057CB0(*(_DWORD *)(this[3] + 4 * j));
  }
}
