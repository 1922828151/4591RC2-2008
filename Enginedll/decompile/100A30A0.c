/*
 * func-name: ?SetBackgroundColors@CREDialog@@QAEXKKKK@Z
 * func-address: 0x100a30a0
 * callers: 0x10069720
 * callees: none
 */

void __thiscall CREDialog::SetBackgroundColors(
        CREDialog *this,
        unsigned int a2,
        unsigned int a3,
        unsigned int a4,
        unsigned int a5)
{
  *((_DWORD *)this + 180) = a2;
  *((_DWORD *)this + 181) = a3;
  *((_DWORD *)this + 182) = a4;
  *((_DWORD *)this + 183) = a5;
}
