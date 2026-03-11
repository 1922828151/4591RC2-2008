/*
 * func-name: sub_10055990
 * func-address: 0x10055990
 * callers: 0x10055990, 0x10055d20
 * callees: 0x10019470, 0x1001e9c0, 0x1001ea80, 0x10055320, 0x10055990, 0x10057080, 0x10057340, 0x10059ad0, 0x1005cb50, 0x1005d480, 0x10076ef0, 0x100d29b0, 0x10116f70, 0x1013efb0
 */

void __thiscall sub_10055990(_DWORD *this, int a2)
{
  _DWORD *v2; // ebx
  struct Profiler *v3; // eax
  int v4; // eax
  int v5; // edi
  unsigned int v6; // esi
  _DWORD *v7; // ebp
  unsigned int v8; // edi
  unsigned int v9; // edi
  _DWORD *v10; // ebx
  int v11; // ecx
  _DWORD *v12; // esi
  _BYTE *v13; // edx
  int v14; // eax
  unsigned int v15; // edi
  int v16; // eax
  _BYTE *v17; // ecx
  unsigned int i; // esi
  int v19; // ecx
  int v20; // ecx
  unsigned int v21; // [esp+Ch] [ebp-44h]
  _DWORD *v22; // [esp+10h] [ebp-40h] BYREF
  _DWORD *v23; // [esp+14h] [ebp-3Ch]
  _BYTE v24[8]; // [esp+18h] [ebp-38h] BYREF
  int v25; // [esp+20h] [ebp-30h] BYREF
  int v26; // [esp+28h] [ebp-28h] BYREF
  _BYTE v27[4]; // [esp+30h] [ebp-20h] BYREF
  int v28; // [esp+34h] [ebp-1Ch]
  int v29; // [esp+38h] [ebp-18h]
  int v30; // [esp+3Ch] [ebp-14h]
  int v31; // [esp+40h] [ebp-10h]
  int v32; // [esp+4Ch] [ebp-4h]
  int v33; // [esp+54h] [ebp+4h]

  v2 = this;
  v23 = this;
  v3 = Profiler::Get();
  ++*((_DWORD *)v3 + 7);
  v4 = v2[1];
  v5 = v4 | a2;
  v33 = v4 | a2;
  if ( v4 == 1 )
  {
    sub_1005CB50(v5);
  }
  else if ( v4 == 256 )
  {
    v6 = v2[8];
    v7 = v2 + 6;
    if ( v2[7] > v6 )
      invalid_parameter_noinfo();
    v8 = v2[7];
    if ( v8 > v2[8] )
      invalid_parameter_noinfo();
    sub_100D29B0(v8, v6, (int)(v6 - v8) >> 2, sub_100550E0);
    if ( *((_BYTE *)BatchRenderer::Instance() + 1044) )
    {
      v9 = 0;
      v28 = 0;
      v29 = 0;
      v30 = 0;
      v31 = 0;
      v32 = 0;
      v10 = 0;
LABEL_10:
      while ( 1 )
      {
        v11 = v7[1];
        v21 = v9;
        if ( !v11 || v9 >= (v7[2] - v11) >> 2 )
          break;
        v12 = *(_DWORD **)(v7[1] + 4 * v9);
        v22 = v12;
        if ( v10
          && v10[23] == v12[23]
          && *(_BYTE *)(v12[69] + 80)
          && (!v12[70] || !*(_BYTE *)(v12[70] + 727))
          && (v13 = (_BYTE *)v12[23], !v13[120])
          && !(*(unsigned __int8 (**)(void))(*(_DWORD *)v13 + 32))()
          && !(*(unsigned __int8 (__thiscall **)(_DWORD))(*(_DWORD *)v12[23] + 24))(v12[23])
          && v10[57] == v12[57]
          && (v14 = v10[13], v14 == v12[13])
          && *(_DWORD *)(v14 + 152) == *(_DWORD *)(v12[13] + 152)
          && v10[69] == v12[69]
          && (unsigned __int8)sub_10057080(v10, v12) )
        {
          sub_10059AD0(&v22);
          v15 = 0;
          if ( std::vector<Model *>::size(v7) )
          {
            while ( v12 != *(_DWORD **)std::vector<Model *>::operator[](v7, v15) )
            {
              if ( ++v15 >= std::vector<Model *>::size(v7) )
              {
                v9 = v21;
                goto LABEL_10;
              }
            }
            std::vector<EditorVar>::begin(v7, &v25);
            v16 = sub_10057340(v24, v15);
            std::vector<Model *>::erase(v7, &v26, *(_DWORD *)v16, *(char **)(v16 + 4));
          }
          v9 = v21;
        }
        else
        {
          if ( v31 )
          {
            if ( v10 )
              sub_1005D480(v27);
            sub_1013EFB0(v27);
          }
          if ( !*(_BYTE *)(v12[69] + 80)
            || !v12[70]
            || *(_BYTE *)(v12[70] + 727)
            || (v17 = (_BYTE *)v12[23], v17[120])
            || (*(unsigned __int8 (__thiscall **)(_BYTE *))(*(_DWORD *)v17 + 32))(v17)
            || v12[70] && *(_BYTE *)(v12[70] + 727) )
          {
            v10 = 0;
            ++v9;
          }
          else
          {
            v10 = v12;
            ++v9;
          }
        }
      }
      if ( v31 && v10 )
        sub_1005D480(v27);
      v32 = -1;
      sub_1013EFB0(v27);
      v2 = v23;
    }
    sub_1005CB50(v33);
    v5 = v33;
  }
  for ( i = 0; ; ++i )
  {
    v19 = v2[3];
    if ( !v19 || i >= (v2[4] - v19) >> 2 )
      break;
    v20 = v2[3];
    if ( *(_DWORD *)(*(_DWORD *)(v20 + 4 * i) + 56) )
    {
      if ( !v20 || i >= (v2[4] - v20) >> 2 )
        invalid_parameter_noinfo();
      sub_10055990(v5);
    }
  }
}
