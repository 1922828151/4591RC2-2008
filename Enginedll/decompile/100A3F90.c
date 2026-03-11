/*
 * func-name: sub_100A3F90
 * func-address: 0x100a3f90
 * callers: none
 * callees: none
 */

char __thiscall sub_100A3F90(int this, int a2, int a3, int a4)
{
  int v6; // eax
  void (__stdcall *v7)(int, int, _DWORD, int, _DWORD, _DWORD); // ecx

  if ( !*(_BYTE *)(this + 156) || !*(_BYTE *)(this + 90) || *(_BYTE *)(this + 89) )
    return 0;
  if ( a2 == 256 )
  {
    if ( a3 == 32 )
    {
      *(_BYTE *)(this + 708) = 1;
      return 1;
    }
    return 0;
  }
  if ( a2 != 257 || a3 != 32 )
    return 0;
  if ( *(_BYTE *)(this + 708) == 1 )
  {
    v6 = *(_DWORD *)(this + 112);
    *(_BYTE *)(this + 708) = 0;
    v7 = *(void (__stdcall **)(int, int, _DWORD, int, _DWORD, _DWORD))(v6 + 736);
    if ( v7 )
      v7(v6, 258, *(_DWORD *)(this + 136), this, 0, 0);
    (*(void (__thiscall **)(_DWORD, int))(**(_DWORD **)(this + 696) + 192))(*(_DWORD *)(this + 696), this);
  }
  return 1;
}
