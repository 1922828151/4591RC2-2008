/*
 * func-name: sub_10001FF0
 * func-address: 0x10001ff0
 * callers: 0x100020d0, 0x10002f00
 * callees: 0x10001830, 0x10001f60
 */

bool __thiscall sub_10001FF0(_DWORD *this, int a2)
{
  float *v2; // edi
  bool result; // al

  v2 = (float *)a2;
  a2 = *(int *)a2;
  result = sub_10001830(this, (int)&a2, 4u) == 4
        && (a2 = *((int *)v2 + 1), sub_10001830(this, (int)&a2, 4u) == 4)
        && (a2 = *((int *)v2 + 2), sub_10001830(this, (int)&a2, 4u) == 4)
        && (a2 = *((int *)v2 + 3), sub_10001830(this, (int)&a2, 4u) == 4)
        && sub_10001F60(this, COERCE_INT(v2[4]))
        && sub_10001F60(this, COERCE_INT(v2[5]))
        && sub_10001F60(this, COERCE_INT(v2[6]))
        && sub_10001F60(this, COERCE_INT(v2[7]))
        && sub_10001F60(this, COERCE_INT(v2[8]));
  return result;
}
