/*
 * func-name: ?CheckSum@IONetwork@Outpop@@YAIPADHE@Z
 * func-address: 0x1000d070
 * callers: none
 * callees: none
 */

int __cdecl Outpop::IONetwork::CheckSum(Outpop::IONetwork *this, char *a2, unsigned __int8 a3)
{
  char *v3; // ecx
  int result; // eax
  int v6; // edi

  v3 = &a2[-a3];
  for ( result = 0; (int)v3 > 0; result += v6 )
  {
    v6 = *((unsigned __int8 *)this + a3);
    this = (Outpop::IONetwork *)((char *)this + a3);
    v3 -= a3;
  }
  return result;
}
