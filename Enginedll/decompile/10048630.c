/*
 * func-name: sub_10048630
 * func-address: 0x10048630
 * callers: none
 * callees: 0x100477a0, 0x100490f0, 0x100e6830
 */

char __thiscall sub_10048630(_DWORD *this, char a2, int a3, int a4, int a5, int a6, int a7, int a8, int a9)
{
  int v10; // eax
  unsigned int i; // edi
  int v13; // ecx

  this[45] = a9;
  v10 = std::string::c_str(&a2);
  if ( sub_100477A0((int)this, v10, 0) )
  {
    XMLSystem::Destroy((XMLSystem *)(this + 21));
    this[44] = 0;
    this[45] = 0;
    std::string::operator=(this + 14, "(None)");
    for ( i = 0; ; ++i )
    {
      v13 = this[8];
      if ( !v13 || i >= (this[9] - v13) >> 2 )
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
