/*
 * func-name: ?SendEvent@CREDialog@@QAEXI_NPAVCREControl@@IJ@Z
 * func-address: 0x100a2ff0
 * callers: 0x1006a080, 0x1014ffb0, 0x10153480
 * callees: none
 */

void __thiscall CREDialog::SendEvent(
        CREDialog *this,
        unsigned int a2,
        bool a3,
        struct CREControl *a4,
        unsigned int a5,
        int a6)
{
  void (__stdcall *v6)(CREDialog *, unsigned int, int, struct CREControl *, unsigned int, int); // esi
  int v7; // eax

  v6 = (void (__stdcall *)(CREDialog *, unsigned int, int, struct CREControl *, unsigned int, int))*((_DWORD *)this + 184);
  if ( v6 && (a3 || *((_BYTE *)this + 84)) )
  {
    if ( a4 )
      v7 = *((_DWORD *)a4 + 34);
    else
      v7 = 0;
    v6(this, a2, v7, a4, a5, a6);
  }
}
