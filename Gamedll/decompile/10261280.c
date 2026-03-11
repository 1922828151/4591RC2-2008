/*
 * func-name: sub_10261280
 * func-address: 0x10261280
 * callers: 0x100018f7
 * callees: 0x1000d3aa
 */

void __thiscall sub_10261280(_DWORD *this)
{
  unsigned int v1; // ebx
  int v3; // edi
  int v4; // eax
  int v5; // eax
  int v6; // eax
  int v7; // edi
  bool v8; // zf
  _DWORD *v9; // edi
  int v10; // ebp
  int v11; // ebx
  int v12; // edx
  int v13; // eax
  int v14; // ecx
  CREScrollBar *v15; // ecx
  CREScrollBar *v16; // edi
  int v17; // [esp+10h] [ebp-14h]
  int i; // [esp+14h] [ebp-10h]
  unsigned int v19; // [esp+18h] [ebp-Ch]
  _DWORD *v20; // [esp+1Ch] [ebp-8h] BYREF
  int v21; // [esp+20h] [ebp-4h]

  v1 = 0;
  v3 = 0;
  for ( i = 0; ; i += 44 )
  {
    v4 = this[146];
    v19 = v1;
    if ( !v4 || v1 >= (this[147] - v4) / 44 )
      break;
    v5 = this[146];
    if ( !v5 || v1 >= (this[147] - v5) / 44 )
      _invalid_parameter_noinfo();
    v6 = i + this[146];
    *(_DWORD *)(v6 + 32) = v3;
    v7 = v3 + 27;
    v8 = *(_BYTE *)(v6 + 40) == 0;
    v17 = v7;
    *(_DWORD *)(v6 + 36) = v7;
    if ( !v8 )
    {
      sub_1000D3AA((int)&v20, v6 + 28);
      v9 = v20;
      v10 = this[151];
      if ( !v20 || v20 != this + 150 )
        _invalid_parameter_noinfo();
      v11 = v21;
      if ( v21 != v10 )
      {
        if ( !v9 )
          _invalid_parameter_noinfo();
        if ( v11 == v9[1] )
          _invalid_parameter_noinfo();
        v12 = *(_DWORD *)(v11 + 16);
        if ( v12 )
          v13 = (*(_DWORD *)(v11 + 20) - v12) >> 7;
        else
          v13 = 0;
        if ( v12 )
          v14 = (*(_DWORD *)(v11 + 20) - v12) >> 7;
        else
          v14 = 0;
        v17 = v17 + 2 * (v14 + 11 * v13) - 2;
      }
      v7 = v17;
    }
    v3 = v7 + 2;
    v1 = v19 + 1;
  }
  v15 = (CREScrollBar *)this[133];
  if ( v15 )
  {
    CREScrollBar::SetTrackRange(v15, 0, v3);
    v16 = (CREScrollBar *)this[133];
    *((_DWORD *)v16 + 151) = this[44] - this[42];
    CREScrollBar::Cap(v16);
    CREScrollBar::UpdateThumbRect(v16);
  }
}
