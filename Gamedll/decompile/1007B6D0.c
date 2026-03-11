/*
 * func-name: ?Initialize@DynamicLasers@@IAEXXZ_0
 * func-address: 0x1007b6d0
 * callers: 0x1000c3fb
 * callees: none
 */

void __thiscall DynamicLasers::Initialize(DynamicLasers *this)
{
  char *v1; // esi
  unsigned int v2; // edi
  unsigned int v3; // ebx

  v1 = (char *)this + 256;
  v2 = *((_DWORD *)this + 65);
  if ( v2 > *((_DWORD *)this + 66) )
    _invalid_parameter_noinfo();
  while ( 1 )
  {
    v3 = *((_DWORD *)v1 + 2);
    if ( *((_DWORD *)v1 + 1) > v3 )
      _invalid_parameter_noinfo();
    if ( v2 == v3 )
      break;
    if ( v2 >= *((_DWORD *)v1 + 2) )
      _invalid_parameter_noinfo();
    *(float *)(v2 + 32) = 0.0;
    if ( v2 >= *((_DWORD *)v1 + 2) )
      _invalid_parameter_noinfo();
    *(float *)(v2 + 36) = 0.0;
    if ( v2 >= *((_DWORD *)v1 + 2) )
      _invalid_parameter_noinfo();
    v2 += 48;
  }
  *((_DWORD *)this + 45) = -1;
}
