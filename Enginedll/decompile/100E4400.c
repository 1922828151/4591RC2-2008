/*
 * func-name: ?AddRef@Material@@QAEXXZ
 * func-address: 0x100e4400
 * callers: 0x10003a50, 0x1003a4c0, 0x10040990, 0x10042bf0, 0x10085e90, 0x10086a00, 0x1008e470, 0x100eaad0, 0x1011b870, 0x1011d270, 0x10138500, 0x101658e0, 0x10166120, 0x10168a40
 * callees: 0x100e3ef0
 */

void __thiscall Material::AddRef(Material *this)
{
  struct MaterialManager *v1; // eax

  ++*((_DWORD *)this + 80);
  v1 = MaterialManager::Instance();
  ++*((_DWORD *)v1 + 9);
}
