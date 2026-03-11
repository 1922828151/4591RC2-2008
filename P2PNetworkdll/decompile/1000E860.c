/*
 * func-name: sub_1000E860
 * func-address: 0x1000e860
 * callers: 0x1000ac90, 0x1000b380
 * callees: 0x10023bc6
 */

int *__userpurge sub_1000E860@<eax>(int *a1@<esi>, const char *a2)
{
  DWORD LastError; // eax
  int v3; // edi
  unsigned int size; // eax
  int v5; // eax
  DWORD v7; // eax
  _BYTE pExceptionObject[12]; // [esp+0h] [ebp-78h] BYREF
  _BYTE v9[8]; // [esp+Ch] [ebp-6Ch] BYREF
  _BYTE v10[12]; // [esp+14h] [ebp-64h] BYREF
  _BYTE v11[20]; // [esp+20h] [ebp-58h] BYREF
  _BYTE v12[28]; // [esp+34h] [ebp-44h] BYREF
  _BYTE v13[28]; // [esp+50h] [ebp-28h] BYREF
  int v14; // [esp+74h] [ebp-4h]

  if ( !*((_BYTE *)a1 + 20) )
  {
    std::string::string(v12, "stream operator << T space not enugh");
    v14 = 0;
    LastError = GetLastError();
    Outpop::Utility::StreamException::StreamException(v9, v12, LastError, 0);
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
    std::string::string(v13, "stream opera << const T write  faild");
    v14 = 1;
    v7 = GetLastError();
    Outpop::Utility::StreamException::StreamException(v11, v13, v7, 0);
    CxxThrowException(v10, (_ThrowInfo *)&_TI4_AVStreamException_Utility_Outpop__);
  }
  a1[3] += v5;
  return a1;
}
