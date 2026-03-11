/*
 * func-name: sub_102B5510
 * func-address: 0x102b5510
 * callers: 0x100016ef
 * callees: 0x10007914
 */

_DWORD *__thiscall sub_102B5510(int *this, _DWORD *a2, int a3, int a4)
{
  char *v5; // edi
  char *v6; // esi
  _DWORD *result; // eax

  sub_10007914(a4 + 28, this[2], a4);
  v5 = (char *)this[2];
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
