/*
 * func-name: sub_1000FA00
 * func-address: 0x1000fa00
 * callers: 0x1000f950
 * callees: 0x1000ebe0, 0x10019586
 */

int __userpurge sub_1000FA00@<eax>(int a1@<esi>, _BYTE *a2)
{
  DWORD LastError; // eax
  int v3; // eax
  _DWORD *v4; // ecx
  DWORD v6; // eax
  _BYTE pExceptionObject[20]; // [esp+4h] [ebp-3Ch] BYREF
  int v8[7]; // [esp+18h] [ebp-28h] BYREF
  int v9; // [esp+3Ch] [ebp-4h]

  if ( !*(_BYTE *)(a1 + 20) )
  {
    std::string::string(v8, "stream operator << T space not enugh");
    v9 = 0;
    LastError = GetLastError();
    Outpop::Utility::StreamException::StreamException(
      (Outpop::Utility::outpop_exception *)pExceptionObject,
      (int)v8,
      LastError,
      0);
    CxxThrowException(pExceptionObject, (_ThrowInfo *)&_TI4_AVStreamException_Utility_Outpop__);
  }
  if ( *(_DWORD *)(*(_DWORD *)(a1 + 8) + 4) == *(_DWORD *)(a1 + 12) )
    (*(void (__thiscall **)(int, int))(*(_DWORD *)a1 + 16))(a1, *(_DWORD *)(a1 + 28) + 129);
  v3 = *(_DWORD *)(a1 + 12);
  v4 = *(_DWORD **)(a1 + 8);
  if ( v3 + 1 > v4[1] )
  {
    std::string::string(v8, "stream opera << const T write  faild");
    v9 = 1;
    v6 = GetLastError();
    Outpop::Utility::StreamException::StreamException(
      (Outpop::Utility::outpop_exception *)pExceptionObject,
      (int)v8,
      v6,
      0);
    CxxThrowException(pExceptionObject, (_ThrowInfo *)&_TI4_AVStreamException_Utility_Outpop__);
  }
  *(_BYTE *)(v3 + *v4) = *a2;
  ++*(_DWORD *)(a1 + 12);
  return a1;
}
