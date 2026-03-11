/*
 * func-name: sub_1007EA50
 * func-address: 0x1007ea50
 * callers: 0x100846a0
 * callees: none
 */

int __cdecl sub_1007EA50(int a1)
{
  int result; // eax

  result = a1;
  if ( a1 )
  {
    while ( *(_DWORD *)(result + 356) )
      result = *(_DWORD *)(result + 356);
  }
  return result;
}
