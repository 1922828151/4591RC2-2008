/*
 * func-name: ?Check_Packet@IONetwork@Outpop@@YAEPADHHE@Z
 * func-address: 0x1000d0d0
 * callers: none
 * callees: none
 */

char __cdecl Outpop::IONetwork::Check_Packet(Outpop::IONetwork *this, char *a2, int a3, unsigned __int8 a4)
{
  char result; // al
  int i; // ecx
  int j; // ecx

  result = 0;
  for ( i = 0; i < a3; ++i )
    result += *((_BYTE *)this + i);
  for ( j = 0; j < (int)&a2[-a3]; j += a4 )
    result += *((_BYTE *)this + a3 + j);
  return result;
}
