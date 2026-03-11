/*
 * func-name: sub_100246C0
 * func-address: 0x100246c0
 * callers: 0x10028fa0, 0x100290f0, 0x1004f1c0, 0x100df380
 * callees: 0x1000b7e0
 */

_DWORD *__thiscall sub_100246C0(int *this, _DWORD *a2, int a3, int a4)
{
  int v5; // edi
  int v6; // esi
  _DWORD *result; // eax

  sub_1000B7E0(a4 + 28, this[2], a4);
  v5 = this[2];
  v6 = v5 - 28;
  do
  {
    std::string::~string(v6);
    v6 += 28;
  }
  while ( v6 != v5 );
  result = a2;
  this[2] -= 28;
  a2[1] = a4;
  *a2 = a3;
  return result;
}
