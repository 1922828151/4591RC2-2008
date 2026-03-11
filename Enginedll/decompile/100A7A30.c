/*
 * func-name: ?SendMessageW@CTYDialog@@QAEXHHPAVCREControl@@IJ@Z
 * func-address: 0x100a7a30
 * callers: none
 * callees: none
 */

void __thiscall CTYDialog::SendMessageW(
        CTYDialog *this,
        int a2,
        int a3,
        struct CREControl *a4,
        unsigned int a5,
        int a6)
{
  void (__stdcall *v6)(CTYDialog *, int, int, struct CREControl *, unsigned int, int); // eax

  v6 = (void (__stdcall *)(CTYDialog *, int, int, struct CREControl *, unsigned int, int))*((_DWORD *)this + 184);
  if ( v6 )
    v6(this, a2, a3, a4, a5, a6);
}
