/*
 * func-name: sub_1003B120
 * func-address: 0x1003b120
 * callers: none
 * callees: 0x1003af90, 0x100490f0, 0x100e6830
 */

char __thiscall sub_1003B120(
        _DWORD *this,
        char a2,
        _DWORD *a3,
        int a4,
        int a5,
        int a6,
        int a7,
        unsigned int a8,
        int a9)
{
  bool v10; // cf
  _DWORD *v11; // eax
  unsigned int i; // edi
  int v14; // ecx

  v10 = a8 < 0x10;
  this[45] = a9;
  v11 = a3;
  if ( v10 )
    v11 = &a3;
  if ( sub_1003AF90((int)this, (int)v11) )
  {
    XMLSystem::Destroy((XMLSystem *)(this + 21));
    this[44] = 0;
    this[45] = 0;
    std::string::operator=(this + 14, "(None)");
    for ( i = 0; ; ++i )
    {
      v14 = this[8];
      if ( !v14 || i >= (this[9] - v14) >> 2 )
        break;
      Material::Release(*(Material **)(this[8] + 4 * i));
    }
    std::string::~string(&a2);
    return 1;
  }
  else
  {
    std::string::~string(&a2);
    return 0;
  }
}
