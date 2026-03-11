/*
 * func-name: ?cont@Stream_Base@Utility@Outpop@@QAE?AV?$Smart_Ptr@VStream_Base@Utility@Outpop@@@23@XZ
 * func-address: 0x1000f590
 * callers: 0x1000ed80, 0x1000f140, 0x1000f6a0
 * callees: none
 */

_DWORD *__thiscall Outpop::Utility::Stream_Base::cont(_DWORD *this, _DWORD *a2)
{
  int v2; // eax

  v2 = this[8];
  *a2 = v2;
  if ( v2 )
    InterlockedIncrement((volatile LONG *)(v2 + 4));
  return a2;
}
