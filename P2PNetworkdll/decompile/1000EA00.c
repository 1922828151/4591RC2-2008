/*
 * func-name: sub_1000EA00
 * func-address: 0x1000ea00
 * callers: 0x1000c0c0
 * callees: 0x10023bc6
 */

int __userpurge sub_1000EA00@<eax>(int a1@<esi>, char *a2)
{
  _BYTE pExceptionObject[12]; // [esp+0h] [ebp-48h] BYREF
  _BYTE v4[20]; // [esp+Ch] [ebp-3Ch] BYREF
  _BYTE v5[28]; // [esp+20h] [ebp-28h] BYREF
  int v6; // [esp+44h] [ebp-4h]

  if ( Outpop::Utility::Stream_Base::get_readable((Outpop::Utility::Stream_Base *)a1) < 4u )
  {
    std::string::string(v5, "stream operator >> T faild");
    v6 = 0;
    Outpop::Utility::StreamException::StreamException(v4, v5, -1, 0);
    CxxThrowException(pExceptionObject, (_ThrowInfo *)&_TI4_AVStreamException_Utility_Outpop__);
  }
  *(_DWORD *)(a1 + 16) += Outpop::Utility::OS_Buffer::read(
                            *(Outpop::Utility::OS_Buffer **)(a1 + 8),
                            a2,
                            *(_DWORD *)(a1 + 16),
                            4);
  return a1;
}
