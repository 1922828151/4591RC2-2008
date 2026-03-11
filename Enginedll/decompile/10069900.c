/*
 * func-name: ?SetCallback@CREDialog@@QAEXP6GXPAV1@IHPAVCREControl@@IJ@Z@Z
 * func-address: 0x10069900
 * callers: none
 * callees: none
 */

void __thiscall CREDialog::SetCallback(
        CREDialog *this,
        void (__stdcall *a2)(struct CREDialog *, unsigned int, int, struct CREControl *, unsigned int, int))
{
  *((_DWORD *)this + 184) = a2;
}
