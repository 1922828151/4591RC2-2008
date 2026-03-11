/*
 * func-name: sub_100E0A90
 * func-address: 0x100e0a90
 * callers: 0x100df590, 0x100df700
 * callees: 0x100e0750
 */

float *__thiscall sub_100E0A90(_DWORD *this, int *a2)
{
  unsigned int v3; // edx
  unsigned int v4; // ecx
  float *result; // eax
  char *v6; // edi
  int v7; // [esp+4h] [ebp-8h] BYREF

  v3 = this[1];
  if ( v3 )
    v4 = (int)(this[2] - v3) >> 2;
  else
    v4 = 0;
  if ( v3 && v4 < (int)(this[3] - v3) >> 2 )
  {
    result = (float *)(this[2] + 4);
    *(result - 1) = *(float *)a2;
    this[2] = result;
  }
  else
  {
    v6 = (char *)this[2];
    if ( v3 > (unsigned int)v6 )
      invalid_parameter_noinfo();
    return (float *)sub_100E0750(this, &v7, this, v6, a2);
  }
  return result;
}
