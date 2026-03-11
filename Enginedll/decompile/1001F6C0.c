/*
 * func-name: ?FreeSHProbe@World@@QAEXH@Z
 * func-address: 0x1001f6c0
 * callers: none
 * callees: 0x101a2500
 */

void __thiscall World::FreeSHProbe(World *this, unsigned int a2)
{
  int v3; // ecx
  char *v4; // edi
  unsigned int v5; // edi
  unsigned int v6; // edi
  int v7; // eax

  v3 = *((_DWORD *)this + 818);
  if ( !v3 || a2 >= (*((_DWORD *)this + 819) - v3) >> 2 )
    invalid_parameter_noinfo();
  v4 = *(char **)(*((_DWORD *)this + 818) + 4 * a2);
  if ( v4 )
  {
    std::string::~string(v4 + 432);
    operator delete(v4);
  }
  v5 = *((_DWORD *)this + 818);
  if ( v5 > *((_DWORD *)this + 819) )
    invalid_parameter_noinfo();
  v6 = v5 + 4 * a2;
  if ( v6 > *((_DWORD *)this + 819) || v6 < *((_DWORD *)this + 818) )
    invalid_parameter_noinfo();
  v7 = (int)(*((_DWORD *)this + 819) - (v6 + 4)) >> 2;
  if ( v7 > 0 )
    memmove_s((void *const)v6, 4 * v7, (const void *const)(v6 + 4), 4 * v7);
  *((_DWORD *)this + 819) -= 4;
}
