/*
 * func-name: sub_102A24D0
 * func-address: 0x102a24d0
 * callers: 0x1000fdee
 * callees: none
 */

int __thiscall sub_102A24D0(CTYDialog *this, float a2)
{
  CTYDialog::CenterDialog(this, 1, 1);
  return CTYDialog::OnRender(this, a2);
}
