/*
 * func-name: sub_100149B0
 * func-address: 0x100149b0
 * callers: 0x1000fe90, 0x10010c70, 0x10011260, 0x10012f90, 0x100179b0, 0x1001abc0, 0x1001b780, 0x1001bf70, 0x1001d650, 0x1001e590, 0x1001e7c0, 0x1001ebb0, 0x1001fc00, 0x10020740, 0x100250d0, 0x1002c280, 0x1002cc30, 0x1002cdb0, 0x1002d130, 0x1002d2a0, 0x1002db30
 * callees: 0x10014910, 0x10035300
 */

char __thiscall sub_100149B0(void *this, int a2)
{
  unsigned int v4; // eax
  unsigned int v5; // ecx
  int (__stdcall ***v6)(size_t, int); // eax
  void *v7; // edi
  int v8; // eax
  int (__stdcall ***v9)(size_t, int); // eax

  if ( *((float *)this + 3) <= 0.0 )
    return 0;
  if ( *(_DWORD *)this )
    v4 = (__int64)((double)*(unsigned int *)this * *((float *)this + 3));
  else
    v4 = 2;
  v5 = a2 + *((_DWORD *)this + 1);
  *(_DWORD *)this = v4;
  if ( v4 < v5 )
    *(_DWORD *)this = v5;
  v6 = sub_10014910();
  v7 = (void *)((int (__thiscall *)(int (__stdcall ***)(size_t, int), int, int))**v6)(v6, 4 * *(_DWORD *)this, 64);
  if ( !v7 )
    return 0;
  v8 = *((_DWORD *)this + 1);
  if ( v8 )
    memcpy_0(v7, *((const void **)this + 2), 4 * v8);
  if ( *((_DWORD *)this + 2) )
  {
    v9 = sub_10014910();
    ((void (__thiscall *)(int (__stdcall ***)(size_t, int), _DWORD))(*v9)[3])(v9, *((_DWORD *)this + 2));
    *((_DWORD *)this + 2) = 0;
  }
  *((_DWORD *)this + 2) = v7;
  return 1;
}
