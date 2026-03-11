/*
 * func-name: ?Initialize@ClothSimulator@@QAEXXZ
 * func-address: 0x10076e80
 * callers: none
 * callees: 0x10076980, 0x100769d0, 0x10135600, 0x101a2534
 */

void __thiscall ClothSimulator::Initialize(ClothSimulator *this)
{
  void *v2; // eax
  int v3; // eax

  v2 = operator new(0x1Cu);
  if ( v2 )
    v3 = sub_10135600(v2);
  else
    v3 = 0;
  *((_DWORD *)this + 8) = v3;
  ClothSimulator::AddCloth(this, 0);
  dword_10284F14 = (int)ClothSimulator::AddSphere(this);
}
