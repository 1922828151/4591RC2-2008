/*
 * func-name: sub_10161890
 * func-address: 0x10161890
 * callers: 0x10162ce0, 0x10169020
 * callees: 0x10076ef0, 0x1013f020, 0x101a2500
 */

void __thiscall sub_10161890(_DWORD *this)
{
  unsigned int i; // ebx
  int v3; // ecx
  void (__cdecl *v4)(); // ebp
  int v5; // edi
  _DWORD **v6; // ecx
  _DWORD *v7; // eax
  bool v8; // zf
  _DWORD *v9; // ebp
  int v10; // ecx
  int v11; // ecx
  int v12; // ecx
  void *v13; // edi
  int v14; // ecx
  char *v15; // ebx
  char *v16; // edi
  int v17; // eax
  char *v18; // ebp

  for ( i = 0; i < std::vector<Model *>::size(this); ++i )
  {
    v3 = this[1];
    if ( v3 && i < (this[2] - v3) >> 2 )
    {
      v4 = invalid_parameter_noinfo;
    }
    else
    {
      v4 = invalid_parameter_noinfo;
      invalid_parameter_noinfo();
    }
    v5 = *(_DWORD *)(this[1] + 4 * i);
    v6 = *(_DWORD ***)(v5 + 4);
    v7 = *v6;
    *v6 = v6;
    *(_DWORD *)(*(_DWORD *)(v5 + 4) + 4) = *(_DWORD *)(v5 + 4);
    v8 = v7 == *(_DWORD **)(v5 + 4);
    *(_DWORD *)(v5 + 8) = 0;
    if ( !v8 )
    {
      do
      {
        v9 = (_DWORD *)*v7;
        operator delete(v7);
        v7 = v9;
      }
      while ( v9 != *(_DWORD **)(v5 + 4) );
      v4 = invalid_parameter_noinfo;
    }
    v10 = this[1];
    if ( !v10 || i >= (this[2] - v10) >> 2 )
      v4();
    v11 = this[1];
    if ( *(_DWORD *)(v11 + 4 * i) )
    {
      if ( !v11 || i >= (this[2] - v11) >> 2 )
        v4();
      v12 = this[1];
      v13 = *(void **)(v12 + 4 * i);
      if ( v13 )
      {
        sub_1013F020(*(_DWORD *)(v12 + 4 * i));
        operator delete(v13);
      }
      v14 = this[1];
      if ( !v14 || i >= (this[2] - v14) >> 2 )
        v4();
      *(_DWORD *)(this[1] + 4 * i) = 0;
    }
  }
  v15 = (char *)this[2];
  if ( this[1] > (unsigned int)v15 )
    invalid_parameter_noinfo();
  v16 = (char *)this[1];
  if ( (unsigned int)v16 > this[2] )
    invalid_parameter_noinfo();
  if ( v16 != v15 )
  {
    v17 = (this[2] - (int)v15) >> 2;
    v18 = &v16[4 * v17];
    if ( v17 > 0 )
      memmove_s(v16, 4 * v17, v15, 4 * v17);
    this[2] = v18;
  }
}
