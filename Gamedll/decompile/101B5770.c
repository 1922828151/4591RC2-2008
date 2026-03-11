/*
 * func-name: sub_101B5770
 * func-address: 0x101b5770
 * callers: 0x100063b1
 * callees: 0x1000c900, 0x1000f25e
 */

int __thiscall sub_101B5770(_DWORD *this, void *a2)
{
  unsigned int v3; // edx
  unsigned int v4; // ecx
  int v5; // edi
  int result; // eax
  unsigned int v7; // edi
  int v8; // [esp+8h] [ebp-8h] BYREF

  v3 = this[1];
  if ( v3 )
    v4 = (int)(this[2] - v3) >> 4;
  else
    v4 = 0;
  if ( v3 && v4 < (int)(this[3] - v3) >> 4 )
  {
    v5 = this[2];
    LOBYTE(v8) = 0;
    result = sub_1000F25E(v5, 1, (int)a2);
    this[2] = v5 + 16;
  }
  else
  {
    v7 = this[2];
    if ( v3 > v7 )
      _invalid_parameter_noinfo();
    return sub_1000C900((int)&v8, (int)this, v7, a2);
  }
  return result;
}
