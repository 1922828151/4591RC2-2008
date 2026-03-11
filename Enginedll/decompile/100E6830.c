/*
 * func-name: ?Release@Material@@QAEKXZ
 * func-address: 0x100e6830
 * callers: 0x10003a50, 0x100085f0, 0x10008c60, 0x1003a4c0, 0x1003b120, 0x1003d0f0, 0x10040990, 0x10042bf0, 0x100481a0, 0x10048630, 0x10056620, 0x1008bd00, 0x1008beb0, 0x1008e470, 0x10105210, 0x1010a130, 0x1010d330, 0x1012fc10, 0x10138500, 0x1013db50, 0x1013e1c0, 0x10168a40
 * callees: 0x100e3ef0, 0x100e4420, 0x101a2500
 */

unsigned int __thiscall Material::Release(Material *this)
{
  struct MaterialManager *v3; // eax

  if ( *((_DWORD *)this + 80) == 1 )
  {
    Material::~Material(this);
    operator delete(this);
    return 0;
  }
  else
  {
    v3 = MaterialManager::Instance();
    --*((_DWORD *)v3 + 9);
    return --*((_DWORD *)this + 80);
  }
}
