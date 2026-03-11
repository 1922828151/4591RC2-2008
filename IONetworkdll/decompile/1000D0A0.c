/*
 * func-name: ?CheckSum2@IONetwork@Outpop@@YAIPADHE@Z
 * func-address: 0x1000d0a0
 * callers: none
 * callees: none
 */

int __cdecl Outpop::IONetwork::CheckSum2(Outpop::IONetwork *this, char *a2, unsigned __int8 a3)
{
  char *v3; // ecx
  int i; // eax
  int v6; // edi

  v3 = &a2[-a3];
  for ( i = 0; (int)v3 > 0; i += v6 )
  {
    v6 = *((unsigned __int8 *)this + a3);
    this = (Outpop::IONetwork *)((char *)this + a3);
    v3 -= a3;
  }
  return ~i;
}
