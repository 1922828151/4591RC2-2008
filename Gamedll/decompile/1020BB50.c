/*
 * func-name: sub_1020BB50
 * func-address: 0x1020bb50
 * callers: 0x100052b8
 * callees: 0x102c9d86
 */

int __thiscall sub_1020BB50(int this, char *a2)
{
  _BYTE pExceptionObject[12]; // [esp+0h] [ebp-48h] BYREF
  _BYTE v5[20]; // [esp+Ch] [ebp-3Ch] BYREF
  _BYTE v6[28]; // [esp+20h] [ebp-28h] BYREF
  int v7; // [esp+44h] [ebp-4h]

  if ( Outpop::Utility::Stream_Base::get_readable((Outpop::Utility::Stream_Base *)this) < 2u )
  {
    std::string::string(v6, "stream operator >> T faild");
    v7 = 0;
    Outpop::Utility::StreamException::StreamException(v5, v6, -1, 0);
    CxxThrowException(pExceptionObject, (_ThrowInfo *)&_TI4_AVStreamException_Utility_Outpop__);
  }
  *(_DWORD *)(this + 16) += Outpop::Utility::OS_Buffer::read(
                              *(Outpop::Utility::OS_Buffer **)(this + 8),
                              a2,
                              *(_DWORD *)(this + 16),
                              2);
  return this;
}
