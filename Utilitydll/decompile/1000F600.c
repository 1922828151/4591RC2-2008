/*
 * func-name: ?cont@Stream_Base@Utility@Outpop@@QAEXV?$Smart_Ptr@VStream_Base@Utility@Outpop@@@23@@Z
 * func-address: 0x1000f600
 * callers: 0x1000f6a0
 * callees: none
 */

void __thiscall Outpop::Utility::Stream_Base::cont(_DWORD *this, int a2)
{
  int v3; // esi

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
}
