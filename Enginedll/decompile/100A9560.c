/*
 * func-name: ?SetCaptionTextColor@CREDialog@@QAEXK@Z
 * func-address: 0x100a9560
 * callers: none
 * callees: 0x100a5e50
 */

void __thiscall CREDialog::SetCaptionTextColor(CREDialog *this, unsigned int a2)
{
  REBlendColor *v2; // ecx

  v2 = (CREDialog *)((char *)this + 904);
  *(_DWORD *)v2 = a2;
  REBlendColor::Blend(v2, 0, 10.0, 0.69999999);
}
