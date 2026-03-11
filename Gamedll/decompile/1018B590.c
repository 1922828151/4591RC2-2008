/*
 * func-name: sub_1018B590
 * func-address: 0x1018b590
 * callers: 0x100019fb
 * callees: 0x100041f1, 0x10013304
 */

int __thiscall sub_1018B590(_DWORD *this, void *a2)
{
  unsigned int v3; // edi
  unsigned int v4; // ecx
  int v5; // edi
  int result; // eax
  unsigned int v7; // ebx
  int v8; // [esp+8h] [ebp-8h] BYREF

  v3 = this[1];
  if ( v3 )
    v4 = (int)(this[2] - v3) / 84;
  else
    v4 = 0;
  if ( v3 && v4 < (int)(this[3] - v3) / 84 )
  {
    v5 = this[2];
    LOBYTE(v8) = 0;
    result = sub_100041F1(v5, 1, a2);
    this[2] = v5 + 84;
  }
  else
  {
    v7 = this[2];
    if ( v3 > v7 )
      _invalid_parameter_noinfo();
    return sub_10013304((int)&v8, (int)this, v7, (int)a2);
  }
  return result;
}
