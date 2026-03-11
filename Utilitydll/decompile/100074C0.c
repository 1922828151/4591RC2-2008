/*
 * func-name: sub_100074C0
 * func-address: 0x100074c0
 * callers: 0x10005380, 0x10005480, 0x10009740, 0x1000a930, 0x1000aa00, 0x1000aca0, 0x1000af80, 0x1000c760, 0x1000c850
 * callees: none
 */

void __usercall sub_100074C0(int a1@<eax>)
{
  if ( *(_DWORD *)(a1 + 4) != -1 )
  {
    *(_DWORD *)(a1 + 4) = -1;
    LeaveCriticalSection(*(LPCRITICAL_SECTION *)a1);
  }
}
