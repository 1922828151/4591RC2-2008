/*
 * func-name: sub_100171D0
 * func-address: 0x100171d0
 * callers: 0x10017e30, 0x10018590
 * callees: 0x10004500, 0x10014910, 0x10016e90, 0x10017170
 */

char __thiscall sub_100171D0(int *this, int a2)
{
  int (__stdcall ***v3)(size_t, int); // eax
  int v4; // eax
  unsigned int i; // eax
  int v6; // ebp
  int (__stdcall ***v7)(size_t, int); // eax
  int v8; // ecx
  int *v9; // eax
  _DWORD *v10; // ebx
  _DWORD *v11; // eax
  float *v12; // ecx

  if ( !a2 )
    return 0;
  if ( !*(_DWORD *)(a2 + 24) )
    return 0;
  sub_10017170(this);
  *(_DWORD *)(a2 + 64) = 1;
  *(_DWORD *)(a2 + 68) = 0;
  v3 = sub_10014910();
  v4 = ((int (__thiscall *)(int (__stdcall ***)(size_t, int), int, int))**v3)(v3, 4 * *(_DWORD *)(a2 + 24), 61);
  *this = v4;
  if ( !v4 )
    return 0;
  for ( i = 0; i < *(_DWORD *)(a2 + 24); ++i )
    *(_DWORD *)(*this + 4 * i) = i;
  v6 = 2 * *(_DWORD *)(a2 + 24) - 1;
  v7 = sub_10014910();
  v8 = (40 * (unsigned __int64)(unsigned int)v6) >> 32 != 0 ? -1 : 40 * v6;
  v9 = (int *)((int (__thiscall *)(int (__stdcall ***)(size_t, int), int, int))**v7)(
                v7,
                __CFADD__(v8, 4) ? -1 : v8 + 4,
                26);
  if ( v9 )
  {
    v10 = v9 + 1;
    *v9 = v6;
    sub_10004500((int)(v9 + 1), 40, v6, (int (__thiscall *)(int))sub_10016880);
    v11 = v10;
  }
  else
  {
    v11 = 0;
  }
  this[1] = (int)v11;
  *(_DWORD *)(a2 + 28) = v11;
  *(_DWORD *)(this[1] + 32) = *this;
  *(_DWORD *)(this[1] + 36) = *(_DWORD *)(a2 + 24);
  *(_BYTE *)(a2 + 56) = 1;
  v12 = (float *)this[1];
  dword_1005B1C0 = 0;
  sub_10016E90(v12, (_DWORD *)a2);
  this[4] = *(_DWORD *)(a2 + 64);
  this[5] = *(_DWORD *)(a2 + 60);
  return 1;
}
