/*
 * func-name: sub_1005DB40
 * func-address: 0x1005db40
 * callers: 0x10056380, 0x10058770
 * callees: 0x10055820, 0x10058770, 0x10059d20, 0x1005a150, 0x101a2500
 */

void __thiscall sub_1005DB40(_DWORD *this)
{
  unsigned int v2; // ebx
  _DWORD *v3; // esi
  int v4; // ecx
  int v5; // eax
  int v6; // ecx
  int v7; // ecx
  int v8; // eax
  void *v9; // ebp
  int v10; // eax
  unsigned int i; // esi
  unsigned int v12; // ecx
  int v13; // ecx
  int v14; // edx
  void *v15; // ebx
  int v16; // ecx
  char *v17; // ebx
  char *v18; // esi
  int v19; // eax
  char *v20; // ebp
  unsigned int v21; // ebx
  _DWORD *v22; // esi
  int v23; // ecx
  int v24; // ecx
  int v25; // edx
  void *v26; // edi

  v2 = 0;
  this[14] = 0;
  v3 = this + 6;
  while ( 1 )
  {
    v4 = v3[1];
    if ( !v4 || v2 >= (v3[2] - v4) >> 2 )
      break;
    v5 = *(_DWORD *)(v3[1] + 4 * v2);
    --*(_DWORD *)(v5 + 16);
    v6 = v3[1];
    if ( !v6 || v2 >= (v3[2] - v6) >> 2 )
      invalid_parameter_noinfo();
    v7 = v3[1];
    if ( !*(_DWORD *)(*(_DWORD *)(v7 + 4 * v2) + 16) )
    {
      if ( !v7 || v2 >= (v3[2] - v7) >> 2 )
        invalid_parameter_noinfo();
      v8 = v3[1];
      v9 = *(void **)(v8 + 4 * v2);
      if ( v9 )
      {
        sub_10055820(*(_DWORD **)(v8 + 4 * v2));
        operator delete(v9);
      }
    }
    ++v2;
  }
  sub_10059D20(v3, 0, 0);
  sub_10059D20(this + 10, 0, 0);
  v10 = this[1];
  if ( v10 == 1 || v10 == 256 )
  {
    v21 = 0;
    v22 = this + 2;
    while ( 1 )
    {
      v23 = v22[1];
      if ( !v23 || v21 >= (v22[2] - v23) >> 2 )
        break;
      v24 = v22[1];
      if ( *(_DWORD *)(v24 + 4 * v21) )
      {
        if ( !v24 || v21 >= (v22[2] - v24) >> 2 )
          invalid_parameter_noinfo();
        v25 = v22[1];
        v26 = *(void **)(v25 + 4 * v21);
        if ( v26 )
        {
          sub_10058770(*(_DWORD *)(v25 + 4 * v21));
          operator delete(v26);
        }
      }
      ++v21;
    }
    sub_1005A150(v22, 0, 0);
  }
  else
  {
    for ( i = 0; ; ++i )
    {
      v12 = this[3];
      if ( !v12 || i >= (int)(this[4] - v12) >> 2 )
        break;
      v13 = this[3];
      if ( *(_DWORD *)(v13 + 4 * i) )
      {
        if ( !v13 || i >= (this[4] - v13) >> 2 )
          invalid_parameter_noinfo();
        v14 = this[3];
        v15 = *(void **)(v14 + 4 * i);
        if ( v15 )
        {
          sub_10058770(*(_DWORD *)(v14 + 4 * i));
          operator delete(v15);
        }
        v16 = this[3];
        if ( !v16 || i >= (this[4] - v16) >> 2 )
          invalid_parameter_noinfo();
        *(_DWORD *)(this[3] + 4 * i) = 0;
      }
    }
    v17 = (char *)this[4];
    if ( v12 > (unsigned int)v17 )
      invalid_parameter_noinfo();
    v18 = (char *)this[3];
    if ( (unsigned int)v18 > this[4] )
      invalid_parameter_noinfo();
    if ( v18 != v17 )
    {
      v19 = (this[4] - (int)v17) >> 2;
      v20 = &v18[4 * v19];
      if ( v19 > 0 )
        memmove_s(v18, 4 * v19, v17, 4 * v19);
      this[4] = v20;
    }
  }
}
