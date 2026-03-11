/*
 * func-name: sub_1018BE60
 * func-address: 0x1018be60
 * callers: 0x1000b96f
 * callees: 0x10003b20, 0x10004f34
 */

int __thiscall sub_1018BE60(_DWORD *this, void *a2)
{
  unsigned int v3; // ebx
  unsigned int v4; // edi
  char *v5; // edi
  int result; // eax
  unsigned int v7; // edi
  int v8; // [esp+Ch] [ebp-8h] BYREF

  v3 = this[1];
  if ( v3 )
    v4 = (int)(this[2] - v3) / 936;
  else
    v4 = 0;
  if ( v3 && v4 < (int)(this[3] - v3) / 936 )
  {
    v5 = (char *)this[2];
    LOBYTE(v8) = 0;
    result = sub_10004F34(v5, 1, a2);
    this[2] = v5 + 936;
  }
  else
  {
    v7 = this[2];
    if ( v3 > v7 )
      _invalid_parameter_noinfo();
    return sub_10003B20((int)&v8, (int)this, v7, (int)a2);
  }
  return result;
}
