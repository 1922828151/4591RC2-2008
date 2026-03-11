/*
 * func-name: sub_1002BB80
 * func-address: 0x1002bb80
 * callers: 0x1002cf30
 * callees: 0x10014910, 0x10034f10, 0x10035300
 */

char __cdecl sub_1002BB80(int a1, void *Src, _DWORD *a3, _DWORD *a4)
{
  int (__stdcall ***v4)(size_t, int); // eax
  size_t v5; // esi
  void *v6; // eax

  *a4 = a1;
  if ( a1 )
  {
    v4 = sub_10014910();
    v5 = 12 * a1;
    v6 = (void *)((int (__thiscall *)(int (__stdcall ***)(size_t, int), int, _DWORD))**v4)(v4, 12 * a1, 0);
    *a3 = v6;
    if ( !v6 )
      return 0;
    if ( Src )
    {
      memcpy_0(v6, Src, v5);
      return 1;
    }
    memset(v6, 0, v5);
  }
  return 1;
}
