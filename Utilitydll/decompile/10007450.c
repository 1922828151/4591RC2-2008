/*
 * func-name: sub_10007450
 * func-address: 0x10007450
 * callers: 0x100036a0, 0x10003910, 0x10003d90, 0x10003e80, 0x10006610, 0x1000ada0
 * callees: 0x10008a40, 0x10018cf2
 */

void __usercall sub_10007450(char a1@<cl>, int a2@<esi>)
{
  if ( *(_DWORD *)(a2 + 4) )
  {
    sub_10008A40(a1);
    operator delete(*(void **)(a2 + 4));
  }
  *(_DWORD *)(a2 + 4) = 0;
  *(_DWORD *)(a2 + 8) = 0;
  *(_DWORD *)(a2 + 12) = 0;
}
