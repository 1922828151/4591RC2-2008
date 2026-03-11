/*
 * func-name: sub_1004E200
 * func-address: 0x1004e200
 * callers: 0x1004bb00
 * callees: 0x1004f112
 */

Outpop::Utility::Stream_Base *__usercall sub_1004E200@<eax>(int a1@<ecx>, Outpop::Utility::Stream_Base *a2@<edi>)
{
  DWORD LastError; // eax
  const char *v4; // esi
  struct Outpop::Utility::Stream_Base *pExceptionObject; // [esp+0h] [ebp-48h] BYREF
  _BYTE v7[20]; // [esp+Ch] [ebp-3Ch] BYREF
  _BYTE v8[28]; // [esp+20h] [ebp-28h] BYREF
  int v9; // [esp+44h] [ebp-4h]

  if ( !*((_BYTE *)a2 + 20) )
  {
    std::string::string(v8, "stream operator << string<T> space not enugh");
    v9 = 0;
    LastError = GetLastError();
    Outpop::Utility::StreamException::StreamException(v7, v8, LastError, 0);
    CxxThrowException(&pExceptionObject, (_ThrowInfo *)&_TI4_AVStreamException_Utility_Outpop__);
  }
  Outpop::Utility::write_7bit_value(*(Outpop::Utility **)(a1 + 20), (unsigned int)a2, pExceptionObject);
  if ( *(_DWORD *)(a1 + 24) < 0x10u )
    v4 = (const char *)(a1 + 4);
  else
    v4 = *(const char **)(a1 + 4);
  Outpop::Utility::Stream_Base::write(a2, v4);
  return a2;
}
