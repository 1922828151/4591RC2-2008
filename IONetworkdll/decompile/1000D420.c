/*
 * func-name: ?set_deskey2@Security@IONetwork@Outpop@@QAEXPADH_N@Z
 * func-address: 0x1000d420
 * callers: none
 * callees: 0x1004e85c, 0x1004f11e, 0x1004f124
 */

void *__thiscall Outpop::IONetwork::Security::set_deskey2(
        Outpop::IONetwork::Security *this,
        char *Src,
        size_t Size,
        bool a4)
{
  if ( a4 )
  {
    if ( !*((_DWORD *)this + 2) )
      *((_DWORD *)this + 2) = operator new(Size + 1);
    memset(*((void **)this + 2), 0, Size + 1);
    return memcpy(*((void **)this + 2), Src, Size);
  }
  else
  {
    if ( !*((_DWORD *)this + 4) )
      *((_DWORD *)this + 4) = operator new(Size + 1);
    memset(*((void **)this + 4), 0, Size + 1);
    return memcpy(*((void **)this + 4), Src, Size);
  }
}
