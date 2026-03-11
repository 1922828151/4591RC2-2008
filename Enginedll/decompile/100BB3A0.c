/*
 * func-name: ?ApplyFontProperties@CREStatic@@MAEXXZ
 * func-address: 0x100bb3a0
 * callers: 0x100c0000
 * callees: 0x101a26a0
 */

void __thiscall CREStatic::ApplyFontProperties(CREStatic *this)
{
  int v2; // eax
  _DWORD *v3; // edx
  _DWORD *v4; // ecx
  _DWORD *v5; // eax
  int v6; // edi
  bool v7; // zf
  int v8; // ebp
  int v9; // edi
  _DWORD *v10; // edi
  int v11; // edi

  v2 = *((_DWORD *)this + 30);
  v3 = *(_DWORD **)v2;
  *(_DWORD *)(*(_DWORD *)v2 + 4) = *((_DWORD *)this + 140);
  if ( *((_BYTE *)this + 644) )
  {
    v3[2] = *((_DWORD *)this + 162);
    *((_BYTE *)this + 644) = 0;
  }
  *((_DWORD *)this + 173) = v3[2];
  v4 = v3 + 29;
  v5 = (_DWORD *)((char *)this + 564);
  v6 = 16;
  do
  {
    *v4++ = *v5++;
    --v6;
  }
  while ( v6 );
  v7 = (dword_11240B40 & 1) == 0;
  v8 = *((_DWORD *)this + 28);
  *((_DWORD *)this + 163) = *((_DWORD *)this + 141);
  v9 = v3[1];
  if ( v7 )
  {
    dword_11240B40 |= 1u;
    dword_11240B24 = 0;
    dword_11240B28 = 0;
    dword_11240B2C = 0;
    dword_11240B30 = 0;
    dword_11240B34 = 0;
    dword_11240B38 = 0;
    dword_11240B3C = 0;
    dword_11240B1C = 0;
    dword_11240B20 = 0;
    atexit(sub_101B8F70);
  }
  if ( &dword_11240B1C )
  {
    v10 = (_DWORD *)(*(_DWORD *)(v8 + 752) + 4 * v9);
    if ( (dword_11240B40 & 1) == 0 )
    {
      dword_11240B40 |= 1u;
      dword_11240B24 = 0;
      dword_11240B28 = 0;
      dword_11240B2C = 0;
      dword_11240B30 = 0;
      dword_11240B34 = 0;
      dword_11240B38 = 0;
      dword_11240B3C = 0;
      dword_11240B1C = 0;
      dword_11240B20 = 0;
      atexit(sub_101B8F70);
    }
    v11 = *(_DWORD *)(dword_11240B30 + 4 * *v10);
    if ( v11 )
    {
      std::wstring::operator=((char *)this + 656, v11);
      *((_DWORD *)this + 171) = *(_DWORD *)(v11 + 524);
      *((_BYTE *)this + 688) = *(_DWORD *)(v11 + 532) == 700;
    }
  }
}
