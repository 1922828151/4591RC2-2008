/*
 * func-name: ?Reset@DynamicLasers@@QAEXXZ_0
 * func-address: 0x1007b650
 * callers: 0x1000cd2e
 * callees: none
 */

void __thiscall DynamicLasers::Reset(DynamicLasers *this)
{
  unsigned int v1; // edi
  int i; // ebx
  int v4; // eax
  int v5; // eax

  v1 = 0;
  for ( i = 0; ; i += 48 )
  {
    v4 = *((_DWORD *)this + 65);
    if ( !v4 || v1 >= (*((_DWORD *)this + 66) - v4) / 48 )
      break;
    v5 = *((_DWORD *)this + 65);
    if ( !v5 || v1 >= (*((_DWORD *)this + 66) - v5) / 48 )
      _invalid_parameter_noinfo();
    *(float *)(*((_DWORD *)this + 65) + i + 32) = 0.0;
    ++v1;
  }
}
