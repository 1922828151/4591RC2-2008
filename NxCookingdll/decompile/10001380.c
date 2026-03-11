/*
 * func-name: sub_10001380
 * func-address: 0x10001380
 * callers: none
 * callees: none
 */

char *__thiscall sub_10001380(_DWORD *this, char a2)
{
  char *v2; // esi

  v2 = (char *)(this - 6);
  sub_10001320(this - 6);
  if ( (a2 & 1) != 0 )
    (*(void (__thiscall **)(int, char *))(*(_DWORD *)dword_100580A0 + 20))(dword_100580A0, v2);
  return v2;
}
