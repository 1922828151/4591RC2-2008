/*
 * func-name: ?clone_stream@Stream_Base@Utility@Outpop@@UAE?AV?$Smart_Ptr@VStream_Base@Utility@Outpop@@@23@XZ
 * func-address: 0x1000f2f0
 * callers: none
 * callees: 0x10005a90, 0x1000e110, 0x1000e340, 0x1000ec50, 0x10019580, 0x10019586
 */

Outpop::Utility::Stream_Base **__thiscall Outpop::Utility::Stream_Base::clone_stream(
        int this,
        Outpop::Utility::Stream_Base **a2)
{
  struct Outpop::Utility::Sect_Block_Allocator *v3; // eax
  _BYTE *v4; // eax
  Outpop::Utility::Stream_Base *v5; // esi
  _BYTE pExceptionObject[12]; // [esp+14h] [ebp-18h] BYREF
  int v8; // [esp+28h] [ebp-4h]

  v3 = Outpop::Utility::Sect_Block_Allocator::instance();
  v4 = sub_10005A90((int)v3 + 88);
  *v4 = 2;
  if ( v4 == (_BYTE *)-1 )
  {
    sub_1000E340((std::exception *)pExceptionObject);
    CxxThrowException(pExceptionObject, (_ThrowInfo *)&_TI2_AVbad_alloc_std__);
  }
  v8 = 2;
  v5 = Outpop::Utility::Stream_Base::Stream_Base((Outpop::Utility::Stream_Base *)(v4 + 1), *(_DWORD *)(this + 28));
  LOBYTE(v8) = 0;
  memcpy(**((void ***)v5 + 2), **(const void ***)(this + 8), *(_DWORD *)(this + 28));
  *((_DWORD *)v5 + 4) = *(_DWORD *)(this + 16);
  *((_DWORD *)v5 + 3) = *(_DWORD *)(this + 12);
  *a2 = v5;
  InterlockedIncrement((volatile LONG *)v5 + 1);
  return a2;
}
