/*
 * func-name: sub_102C6280
 * func-address: 0x102c6280
 * callers: 0x102c4300
 * callees: 0x102c5fe0
 */

double *__thiscall sub_102C6280(_DWORD *this, double *a2)
{
  unsigned int v3; // edx
  unsigned int v4; // ecx
  double *result; // eax
  char *v6; // edi
  int v7; // [esp+4h] [ebp-8h] BYREF

  v3 = this[1];
  if ( v3 )
    v4 = (int)(this[2] - v3) >> 3;
  else
    v4 = 0;
  if ( v3 && v4 < (int)(this[3] - v3) >> 3 )
  {
    result = (double *)(this[2] + 8);
    *(result - 1) = *a2;
    this[2] = result;
  }
  else
  {
    v6 = (char *)this[2];
    if ( v3 > (unsigned int)v6 )
      _invalid_parameter_noinfo();
    return (double *)sub_102C5FE0(this, &v7, this, v6, a2);
  }
  return result;
}
