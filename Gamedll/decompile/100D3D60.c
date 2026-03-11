/*
 * func-name: sub_100D3D60
 * func-address: 0x100d3d60
 * callers: 0x1001812e
 * callees: 0x102c9d50
 */

char __thiscall sub_100D3D60(_DWORD *this)
{
  unsigned int i; // edi
  unsigned int v3; // ecx
  int v4; // ebx
  int v5; // ecx
  NxPhysics *v6; // eax
  int v7; // ecx
  void (__cdecl *v8)(); // ebx
  int v9; // ecx
  void (__thiscall ***v10)(_DWORD, int); // ecx
  int v11; // ecx
  char *v12; // ebx
  char *v13; // edi
  int v14; // eax
  char *v15; // ebp
  int v17; // [esp+0h] [ebp-10h]
  int v18; // [esp+0h] [ebp-10h]
  int v19; // [esp+4h] [ebp-Ch]
  int v20; // [esp+8h] [ebp-8h]
  int v21; // [esp+Ch] [ebp-4h]

  for ( i = 0; ; ++i )
  {
    v3 = this[39];
    if ( !v3 || i >= (int)(this[40] - v3) >> 2 )
      break;
    v4 = *(_DWORD *)(this[39] + 4 * i);
    v5 = *(_DWORD *)(v4 + 8);
    if ( *(_DWORD *)(v5 + 4) )
    {
      operator delete(*(void **)(v5 + 4));
      *(_DWORD *)(*(_DWORD *)(v4 + 8) + 4) = 0;
    }
    v6 = (NxPhysics *)NxPhysics::Instance(*(_DWORD *)(v4 + 84), v17, v19, v20, v21);
    NxPhysics::ReleaseMaterial(v6, v18);
    v7 = this[39];
    if ( v7 && i < (this[40] - v7) >> 2 )
    {
      v8 = _invalid_parameter_noinfo;
    }
    else
    {
      v8 = _invalid_parameter_noinfo;
      _invalid_parameter_noinfo();
    }
    v9 = this[39];
    if ( *(_DWORD *)(v9 + 4 * i) )
    {
      if ( !v9 || i >= (this[40] - v9) >> 2 )
        v8();
      v10 = *(void (__thiscall ****)(_DWORD, int))(this[39] + 4 * i);
      if ( v10 )
        (**v10)(v10, 1);
      v11 = this[39];
      if ( !v11 || i >= (this[40] - v11) >> 2 )
        v8();
      *(_DWORD *)(this[39] + 4 * i) = 0;
    }
  }
  v12 = (char *)this[40];
  if ( v3 > (unsigned int)v12 )
    _invalid_parameter_noinfo();
  v13 = (char *)this[39];
  if ( (unsigned int)v13 > this[40] )
    _invalid_parameter_noinfo();
  if ( v13 != v12 )
  {
    v14 = (this[40] - (int)v12) >> 2;
    v15 = &v13[4 * v14];
    if ( v14 > 0 )
      memmove_s(v13, 4 * v14, v12, 4 * v14);
    this[40] = v15;
  }
  return 1;
}
