/*
 * func-name: sub_100E0D40
 * func-address: 0x100e0d40
 * callers: 0x100df590, 0x100df700
 * callees: 0x100e0440, 0x100e0b00
 */

char *__thiscall sub_100E0D40(_DWORD *this, void *a2)
{
  unsigned int v3; // edi
  unsigned int v4; // ecx
  char *v5; // edi
  char *result; // eax
  char *v7; // ebx
  int v8; // [esp+8h] [ebp-8h] BYREF

  v3 = this[1];
  if ( v3 )
    v4 = (int)(this[2] - v3) / 72;
  else
    v4 = 0;
  if ( v3 && v4 < (int)(this[3] - v3) / 72 )
  {
    v5 = (char *)this[2];
    LOBYTE(v8) = 0;
    result = sub_100E0440((char *)v8, v5, 1, a2);
    this[2] = v5 + 72;
  }
  else
  {
    v7 = (char *)this[2];
    if ( v3 > (unsigned int)v7 )
      invalid_parameter_noinfo();
    return (char *)sub_100E0B00(this, &v8, this, v7, a2);
  }
  return result;
}
