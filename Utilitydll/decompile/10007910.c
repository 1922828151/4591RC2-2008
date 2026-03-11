/*
 * func-name: sub_10007910
 * func-address: 0x10007910
 * callers: 0x100065f0, 0x1000a880, 0x1000aca0
 * callees: 0x10018cf2
 */

void __stdcall sub_10007910(int a1)
{
  _DWORD **v1; // eax
  _DWORD *v2; // edi
  bool v3; // zf
  _DWORD *v4; // ebx
  int v5; // esi

  v1 = *(_DWORD ***)(a1 + 4);
  v2 = *v1;
  *v1 = v1;
  *(_DWORD *)(*(_DWORD *)(a1 + 4) + 4) = *(_DWORD *)(a1 + 4);
  v3 = v2 == *(_DWORD **)(a1 + 4);
  *(_DWORD *)(a1 + 8) = 0;
  if ( !v3 )
  {
    do
    {
      v4 = (_DWORD *)*v2;
      v5 = v2[2];
      if ( v5 )
      {
        if ( !InterlockedDecrement((volatile LONG *)(v5 + 4)) )
          (**(void (__thiscall ***)(int, int))v5)(v5, 1);
      }
      operator delete(v2);
      v2 = v4;
    }
    while ( v4 != *(_DWORD **)(a1 + 4) );
  }
}
