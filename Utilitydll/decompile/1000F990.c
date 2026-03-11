/*
 * func-name: ?read_7bit_value@Utility@Outpop@@YAIAAVStream_Base@12@@Z
 * func-address: 0x1000f990
 * callers: none
 * callees: 0x1000fb00, 0x10019586
 */

int __cdecl Outpop::Utility::read_7bit_value(Outpop::Utility *this)
{
  int v1; // edi
  int v2; // esi
  int v3; // edx
  char v5; // [esp+Fh] [ebp-11h] BYREF
  const char *v6; // [esp+10h] [ebp-10h] BYREF
  _BYTE pExceptionObject[12]; // [esp+14h] [ebp-Ch] BYREF

  v1 = 0;
  v2 = 0;
  do
  {
    if ( v2 == 35 )
    {
      v6 = "read 7bits error";
      std::exception::exception((std::exception *)pExceptionObject, &v6);
      CxxThrowException(pExceptionObject, (_ThrowInfo *)&_TI1_AVexception_std__);
    }
    sub_1000FB00(this, &v5);
    v3 = (v5 & 0x7F) << v2;
    v2 += 7;
    v1 |= v3;
  }
  while ( v5 < 0 );
  return v1;
}
