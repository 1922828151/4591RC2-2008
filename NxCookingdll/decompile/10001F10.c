/*
 * func-name: sub_10001F10
 * func-address: 0x10001f10
 * callers: 0x10002630
 * callees: 0x100016f0, 0x10001ec0
 */

bool __thiscall sub_10001F10(_DWORD *this, float *a2)
{
  bool result; // al

  result = sub_100016F0(this, 12);
  if ( result )
    return sub_10001EC0(this, a2) && sub_10001EC0(this, a2 + 1) && sub_10001EC0(this, a2 + 2) != 0;
  return result;
}
