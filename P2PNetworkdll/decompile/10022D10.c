/*
 * func-name: sub_10022D10
 * func-address: 0x10022d10
 * callers: 0x10022d40
 * callees: none
 */

int __fastcall sub_10022D10(int a1, unsigned __int8 *a2)
{
  unsigned __int8 v2; // cl
  int result; // eax
  int v4; // esi
  int v5; // eax

  v2 = *a2;
  for ( result = 0; v2; result = v4 + v5 )
  {
    v4 = 33 * result;
    v5 = v2;
    v2 = *++a2;
  }
  return result;
}
