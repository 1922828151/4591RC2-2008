/*
 * func-name: sub_102BCA90
 * func-address: 0x102bca90
 * callers: 0x10009773
 * callees: 0x1000b5a5
 */

_DWORD *__thiscall sub_102BCA90(int *this, _DWORD *a2, int a3, int a4)
{
  int v5; // edi
  int v6; // esi
  _DWORD *result; // eax

  sub_1000B5A5(a4 + 40, this[2], a4);
  v5 = this[2];
  v6 = v5 - 40;
  do
  {
    std::string::~string((void *)(v6 + 8));
    v6 += 40;
  }
  while ( v6 != v5 );
  result = a2;
  this[2] -= 40;
  a2[1] = a4;
  *a2 = a3;
  return result;
}
