/*
 * func-name: sub_100183E0
 * func-address: 0x100183e0
 * callers: 0x10017e30
 * callees: 0x10014910
 */

char __thiscall sub_100183E0(_DWORD *this, int a2, int a3)
{
  unsigned int v5; // ebp
  int (__stdcall ***v6)(size_t, int); // eax
  int v7; // ecx
  unsigned int *v8; // eax
  _DWORD *v9; // ebx
  unsigned int v10; // edx
  int v11; // ecx
  int v12; // eax
  int v13; // edi
  int v14; // eax
  unsigned int v15; // edx
  int v16; // edi
  _DWORD *v17; // ecx
  _DWORD *v18; // eax
  int (__stdcall ***v19)(size_t, int); // eax

  if ( !a2 || !a3 || a2 != this[2] )
    return 0;
  if ( *this && !((unsigned __int8 (__cdecl *)(int, int, _DWORD))*this)(a2, a3, this[1]) )
    return 1;
  v5 = this[2];
  v6 = sub_10014910();
  v7 = (12 * (unsigned __int64)v5) >> 32 != 0 ? -1 : 12 * v5;
  v8 = (unsigned int *)((int (__thiscall *)(int (__stdcall ***)(size_t, int), int, int))**v6)(
                         v6,
                         __CFADD__(v7, 4) ? -1 : v7 + 4,
                         1);
  if ( !v8 )
    return 0;
  v9 = v8 + 1;
  *v8 = v5;
  if ( v8 == (unsigned int *)-4 )
    return 0;
  v10 = 0;
  if ( this[2] )
  {
    v11 = 0;
    do
    {
      v12 = this[4];
      v13 = *(_DWORD *)(v12 + v11 * 4);
      v14 = v11 * 4 + v12;
      v9[v11] = v13;
      v9[v11 + 1] = *(_DWORD *)(v14 + 4);
      v9[v11 + 2] = *(_DWORD *)(v14 + 8);
      ++v10;
      v11 += 3;
    }
    while ( v10 < this[2] );
  }
  v15 = 0;
  if ( this[2] )
  {
    v16 = 0;
    do
    {
      v17 = &v9[3 * *(_DWORD *)(a3 + 4 * v15)];
      v18 = (_DWORD *)(v16 + this[4]);
      *v18 = *v17;
      v18[1] = v17[1];
      ++v15;
      v18[2] = v17[2];
      v16 += 12;
    }
    while ( v15 < this[2] );
  }
  v19 = sub_10014910();
  ((void (__thiscall *)(int (__stdcall ***)(size_t, int), _DWORD *))(*v19)[3])(v19, v9 - 1);
  return 1;
}
