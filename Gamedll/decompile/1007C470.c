/*
 * func-name: ?SetMaxNodes@DynamicLasers@@QAEXI@Z_0
 * func-address: 0x1007c470
 * callers: 0x100024e1
 * callees: 0x10006b77, 0x1000c3fb
 */

void __thiscall DynamicLasers::SetMaxNodes(DynamicLasers *this, unsigned int a2)
{
  int v2; // esi
  int v4; // eax
  char *v5; // ecx

  v2 = a2;
  if ( a2 < 2 )
    v2 = 2;
  v4 = *((_DWORD *)this + 65);
  v5 = (char *)this + 256;
  if ( v4 )
    v4 = (*((_DWORD *)this + 66) - v4) / 48;
  if ( v2 != v4 )
  {
    sub_10006B77(v5, v2);
    DynamicLasers::Initialize(this);
  }
}
