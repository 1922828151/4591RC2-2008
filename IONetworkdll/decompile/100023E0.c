/*
 * func-name: ?strsncpy@IONetwork@Outpop@@YAPADPADPBDI@Z
 * func-address: 0x100023e0
 * callers: none
 * callees: none
 */

Outpop::IONetwork *__cdecl Outpop::IONetwork::strsncpy(Outpop::IONetwork *this, char *Source, const char *a3)
{
  if ( !a3 )
    return this;
  if ( this == (Outpop::IONetwork *)Source )
  {
    a3[(_DWORD)this - 1] = 0;
    return this;
  }
  else
  {
    *(_BYTE *)this = 0;
    if ( Source )
      strncat((char *)this, Source, (size_t)(a3 - 1));
    return this;
  }
}
