/*
 * func-name: sub_10252E40
 * func-address: 0x10252e40
 * callers: 0x1000f321
 * callees: 0x10010d3e
 */

_DWORD *__thiscall sub_10252E40(int *this, _DWORD *a2, int a3, int a4)
{
  int v5; // edi
  int v6; // esi
  _DWORD *result; // eax

  sub_10010D3E(a4 + 56, this[2], a4);
  v5 = this[2];
  v6 = v5 - 56;
  do
  {
    std::wstring::~wstring((void *)(v6 + 4));
    v6 += 56;
  }
  while ( v6 != v5 );
  result = a2;
  this[2] -= 56;
  a2[1] = a4;
  *a2 = a3;
  return result;
}
