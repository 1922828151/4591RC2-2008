/*
 * func-name: ?ClearAll@BatchRenderer@@QAEXXZ
 * func-address: 0x10056380
 * callers: 0x10056620, 0x10139890
 * callees: 0x10055820, 0x1005b3f0, 0x1005db40, 0x101a2500
 */

void __thiscall BatchRenderer::ClearAll(BatchRenderer *this)
{
  BatchRenderer *v1; // edi
  _DWORD *v2; // esi
  unsigned int v3; // edi
  unsigned int v4; // eax
  unsigned int v5; // edi
  unsigned int v6; // ebx
  unsigned int v7; // eax
  unsigned int v8; // ebx
  unsigned int v9; // eax
  unsigned int v10; // ebx
  unsigned int v11; // edi
  unsigned int v12; // eax
  int v13; // edx
  unsigned int v14; // edi
  unsigned int v15; // eax
  unsigned int v16; // edi
  unsigned int v17; // ebx
  unsigned int v18; // eax
  unsigned int v19; // edi
  unsigned int v20; // eax
  unsigned int v21; // edi
  unsigned int v22; // ebx
  unsigned int v23; // eax
  _DWORD *v24; // ebp
  unsigned int v25; // [esp+8h] [ebp-10h]
  char *v26; // [esp+Ch] [ebp-Ch]
  int v27; // [esp+10h] [ebp-8h]

  v1 = this;
  sub_1005DB40(&unk_10280B80);
  sub_1005DB40(&byte_10280BD0);
  v27 = 0;
  if ( *((int *)v1 + 259) > 0 )
  {
    v26 = (char *)v1 + 12;
    do
    {
      v2 = *(_DWORD **)v26;
      v25 = 0;
      if ( *(_DWORD *)(*(_DWORD *)v26 + 252) )
      {
        do
        {
          v3 = v2[62];
          if ( v3 > v3 + v2[63] )
            invalid_parameter_noinfo();
          v4 = v2[62];
          v5 = v25 + v3;
          if ( v5 > v4 + v2[63] || v5 < v4 )
            invalid_parameter_noinfo();
          v6 = v5 >> 2;
          if ( v5 >= v2[62] + v2[63] )
            invalid_parameter_noinfo();
          v7 = v2[61];
          if ( v7 <= v6 )
            v6 -= v7;
          if ( *(_DWORD **)(*(_DWORD *)(v2[60] + 4 * v6) + 4 * (v5 & 3)) != v2 )
          {
            v8 = v2[62];
            if ( v8 > v8 + v2[63] )
              invalid_parameter_noinfo();
            v9 = v2[62];
            v10 = v25 + v8;
            if ( v10 > v9 + v2[63] || v10 < v9 )
              invalid_parameter_noinfo();
            v11 = v10 >> 2;
            if ( v10 >= v2[63] + v2[62] )
              invalid_parameter_noinfo();
            v12 = v2[61];
            if ( v12 <= v11 )
              v11 -= v12;
            v13 = *(_DWORD *)(v2[60] + 4 * v11);
            --*(_DWORD *)(*(_DWORD *)(v13 + 4 * (v10 & 3)) + 16);
            v14 = v2[62];
            if ( v14 > v14 + v2[63] )
              invalid_parameter_noinfo();
            v15 = v2[62];
            v16 = v25 + v14;
            if ( v16 > v15 + v2[63] || v16 < v15 )
              invalid_parameter_noinfo();
            v17 = v16 >> 2;
            if ( v16 >= v2[63] + v2[62] )
              invalid_parameter_noinfo();
            v18 = v2[61];
            if ( v18 <= v17 )
              v17 -= v18;
            if ( !*(_DWORD *)(*(_DWORD *)(*(_DWORD *)(v2[60] + 4 * v17) + 4 * (v16 & 3)) + 16) )
            {
              v19 = v2[62];
              if ( v19 > v19 + v2[63] )
                invalid_parameter_noinfo();
              v20 = v2[62];
              v21 = v25 + v19;
              if ( v21 > v20 + v2[63] || v21 < v20 )
                invalid_parameter_noinfo();
              v22 = v21 >> 2;
              if ( v21 >= v2[63] + v2[62] )
                invalid_parameter_noinfo();
              v23 = v2[61];
              if ( v23 <= v22 )
                v22 -= v23;
              v24 = *(_DWORD **)(*(_DWORD *)(v2[60] + 4 * v22) + 4 * (v21 & 3));
              if ( v24 )
              {
                sub_10055820(v24);
                operator delete(v24);
              }
            }
          }
          ++v25;
        }
        while ( v25 < v2[63] );
        v1 = this;
      }
      sub_1005B3F0(0, 0);
      v26 += 4;
      ++v27;
    }
    while ( v27 < *((_DWORD *)v1 + 259) );
  }
  *((_DWORD *)v1 + 259) = 0;
}
