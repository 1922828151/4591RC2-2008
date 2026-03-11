/*
 * func-name: ??4CPasswordInputUI@@QAEAAV0@ABV0@@Z_0
 * func-address: 0x101caae0
 * callers: 0x1001a79e
 * callees: none
 */

int __thiscall CPasswordInputUI::operator=(int this, int a2)
{
  CTYDialog::operator=(a2);
  *(_DWORD *)(this + 3872) = *(_DWORD *)(a2 + 3872);
  *(_BYTE *)(this + 3876) = *(_BYTE *)(a2 + 3876);
  return this;
}
