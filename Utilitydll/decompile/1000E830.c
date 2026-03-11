/*
 * func-name: ?cont@Binary_Stream@Utility@Outpop@@QAEXV?$Smart_Ptr@VBinary_Stream@Utility@Outpop@@@23@@Z
 * func-address: 0x1000e830
 * callers: none
 * callees: none
 */

void __thiscall Outpop::Utility::Binary_Stream::cont(_DWORD *this, int a2)
{
  int v3; // edi

  if ( a2 )
    InterlockedIncrement((volatile LONG *)(a2 + 4));
  v3 = this[8];
  if ( v3 && !InterlockedDecrement((volatile LONG *)(v3 + 4)) )
    (**(void (__thiscall ***)(int, int))v3)(v3, 1);
  this[8] = a2;
  if ( a2 )
  {
    InterlockedIncrement((volatile LONG *)(a2 + 4));
    if ( !InterlockedDecrement((volatile LONG *)(a2 + 4)) )
      (**(void (__thiscall ***)(int, int))a2)(a2, 1);
  }
  if ( a2 )
  {
    if ( !InterlockedDecrement((volatile LONG *)(a2 + 4)) )
      (**(void (__thiscall ***)(int, int))a2)(a2, 1);
  }
}
