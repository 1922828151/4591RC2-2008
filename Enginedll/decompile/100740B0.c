/*
 * func-name: ??4CPicCheckBox@@QAEAAV0@ABV0@@Z
 * func-address: 0x100740b0
 * callers: 0x10074150
 * callees: 0x10071c60
 */

int __thiscall CPicCheckBox::operator=(int this, int a2)
{
  CRECheckBox::operator=(this, a2);
  *(_DWORD *)(this + 852) = *(_DWORD *)(a2 + 852);
  *(_DWORD *)(this + 856) = *(_DWORD *)(a2 + 856);
  *(_DWORD *)(this + 860) = *(_DWORD *)(a2 + 860);
  *(_DWORD *)(this + 864) = *(_DWORD *)(a2 + 864);
  *(_DWORD *)(this + 868) = *(_DWORD *)(a2 + 868);
  *(_DWORD *)(this + 872) = *(_DWORD *)(a2 + 872);
  *(_DWORD *)(this + 876) = *(_DWORD *)(a2 + 876);
  *(_BYTE *)(this + 880) = *(_BYTE *)(a2 + 880);
  return this;
}
