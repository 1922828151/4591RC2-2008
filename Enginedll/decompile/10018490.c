/*
 * func-name: ?ClassName@Actor@@UAEPBDXZ
 * func-address: 0x10018490
 * callers: none
 * callees: none
 */

const char *__thiscall Actor::ClassName(Actor *this)
{
  if ( !*((_BYTE *)this + 213) )
    return "Actor";
  if ( *((_DWORD *)this + 61) < 0x10u )
    return (char *)this + 224;
  return (const char *)*((_DWORD *)this + 56);
}
