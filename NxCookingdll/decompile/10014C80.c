/*
 * func-name: sub_10014C80
 * func-address: 0x10014c80
 * callers: 0x10033dc0
 * callees: 0x10014910, 0x10035300
 */

char __thiscall sub_10014C80(int this)
{
  unsigned __int16 v2; // ax
  int v3; // ebx
  int (__stdcall ***v4)(size_t, int); // eax
  void *v5; // edi
  unsigned __int16 v7; // ax
  int (__stdcall ***v8)(size_t, int); // eax

  v2 = *(_WORD *)(this + 22);
  if ( *(unsigned __int16 *)(this + 20) + 1 > v2 )
  {
    v3 = 2 * v2;
    if ( !v2 )
      v3 = 1;
    v4 = sub_10014910();
    v5 = (void *)((int (__thiscall *)(int (__stdcall ***)(size_t, int), int, int))**v4)(v4, 4 * v3, 65);
    if ( !v5 )
      return 0;
    v7 = *(_WORD *)(this + 22);
    if ( v7 )
    {
      memcpy_0(v5, *(const void **)(this + 12), 4 * v7);
      if ( *(_DWORD *)(this + 12) )
      {
        v8 = sub_10014910();
        ((void (__thiscall *)(int (__stdcall ***)(size_t, int), _DWORD))(*v8)[3])(v8, *(_DWORD *)(this + 12));
        *(_DWORD *)(this + 12) = 0;
      }
    }
    *(_DWORD *)(this + 12) = v5;
    *(_WORD *)(this + 22) = v3;
  }
  *(_DWORD *)(*(_DWORD *)(this + 12) + 4 * (unsigned __int16)(*(_WORD *)(this + 20))++) = *(_DWORD *)(this + 16);
  return 1;
}
