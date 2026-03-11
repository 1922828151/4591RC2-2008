/*
 * func-name: sub_10261A40
 * func-address: 0x10261a40
 * callers: 0x10011414
 * callees: 0x100018f7, 0x1000333c, 0x10008c29, 0x1000d3aa, 0x1000d44f, 0x1000f1dc, 0x1000fe43, 0x10011068, 0x10011a4f, 0x10011d42, 0x1001ac58, 0x102c0750, 0x102c9d62, 0x102c9fe0
 */

int __thiscall sub_10261A40(_DWORD *this, int a2, int a3, int a4)
{
  unsigned int v4; // esi
  unsigned int v5; // edi
  int v6; // ebp
  int v7; // ecx
  int v8; // ecx
  int v9; // edx
  int v10; // esi
  int v11; // ecx
  int v12; // esi
  int v13; // esi
  int v14; // ebx
  int v15; // eax
  unsigned int v16; // edi
  int v17; // ecx
  int v18; // eax
  _DWORD *v19; // ebp
  int v20; // eax
  int v21; // ebp
  void *v22; // ebx
  unsigned int v23; // edi
  unsigned int v24; // edi
  int v25; // eax
  char *v26; // ebp
  char *v27; // edi
  unsigned int v28; // ebp
  int v29; // eax
  int v30; // eax
  int v31; // ecx
  int v32; // edi
  unsigned int v33; // edx
  int v34; // ecx
  int v35; // ecx
  int v36; // edi
  int v37; // ecx
  int v38; // ecx
  int v39; // ecx
  int v40; // ecx
  int v41; // edi
  unsigned int v42; // ebx
  int m; // ebp
  int v44; // eax
  int v45; // eax
  int v46; // eax
  int v47; // edi
  unsigned int v48; // edi
  bool v49; // cc
  unsigned int v50; // edi
  char *v51; // ebp
  char *v52; // edi
  unsigned int v54; // [esp+14h] [ebp-2ECh]
  unsigned int v55; // [esp+14h] [ebp-2ECh]
  unsigned int v56; // [esp+14h] [ebp-2ECh]
  int i; // [esp+18h] [ebp-2E8h]
  int j; // [esp+18h] [ebp-2E8h]
  int v59; // [esp+18h] [ebp-2E8h]
  int v60; // [esp+1Ch] [ebp-2E4h]
  float v62; // [esp+2Ch] [ebp-2D4h]
  int k; // [esp+30h] [ebp-2D0h] BYREF
  void *v64; // [esp+34h] [ebp-2CCh]
  float v65; // [esp+38h] [ebp-2C8h]
  int v66; // [esp+3Ch] [ebp-2C4h] BYREF
  _BYTE v67[16]; // [esp+44h] [ebp-2BCh] BYREF
  float v68; // [esp+54h] [ebp-2ACh]
  float v69; // [esp+68h] [ebp-298h]
  _BYTE v70[28]; // [esp+6Ch] [ebp-294h] BYREF
  int v71; // [esp+88h] [ebp-278h]
  int v72; // [esp+8Ch] [ebp-274h]
  int v73; // [esp+90h] [ebp-270h]
  char v74; // [esp+94h] [ebp-26Ch]
  wchar_t v75[100]; // [esp+98h] [ebp-268h] BYREF
  wchar_t Buffer[200]; // [esp+160h] [ebp-1A0h] BYREF
  int v77; // [esp+2FCh] [ebp-4h]

  sub_1000F1DC();
  v77 = 0;
  World::GetWorldBBox((World *)dword_103B8134, (struct BBox *)v67);
  v54 = 0;
  if ( sub_10008C29() )
  {
    v4 = 0;
    do
    {
      v5 = 0;
      v6 = 16 * v4;
      for ( i = 0; ; i += 128 )
      {
        v7 = *(_DWORD *)(a4 + 4);
        k = v5;
        if ( !v7 || v4 >= (*(_DWORD *)(a4 + 8) - v7) >> 4 )
          _invalid_parameter_noinfo();
        v8 = *(_DWORD *)(a4 + 4);
        v9 = *(_DWORD *)(v8 + v6 + 4);
        if ( !v9 || v5 >= (*(_DWORD *)(v8 + v6 + 8) - v9) >> 7 )
          break;
        if ( !v8 || v4 >= (*(_DWORD *)(a4 + 8) - v8) >> 4 )
          _invalid_parameter_noinfo();
        v10 = *(_DWORD *)(a4 + 4);
        v11 = *(_DWORD *)(v10 + v6 + 4);
        v12 = v6 + v10;
        if ( !v11 || v5 >= (*(_DWORD *)(v12 + 8) - v11) >> 7 )
          _invalid_parameter_noinfo();
        v13 = i + *(_DWORD *)(v12 + 4);
        if ( *(_BYTE *)(v13 + 52) )
        {
          if ( *(_DWORD *)(v13 + 32) != -1 )
          {
            v62 = *(float *)(v13 + 36) - v68;
            v65 = v69 - *(float *)(v13 + 40);
            std::wstring::operator=(v13 + 72, (char *)&unk_103B7DE8 - 28 * (int)(v65 / -500.0));
            std::wstring::operator+=(v13 + 72, (char *)&unk_103B7F00 - 28 * (int)(v62 / -500.0));
            sub_10011A4F(Buffer, (size_t)L"%d/%d", (int)*(float *)(v13 + 44));
            std::wstring::operator=(v13 + 100, Buffer);
            v5 = k;
          }
        }
        v4 = v54;
        ++v5;
      }
      v54 = ++v4;
    }
    while ( v4 < sub_10008C29() );
  }
  v14 = a2;
  v55 = 0;
  for ( j = 0; ; j += 44 )
  {
    v15 = this[146];
    if ( !v15 || v55 >= (this[147] - v15) / 44 )
      break;
    v16 = 0;
    if ( sub_1001AC58() )
    {
      while ( 1 )
      {
        v17 = *(_DWORD *)(v14 + 4);
        if ( !v17 || v16 >= (*(_DWORD *)(v14 + 8) - v17) >> 2 )
          _invalid_parameter_noinfo();
        v18 = this[146];
        v19 = (_DWORD *)(*(_DWORD *)(v14 + 4) + 4 * v16);
        if ( !v18 || v55 >= (this[147] - v18) / 44 )
          _invalid_parameter_noinfo();
        if ( *v19 == *(_DWORD *)(j + this[146] + 28) )
          break;
        if ( ++v16 >= sub_1001AC58() )
          goto LABEL_32;
      }
    }
    else
    {
LABEL_32:
      v20 = this[146];
      if ( !v20 || v55 >= (this[147] - v20) / 44 )
        _invalid_parameter_noinfo();
      sub_1000D3AA((int)&k, this[146] + j + 28);
      v21 = k;
      v22 = (void *)this[151];
      if ( !k || (_DWORD *)k != this + 150 )
        _invalid_parameter_noinfo();
      if ( v64 != v22 )
        sub_1000D44F((int)&v66, v21, v64);
      v23 = this[146];
      if ( v23 > this[147] )
        _invalid_parameter_noinfo();
      v24 = j + v23;
      if ( v24 > this[147] || v24 < this[146] )
        _invalid_parameter_noinfo();
      v25 = this[147];
      LOBYTE(v65) = 0;
      sub_1000333C(v24 + 44, v25, v24);
      v26 = (char *)this[147];
      v27 = v26 - 44;
      do
      {
        std::wstring::~wstring(v27);
        v27 += 44;
      }
      while ( v27 != v26 );
      this[147] -= 44;
      --v55;
      j -= 44;
      v14 = a2;
    }
    ++v55;
  }
  v56 = 0;
  if ( sub_1001AC58() )
  {
    v59 = 0;
    do
    {
      v28 = 0;
      for ( k = 0; ; k += 44 )
      {
        v29 = this[146];
        if ( !v29 || v28 >= (this[147] - v29) / 44 )
          break;
        v30 = this[146];
        if ( !v30 || v28 >= (this[147] - v30) / 44 )
          _invalid_parameter_noinfo();
        v31 = *(_DWORD *)(v14 + 4);
        v32 = k + this[146];
        if ( !v31 || (v33 = v56, v56 >= (*(_DWORD *)(v14 + 8) - v31) >> 2) )
        {
          _invalid_parameter_noinfo();
          v33 = v56;
        }
        if ( *(_DWORD *)(v32 + 28) == *(_DWORD *)(*(_DWORD *)(v14 + 4) + 4 * v33) )
        {
          v34 = *(_DWORD *)(a4 + 4);
          if ( !v34 || v33 >= (*(_DWORD *)(a4 + 8) - v34) >> 4 )
          {
            _invalid_parameter_noinfo();
            v33 = v56;
          }
          v35 = *(_DWORD *)(v14 + 4);
          v36 = v59 + *(_DWORD *)(a4 + 4);
          if ( !v35 || v33 >= (*(_DWORD *)(v14 + 8) - v35) >> 2 )
            _invalid_parameter_noinfo();
          sub_10011068(*(_DWORD *)(v14 + 4) + 4 * v56);
          sub_1000FE43(v36);
          goto LABEL_85;
        }
        ++v28;
      }
      std::wstring::wstring(v70);
      v37 = *(_DWORD *)(v14 + 4);
      LOBYTE(v77) = 1;
      v74 = 1;
      if ( !v37 || v56 >= (*(_DWORD *)(v14 + 8) - v37) >> 2 )
        _invalid_parameter_noinfo();
      v71 = *(_DWORD *)(4 * v56 + *(_DWORD *)(v14 + 4));
      if ( v71 )
      {
        v38 = *(_DWORD *)(a3 + 4);
        if ( !v38 || v56 >= (*(_DWORD *)(a3 + 8) - v38) >> 2 )
          _invalid_parameter_noinfo();
        sub_10011A4F(v75, (size_t)aD_20, *(_DWORD *)(*(_DWORD *)(a3 + 4) + 4 * v56));
        std::wstring::operator=(v70, v75);
      }
      else
      {
        std::wstring::operator=(v70, &unk_103212D8);
      }
      sub_10011D42((int)v70);
      v39 = *(_DWORD *)(a4 + 4);
      if ( !v39 || v56 >= (*(_DWORD *)(a4 + 8) - v39) >> 4 )
        _invalid_parameter_noinfo();
      v40 = *(_DWORD *)(v14 + 4);
      v41 = v59 + *(_DWORD *)(a4 + 4);
      if ( !v40 || v56 >= (*(_DWORD *)(v14 + 8) - v40) >> 2 )
        _invalid_parameter_noinfo();
      sub_10011068(4 * v56 + *(_DWORD *)(v14 + 4));
      sub_1000FE43(v41);
      LOBYTE(v77) = 0;
      std::wstring::~wstring(v70);
LABEL_85:
      v59 += 16;
      ++v56;
    }
    while ( v56 < sub_1001AC58() );
  }
  v42 = 0;
  for ( m = 0; ; m += 44 )
  {
    v44 = this[146];
    v60 = m;
    if ( !v44 || v42 >= (this[147] - v44) / 44 )
      break;
    v45 = this[146];
    if ( !v45 || v42 >= (this[147] - v45) / 44 )
      _invalid_parameter_noinfo();
    v46 = this[146];
    if ( !*(_DWORD *)(v46 + m + 28) )
    {
      if ( !v46 || v42 >= (this[147] - v46) / 44 )
        _invalid_parameter_noinfo();
      v47 = m + this[146];
      std::wstring::wstring(v70, v47);
      v71 = *(_DWORD *)(v47 + 28);
      v72 = *(_DWORD *)(v47 + 32);
      v73 = *(_DWORD *)(v47 + 36);
      v74 = *(_BYTE *)(v47 + 40);
      v48 = this[146];
      v49 = v48 <= this[147];
      LOBYTE(v77) = 2;
      if ( !v49 )
        _invalid_parameter_noinfo();
      v50 = m + v48;
      if ( v50 > this[147] || v50 < this[146] )
        _invalid_parameter_noinfo();
      sub_1000333C(v50 + 44, this[147], v50);
      v51 = (char *)this[147];
      v52 = v51 - 44;
      do
      {
        std::wstring::~wstring(v52);
        v52 += 44;
      }
      while ( v52 != v51 );
      this[147] -= 44;
      sub_10011D42((int)v70);
      LOBYTE(v77) = 0;
      std::wstring::~wstring(v70);
      m = v60;
    }
    ++v42;
  }
  sub_100018F7();
  v77 = -1;
  return sub_102C0750(v67);
}
