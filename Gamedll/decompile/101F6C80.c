/*
 * func-name: ?UpdateMemberInfo@Group@GameClient@@QAEXAAVBinStream@@@Z_0
 * func-address: 0x101f6c80
 * callers: 0x1000b500
 * callees: none
 */

void __thiscall GameClient::Group::UpdateMemberInfo(GameClient::Group *this, struct BinStream *a2)
{
  int v3; // eax
  int v5; // edx
  double v6; // st7
  int v7; // ecx
  unsigned int v8; // eax
  int v9; // ecx
  double v10; // st7
  int v11; // ecx
  int v12; // ecx
  double v13; // st7
  int v14; // ecx
  double v15; // st7
  unsigned int v16; // edi
  int i; // ebx
  int v18; // eax
  int v19; // eax
  int v20; // ecx
  int v21; // eax
  int v22; // eax
  float *v23; // eax
  int v24; // [esp+8h] [ebp-18h]
  float v25; // [esp+Ch] [ebp-14h]
  int v26; // [esp+10h] [ebp-10h]
  float v27; // [esp+14h] [ebp-Ch]
  float v28; // [esp+1Ch] [ebp-4h]
  struct BinStream *v29; // [esp+24h] [ebp+4h]

  v3 = *((_DWORD *)a2 + 3);
  v5 = 0;
  if ( (unsigned int)(v3 + 4) <= *((_DWORD *)a2 + 2) )
  {
    v5 = *(_DWORD *)(v3 + *((_DWORD *)a2 + 1));
    *((_DWORD *)a2 + 3) = v3 + 4;
  }
  if ( v5 > 0 )
  {
    v6 = 0.0;
    v29 = (struct BinStream *)v5;
    while ( 1 )
    {
      v7 = *((_DWORD *)a2 + 3);
      v8 = *((_DWORD *)a2 + 2);
      if ( v7 + 4 <= v8 )
      {
        v24 = *(_DWORD *)(v7 + *((_DWORD *)a2 + 1));
        *((_DWORD *)a2 + 3) = v7 + 4;
      }
      v9 = *((_DWORD *)a2 + 3);
      v27 = v6;
      v28 = v6;
      if ( v9 + 4 <= v8 )
      {
        v10 = *(float *)(v9 + *((_DWORD *)a2 + 1));
        *((_DWORD *)a2 + 3) = v9 + 4;
        v25 = v10;
      }
      v11 = *((_DWORD *)a2 + 3);
      if ( v11 + 4 <= v8 )
      {
        v26 = *(_DWORD *)(v11 + *((_DWORD *)a2 + 1));
        *((_DWORD *)a2 + 3) = v11 + 4;
      }
      v12 = *((_DWORD *)a2 + 3);
      if ( v12 + 4 <= v8 )
      {
        v13 = *(float *)(v12 + *((_DWORD *)a2 + 1));
        *((_DWORD *)a2 + 3) = v12 + 4;
        v27 = v13;
      }
      v14 = *((_DWORD *)a2 + 3);
      if ( v14 + 4 <= v8 )
      {
        v15 = *(float *)(v14 + *((_DWORD *)a2 + 1));
        *((_DWORD *)a2 + 3) = v14 + 4;
        v28 = v15;
      }
      v16 = 0;
      for ( i = 0; ; i += 84 )
      {
        v18 = *((_DWORD *)this + 4);
        if ( !v18 || v16 >= (*((_DWORD *)this + 5) - v18) / 84 )
          break;
        v19 = *((_DWORD *)this + 4);
        if ( !v19 || v16 >= (*((_DWORD *)this + 5) - v19) / 84 )
          _invalid_parameter_noinfo();
        v20 = *((_DWORD *)this + 4);
        if ( *(_DWORD *)(i + v20) == v24 )
        {
          if ( !v20 || v16 >= (*((_DWORD *)this + 5) - v20) / 84 )
            _invalid_parameter_noinfo();
          *(float *)(*((_DWORD *)this + 4) + i + 56) = v25;
          v21 = *((_DWORD *)this + 4);
          if ( !v21 || v16 >= (*((_DWORD *)this + 5) - v21) / 84 )
            _invalid_parameter_noinfo();
          *(_DWORD *)(i + *((_DWORD *)this + 4) + 60) = v26;
          v22 = *((_DWORD *)this + 4);
          if ( !v22 || v16 >= (*((_DWORD *)this + 5) - v22) / 84 )
            _invalid_parameter_noinfo();
          v23 = (float *)(i + *((_DWORD *)this + 4) + 44);
          *v23 = v27;
          v23[1] = 0.0;
          v23[2] = v28;
        }
        ++v16;
      }
      v29 = (struct BinStream *)((char *)v29 - 1);
      if ( !v29 )
        break;
      v6 = 0.0;
    }
  }
}
