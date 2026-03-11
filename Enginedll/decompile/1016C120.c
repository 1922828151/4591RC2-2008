/*
 * func-name: sub_1016C120
 * func-address: 0x1016c120
 * callers: 0x1016c190, 0x1016c260, 0x1016c4c0
 * callees: 0x1000cb70, 0x101a2500
 */

void __thiscall sub_1016C120(void ***this)
{
  void **v2; // edi

  v2 = *this;
  if ( *this )
  {
    Texture::~Texture(v2);
    operator delete(v2);
  }
  std::wstring::~wstring(this + 11);
  std::wstring::~wstring(this + 4);
}
