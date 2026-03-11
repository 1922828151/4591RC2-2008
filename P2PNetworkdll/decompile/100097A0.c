/*
 * func-name: sub_100097A0
 * func-address: 0x100097a0
 * callers: 0x10004730, 0x10004b30, 0x1000c0c0
 * callees: 0x10023bc6
 */

Outpop::Utility *__userpurge sub_100097A0@<eax>(Outpop::Utility *a1@<esi>, int a2)
{
  unsigned int _7bit_value; // edi
  char *ptr; // eax
  DWORD LastError; // eax
  _BYTE pExceptionObject[4]; // [esp+0h] [ebp-48h] BYREF
  struct Outpop::Utility::Stream_Base *v7; // [esp+4h] [ebp-44h]
  _BYTE v8[20]; // [esp+Ch] [ebp-3Ch] BYREF
  _BYTE v9[28]; // [esp+20h] [ebp-28h] BYREF
  int v10; // [esp+44h] [ebp-4h]

  _7bit_value = Outpop::Utility::read_7bit_value(a1, v7);
  if ( Outpop::Utility::Stream_Base::get_readable(a1) < (signed int)_7bit_value || _7bit_value > 0x9FFF6 )
  {
    std::string::string(v9, "stream operator >> std::basic_string<T> faild");
    v10 = 0;
    LastError = GetLastError();
    Outpop::Utility::StreamException::StreamException(v8, v9, LastError, 0);
    CxxThrowException(pExceptionObject, (_ThrowInfo *)&_TI4_AVStreamException_Utility_Outpop__);
  }
  ptr = Outpop::Utility::Stream_Base::get_read_ptr(a1);
  std::string::append(a2, ptr, _7bit_value);
  *((_DWORD *)a1 + 4) += _7bit_value;
  return a1;
}
