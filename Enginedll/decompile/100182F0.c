/*
 * func-name: ?GetFileName@World@@QAEPBDXZ
 * func-address: 0x100182f0
 * callers: none
 * callees: none
 */

const char *__thiscall World::GetFileName(World *this)
{
  if ( *((_DWORD *)this + 803) < 0x10u )
    return (char *)this + 3192;
  else
    return (const char *)*((_DWORD *)this + 798);
}
