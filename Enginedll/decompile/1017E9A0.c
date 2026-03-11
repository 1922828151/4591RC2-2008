/*
 * func-name: sub_1017E9A0
 * func-address: 0x1017e9a0
 * callers: 0x1017e0a0
 * callees: none
 */

int __thiscall sub_1017E9A0(_DWORD *this)
{
  int result; // eax
  int v3; // edi
  int v4; // esi

  result = this[1];
  if ( result )
  {
    v3 = this[2];
    result = (v3 - result) / 28;
    if ( result )
    {
      v4 = v3 - 28;
      do
      {
        result = std::string::~string(v4);
        v4 += 28;
      }
      while ( v4 != v3 );
      this[2] -= 28;
    }
  }
  return result;
}
