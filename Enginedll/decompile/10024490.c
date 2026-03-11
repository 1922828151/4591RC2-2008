/*
 * func-name: ??4SkinWeights@Mesh@@QAEAAU01@ABU01@@Z
 * func-address: 0x10024490
 * callers: none
 * callees: 0x100220e0, 0x100228a0
 */

int __thiscall Mesh::SkinWeights::operator=(int this, int a2)
{
  std::string::operator=(this, a2);
  sub_100220E0(this + 28, a2 + 28);
  sub_100228A0(this + 44, a2 + 44);
  qmemcpy((void *)(this + 60), (const void *)(a2 + 60), 0x40u);
  return this;
}
