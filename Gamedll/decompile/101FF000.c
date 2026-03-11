/*
 * func-name: sub_101FF000
 * func-address: 0x101ff000
 * callers: 0x1000f8a8
 * callees: 0x10016c93
 */

_DWORD *__thiscall sub_101FF000(int *this, _DWORD *a2, int a3, int a4)
{
  int v5; // edi
  int v6; // esi
  _DWORD *result; // eax

  sub_10016C93(a4 + 84, this[2], a4);
  v5 = this[2];
  v6 = v5 - 84;
  do
  {
    std::string::~string((void *)(v6 + 4));
    v6 += 84;
  }
  while ( v6 != v5 );
  result = a2;
  this[2] -= 84;
  a2[1] = a4;
  *a2 = a3;
  return result;
}
