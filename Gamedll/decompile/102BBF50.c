/*
 * func-name: sub_102BBF50
 * func-address: 0x102bbf50
 * callers: 0x100027cf
 * callees: none
 */

_DWORD *__cdecl sub_102BBF50(int a1, int a2, _DWORD *a3)
{
  int v3; // esi
  _DWORD *v4; // edi
  int v5; // eax

  v3 = a2;
  if ( a1 == a2 )
    return a3;
  v4 = a3;
  do
  {
    v5 = *(_DWORD *)(v3 - 36);
    v3 -= 36;
    v4 -= 9;
    *v4 = v5;
    std::string::operator=(v4 + 1, v3 + 4);
    v4[8] = *(_DWORD *)(v3 + 32);
  }
  while ( v3 != a1 );
  return v4;
}
