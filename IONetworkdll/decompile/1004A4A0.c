/*
 * func-name: sub_1004A4A0
 * func-address: 0x1004a4a0
 * callers: 0x10015330
 * callees: none
 */

int __usercall sub_1004A4A0@<eax>(int a1@<edx>, int a2@<ecx>, int a3@<esi>)
{
  int result; // eax
  int v4; // edx
  int v5; // edi

  result = a1 - 8 * ((a2 - a3) >> 3);
  if ( a3 != a2 )
  {
    v4 = a1 - a2;
    do
    {
      v5 = *(_DWORD *)(a2 - 8);
      a2 -= 8;
      *(_DWORD *)(v4 + a2) = v5;
      *(_DWORD *)(v4 + a2 + 4) = *(_DWORD *)(a2 + 4);
    }
    while ( a2 != a3 );
  }
  return result;
}
