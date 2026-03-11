/*
 * func-name: sub_10129A60
 * func-address: 0x10129a60
 * callers: 0x1000236f
 * callees: 0x100073ec, 0x10013b6f, 0x102c9d50
 */

int __thiscall sub_10129A60(_DWORD *this, int a2)
{
  int v2; // esi
  int v3; // ecx
  int v4; // eax
  unsigned int i; // edi
  unsigned int v6; // ecx
  int v7; // eax
  int v8; // ecx
  void *v9; // ebx
  int v10; // ecx
  unsigned int v11; // ebx
  unsigned int v12; // edi
  float v14; // [esp-8h] [ebp-14h]
  float v15[2]; // [esp+4h] [ebp-8h] BYREF

  v2 = (int)(this + 26);
  v3 = this[27];
  if ( v3 )
    v4 = (*(_DWORD *)(v2 + 8) - v3) >> 3;
  else
    v4 = 0;
  if ( a2 != v4 )
  {
    for ( i = 0; ; ++i )
    {
      v6 = *(_DWORD *)(v2 + 4);
      if ( !v6 || i >= (int)(*(_DWORD *)(v2 + 8) - v6) >> 3 )
        break;
      v7 = *(_DWORD *)(v2 + 4);
      if ( *(_DWORD *)(v7 + 8 * i + 4) )
      {
        if ( !v7 || i >= (*(_DWORD *)(v2 + 8) - v7) >> 3 )
          _invalid_parameter_noinfo();
        v8 = *(_DWORD *)(v2 + 4);
        v9 = *(void **)(v8 + 8 * i + 4);
        if ( v9 )
        {
          Texture::~Texture(*(Texture **)(v8 + 8 * i + 4));
          operator delete(v9);
        }
        v10 = *(_DWORD *)(v2 + 4);
        if ( !v10 || i >= (*(_DWORD *)(v2 + 8) - v10) >> 3 )
          _invalid_parameter_noinfo();
        *(_DWORD *)(*(_DWORD *)(v2 + 4) + 8 * i + 4) = 0;
      }
    }
    v11 = *(_DWORD *)(v2 + 8);
    if ( v6 > v11 )
      _invalid_parameter_noinfo();
    v12 = *(_DWORD *)(v2 + 4);
    if ( v12 > *(_DWORD *)(v2 + 8) )
      _invalid_parameter_noinfo();
    sub_10013B6F((int)v15, v2, v12, v2, v11);
  }
  v15[0] = 1.0;
  v14 = 1.0;
  return sub_100073EC(a2, SLOBYTE(v14), 0);
}
