/*
 * func-name: sub_10294760
 * func-address: 0x10294760
 * callers: 0x1000638e
 * callees: 0x10010456, 0x102c9d62
 */

void __thiscall sub_10294760(_DWORD *this, int a2, int a3, int a4, int a5, int a6)
{
  unsigned int v7; // ebp
  int v8; // eax
  unsigned int v9; // ebx
  int v10; // eax
  int v11; // edx
  int v12; // ecx
  int v13; // edi
  int v14; // ecx
  int v15; // eax
  int v16; // edi
  int v17; // ebx
  int v18; // ecx
  int v19; // edi
  int v20; // eax
  int v21; // edi
  int v22; // ecx
  int v23; // edi
  int v24; // eax
  int v25; // esi
  int v26; // ecx
  int v27; // esi
  int i; // [esp+14h] [ebp-70h]
  unsigned int v29; // [esp+18h] [ebp-6Ch]
  int v30; // [esp+1Ch] [ebp-68h]
  _BYTE v31[28]; // [esp+28h] [ebp-5Ch] BYREF
  _BYTE v32[28]; // [esp+44h] [ebp-40h] BYREF
  int v33; // [esp+60h] [ebp-24h]
  int v34; // [esp+70h] [ebp-14h]
  int v35; // [esp+80h] [ebp-4h]

  v7 = 0;
  v30 = 0;
LABEL_2:
  v8 = this[134];
  if ( v8 && v7 < (this[135] - v8) / 60 )
  {
    v9 = 0;
    for ( i = 0; ; i += 128 )
    {
      v10 = this[134];
      v29 = v9;
      if ( !v10 || v7 >= (this[135] - v10) / 60 )
        _invalid_parameter_noinfo();
      v11 = this[134];
      v12 = *(_DWORD *)(v11 + v30 + 48);
      if ( !v12 || v9 >= (*(_DWORD *)(v11 + v30 + 52) - v12) >> 7 )
      {
        ++v7;
        v30 += 60;
        goto LABEL_2;
      }
      if ( !v11 || v7 >= (this[135] - v11) / 60 )
        _invalid_parameter_noinfo();
      v13 = v30 + this[134];
      v14 = *(_DWORD *)(v13 + 48);
      if ( !v14 || v9 >= (*(_DWORD *)(v13 + 52) - v14) >> 7 )
        _invalid_parameter_noinfo();
      if ( *(_DWORD *)(i + *(_DWORD *)(v13 + 48) + 68) == a2 )
        break;
      ++v9;
    }
    v15 = this[134];
    if ( !v15 || v7 >= (this[135] - v15) / 60 )
      _invalid_parameter_noinfo();
    v16 = this[134];
    v17 = 60 * v7;
    v18 = *(_DWORD *)(v16 + 60 * v7 + 48);
    v19 = 60 * v7 + v16;
    if ( !v18 || v29 >= (*(_DWORD *)(v19 + 52) - v18) >> 7 )
      _invalid_parameter_noinfo();
    if ( *(_DWORD *)((v29 << 7) + *(_DWORD *)(v19 + 48) + 112) == -1 )
    {
      v20 = this[134];
      if ( !v20 || v7 >= (this[135] - v20) / 60 )
        _invalid_parameter_noinfo();
      v21 = this[134];
      v22 = *(_DWORD *)(v21 + v17 + 48);
      v23 = v17 + v21;
      if ( !v22 || v29 >= (*(_DWORD *)(v23 + 52) - v22) >> 7 )
        _invalid_parameter_noinfo();
      *(_DWORD *)(*(_DWORD *)(v23 + 48) + (v29 << 7) + 112) = 0;
    }
    std::wstring::wstring(v31);
    v35 = 0;
    std::wstring::wstring(v32);
    v33 = a5;
    v35 = 1;
    std::wstring::operator=(v31, a3);
    std::wstring::operator=(v32, a4);
    v24 = this[134];
    v34 = a6;
    if ( !v24 || v7 >= (this[135] - v24) / 60 )
      _invalid_parameter_noinfo();
    v25 = this[134];
    v26 = *(_DWORD *)(v25 + v17 + 48);
    v27 = v17 + v25;
    if ( !v26 || v29 >= (*(_DWORD *)(v27 + 52) - v26) >> 7 )
      _invalid_parameter_noinfo();
    sub_10010456((int)v31);
    v35 = 2;
    std::wstring::~wstring(v32);
    v35 = -1;
    std::wstring::~wstring(v31);
  }
}
