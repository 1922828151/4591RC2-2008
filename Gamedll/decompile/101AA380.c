/*
 * func-name: sub_101AA380
 * func-address: 0x101aa380
 * callers: 0x100077e3
 * callees: 0x10013665
 */

int __thiscall sub_101AA380(_DWORD *this, float *a2)
{
  unsigned int v3; // edx
  unsigned int v4; // ecx
  int result; // eax
  void *v6; // edi
  int v7; // [esp+4h] [ebp-8h] BYREF

  v3 = this[1];
  if ( v3 )
    v4 = (int)(this[2] - v3) >> 2;
  else
    v4 = 0;
  if ( v3 && v4 < (int)(this[3] - v3) >> 2 )
  {
    result = this[2] + 4;
    *(float *)(result - 4) = *a2;
    this[2] = result;
  }
  else
  {
    v6 = (void *)this[2];
    if ( v3 > (unsigned int)v6 )
      _invalid_parameter_noinfo();
    return sub_10013665((int)&v7, (int)this, v6, (int)a2);
  }
  return result;
}
