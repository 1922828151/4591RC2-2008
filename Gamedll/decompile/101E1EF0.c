/*
 * func-name: sub_101E1EF0
 * func-address: 0x101e1ef0
 * callers: 0x10002374
 * callees: 0x1001759e
 */

int __thiscall sub_101E1EF0(_DWORD *this, int a2, int a3)
{
  int v3; // eax
  _DWORD *v4; // ecx
  int v5; // eax

  if ( a3 >= 0 && (v3 = this[57], v4 = this + 56, v3) && a3 < (unsigned int)((v4[2] - v3) / 28) )
  {
    v5 = sub_1001759E(a3);
    Precacher::GetText(a2, v5);
    return a2;
  }
  else
  {
    std::wstring::wstring(a2);
    return a2;
  }
}
