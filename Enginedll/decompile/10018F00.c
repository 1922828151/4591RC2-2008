/*
 * func-name: ?ClassName@Light@@EAEPBDXZ
 * func-address: 0x10018f00
 * callers: none
 * callees: none
 */

const char *__thiscall Light::ClassName(Light *this)
{
  if ( !*((_BYTE *)this + 213) )
    return "Light";
  if ( *((_DWORD *)this + 61) < 0x10u )
    return (char *)this + 224;
  return (const char *)*((_DWORD *)this + 56);
}
