/*
 * func-name: ?set_deskey@Security@IONetwork@Outpop@@QAEXPADH_N@Z
 * func-address: 0x1000d390
 * callers: none
 * callees: 0x1004e85c, 0x1004f11e, 0x1004f124
 */

void *__thiscall Outpop::IONetwork::Security::set_deskey(
        Outpop::IONetwork::Security *this,
        char *Src,
        size_t Size,
        bool a4)
{
  if ( a4 )
  {
    if ( !*((_DWORD *)this + 1) )
    {
      *((_DWORD *)this + 1) = operator new(Size + 1);
      memset(*((void **)this + 2), 0, Size + 1);
    }
    return memcpy(*((void **)this + 1), Src, Size);
  }
  else
  {
    if ( !*((_DWORD *)this + 3) )
      *((_DWORD *)this + 3) = operator new(Size + 1);
    memset(*((void **)this + 3), 0, Size + 1);
    return memcpy(*((void **)this + 3), Src, Size);
  }
}
