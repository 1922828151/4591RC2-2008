/*
 * func-name: sub_101F2610
 * func-address: 0x101f2610
 * callers: 0x10002842
 * callees: 0x102c9d86
 */

Outpop::Utility::Stream_Base *__thiscall sub_101F2610(Outpop::Utility::Stream_Base *this, int a2)
{
  DWORD LastError; // eax
  Outpop::Utility *v4; // edi
  const char *v5; // eax
  _BYTE pExceptionObject[12]; // [esp+4h] [ebp-48h] BYREF
  _BYTE v8[20]; // [esp+10h] [ebp-3Ch] BYREF
  _BYTE v9[28]; // [esp+24h] [ebp-28h] BYREF
  int v10; // [esp+48h] [ebp-4h]

  if ( !*((_BYTE *)this + 20) )
  {
    std::string::string(v9, "stream operator << string<T> space not enugh");
    v10 = 0;
    LastError = GetLastError();
    Outpop::Utility::StreamException::StreamException(v8, v9, LastError, 0);
    CxxThrowException(pExceptionObject, (_ThrowInfo *)&_TI4_AVStreamException_Utility_Outpop__);
  }
  v4 = (Outpop::Utility *)std::string::size(a2);
  Outpop::Utility::write_7bit_value(v4, (unsigned int)this);
  v5 = (const char *)std::string::c_str(a2);
  Outpop::Utility::Stream_Base::write(this, v5, v4);
  return this;
}
