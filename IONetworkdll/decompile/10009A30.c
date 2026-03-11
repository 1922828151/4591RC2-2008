/*
 * func-name: sub_10009A30
 * func-address: 0x10009a30
 * callers: 0x100091d0, 0x10009580, 0x10023270, 0x100328d0, 0x10035b20, 0x10046860
 * callees: 0x1004f112
 */

int *__userpurge sub_10009A30@<eax>(int *a1@<esi>, const char *a2)
{
  DWORD LastError; // eax
  int v3; // edi
  unsigned int size; // eax
  int v5; // eax
  DWORD v7; // eax
  _BYTE pExceptionObject[12]; // [esp+10h] [ebp-48h] BYREF
  _BYTE v9[20]; // [esp+1Ch] [ebp-3Ch] BYREF
  _BYTE v10[28]; // [esp+30h] [ebp-28h] BYREF
  int v11; // [esp+54h] [ebp-4h]

  if ( !*((_BYTE *)a1 + 20) )
  {
    std::string::string(v10, "stream operator << T space not enugh");
    v11 = 0;
    LastError = GetLastError();
    Outpop::Utility::StreamException::StreamException(v9, v10, LastError, 0);
    CxxThrowException(pExceptionObject, (_ThrowInfo *)&_TI4_AVStreamException_Utility_Outpop__);
  }
  if ( Outpop::Utility::Stream_Base::get_space((Outpop::Utility::Stream_Base *)a1) < 2u )
  {
    v3 = *a1;
    size = Outpop::Utility::Stream_Base::get_size((Outpop::Utility::Stream_Base *)a1);
    (*(void (__thiscall **)(int *, unsigned int))(v3 + 16))(a1, size + 130);
  }
  v5 = Outpop::Utility::OS_Buffer::write((Outpop::Utility::OS_Buffer *)a1[2], a2, a1[3], 2);
  if ( v5 == -1 )
  {
    std::string::string(v10, "stream opera << const T write  faild");
    v11 = 1;
    v7 = GetLastError();
    Outpop::Utility::StreamException::StreamException(v9, v10, v7, 0);
    CxxThrowException(pExceptionObject, (_ThrowInfo *)&_TI4_AVStreamException_Utility_Outpop__);
  }
  a1[3] += v5;
  return a1;
}
