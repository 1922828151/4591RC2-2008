/*
 * func-name: sub_101F2830
 * func-address: 0x101f2830
 * callers: 0x10017fe9
 * callees: 0x102c9d86
 */

Outpop::Utility *__thiscall sub_101F2830(Outpop::Utility *this, int a2)
{
  unsigned int _7bit_value; // edi
  char *ptr; // eax
  DWORD LastError; // eax
  struct Outpop::Utility::Stream_Base *pExceptionObject; // [esp+0h] [ebp-48h] BYREF
  _BYTE v8[20]; // [esp+Ch] [ebp-3Ch] BYREF
  _BYTE v9[28]; // [esp+20h] [ebp-28h] BYREF
  int v10; // [esp+44h] [ebp-4h]

  _7bit_value = Outpop::Utility::read_7bit_value(this, pExceptionObject);
  if ( Outpop::Utility::Stream_Base::get_readable(this) < (signed int)_7bit_value || _7bit_value > 0x9FFF6 )
  {
    std::string::string(v9, "stream operator >> std::basic_string<T> faild");
    v10 = 0;
    LastError = GetLastError();
    Outpop::Utility::StreamException::StreamException(v8, v9, LastError, 0);
    CxxThrowException(&pExceptionObject, (_ThrowInfo *)&_TI4_AVStreamException_Utility_Outpop__);
  }
  ptr = Outpop::Utility::Stream_Base::get_read_ptr(this);
  std::string::append(a2, ptr, _7bit_value);
  *((_DWORD *)this + 4) += _7bit_value;
  return this;
}
