/*
 * func-name: sub_10025310
 * func-address: 0x10025310
 * callers: 0x1001fca0, 0x10021280, 0x1002c280, 0x1002c730
 * callees: 0x10014910, 0x10015980, 0x100159a0, 0x10015a80
 */

char __thiscall sub_10025310(unsigned int *this, _DWORD *a2)
{
  int (__stdcall ***v3)(size_t, int); // eax
  int (__stdcall ***v4)(size_t, int); // eax
  int (__stdcall ***v5)(size_t, int); // eax
  int v6; // eax
  int (__stdcall ***v8)(size_t, int); // eax
  unsigned __int8 *v9; // edi
  unsigned int v10; // eax
  int v11; // ecx
  unsigned int v12; // eax
  int v13; // ecx
  unsigned int v14; // eax
  int v15; // ecx
  int *v16; // ebx
  int (__stdcall ***v17)(size_t, int); // eax
  _DWORD *v18; // edi
  int (__stdcall ***v19)(size_t, int); // eax
  int v20; // eax
  unsigned int v21; // ebp
  bool v22; // zf
  int v23; // edx
  int v24; // eax
  _DWORD *v25; // ecx
  _DWORD *v26; // edi
  _DWORD v27[3]; // [esp+28h] [ebp-24h] BYREF
  unsigned int v28[6]; // [esp+34h] [ebp-18h] BYREF

  if ( this[4] )
  {
    v3 = sub_10014910();
    ((void (__thiscall *)(int (__stdcall ***)(size_t, int), unsigned int))(*v3)[3])(v3, this[4]);
    this[4] = 0;
  }
  if ( this[3] )
  {
    v4 = sub_10014910();
    ((void (__thiscall *)(int (__stdcall ***)(size_t, int), unsigned int))(*v4)[3])(v4, this[3]);
    this[3] = 0;
  }
  v5 = sub_10014910();
  v6 = ((int (__thiscall *)(int (__stdcall ***)(size_t, int), unsigned int, int))**v5)(v5, 4 * *this, 43);
  this[4] = v6;
  if ( !v6 )
    return 0;
  v8 = sub_10014910();
  v9 = (unsigned __int8 *)((int (__thiscall *)(int (__stdcall ***)(size_t, int), unsigned int, int))**v8)(
                            v8,
                            4 * *this,
                            1);
  if ( !v9 )
    return 0;
  v10 = 0;
  if ( *this )
  {
    v11 = 0;
    do
    {
      ++v10;
      *(float *)&v9[4 * v10 - 4] = *(float *)(v11 + this[1]);
      v11 += 12;
    }
    while ( v10 < *this );
  }
  sub_10015980(v28);
  sub_10015A80(v28, v9, *this, 1);
  v12 = 0;
  if ( *this )
  {
    v13 = 0;
    do
    {
      ++v12;
      *(float *)&v9[4 * v12 - 4] = *(float *)(v13 + this[1] + 4);
      v13 += 12;
    }
    while ( v12 < *this );
  }
  sub_10015A80(v28, v9, *this, 1);
  v14 = 0;
  if ( *this )
  {
    v15 = 0;
    do
    {
      ++v14;
      *(float *)&v9[4 * v14 - 4] = *(float *)(v15 + this[1] + 8);
      v15 += 12;
    }
    while ( v14 < *this );
  }
  v16 = (int *)sub_10015A80(v28, v9, *this, 1)[1];
  v17 = sub_10014910();
  ((void (__thiscall *)(int (__stdcall ***)(size_t, int), unsigned __int8 *))(*v17)[3])(v17, v9);
  this[2] = 0;
  memset(v27, 255, sizeof(v27));
  v18 = v27;
  v19 = sub_10014910();
  v20 = ((int (__thiscall *)(int (__stdcall ***)(size_t, int), unsigned int, int))**v19)(v19, 12 * *this, 44);
  v21 = *this;
  v22 = *this == 0;
  this[3] = v20;
  if ( !v22 )
  {
    while ( 1 )
    {
      v23 = *v16;
      v24 = 12 * *v16;
      v25 = (_DWORD *)(v24 + this[1]);
      --v21;
      if ( *v25 != *v18 || v25[1] != v18[1] || v25[2] != v18[2] )
      {
        v26 = (_DWORD *)(this[3] + 12 * this[2]);
        *v26 = *v25;
        v26[1] = v25[1];
        v26[2] = v25[2];
        ++this[2];
      }
      v18 = (_DWORD *)(v24 + this[1]);
      *(_DWORD *)(this[4] + 4 * v23) = this[2] - 1;
      if ( !v21 )
        break;
      ++v16;
    }
  }
  if ( a2 )
  {
    a2[2] = this[4];
    a2[1] = this[2];
    *a2 = this[3];
  }
  sub_100159A0((int)v28);
  return 1;
}
