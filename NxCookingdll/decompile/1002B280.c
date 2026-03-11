/*
 * func-name: sub_1002B280
 * func-address: 0x1002b280
 * callers: 0x1002b810
 * callees: 0x100160e0, 0x100162c0, 0x10024570
 */

char __thiscall sub_1002B280(_DWORD *this, int a2)
{
  char v3; // bl
  char result; // al

  v3 = NxPlatformMismatch((int)this);
  result = sub_100162C0(71, 65, 85, 83, 0, v3, a2);
  if ( result )
  {
    sub_100160E0(*(_DWORD *)(this[1] + 4), v3, a2);
    sub_100160E0(*(_DWORD *)(this[1] + 8), v3, a2);
    return 1;
  }
  return result;
}
