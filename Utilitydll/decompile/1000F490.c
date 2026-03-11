/*
 * func-name: ?clone_shard_stream@Stream_Base@Utility@Outpop@@UAE?AV?$Smart_Ptr@VStream_Base@Utility@Outpop@@@23@HH@Z
 * func-address: 0x1000f490
 * callers: none
 * callees: 0x1000e4c0, 0x1000ebe0, 0x1000ed80, 0x10019586
 */

Outpop::Utility::Stream_Base **__thiscall Outpop::Utility::Stream_Base::clone_shard_stream(
        struct Outpop::Utility::Stream_Base *this,
        Outpop::Utility::Stream_Base **a2,
        int a3,
        int a4)
{
  int v5; // ebp
  int v6; // edi
  char *v7; // eax
  Outpop::Utility::Stream_Base *v8; // eax
  _BYTE pExceptionObject[20]; // [esp+14h] [ebp-3Ch] BYREF
  int v11[7]; // [esp+28h] [ebp-28h] BYREF
  int v12; // [esp+4Ch] [ebp-4h]

  v5 = *((_DWORD *)this + 4) + a3;
  v6 = *((_DWORD *)this + 3) + a4;
  if ( v5 > v6 || v5 < 0 || v6 < 0 || v6 > *((_DWORD *)this + 7) )
  {
    std::string::string(
      v11,
      " Binary_Stream::clone_shard_stream(int  r_movepos,int w_movepos) error,wirtopos or ritepos error!");
    v12 = 1;
    Outpop::Utility::StreamException::StreamException(
      (Outpop::Utility::outpop_exception *)pExceptionObject,
      (int)v11,
      -1,
      0);
    CxxThrowException(pExceptionObject, (_ThrowInfo *)&_TI4_AVStreamException_Utility_Outpop__);
  }
  v7 = Outpop::Utility::Stream_Base::operator new();
  v12 = 2;
  if ( v7 )
    v8 = Outpop::Utility::Stream_Base::Stream_Base((Outpop::Utility::Stream_Base *)v7, this, v5, v6, 0);
  else
    v8 = 0;
  LOBYTE(v12) = 0;
  *a2 = v8;
  if ( v8 )
    InterlockedIncrement((volatile LONG *)v8 + 1);
  v12 = 0;
  return a2;
}
