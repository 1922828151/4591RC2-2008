/*
 * func-name: sub_10035DD0
 * func-address: 0x10035dd0
 * callers: 0x1001baf0, 0x1001c940, 0x100216e0, 0x1002ad90, 0x10035ba0, 0x1003a5b0, 0x1003dd30, 0x1003eff0, 0x1003ffb0, 0x10040f80
 * callees: 0x1004f112
 */

int __userpurge sub_10035DD0@<eax>(int a1@<esi>, char *a2)
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
