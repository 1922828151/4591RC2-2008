/*
 * func-name: ?InitControl@CREDialog@@QAEJPAVCREControl@@@Z
 * func-address: 0x100b3480
 * callers: 0x1006a660, 0x100b3510, 0x100b3670, 0x100b36f0, 0x100b37d0, 0x100b3f50, 0x100c7fa0, 0x100c8100, 0x100c82d0, 0x100cbee0, 0x100cc020, 0x100cc180, 0x100cc300, 0x100cc430, 0x1014a750, 0x10151740, 0x10157340, 0x101573a0
 * callees: 0x100b0350
 */

int __thiscall CREDialog::InitControl(CREDialog *this, struct CREControl *a2)
{
  int v4; // ebx
  _DWORD *v5; // eax
  int (__thiscall *v6)(struct CREControl *); // edx
  int v7; // eax

  if ( !a2 )
    return -2147024809;
  v4 = 0;
  for ( *((_DWORD *)a2 + 29) = *((_DWORD *)this + 192); v4 < *((_DWORD *)this + 195); ++v4 )
  {
    v5 = *(_DWORD **)(*((_DWORD *)this + 194) + 4 * v4);
    if ( *v5 == *((_DWORD *)a2 + 35) )
      CREControl::SetElement(a2, v5[1], (struct CREElement *)(v5 + 2));
  }
  v6 = *(int (__thiscall **)(struct CREControl *))(*(_DWORD *)a2 + 8);
  *((_DWORD *)a2 + 28) = this;
  *((_BYTE *)a2 + 132) = 1;
  v7 = v6(a2);
  return v7 >= 0 ? 0 : v7;
}
