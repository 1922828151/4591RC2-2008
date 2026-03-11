/*
 * func-name: sub_10015410
 * func-address: 0x10015410
 * callers: 0x100158b0, 0x10015b30, 0x10015e90, 0x10171950, 0x10177850
 * callees: 0x10013830, 0x10014f80
 */

int **__thiscall sub_10015410(int *this, int a2)
{
  unsigned int v3; // edi
  unsigned int v4; // ecx
  CREControl *v5; // edi
  int **result; // eax
  unsigned int v7; // ebx
  int *v8; // [esp+8h] [ebp-8h] BYREF

  v3 = this[1];
  if ( v3 )
    v4 = (int)(this[2] - v3) / 84;
  else
    v4 = 0;
  if ( v3 && v4 < (int)(this[3] - v3) / 84 )
  {
    v5 = (CREControl *)this[2];
    LOBYTE(v8) = 0;
    result = (int **)sub_10013830(v5, 1, a2);
    this[2] = (int)v5 + 84;
  }
  else
  {
    v7 = this[2];
    if ( v3 > v7 )
      invalid_parameter_noinfo();
    return sub_10014F80(this, &v8, this, v7, a2);
  }
  return result;
}
