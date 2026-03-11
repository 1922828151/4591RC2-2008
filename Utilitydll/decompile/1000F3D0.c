/*
 * func-name: ?clone_shard_stream@Stream_Base@Utility@Outpop@@UAE?AV?$Smart_Ptr@VStream_Base@Utility@Outpop@@@23@XZ
 * func-address: 0x1000f3d0
 * callers: none
 * callees: 0x10005a90, 0x1000e110, 0x1000e340, 0x1000ed80, 0x10019586
 */

Outpop::Utility::Stream_Base **__thiscall Outpop::Utility::Stream_Base::clone_shard_stream(
        struct Outpop::Utility::Stream_Base *this,
        Outpop::Utility::Stream_Base **a2)
{
  struct Outpop::Utility::Sect_Block_Allocator *v3; // eax
  _BYTE *v4; // eax
  Outpop::Utility::Stream_Base *v5; // eax
  _BYTE pExceptionObject[12]; // [esp+10h] [ebp-18h] BYREF
  int v8; // [esp+24h] [ebp-4h]

  v3 = Outpop::Utility::Sect_Block_Allocator::instance();
  v4 = sub_10005A90((int)v3 + 88);
  *v4 = 2;
  if ( v4 == (_BYTE *)-1 )
  {
    sub_1000E340((std::exception *)pExceptionObject);
    CxxThrowException(pExceptionObject, (_ThrowInfo *)&_TI2_AVbad_alloc_std__);
  }
  v8 = 2;
  v5 = Outpop::Utility::Stream_Base::Stream_Base(
         (Outpop::Utility::Stream_Base *)(v4 + 1),
         this,
         *((_DWORD *)this + 4),
         *((_DWORD *)this + 3),
         0);
  LOBYTE(v8) = 0;
  *a2 = v5;
  if ( v5 )
    InterlockedIncrement((volatile LONG *)v5 + 1);
  return a2;
}
