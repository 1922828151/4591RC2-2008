/*
 * func-name: ?Compare@PRTSettings@@QAE_NPAU1@@Z
 * func-address: 0x1001b780
 * callers: none
 * callees: 0x100166b0
 */

char __thiscall PRTSettings::Compare(PRTSettings *this, struct PRTSettings *a2)
{
  int v4; // eax
  int v5; // edi
  int v6; // eax
  int v7; // eax
  int v8; // edi
  int v9; // eax
  unsigned int v10; // ebx
  int v11; // eax
  int v12; // eax
  int v13; // eax
  int v14; // edi
  unsigned int v16; // ebx
  int v17; // eax
  int v18; // eax
  int v19; // eax
  int v20; // edi
  int i; // [esp+Ch] [ebp-4h]
  int j; // [esp+Ch] [ebp-4h]
  char v23; // [esp+14h] [ebp+4h]

  if ( *(_BYTE *)this != *(_BYTE *)a2
    || *(_DWORD *)((char *)this + 1561) != *(_DWORD *)((char *)a2 + 1561)
    || *(_DWORD *)((char *)this + 1573) != *(_DWORD *)((char *)a2 + 1573)
    || *((_BYTE *)this + 1577) != *((_BYTE *)a2 + 1577)
    || *(float *)((char *)a2 + 1578) != *(float *)((char *)this + 1578)
    || sub_100166B0((float *)((char *)this + 1587), (float *)((char *)a2 + 1587))
    || sub_100166B0((float *)((char *)this + 1603), (float *)((char *)a2 + 1603))
    || sub_100166B0((float *)((char *)this + 1619), (float *)((char *)a2 + 1619))
    || *(float *)((char *)a2 + 1635) != *(float *)((char *)this + 1635)
    || *((_BYTE *)this + 1643) != *((_BYTE *)a2 + 1643)
    || *((_BYTE *)this + 1644) != *((_BYTE *)a2 + 1644)
    || *(float *)((char *)a2 + 1645) != *(float *)((char *)this + 1645)
    || *(_DWORD *)((char *)this + 2211) != *(_DWORD *)((char *)a2 + 2211)
    || *((_BYTE *)this + 2201) != *((_BYTE *)a2 + 2201)
    || *((_BYTE *)this + 2210) != *((_BYTE *)a2 + 2210)
    || *(float *)((char *)a2 + 1639) != *(float *)((char *)this + 1639) )
  {
    return 1;
  }
  v4 = *(_DWORD *)((char *)this + 2235);
  if ( v4 )
    v5 = (*(_DWORD *)((char *)this + 2239) - v4) / 28;
  else
    v5 = 0;
  v6 = *(_DWORD *)((char *)a2 + 2235);
  if ( v6 )
    v6 = (*(_DWORD *)((char *)a2 + 2239) - v6) / 28;
  if ( v5 != v6 )
    return 1;
  v7 = *(_DWORD *)((char *)this + 2251);
  if ( v7 )
    v8 = (*(_DWORD *)((char *)this + 2255) - v7) / 28;
  else
    v8 = 0;
  v9 = *(_DWORD *)((char *)a2 + 2251);
  if ( v9 )
    v9 = (*(_DWORD *)((char *)a2 + 2255) - v9) / 28;
  if ( v8 != v9 )
    return 1;
  v10 = 0;
  v23 = 0;
  for ( i = 0; ; i += 28 )
  {
    v11 = *(_DWORD *)((char *)this + 2235);
    if ( !v11 || v10 >= (*(_DWORD *)((char *)this + 2239) - v11) / 28 )
      break;
    v12 = *(_DWORD *)((char *)a2 + 2235);
    if ( !v12 || v10 >= (*(_DWORD *)((char *)a2 + 2239) - v12) / 28 )
      invalid_parameter_noinfo();
    v13 = *(_DWORD *)((char *)this + 2235);
    v14 = i + *(_DWORD *)((char *)a2 + 2235);
    if ( !v13 || v10 >= (*(_DWORD *)((char *)this + 2239) - v13) / 28 )
      invalid_parameter_noinfo();
    if ( (unsigned __int8)std::operator!=<char>(i + *(_DWORD *)((char *)this + 2235), v14) )
      v23 = 1;
    ++v10;
  }
  v16 = 0;
  for ( j = 0; ; j += 28 )
  {
    v17 = *(_DWORD *)((char *)this + 2251);
    if ( !v17 || v16 >= (*(_DWORD *)((char *)this + 2255) - v17) / 28 )
      break;
    v18 = *(_DWORD *)((char *)a2 + 2251);
    if ( !v18 || v16 >= (*(_DWORD *)((char *)a2 + 2255) - v18) / 28 )
      invalid_parameter_noinfo();
    v19 = *(_DWORD *)((char *)this + 2251);
    v20 = j + *(_DWORD *)((char *)a2 + 2251);
    if ( !v19 || v16 >= (*(_DWORD *)((char *)this + 2255) - v19) / 28 )
      invalid_parameter_noinfo();
    if ( (unsigned __int8)std::operator!=<char>(j + *(_DWORD *)((char *)this + 2251), v20) )
      v23 = 1;
    ++v16;
  }
  return v23;
}
