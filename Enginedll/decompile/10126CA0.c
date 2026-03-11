/*
 * func-name: sub_10126CA0
 * func-address: 0x10126ca0
 * callers: 0x10123eb0
 * callees: 0x1001ca30
 */

_DWORD *__thiscall sub_10126CA0(int *this, _DWORD *a2, int a3, int a4)
{
  int v5; // edi
  int v6; // esi
  _DWORD *result; // eax

  sub_1001CA30(a4 + 32, this[2], a4);
  v5 = this[2];
  v6 = v5 - 32;
  do
  {
    std::string::~string(v6);
    v6 += 32;
  }
  while ( v6 != v5 );
  result = a2;
  this[2] -= 32;
  a2[1] = a4;
  *a2 = a3;
  return result;
}
