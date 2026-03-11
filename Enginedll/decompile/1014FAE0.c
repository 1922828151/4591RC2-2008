/*
 * func-name: sub_1014FAE0
 * func-address: 0x1014fae0
 * callers: 0x1014fe10, 0x1014ff20, 0x10152b30, 0x10153240, 0x10153480, 0x10155d30
 * callees: 0x101a2500
 */

void __thiscall sub_1014FAE0(_DWORD *this)
{
  void *v2; // eax

  v2 = (void *)this[1];
  if ( v2 )
  {
    operator delete(v2);
    this[1] = 0;
  }
  std::wstring::~wstring(this + 19);
  std::wstring::~wstring(this + 7);
}
