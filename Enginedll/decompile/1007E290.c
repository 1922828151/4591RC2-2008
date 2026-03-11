/*
 * func-name: sub_1007E290
 * func-address: 0x1007e290
 * callers: 0x1007c450, 0x10085e90, 0x10086a00, 0x1008e470, 0x10091b60
 * callees: 0x1007dde0, 0x1007e200
 */

void __thiscall sub_1007E290(_DWORD *this, void *a2)
{
  unsigned int v3; // edx
  unsigned int v4; // ecx
  float *v5; // edi
  char *v6; // edi
  int v7; // [esp+8h] [ebp-8h] BYREF

  v3 = this[1];
  if ( v3 )
    v4 = (int)(this[2] - v3) >> 6;
  else
    v4 = 0;
  if ( v3 && v4 < (int)(this[3] - v3) >> 6 )
  {
    v5 = (float *)this[2];
    LOBYTE(v7) = 0;
    sub_1007DDE0(v5, 1, a2);
    this[2] = v5 + 16;
  }
  else
  {
    v6 = (char *)this[2];
    if ( v3 > (unsigned int)v6 )
      invalid_parameter_noinfo();
    sub_1007E200(this, &v7, this, v6, a2);
  }
}
