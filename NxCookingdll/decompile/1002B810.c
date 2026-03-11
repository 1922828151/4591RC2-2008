/*
 * func-name: sub_1002B810
 * func-address: 0x1002b810
 * callers: 0x100242e0
 * callees: 0x100162c0, 0x10024570, 0x1002b280
 */

char __thiscall sub_1002B810(_DWORD *this, int a2)
{
  char v4; // [esp+8h] [ebp-4h]

  v4 = NxPlatformMismatch((int)this);
  if ( !sub_100162C0(83, 85, 80, 77, 0, v4, a2) || !sub_1002B280(this, a2) )
    return 0;
  (*(void (__thiscall **)(int, _DWORD, _DWORD))(*(_DWORD *)a2 + 48))(
    a2,
    *(_DWORD *)(this[2] + 24),
    *(_DWORD *)(this[2] + 8));
  (*(void (__thiscall **)(int, _DWORD, _DWORD))(*(_DWORD *)a2 + 48))(
    a2,
    *(_DWORD *)(this[2] + 28),
    *(_DWORD *)(this[2] + 8));
  return 1;
}
