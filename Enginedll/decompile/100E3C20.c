/*
 * func-name: ?RefreshSimple@Material@@QAEXXZ
 * func-address: 0x100e3c20
 * callers: 0x1001c290
 * callees: none
 */

// attributes: thunk
void __thiscall Material::RefreshSimple(Material *this)
{
  Material::ReloadTechniques(this);
}
