/*
 * func-name: sub_1000FB00
 * func-address: 0x1000fb00
 * callers: 0x1000f990
 * callees: 0x1000ebe0, 0x10019586
 */

_DWORD *__stdcall sub_1000FB00(_DWORD *a1, _BYTE *a2)
{
  _DWORD *result; // eax
  int v3; // ecx
  _DWORD *v4; // edx
  int v5; // edx
  _BYTE pExceptionObject[20]; // [esp+8h] [ebp-3Ch] BYREF
  int v7[10]; // [esp+1Ch] [ebp-28h] BYREF

  result = a1;
  v3 = a1[4];
  if ( a1[3] == v3 )
  {
    std::string::string(v7, "stream operator >> T faild");
    v7[9] = 0;
    Outpop::Utility::StreamException::StreamException(
      (Outpop::Utility::outpop_exception *)pExceptionObject,
      (int)v7,
      -1,
      0);
    CxxThrowException(pExceptionObject, (_ThrowInfo *)&_TI4_AVStreamException_Utility_Outpop__);
  }
  v4 = (_DWORD *)a1[2];
  if ( v3 + 1 <= v4[1] )
  {
    *a2 = *(_BYTE *)(v3 + *v4);
    v5 = 1;
  }
  else
  {
    v5 = -1;
  }
  a1[4] = v5 + v3;
  return result;
}
