/*
 * func-name: ??4Gizmo@@QAEAAV0@ABV0@@Z
 * func-address: 0x1000b110
 * callers: 0x100154c0
 * callees: none
 */

_DWORD *__thiscall Gizmo::operator=(_DWORD *this, _DWORD *a2)
{
  _DWORD *result; // eax

  result = this;
  *this = *a2;
  this[1] = a2[1];
  this[2] = a2[2];
  this[3] = a2[3];
  this[4] = a2[4];
  this[5] = a2[5];
  this[6] = a2[6];
  this[7] = a2[7];
  this[8] = a2[8];
  this[9] = a2[9];
  this[10] = a2[10];
  this[11] = a2[11];
  qmemcpy(this + 12, a2 + 12, 0x40u);
  qmemcpy(this + 28, a2 + 28, 0x4Cu);
  qmemcpy(this + 47, a2 + 47, 0x40u);
  qmemcpy(this + 63, a2 + 63, 0x6Au);
  this[90] = a2[90];
  qmemcpy(this + 92, a2 + 92, 0x180u);
  qmemcpy(this + 188, a2 + 188, 0x71u);
  qmemcpy(this + 217, a2 + 217, 0x48u);
  return result;
}
