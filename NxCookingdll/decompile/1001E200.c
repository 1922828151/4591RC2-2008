/*
 * func-name: sub_1001E200
 * func-address: 0x1001e200
 * callers: 0x10023790
 * callees: 0x10021fa0
 */

char __thiscall sub_1001E200(_DWORD *this, int a2, int a3, int a4, int a5)
{
  char result; // al

  result = sub_10021FA0(a2, a3, a4, a5);
  if ( result )
  {
    *(_DWORD *)(this[3] + 108) = **(_DWORD **)(*(_DWORD *)(this[3] + 80) + 4);
    *(_DWORD *)(this[3] + 112) = **(_DWORD **)(*(_DWORD *)(this[3] + 80) + 4);
    *(_DWORD *)(this[3] + 116) = **(_DWORD **)(*(_DWORD *)(this[3] + 80) + 4);
    *(_DWORD *)(this[3] + 120) = **(_DWORD **)(*(_DWORD *)(this[3] + 80) + 4);
    *(_DWORD *)(this[3] + 124) = **(_DWORD **)(*(_DWORD *)(this[3] + 80) + 4);
    *(_DWORD *)(this[3] + 128) = **(_DWORD **)(*(_DWORD *)(this[3] + 80) + 4);
    return 1;
  }
  return result;
}
