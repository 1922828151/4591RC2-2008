/*
 * func-name: sub_100096F0
 * func-address: 0x100096f0
 * callers: 0x100042e0, 0x10005580, 0x1000ab00, 0x1000ac90, 0x1000b090, 0x1000b380
 * callees: 0x10023bc6
 */

Outpop::Utility::Stream_Base *__usercall sub_100096F0@<eax>(_DWORD *a1@<ecx>, Outpop::Utility::Stream_Base *a2@<edi>)
{
  DWORD LastError; // eax
  Outpop::Utility *v4; // ebx
  const char *v5; // esi
  struct Outpop::Utility::Stream_Base *pExceptionObject; // [esp+0h] [ebp-48h] BYREF
  _BYTE v8[20]; // [esp+Ch] [ebp-3Ch] BYREF
  _BYTE v9[28]; // [esp+20h] [ebp-28h] BYREF
  int v10; // [esp+44h] [ebp-4h]

  if ( !*((_BYTE *)a2 + 20) )
  {
    std::string::string(v9, "stream operator << string<T> space not enugh");
    v10 = 0;
    LastError = GetLastError();
    Outpop::Utility::StreamException::StreamException(v8, v9, LastError, 0);
    CxxThrowException(&pExceptionObject, (_ThrowInfo *)&_TI4_AVStreamException_Utility_Outpop__);
  }
  v4 = (Outpop::Utility *)a1[5];
  Outpop::Utility::write_7bit_value(v4, (unsigned int)a2, pExceptionObject);
  if ( a1[6] < 0x10u )
    v5 = (const char *)(a1 + 1);
  else
    v5 = (const char *)a1[1];
  Outpop::Utility::Stream_Base::write(a2, v5, v4);
  return a2;
}
