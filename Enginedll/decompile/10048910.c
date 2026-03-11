/*
 * func-name: sub_10048910
 * func-address: 0x10048910
 * callers: none
 * callees: 0x10048730, 0x100490f0
 */

char __thiscall sub_10048910(_DWORD *this, char a2, int a3, int a4, int a5, int a6, int a7, int a8, int a9)
{
  _DWORD *v10; // edi
  int v11; // eax

  v10 = this + 11;
  std::string::operator=(this + 11, &a2);
  this[41] = a9;
  v11 = std::string::c_str(&a2);
  if ( sub_10048730((int)this, v11) )
  {
    XMLSystem::Destroy((XMLSystem *)(this + 18));
    std::string::operator=(v10, "(None)");
    std::string::~string(&a2);
    return 1;
  }
  else
  {
    std::string::~string(&a2);
    return 0;
  }
}
